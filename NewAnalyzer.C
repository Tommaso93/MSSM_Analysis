
#define NewAnalyzer_cxx
#include "NewAnalyzer.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <set>
#include <fstream>
#include <iostream>
#include "TTree.h"
#include "TString.h"
#include <TLorentzVector.h>
#include <TMath.h>

#include "TFile.h"
#include "TChain.h"
#include "TH1.h"
#include "TH3.h"
#include "TH2F.h"
#include "TF1.h"
#include "TF2.h"
#include "TProfile.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TStyle.h"
#include "TPaveStats.h"
#include "TAxis.h"
#include "TMath.h"
#include <sys/stat.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <cmath> 
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include "TGraphAsymmErrors.h"
#include "TGraphErrors.h"
#include "TVector.h"
#include "TLorentzVector.h"
#include "Math/Interpolator.h"
#include "TRandom3.h"
#include "TRandom.h"
#include "TEfficiency.h"

// // without CMSSW / standalone:
// #include "BTagCalibrationStandalone.h"
// #include "BTagCalibrationStandalone.cpp"

// #include "TMVA/Tools.h"
// #include "TMVA/Reader.h"
// #include "TMVA/MethodCuts.h"

// #include "KaMuCa/Calibration/interface/KalmanMuonCalibrator.h"
// #include "GeneralizedEndpoint/Calibration/interface/GeneralizedEndpoint.h"


void NewAnalyzer::Loop()
{
  //   In a ROOT session, you can do:
  //      root> .L NewAnalyzer.C
  //      root> NewAnalyzer t
  //      root> t.GetEntry(12); // Fill t data members with entry number 12
  //      root> t.Show();       // Show values of entry 12
  //      root> t.Show(16);     // Read and show values of entry 16
  //      root> t.Loop();       // Loop on all entries
  //

  //     This is the loop skeleton where:
  //    jentry is the global entry number in the chain
  //    ientry is the entry number in the current Tree
  //  Note that the argument to GetEntry must be:
  //    jentry for TChain::GetEntry
  //    ientry for TTree::GetEntry and TBranch::GetEntry
  //
  //       To read only selected branches, Insert statements like:
  // METHOD1:
  //    fChain->SetBranchStatus("*",0);  // disable all branches
  //    fChain->SetBranchStatus("branchname",1);  // activate branchname
  // METHOD2: replace line
  //    fChain->GetEntry(jentry);       //read all branches
  //by  b_branchname->GetEntry(ientry); //read only this branch
  if (fChain == 0) return;


  Long64_t nentries = fChain->GetEntriesFast();

  Long64_t nbytes = 0, nb = 0;

  Long64_t mydummy=0;

  float letti = 0, metfiltrati = 0, preselezionati = 0, accettati = 0,  muoni = 0, dimuoni = 0, dimuonisel = 0;
  float muoniID = 0, muoniISO = 0; //, tighthp = 0;
  float Min_pt_btagjet=20.; 
  float Max_eta_btagjet=2.4; 
  float Max_eta_jet=4.7;
  float Btag_disc_cut = 0.8484;
  
  Double_t lumidataTot = 35858.5;
  Double_t lumidataB = 5780.499, lumidataC = 2573.399, lumidataD = 4248.384, lumidataE = 4008.376, lumidataF = 3101.618; //uguale
  Double_t lumidataG = 7540.488, lumidataHv3 = 215.149, lumidataHv2 =  8390.54;
  Double_t lumi_BF_GH = lumidataB/lumidataTot;
  
  // std::cout<< "N entries = " << nentries << std::endl;

  ///////////////////////////////////////////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////core analysis/////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////////////////////////////////////
  for (Long64_t jentry=0; jentry<nentries;jentry++) {  
    mydummy=mydummy+1;

    //tree variables
    MassCat1    = 0;
    MassCat2    = 0;
	//jet variables
	Nbjet       = 0;
	Nbjet2      = 0;
	not_bjet    = 0;
	mu_deltar   = 0;
	mu_deltaeta   = 0;
	mu_deltaphi   = 0;
	
	tight_dimuon.SetPtEtaPhiM(0.,0., 0., 0.);
    // std::cout << " start loop " << std::endl;
    //if (!(mydummy%10000)) cout <<" Run number = " << runnumber << " Already processed " << mydummy << " events of " << nentries <<  endl;
  

    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;

   
    //std::cout << "PU weight " <<  PU_Weight << std::endl;        
    if(runnumber != 1) 
      PU_Weight=1.;
     

    
    // ------------------------------------------------------------------------------------------------
    // ------------------------------------------  Muon selection: 
    // ----------------------------------------------------------------------------------------------------
    
     
    float muPDG = 0.105658;
    TString massRanges[11] = {"50","130","160","200","300","400","500", "600", "700","800", "900"};
   
    // ------------------- muon selection

    //   std::cout << " here 5 " << std::endl;
    std::vector<TLorentzVector> gen_muons; 
    TLorentzVector gen_dimuon;
    
    //tight muons are used in MSSM
    std::vector<TLorentzVector> tight_muons;
    std::vector<int>            tight_muons_charge;
    std::vector<bool>           tight_muons_trigger;
      
    //medium muons are used in SM
    std::vector<TLorentzVector> medium_muons;
    std::vector<int>            medium_muons_charge;
    std::vector<bool>           medium_muons_trigger;

    std::vector<TLorentzVector> the_twomuons, tight_twomuons;
	
    std::vector<float> bdisc, bdisc2;
    std::vector<TLorentzVector> jets, jets2;
    Float_t bjet_pt[20];
    Float_t bjet_eta[20];
    std::vector<float> delta_R_bjet_dimuon(20);
    TLorentzVector jet;
	
    //std::cout << "******************************************" << std::endl;
    letti++;
       
    bool goodevent = false;
    bool SM_analysis = false;
    float mother_mass = 0., mother_pt = 0., Higgs_pt_weight = 1.;

    //runnumber = 13;

    ///////////////////////////  GEN LEVEL ////////////////////////////////////////////////////
    // used in MSSM only

    if(runnumber == 1 && SM_analysis == false &&
       (sel_dataset.Contains("bbH")==true  || sel_dataset.Contains("ggH")==true || 
	sel_dataset.Contains("bbh")==true  || sel_dataset.Contains("ggh")==true ||
	sel_dataset.Contains("bbA")==true  || sel_dataset.Contains("ggA")==true)
       ){ 
      
      //std::cout << " Event " << eventNumber << std::endl;
      
      int muplus=0, muminus=0;
      mother_mass = 0.;
      mother_pt = 0.;
      
      for(unsigned i = 0; i<Genp_particleId->size(); i++){
	//std::cout << " Status " << Genp_status->at(i) << " Id " << Genp_particleId->at(i) << " Mother " << Genp_particleId_mother->at(i) << " MASS " << Genp_m_mother->at(i) << std::endl; 
	// if(abs(Genp_particleId->at(i)) == 12 || abs(Genp_particleId->at(i)) == 14 || abs(Genp_particleId->at(i)) == 16)
	//   std::cout << " Status " << Genp_status->at(i) << " Id " << Genp_particleId->at(i) << " Mother " << Genp_particleId_mother->at(i) << " figli? " << Genp_nDaughters->at(i) << " MASS " << Genp_m->at(i) << " Pt " << Genp_pt->at(i) <<std::endl; 
	
	if(Genp_particleId_mother->at(i) == 36 || Genp_particleId_mother->at(i) == 35 || Genp_particleId_mother->at(i) == 25){
	  mother_mass = Genp_m_mother->at(i);
	  mother_pt = Genp_pt_mother->at(i);
	  
       	  continue;
	}

      }
      
      
      histos["hist_mass_gen"]->Fill(mother_mass, PU_Weight);
      
      if(mother_mass< Max_mass && mother_mass> Min_mass)
	goodevent = true;
      //else
      // std::cout << mother_mass << std::endl;
      
    }// end if it is MC. for Data GoodEvent is always true
    else
      goodevent = true;
    //////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////// After passing the gen mass selection ///////////////////////////    
    
    if(goodevent){
      preselezionati++;
     
      //std::cout << "Event num. " << eventNumber << "   Run num " << runnumber << std::endl;
      
      ////////////////////////////////////////////////////////////////////////////////////////
      //////////////////////////////// Apply the MET filters /////////////////////////////////
      if(metfilter == 0)
	continue;
      
      metfiltrati++;

          
      for  (unsigned i=0; i<Mu_isTightMu->size(); i++) {

	///////////////////////////////////////////////////////////////////////////////
	////////////////////////// Reco Acceptance ////////////////////////////////////	
	if(fabs(Mu_eta->at(i))<2.4 && Mu_pt->at(i) > 26.){
	 

	  ///////////////////////////////////////////////////////////////////////////////
	  ////////////////////////// TIGHT ID Selection used for MSSM ///////////////////
		
	  if(Mu_isTightMu->at(i) > 0){
	   	   	  
	    //compute the relative isolation
	    float deltaB = Mu_sumCHPtPFIsoR04->at(i)/Mu_pt->at(i);
	    float deltaB_corrected = Mu_sumNHPtPFIsoR04->at(i) + Mu_sumPhoEtPFIsoR04->at(i) - 0.5*Mu_sumPUPtPFIsoR04->at(i);
	    
	    if(deltaB_corrected <0.) deltaB_corrected = deltaB;
	    else if(deltaB_corrected >=0.) deltaB_corrected = deltaB_corrected/Mu_pt->at(i) + deltaB;   
	    
	    //isolation cut
	    if(deltaB_corrected < 0.25){
	     	         
	      TLorentzVector mu;
	      mu.SetPtEtaPhiM(Mu_pt->at(i), Mu_eta->at(i), Mu_phi->at(i), muPDG);
	      tight_muons.push_back(mu);
	      tight_muons_trigger.push_back(Mu_hasTriggeredIso->at(i) || Mu_hasTriggeredIsoTk->at(i));
	      tight_muons_charge.push_back(Mu_charge->at(i));
	      
	    }
	  }//end isTight

	  ///////////////////////////////////////////////////////////////////////////////
	  ////////////////////////// MEDIUM ID Selection used for SM ////////////////////
	
	  if(Mu_isMediumMu->at(i) > 0){

	    
	    TLorentzVector mu;
	    mu.SetPtEtaPhiM(Mu_pt->at(i), Mu_eta->at(i), Mu_phi->at(i), muPDG);
	    medium_muons.push_back(mu);
	    medium_muons_trigger.push_back(Mu_hasTriggeredIso->at(i) || Mu_hasTriggeredIsoTk->at(i));
	    medium_muons_charge.push_back(Mu_charge->at(i));
	  }

	}//end acceptance
      }//end loop over muons
	        
      if(tight_muons.size()<2)
	continue;
      
      //muoni++;  
      muoni += PU_Weight;
      
      histos["eventWeight_PU"]->Fill(PU_Weight);
      
      //select the pairs if there are at least 2 muons
      if(tight_muons.size()>1)
	selectDimuonPair(tight_muons, tight_muons_trigger, tight_muons_charge, tight_twomuons);
      
      if(tight_twomuons.size()<2)
	continue;
      
      //dimuoni++;
      dimuoni += PU_Weight;
      
      if(tight_twomuons.size()>1){
	tight_dimuon = buildDimuonPair(tight_twomuons, 1.,1.);
	
	the_twomuons = tight_twomuons;
      }
      
      histos["eventWeight_PU_Muons"]->Fill(PU_Weight);
     
      //select only pairs above 50 GeV
      if(tight_dimuon.M() > 50.){
	dimuonisel += PU_Weight;	
	//dimuonisel++;
	
	//Loop over Met
      for(int m=0;m<NpfMet;++m){
	My_MEt = Met_pt_pfmet->at(m); 
	//My_MEt_energy = Met_energy_pfmet->at(m);
	//My_MEt_sumet = Met_sumet_pfmet->at(m);
	}
    //Loop over jets
	for(int j=0;j<NpfJets;++j){
		jet.SetPtEtaPhiE(Jet_pt_pfjet->at(j),Jet_eta_pfjet->at(j),Jet_phi_pfjet->at(j),Jet_en_pfjet->at(j));
		//jet cleaning
		if(Jet_pt_pfjet->at(j) > Min_pt_btagjet && fabs(Jet_eta_pfjet->at(j)) < Max_eta_btagjet && Jet_isLoose_pfjet->at(j)){
			jets.push_back(jet);
			bdisc.push_back(Jet_discriminatorCSV_pfjet->at(j));
		}	
		else if(Jet_pt_pfjet->at(j) > Min_pt_btagjet && fabs(Jet_eta_pfjet->at(j)) > Max_eta_btagjet && Jet_isLoose_pfjet->at(j)){
			jets2.push_back(jet);
			bdisc2.push_back(Jet_discriminatorCSV_pfjet->at(j));
		}	
	}	
	CleanJetsFromMuons(jets,bdisc,the_twomuons,0.4);
	CleanJetsFromMuons(jets2,bdisc2,the_twomuons,0.4);
	for(unsigned int i=0;i<jets.size();++i){
		if(bdisc[i] >= Btag_disc_cut){
			Nbjet++;
			delta_R_bjet_dimuon[Nbjet-1] = jets[i].DeltaR(tight_dimuon);
			bjet_pt[Nbjet-1] = jets[i].Pt();
			bjet_eta[Nbjet-1] = jets[i].Eta();
                        bjet_pt0 = bjet_pt[0];
                        bjet_eta0 = bjet_eta[0]; 
		}
		else if(bdisc[i] < Btag_disc_cut) {
			not_bjet++;
		}
	}
	
	for(unsigned int i=0;i<jets2.size();++i){
		if(bdisc2[i] > Btag_disc_cut){
			Nbjet2++;
		}
	}   
	if(Nbjet != 0){
                bjet_pt0 = bjet_pt[0];
                bjet_eta0 = bjet_eta[0];
                delta_R_bjet_dimuon0 = delta_R_bjet_dimuon[0];
		delta_pt_mupair_1bjet = tight_dimuon.Pt() - bjet_pt[0];
		delta_eta_mupair_1bjet = tight_dimuon.Eta() - bjet_eta[0];		
	}
        else if(Nbjet ==0){
                continue;
                //bjet_pt0 = 0;
                //bjet_eta0 = 0;
                //delta_R_bjet_dimuon0 = 0;
                //delta_pt_mupair_1bjet = 0;
                //delta_eta_mupair_1bjet = 0;
        }
 
        //plot dei dimuoni inclusivi prima della categorizzazione
	histos["hist_mass_inclusive"]->Fill(tight_dimuon.M(), PU_Weight);
	histos["hist_p_inclusive"]->Fill(tight_dimuon.P(), PU_Weight);
	histos["hist_pt_inclusive"]->Fill(tight_dimuon.Pt(), PU_Weight);
	histos["hist_pz_inclusive"]->Fill(tight_dimuon.Pz(), PU_Weight);
	histos["hist_eta_inclusive"]->Fill(tight_dimuon.Eta(), PU_Weight);
	histos["hist_phi_inclusive"]->Fill(tight_dimuon.Phi(), PU_Weight);
	jets.clear();
	jets2.clear();
	the_twomuons.clear();
	bdisc.clear();
	bdisc2.clear(); 
        delta_R_bjet_dimuon.clear();
	//categorization	
      }//end mass cut
    } 
	
    signaltree_->Fill();  
    masstree_->Fill();
    
  }//end loop on the events 
  
 
  std::cout <<"read " << letti << std::endl; 
  std::cout <<"3 sigma around the peak " << preselezionati << std::endl; 
  std::cout <<"after met filter " << metfiltrati << std::endl;  
  std::cout <<"acceptance " << accettati << std::endl; 
  std::cout <<"tight and iso muons " << muoni<< std::endl; 
  std::cout <<"trigger and opp.charge " << dimuoni << std::endl; 
  std::cout <<"mass > 50 GeV " << dimuonisel << std::endl; 

  if(preselezionati > 0){
    
    hist_eff->SetBinContent(1, accettati/preselezionati);   //muoni in ACC
    hist_eff->SetBinContent(2, muoniID/accettati);          //muoni in ACCxID
    hist_eff->SetBinContent(3, muoniISO/accettati);         //muoni in ACCxISO
    hist_eff->SetBinContent(4, muoni/accettati);            //muoni in ACCxIDxISO  
    hist_eff->SetBinContent(5, dimuoni/muoni);              //muoni ACCxIDxISOxTRIxCHARGE  
    hist_eff->SetBinContent(6, dimuonisel/dimuoni);         //mass > 50
  }
  else{
    for(int s=1; s< 19; s++)
      hist_eff->SetBinContent(s, 0.);

    for(int s=1; s< 19; s++)
      hist_jetacc->SetBinContent(s, 0.);
  }

}//end analyzer

void NewAnalyzer::BookHistos() {// here is where to book histos -> Function called by Init

  // ============================================================
  //---------------------  Gianni's tree  -----------------------
  // ============================================================
  TString treename;
  
  if(sel_dataset.Contains("bbH")==true  || sel_dataset.Contains("ggH")==true || 
	sel_dataset.Contains("bbh")==true  || sel_dataset.Contains("ggh")==true ||
	sel_dataset.Contains("bbA")==true  || sel_dataset.Contains("ggA")==true)
       {
		   treename = "signal_" + sel_dataset + "tree";
       }
  else {
   treename = "bkg_" + sel_dataset + "tree";  	
  }
  masstree_ = new TTree("MassTree", "Invariant mass of all the events");
  signaltree_ = new TTree(treename, "variables"); 
  masstree_->Branch("MassCat1",&MassCat1, "MassCat1/F");
  masstree_->Branch("MassCat2",&MassCat2, "MassCat2/F");

  masstree1_ = new TTree("MassTree1", "Invariant mass of cat1 events");
  masstree1_->Branch("MassCat1",&MassCat1, "MassCat1/F");
 
  masstree2_ = new TTree("MassTree2", "Invariant mass of cat2 events");
  masstree2_->Branch("MassCat2",&MassCat2, "MassCat2/F");

  signaltree_->Branch("tight_dimuon","TLorentzVector",&tight_dimuon);
  signaltree_->Branch("dimuon_deltar",&mu_deltar,"mu_deltar/F");
  signaltree_->Branch("dimuon_deltaphi",&mu_deltaphi,"mu_deltaphi/F");
  signaltree_->Branch("dimuon_deltaeta",&mu_deltaeta,"mu_deltaeta/F");  
  signaltree_->Branch("PU_Weight",&PU_Weight);
  signaltree_->Branch("Met_Pt",&My_MEt);
//  signaltree_->Branch("Met_phi",&My_MEt_phi);
//  signaltree_->Branch("Met_eta",&My_MEt_eta);
//  signaltree_->Branch("Met_energy",&My_MEt_energy);
//  signaltree_->Branch("Met_sumet",&My_MEt_sumet);
  signaltree_->Branch("btag_jet",&Nbjet,"Nbjet/I");
  signaltree_->Branch("no_btag_jet",&not_bjet,"not_bjet/I");  
  signaltree_->Branch("bjet_pt",&bjet_pt0,"bjet_pt0/F");
  signaltree_->Branch("bjet_eta",&bjet_eta0,"bjet_eta0/F");
  signaltree_->Branch("btag_jet_over2.4",&Nbjet2,"Nbjet2/I");
  signaltree_->Branch("delta_R_bjet_dimuon",&delta_R_bjet_dimuon0,"delta_R_bjet_dimuon0/F");
  signaltree_->Branch("delta_pt_mupair_1bjet",&delta_pt_mupair_1bjet,"delta_pt_mupair_1bjet/F");  
  signaltree_->Branch("delta_eta_mupair_1bjet",&delta_eta_mupair_1bjet,"delta_eta_mupair_1bjet/F");  
  
  
  
  
         


   
  // ============================================================
  //---------------------  histograms ---------------------------
  // ============================================================
  std::cout << "Booking Histograms" << std::endl;
  TH1::SetDefaultSumw2(kTRUE);
 
  const Int_t PtBINS = 29;
  Double_t PtEDGES[PtBINS + 1] = { 10., 15., 20., 25., 30., 35., 40., 45., 50., 55., 60., 65., 70., 75., 100., 125., 150., 175., 200., 225., 250., 275., 300., 350., 400., 450., 500., 600., 700.,1000.};
 
  const Int_t EtapBINS = 9;
  Double_t EtapEDGES[EtapBINS + 1] = {0, 0.2, 0.3, 0.6, 0.9, 1.2, 1.5, 1.8, 2.1, 2.4};

  const Int_t EtaBINS = 18;
  Double_t EtaEDGES[EtaBINS + 1] = {-2.4, -2.1, -1.8, -1.5, -1.2, -0.9, -0.6, -0.3, -0.2, 0, 0.2, 0.3, 0.6, 0.9, 1.2, 1.5, 1.8, 2.1, 2.4};
  TString etaRanges[4] = {"","barrel","barrel09","endcap"};
  
  // const Int_t MassBINS = 13;
  // Double_t MassEDGES[MassBINS + 1] = {50.,55.,60.,65.,70., 100., 130., 160., 200., 250., 300., 400., 600., 800.,1000., 1500., 2000., 3000.};
  TString massRanges[12] = {"50","130","160","200","300","400","500", "600", "700","800", "900","1000"};
    
  const Int_t PVBINS = 11; //merging of the last 2 bins
  Double_t PVEDGES[PVBINS + 1] = { 0.,10.,15.,17.,19.,21.,23.,25.,30.,40.,50., 60.};

  TString cat[9] = {"gen", "inclusive", "cat1", "cat2", "hp", "genHP", "genALL","cat1_beforeMet","cat2_beforeMet"};

  hist_eff        = new TH1F("hist_eff","Efficiency for cuts ; cuts; eff",19,0.,19.);
  hist_jetacc     = new TH1F("hist_jetacc","b quark and jets Acceptance ; cuts; eff",19,0.,19.);
  Minv_Cat1       = new TH1F("Minv_Cat1", "Dimuon mass cat1(b jets); mass (GeV/c^{2}); Events", 20000, 0, 2000);
  Minv_Cat2       = new TH1F("Minv_Cat2", "Dimuon mass cat2(no b jets); mass (GeV/c^{2}); Events", 20000, 0, 2000); 
  
  hist_trueMet    = new TH1F("hist_trueMet","True MET; mass; MET",40,0.,200.);
  histHP_trueMet  = new TH1F("histHP_trueMet","True MET for events passing HP and not Tight; mass; MET",40,0.,200.);     

  hist_prefiring  = new TH1F("hist_prefiring","SF for High-pt muons; SF; Fraction of Events",200,0.,2.); 
  hist_bjet_pt_inclusive = new TH1F("hist_bjet_pt_inclusive","Pt of all the btagged jets; p_{T} (GeV); Events",100,0.,500.);

  
    
  for(int m =0; m<12; m++){   
    if(m<2){
      TString histoName = "hist_lm_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of leading muon for  mass > "+massRanges[m]+" GeV ; p_{T} (GeV); muons",500,0.,1000.);
      histoName = "hist_sm_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of subleading muon for  mass > "+massRanges[m]+" GeV ; p_{T} (GeV); muons",500,0.,1000.);
      
      histoName = "hist_lm_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of leadindg muon for  mass > "+massRanges[m]+" GeV ; #eta; muons",EtaBINS,EtaEDGES);
      
      histoName = "hist_sm_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of subleadindg muon for mass > "+massRanges[m]+" GeV ; #eta; muons",EtaBINS,EtaEDGES);
      
      histoName = "hist_bjet_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of leading b-jets for mass > "+massRanges[m]+" GeV ; p_{T} (GeV); jets",200,0.,1000.);

      histoName = "hist_sbjet_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of subleading b-jets for mass > "+massRanges[m]+" GeV ; p_{T} (GeV); jets",200,0.,1000.);
      
      histoName = "hist_ljet_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of light-jets for mass > "+massRanges[m]+" GeV ; p_{T} (GeV); jets",200,0.,1000.);
      
      histoName = "hist_bjet_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of leading b-jets for mass > "+massRanges[m]+" GeV ; #eta; jets",EtaBINS,EtaEDGES);

      histoName = "hist_sbjet_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of subleading b-jets for mass > "+massRanges[m]+" GeV ; #eta; jets",EtaBINS,EtaEDGES);
      
      histoName = "hist_ljet_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of light-jets for mass > "+massRanges[m]+" GeV ; #eta; jets",EtaBINS,EtaEDGES);
      
      histoName = "hist_Dphi_bjetDimuon_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#Delta #Phi(bJet-Dimuon) for mass > "+massRanges[m]+" GeV; #delta#Phi (rad); events",16,0,TMath::Pi());
      
      histoName = "hist_Dphi_ljetDimuon_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#Delta #Phi(lightJet-Dimuon) for mass > "+massRanges[m]+" GeV; #delta#Phi (rad); events",16,0,TMath::Pi());
      
      histoName = "hist_Nbjet_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"Number of b-jets for mass > "+massRanges[m]+"; # of jets; events",10,0,10);
      
      histoName = "hist_Nljet_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"Number of light-jets for mass > "+massRanges[m]+"; # of jets; events",10,0,10);
      
      histoName = "hist_Nvtx_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"Number of PV for mass > "+massRanges[m]+"; # of vertices; events",60,0.,60.);
    }

    else{
      
      //i muoni sono in bin di massa  
      TString histoName = "hist_lm_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of leading muon for mass "+massRanges[m]+" +/- 5% ; p_{T} (GeV); muons",500,0.,1000.);
      
      histoName = "hist_sm_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of subleading muon for mass "+ massRanges[m]+" +/- 5% ; p_{T} (GeV); muons",500,0.,1000.);
      
      histoName = "hist_lm_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of leadindg muon for mass "+massRanges[m]+" +/- 5% ; #eta; muons",EtaBINS,EtaEDGES);
      
      histoName = "hist_sm_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of subleadindg muon for mass "+ massRanges[m]+" +/- 5% ; #eta; muons",EtaBINS,EtaEDGES);
      
      //i jet sono per masse > m
      histoName = "hist_bjet_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of b-jets for mass "+massRanges[m]+" +/- 5% ; p_{T} (GeV); jets",200,0.,1000.);
      
      histoName = "hist_ljet_pt_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"p_{T} of light-jets for mass "+massRanges[m]+" +/- 5% ; p_{T} (GeV); jets",200,0.,1000.);
      
      histoName = "hist_bjet_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of b-jets for mass "+massRanges[m]+"+/- 5%  ; #eta; jets",EtaBINS,EtaEDGES);
      
      histoName = "hist_ljet_eta_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#eta of light-jets for mass "+massRanges[m]+" +/- 5% ; #eta; jets",EtaBINS,EtaEDGES);
      
      histoName = "hist_Dphi_bjetDimuon_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#Delta #Phi(bJet-Dimuon) for mass "+massRanges[m]+"+/- 5% ; #delta#Phi (rad); events",16,0,TMath::Pi());
      
      histoName = "hist_Dphi_ljetDimuon_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"#Delta #Phi(lightJet-Dimuon) for mass "+massRanges[m]+"+/- 5% ; #delta#Phi (rad); events",16,0,TMath::Pi());
      
      histoName = "hist_Nbjet_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"Number of b-jets for mass "+massRanges[m]+"+/- 5% ; # of jets; events",10,0,10);
      
      histoName = "hist_Nljet_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"Number of light-jets for mass "+massRanges[m]+"+/- 5% ; # of jets; events",10,0,10);
      
      histoName = "hist_Nvtx_"+massRanges[m];
      histos[histoName] = new TH1F(histoName,"Number of PV for mass "+massRanges[m]+"+/- 5% ; # of vertices; events",60, 0.,60.);
    }
  }

  
  for(int c = 0; c<9; c++){
    TString histoName ="hist_mass_"+cat[c];
    histos[histoName] = new TH1F(histoName,"dimuon mass " + cat[c] + "; mass (GeV); events",500,0.,1500.);
    
    histoName ="hist_pz_"+cat[c];
    histos[histoName] = new TH1F(histoName,"dimuon p_{z} " + cat[c] + "; p_{z} (GeV); events",500,0.,1500.);

    histoName ="hist_pt_"+cat[c];
    histos[histoName] = new TH1F(histoName,"dimuon p_{T} " + cat[c] + "; p_{T} (GeV); events",500,0.,1500.);

    histoName ="hist_p_"+cat[c];
    histos[histoName] = new TH1F(histoName,"dimuon p " + cat[c] + "; p (GeV); events",500,0.,1500.);

    histoName ="hist_eta_"+cat[c];
    histos[histoName] = new TH1F(histoName,"dimuon #eta " + cat[c] + "; #eta; events",80,-10.,10.);

    histoName ="hist_phi_"+cat[c];
    histos[histoName] = new TH1F(histoName,"dimuon #phi " + cat[c] + "; #phi; events",32,-2*TMath::Pi(),2*TMath::Pi());

    if(c > 0){
      for(int a=0; a < 12; a++){	  
	if(a<2){
	  histoName ="hist_met_"+cat[c]+"_"+massRanges[a];
	  histos[histoName] = new TH1F(histoName,"MEt " + cat[c] + " mass > " +massRanges[a]+"; E_{T} (GeV) ; events",200,0.,1000.);
	  
	  histoName ="hist_DphiMetDimuon_"+cat[c]+"_"+massRanges[a];
	  histos[histoName] = new TH1F(histoName,"#Delta #Phi(MEt-Dimuon) " + cat[c] + " mass > " + massRanges[a]+"; #delta#Phi (rad); events",16,0,TMath::Pi());
	}
	else{
	  histoName ="hist_met_"+cat[c]+"_"+massRanges[a];
	  histos[histoName] = new TH1F(histoName,"MEt " + cat[c] + " mass " +massRanges[a]+" +/- 5% ; E_{T} (GeV) ; events",200,0.,1000.);
	  
	  histoName ="hist_DphiMetDimuon_"+cat[c]+"_"+massRanges[a];
	  histos[histoName] = new TH1F(histoName,"#Delta #Phi(MEt-Dimuon) " + cat[c] + " mass " + massRanges[a]+" +/- 5% ; #delta#Phi (rad); events",16,0,TMath::Pi());
	}
      }
    }
  }
  
  histos["eventWeight_PU"] = new TH1F("eventWeight_PU", " PU weight ; weight ; events", 100,-10.,10.);
  histos["eventWeight_PU_Muons"] = new TH1F("eventWeight_PU_Muons", " Event weight for selected muons ; weight ; events", 100,-10.,10.);
  histos["eventWeight_PU_Muons_Btag"] = new TH1F("eventWeight_PU_Muons_Btag", " Event weight before categorization ; weight ; events", 100,-10.,10.);
  histos["eventWeight_PU_Muons_Cat1"] = new TH1F("eventWeight_PU_Muons_Cat1", " Event weight for Cat1 ; weight ; events", 100,-10.,10.);
  histos["eventWeight_PU_Muons_Cat2"] = new TH1F("eventWeight_PU_Muons_Cat2", " Event weight for Cat2 ; weight ; events", 100,-10.,10.);
 
  histos["bquark_pt"] = new TH1F("bquark_pt", " primary b-quark: generated p_{T} ; p_{T} (GeV) ; quarks", 150,0.,300.);
  histos["bquark_eta"] = new TH1F("bquark_eta", " primary b-quark: generated |#eta| ; #eta ; quarks", 40,0.,10.);
}

void NewAnalyzer::Draw() { // To be called After the Loop to look at plots
	
  TString file_name = "./Out_" + sel_dataset + "_test.root";
    
  outputFile = new TFile(file_name,"recreate");
  outputFile->cd("/");
  // outputFile->cd("Efficiency");
  // for (auto& x: histos) {
  //   //std::cout << x.first << ": " << x.second <<  std::endl;
  //   //x.second->Scale(sampleConfig.lumidata*sampleConfig.crossSection/sampleConfig.initialEvents);
  //   x.second->Draw();
    
  // }
  //TString file_name = "./SYS/Out_" + sel_dataset + ".root";
  //TString file_name = "./OutputOR/MetCorrected/VtxFix_JetPt20/Out_" + sel_dataset + ".root";

  //TString file_name = "./OutputOR/MetCorrected/VtxFix_JetPt20/Out_" + sel_dataset + "_hptw.root";

  //TString file_name = "./OutputOR/MetCorrected/VtxFix_JetPt20/NoJetVeto/Out_" + sel_dataset + ".root";
  //TString file_name = "./OutputOR/MetCorrected/VtxFix_JetPt30/Out_" + sel_dataset + ".root";
 
   
  //  outputFile = new TFile(file_name,"recreate"); 
  
  masstree_->Write();
  masstree1_->Write();
  masstree2_->Write();
  Minv_Cat1->Write();
  Minv_Cat2->Write();

  outputFile->mkdir("Efficiency");
  outputFile->cd("Efficiency");

  hist_eff->Write();
  hist_jetacc->Write();
  histHP_trueMet->Write();
  hist_trueMet->Write();
  hist_prefiring->Write();
  hist_bjet_pt_inclusive->Write();

  for (auto& x: histos) {
  //   //std::cout << x.first << ": " << x.second <<  std::endl;
  //   //x.second->Scale(sampleConfig.lumidata*sampleConfig.crossSection/sampleConfig.initialEvents);
    x.second->Write();
  }

  outputFile->Write();
  cout << " Written " << endl;
  outputFile->Close();
  cout << " Closed" << endl;
}

void NewAnalyzer::Draw2() { // To be called After the Loop to look at plots
         TString sig_exists = "signal_" + sel_dataset + "tree";
         TString bkg_exists = "bkg_" + sel_dataset + "tree";
		 
		 TString file_name = "analysis_least1bjet.root";
		 
         outputFile2 = new TFile(file_name,"update");
	     outputFile2->cd("/");
		 
		 if(outputFile2->GetListOfKeys()->Contains(sig_exists))
		 {
			 cout << "Tree with same name found --- replacing:" << endl;
			 TString remove_sig = sig_exists + ";*";
			 gDirectory->Delete(remove_sig);
		 }
		 else if(outputFile2->GetListOfKeys()->Contains(bkg_exists)){
			 cout << "Tree with same name found --- replacing:" << endl;
			 TString remove_bkg = bkg_exists + ";*";
			 gDirectory->Delete(remove_bkg);
		 }
	signaltree_->Write();
	outputFile2->Write();
    cout << " Written " << endl;
	outputFile2->Close();
    cout << " Closed" << endl;
}

void NewAnalyzer::selectDimuonPair(std::vector<TLorentzVector> tight_muons, std::vector<bool> trigger, std::vector<int> charge, std::vector<TLorentzVector> &muon_pair){
  
  for(size_t s=0; s<tight_muons.size(); s++){
    bool pair = false;
    
    for(size_t t=s+1; t<tight_muons.size(); t++){
      
      if(charge[s]*charge[t] < 0 && (trigger[s] || trigger[t])){
	// if(charge[s]*charge[t] < 0 && (  (trigger[s] && tight_muons[s].Pt() > 26.)  || 
	// 				       (trigger[t] && tight_muons[t].Pt() > 26.))){
	
	pair = true;
	muon_pair.push_back(tight_muons[s]);
	muon_pair.push_back(tight_muons[t]);

		
	break;
      }
    }
    if(pair)
      break;
  }
  
  return;
}


TLorentzVector NewAnalyzer::buildDimuonPair(std::vector<TLorentzVector> muon_pair,  double k1=1., double k2=1.){
  TLorentzVector mu1, mu2, dimuon;
  float muPDG = 0.105658;
  mu1.SetPtEtaPhiM(muon_pair[0].Pt()*k1, muon_pair[0].Eta(), muon_pair[0].Phi(), muPDG);
  mu2.SetPtEtaPhiM(muon_pair[1].Pt()*k2, muon_pair[1].Eta(), muon_pair[1].Phi(), muPDG);
  mu_deltar = mu1.DeltaR(mu2);
  mu_deltaphi = mu1.DeltaPhi(mu2);
  mu_deltaeta = mu1.Eta() - mu2.Eta();
  return  dimuon = mu1+mu2;
}

void NewAnalyzer::CleanJetsFromMuons(std::vector<TLorentzVector>& Jets, std::vector<float>& disc, std::vector<TLorentzVector> Muons, float angle) {
  for(unsigned int m = 0; m < Muons.size(); m++) {
    for(unsigned int j = 0; j < Jets.size(); ) {
      
      // if(eventNumber == 1125){
      // 	std::cout << "Jet cleaning " << std::endl;
      // 	std::cout << "Muon " << m << ": pt = " << Muons[m].Pt() << " eta = " << Muons[m].Eta() <<std::endl;
      // 	std::cout << "Jet  " << j << ": pt = " << Jets[j].Pt() << " eta = " << Jets[j].Eta() <<std::endl;
      // 	std::cout << "DeltaR = " << Jets[j].DeltaR(Muons[m]) << std::endl;
      // }

      if(Jets[j].DeltaR(Muons[m]) < angle){ 
	Jets.erase(Jets.begin() + j);
	disc.erase(disc.begin() + j);
      }
      else j++;
    }
  }
}
