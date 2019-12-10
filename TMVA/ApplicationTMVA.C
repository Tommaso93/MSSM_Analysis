#include <cstdlib>
#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <math.h>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TStopwatch.h"

#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/MethodCuts.h"

using namespace TMVA;

void ApplicationTMVA(){
	
TString myMethodList = "";

TMVA::Tools::Instance();

std::map<std::string,int> Use;

Use["Cuts"]            = 0;
Use["CutsD"]           = 0;
Use["CutsPCA"]         = 0;
Use["CutsGA"]          = 0;
Use["CutsSA"]          = 0;

Use["Likelihood"]      = 0;
Use["LikelihoodD"]     = 0; // the "D" extension indicates decorrelated input variables (see option strings)
Use["LikelihoodPCA"]   = 0; // the "PCA" extension indicates PCA-transformed input variables (see option strings)
Use["LikelihoodKDE"]   = 0;
Use["LikelihoodMIX"]   = 0;

Use["PDERS"]           = 0;
Use["PDERSD"]          = 0;
Use["PDERSPCA"]        = 0;
Use["PDEFoam"]         = 0;
Use["PDEFoamBoost"]    = 0; // uses generalised MVA method boosting
Use["KNN"]             = 0; // k-nearest neighbour method


Use["LD"]              = 0; // Linear Discriminant identical to Fisher
Use["Fisher"]          = 0;
Use["FisherG"]         = 0;
Use["BoostedFisher"]   = 0; // uses generalised MVA method boosting
Use["HMatrix"]         = 0;

Use["FDA_GA"]          = 0; // minimisation of user-defined function using Genetics Algorithm
Use["FDA_SA"]          = 0;
Use["FDA_MC"]          = 0;
Use["FDA_MT"]          = 0;
Use["FDA_GAMT"]        = 0;
Use["FDA_MCMT"]        = 0;

Use["MLP"]             = 0; // Recommended ANN
Use["MLPBFGS"]         = 0; // Recommended ANN with optional training method
Use["MLPBNN"]          = 0; // Recommended ANN with BFGS training method and bayesian regulator
Use["CFMlpANN"]        = 0; // Depreciated ANN from ALEPH
Use["TMlpANN"]         = 0; // ROOT's own ANN
Use["DNN_CPU"] = 0;         // CUDA-accelerated DNN training.
Use["DNN_GPU"] = 0;         // Multi-core accelerated DNN.

Use["SVM"]             = 0;

Use["BDT"]             = 1; // uses Adaptive Boost
Use["BDTG"]            = 1; // uses Gradient Boost
Use["BDTB"]            = 0; // uses Bagging
Use["BDTD"]            = 1; // decorrelation + Adaptive Boost
Use["BDTF"]            = 0; // allow usage of fisher discriminant for node splitting

Use["RuleFit"]         = 0;

Use["Plugin"]          = 0;
Use["Category"]        = 0;
Use["SVM_Gauss"]       = 0;
Use["SVM_Poly"]        = 0;
Use["SVM_Lin"]         = 0;

std::cout << std::endl;
std::cout << "==> Start TMVAClassificationApplication" << std::endl;

if (myMethodList != "") {
   for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) it->second = 0;

   std::vector<TString> mlist = gTools().SplitString( myMethodList, ',' );
   for (UInt_t i=0; i<mlist.size(); i++) {
      std::string regMethod(mlist[i]);

      if (Use.find(regMethod) == Use.end()) {
         std::cout << "Method \"" << regMethod
                   << "\" not known in TMVA under this name. Choose among the following:" << std::endl;
         for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) {
            std::cout << it->first << " ";
         }
         std::cout << std::endl;
         return;
      }
      Use[regMethod] = 1;
   }
}

TMVA::Reader *reader = new TMVA::Reader( "!Color:!Silent" );

Float_t var1, var2, var3, var4, var5, var6, var7, var8, var9;
Float_t var10, var11, var12;
Double_t lumi_signal = 118201./0.00923;
Double_t signalWeight = 35900/lumi_signal;
Double_t backgroundWeight = 35900/(49144274./5765.);
Double_t backgroundWeight2 = 35900/(23958797./85.656);

reader->AddVariable( "dimuon_deltar", &var1 );
reader->AddVariable( "dimuon_deltaphi", &var2 );
reader->AddVariable( "dimuon_deltaeta", &var3 );
reader->AddVariable( "Met_Pt", &var4 );
reader->AddVariable( "btag_jet", &var10 );
reader->AddVariable( "no_btag_jet", &var11 );
reader->AddVariable( "bjet_pt", &var5 );
reader->AddVariable( "bjet_eta", &var6 );
reader->AddVariable( "btag_jet_over2.4", &var12 );
reader->AddVariable( "delta_R_bjet_dimuon", &var7 );
reader->AddVariable( "delta_pt_mupair_1bjet", &var8 );
reader->AddVariable( "delta_eta_mupair_1bjet", &var9 );

TString dir    = "dataset/weights/";
TString prefix = "TMVAClassification";


for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) {
   if (it->second) {
      TString methodName = TString(it->first) + TString(" method");
      TString weightfile = dir + prefix + TString("_") + TString(it->first) + TString(".weights.xml");
      reader->BookMVA( methodName, weightfile );
   }
}

UInt_t nbin = 100;
TH1F *histLk(0);
TH1F *histLkD(0);
TH1F *histLkPCA(0);
TH1F *histLkKDE(0);
TH1F *histLkMIX(0);
TH1F *histPD(0);
TH1F *histPDD(0);
TH1F *histPDPCA(0);
TH1F *histPDEFoam(0);
TH1F *histPDEFoamErr(0);
TH1F *histPDEFoamSig(0);
TH1F *histKNN(0);
TH1F *histHm(0);
TH1F *histFi(0);
TH1F *histFiG(0);
TH1F *histFiB(0);
TH1F *histLD(0);
TH1F *histNn(0);
TH1F *histNnbfgs(0);
TH1F *histNnbnn(0);
TH1F *histNnC(0);
TH1F *histNnT(0);
TH1F *histBdt(0);
TH1F *histBdtG(0);
TH1F *histBdtB(0);
TH1F *histBdtD(0);
TH1F *histBdtF(0);
TH1F *histRf(0);
TH1F *histSVMG(0);
TH1F *histSVMP(0);
TH1F *histSVML(0);
TH1F *histFDAMT(0);
TH1F *histFDAGA(0);
TH1F *histCat(0);
TH1F *histPBdt(0);
TH1F *histDnnGpu(0);
TH1F *histDnnCpu(0);

if (Use["Likelihood"])    histLk      = new TH1F( "MVA_Likelihood",    "MVA_Likelihood",    nbin, -1, 1 );
if (Use["LikelihoodD"])   histLkD     = new TH1F( "MVA_LikelihoodD",   "MVA_LikelihoodD",   nbin, -1, 0.9999 );
if (Use["LikelihoodPCA"]) histLkPCA   = new TH1F( "MVA_LikelihoodPCA", "MVA_LikelihoodPCA", nbin, -1, 1 );
if (Use["LikelihoodKDE"]) histLkKDE   = new TH1F( "MVA_LikelihoodKDE", "MVA_LikelihoodKDE", nbin,  -0.00001, 0.99999 );
if (Use["LikelihoodMIX"]) histLkMIX   = new TH1F( "MVA_LikelihoodMIX", "MVA_LikelihoodMIX", nbin,  0, 1 );
if (Use["PDERS"])         histPD      = new TH1F( "MVA_PDERS",         "MVA_PDERS",         nbin,  0, 1 );
if (Use["PDERSD"])        histPDD     = new TH1F( "MVA_PDERSD",        "MVA_PDERSD",        nbin,  0, 1 );
if (Use["PDERSPCA"])      histPDPCA   = new TH1F( "MVA_PDERSPCA",      "MVA_PDERSPCA",      nbin,  0, 1 );
if (Use["KNN"])           histKNN     = new TH1F( "MVA_KNN",           "MVA_KNN",           nbin,  0, 1 );
if (Use["HMatrix"])       histHm      = new TH1F( "MVA_HMatrix",       "MVA_HMatrix",       nbin, -0.95, 1.55 );
if (Use["Fisher"])        histFi      = new TH1F( "MVA_Fisher",        "MVA_Fisher",        nbin, -4, 4 );
if (Use["FisherG"])       histFiG     = new TH1F( "MVA_FisherG",       "MVA_FisherG",       nbin, -1, 1 );
if (Use["BoostedFisher"]) histFiB     = new TH1F( "MVA_BoostedFisher", "MVA_BoostedFisher", nbin, -2, 2 );
if (Use["LD"])            histLD      = new TH1F( "MVA_LD",            "MVA_LD",            nbin, -2, 2 );
if (Use["MLP"])           histNn      = new TH1F( "MVA_MLP",           "MVA_MLP",           nbin, -1.25, 1.5 );
if (Use["MLPBFGS"])       histNnbfgs  = new TH1F( "MVA_MLPBFGS",       "MVA_MLPBFGS",       nbin, -1.25, 1.5 );
if (Use["MLPBNN"])        histNnbnn   = new TH1F( "MVA_MLPBNN",        "MVA_MLPBNN",        nbin, -1.25, 1.5 );
if (Use["CFMlpANN"])      histNnC     = new TH1F( "MVA_CFMlpANN",      "MVA_CFMlpANN",      nbin,  0, 1 );
if (Use["TMlpANN"])       histNnT     = new TH1F( "MVA_TMlpANN",       "MVA_TMlpANN",       nbin, -1.3, 1.3 );
if (Use["DNN_GPU"]) histDnnGpu = new TH1F("MVA_DNN_GPU", "MVA_DNN_GPU", nbin, -0.1, 1.1);
if (Use["DNN_CPU"]) histDnnCpu = new TH1F("MVA_DNN_CPU", "MVA_DNN_CPU", nbin, -0.1, 1.1);
if (Use["BDT"])           histBdt     = new TH1F( "MVA_BDT",           "MVA_BDT",           nbin, -0.8, 0.8 );
if (Use["BDTG"])          histBdtG    = new TH1F( "MVA_BDTG",          "MVA_BDTG",          nbin, -1.0, 1.0 );
if (Use["BDTB"])          histBdtB    = new TH1F( "MVA_BDTB",          "MVA_BDTB",          nbin, -1.0, 1.0 );
if (Use["BDTD"])          histBdtD    = new TH1F( "MVA_BDTD",          "MVA_BDTD",          nbin, -0.8, 0.8 );
if (Use["BDTF"])          histBdtF    = new TH1F( "MVA_BDTF",          "MVA_BDTF",          nbin, -1.0, 1.0 );
if (Use["RuleFit"])       histRf      = new TH1F( "MVA_RuleFit",       "MVA_RuleFit",       nbin, -2.0, 2.0 );
if (Use["SVM_Gauss"])     histSVMG    = new TH1F( "MVA_SVM_Gauss",     "MVA_SVM_Gauss",     nbin,  0.0, 1.0 );
if (Use["SVM_Poly"])      histSVMP    = new TH1F( "MVA_SVM_Poly",      "MVA_SVM_Poly",      nbin,  0.0, 1.0 );
if (Use["SVM_Lin"])       histSVML    = new TH1F( "MVA_SVM_Lin",       "MVA_SVM_Lin",       nbin,  0.0, 1.0 );
if (Use["FDA_MT"])        histFDAMT   = new TH1F( "MVA_FDA_MT",        "MVA_FDA_MT",        nbin, -2.0, 3.0 );
if (Use["FDA_GA"])        histFDAGA   = new TH1F( "MVA_FDA_GA",        "MVA_FDA_GA",        nbin, -2.0, 3.0 );
if (Use["Category"])      histCat     = new TH1F( "MVA_Category",      "MVA_Category",      nbin, -2., 2. );
if (Use["Plugin"])        histPBdt    = new TH1F( "MVA_PBDT",          "MVA_BDT",           nbin, -0.8, 0.8 );

TFile *input(0);
TFile *output_file = new TFile("output_plots.root","RECREATE");
TString fname = "../analysis_least1bjet.root";
if (!gSystem->AccessPathName( fname )) {
   input = TFile::Open( fname ); // check if file in local directory exists
}
else {
   TFile::SetCacheFileDir(".");
   input = TFile::Open(fname, "CACHEREAD"); // if not: download from ROOT server
}
if (!input) {
   std::cout << "ERROR: could not open data file" << std::endl;
   exit(1);
}
std::cout << "--- TMVAClassificationApp    : Using input file: " << input->GetName() << std::endl;

std::cout << "--- Select  signal sample" << std::endl;
TTree* theTreeS = (TTree*)input->Get("signal_bbA_MA300tree");

std::cout << "--- Select background sample" << std::endl;
TTree* theTreeB1 = (TTree*)input->Get("bkg_ttbar_nlotree"); 
TTree* theTreeB2 = (TTree*)input->Get("bkg_DY_nlo1tree"); 

TLorentzVector *dimuon_mass=NULL, *dimuon_mass2=NULL, *dimuon_mass3=NULL;
Double_t inv_mass_signal, inv_mass_bkg1, inv_mass_bkg2;
Int_t ivar10, ivar11, ivar12;

theTreeS->SetBranchAddress( "dimuon_deltar", &var1 );
theTreeS->SetBranchAddress( "dimuon_deltaphi", &var2 );
theTreeS->SetBranchAddress( "dimuon_deltaeta", &var3 );
theTreeS->SetBranchAddress( "Met_Pt", &var4 );
theTreeS->SetBranchAddress( "btag_jet", &ivar10 );
theTreeS->SetBranchAddress( "no_btag_jet", &ivar11 );
theTreeS->SetBranchAddress( "bjet_pt", &var5 );
theTreeS->SetBranchAddress( "bjet_eta", &var6 );
theTreeS->SetBranchAddress( "btag_jet_over2.4", &ivar12 );
theTreeS->SetBranchAddress( "delta_R_bjet_dimuon", &var7 );
theTreeS->SetBranchAddress( "delta_pt_mupair_1bjet", &var8 );
theTreeS->SetBranchAddress( "delta_eta_mupair_1bjet", &var9 );

theTreeB1->SetBranchAddress( "dimuon_deltar", &var1 );
theTreeB1->SetBranchAddress( "dimuon_deltaphi", &var2 );
theTreeB1->SetBranchAddress( "dimuon_deltaeta", &var3 );
theTreeB1->SetBranchAddress( "Met_Pt", &var4 );
theTreeB1->SetBranchAddress( "btag_jet", &ivar10 );
theTreeB1->SetBranchAddress( "no_btag_jet", &ivar11 );
theTreeB1->SetBranchAddress( "bjet_pt", &var5 );
theTreeB1->SetBranchAddress( "bjet_eta", &var6 );
theTreeB1->SetBranchAddress( "btag_jet_over2.4", &ivar12 );
theTreeB1->SetBranchAddress( "delta_R_bjet_dimuon", &var7 );
theTreeB1->SetBranchAddress( "delta_pt_mupair_1bjet", &var8 );
theTreeB1->SetBranchAddress( "delta_eta_mupair_1bjet", &var9 );

theTreeB2->SetBranchAddress( "dimuon_deltar", &var1 );
theTreeB2->SetBranchAddress( "dimuon_deltaphi", &var2 );
theTreeB2->SetBranchAddress( "dimuon_deltaeta", &var3 );
theTreeB2->SetBranchAddress( "Met_Pt", &var4 );
theTreeB2->SetBranchAddress( "btag_jet", &ivar10 );
theTreeB2->SetBranchAddress( "no_btag_jet", &ivar11 );
theTreeB2->SetBranchAddress( "bjet_pt", &var5 );
theTreeB2->SetBranchAddress( "bjet_eta", &var6 );
theTreeB2->SetBranchAddress( "btag_jet_over2.4", &ivar12 );
theTreeB2->SetBranchAddress( "delta_R_bjet_dimuon", &var7 );
theTreeB2->SetBranchAddress( "delta_pt_mupair_1bjet", &var8 );
theTreeB2->SetBranchAddress( "delta_eta_mupair_1bjet", &var9 );

theTreeS->SetBranchAddress( "tight_dimuon", &dimuon_mass);
theTreeB1 -> SetBranchAddress( "tight_dimuon", &dimuon_mass2);
theTreeB2 -> SetBranchAddress( "tight_dimuon", &dimuon_mass3);


Int_t    nSelCutsGA = 0;
Int_t    n_signal=0; 
Int_t    n_bkg1=0; 
Int_t    n_bkg2 = 0;
Double_t effS       = 0.7;
Double_t significance1, significance2, err_sign1, s, b;
TH1F *invariant_mass1 = new TH1F("invariant mass1", "invariant mass1", 1500, 0, 900);
TH1F *invariant_mass2 = new TH1F("invariant mass2", "invariant mass2", 1500, 0, 900);

std::vector<Float_t> vecVar(4); // vector for EvaluateMVA tests

std::cout << "--- Processing signal_bbA_MA300: " << theTreeS->GetEntries() << " events" << std::endl;
	for (Long64_t ievt=0; ievt<(theTreeS->GetEntries());ievt++) {
	   if (ievt%10000 == 0) std::cout << "--- ... Processing event: " << ievt << std::endl;
	   if(theTreeS->GetEntry(ievt) < 1){
		   std::cout << " Event " << ievt << ": Break!" << std::endl;
		   break;
	   }
	   theTreeS -> GetEntry(ievt);
	   //theTreeB1->GetEntry(ievt);
	   //theTreeB2->GetEntry(ievt);

	   // Return the MVA outputs and fill into histograms
	   if (Use["BDT"]) {
	      Double_t val = reader->EvaluateMVA( "BDT method" );
	      if (val > 0.0412) {
	          inv_mass_signal = dimuon_mass->M();   
	     //     inv_mass_bkg1=dimuon_mass2->M();
	       //   inv_mass_bkg2=dimuon_mass3->M();
		  
			  //invariant_mass1->Fill(inv_mass_bkg1+inv_mass_bkg2);
			  invariant_mass2->Fill(/*inv_mass_bkg1+inv_mass_bkg2+*/inv_mass_signal, signalWeight);
			  if(inv_mass_signal<400 && inv_mass_signal>200){
				  n_signal++;
			  }
	      };  
	   }

  
	    
	}
	
	std::cout << "--- Processing ttbar: " << theTreeB1->GetEntries() << " events" << std::endl;
	for (Long64_t ievt=0; ievt<(theTreeB1->GetEntries());ievt++) {

		   if (ievt%10000 == 0) std::cout << "--- ... Processing event: " << ievt << std::endl;
		   if(theTreeB1->GetEntry(ievt) < 1){
			   std::cout << " Event " << ievt << ": Break!" << std::endl;
			   break;
		   }
		   theTreeB1 -> GetEntry(ievt);
		   //theTreeB1->GetEntry(ievt);
		   //theTreeB2->GetEntry(ievt);

		   // Return the MVA outputs and fill into histograms
		   if (Use["BDT"]) {
		      Double_t val = reader->EvaluateMVA( "BDT method" );
		      if (val > 0.0412) {
		          inv_mass_bkg1 = dimuon_mass2->M();
		     //     inv_mass_bkg1=dimuon_mass2->M();
		       //   inv_mass_bkg2=dimuon_mass3->M();
		  
		  
				  //invariant_mass1->Fill(inv_mass_bkg1+inv_mass_bkg2);
				  invariant_mass2->Fill(/*inv_mass_bkg1+inv_mass_bkg2+*/inv_mass_bkg1, backgroundWeight2);
				  if(inv_mass_bkg1<400 && inv_mass_bkg1>200){
					  n_bkg1++;
				  }
		      };  
		   }   
		}

	std::cout << "--- Processing DY events: " << theTreeB2->GetEntries() << " events" << std::endl;
	for (Long64_t ievt=0; ievt<(theTreeB2->GetEntries());ievt++) {

		       if (ievt%10000 == 0) std::cout << "--- ... Processing event: " << ievt << std::endl;
			   if(theTreeB2->GetEntry(ievt) < 1){
				   std::cout << " Event " << ievt << ": Break!" << std::endl;
				   break;
			   }
			   theTreeB2 -> GetEntry(ievt);
			   //theTreeB1->GetEntry(ievt);
			   //theTreeB2->GetEntry(ievt);

			   // Return the MVA outputs and fill into histograms
			   if (Use["BDT"]) {
			      Double_t val = reader->EvaluateMVA( "BDT method" );
			      if (val > 0.0412) {
			          inv_mass_bkg2 = dimuon_mass3->M();
			     //     inv_mass_bkg1=dimuon_mass2->M();
			       //   inv_mass_bkg2=dimuon_mass3->M();
		                        //invariant_mass1->Fill(inv_mass_bkg1+inv_mass_bkg2);
					  invariant_mass2->Fill(/*inv_mass_bkg1+inv_mass_bkg2+*/inv_mass_bkg2, backgroundWeight);
					  if(inv_mass_bkg2<400 && inv_mass_bkg2>200){
						  n_bkg2++;
					  }
			      };  
			   }   
			}

invariant_mass2->Draw();
significance1 = (n_signal*signalWeight)/sqrt(n_signal*signalWeight+n_bkg1*backgroundWeight2+n_bkg2*backgroundWeight);
significance2 = (n_signal*signalWeight)/sqrt(n_bkg1*backgroundWeight2+n_bkg2*backgroundWeight);
s = n_signal*signalWeight;
 b=n_bkg1*backgroundWeight2+n_bkg2*backgroundWeight;
err_sign1=sqrt(pow(s+2*b,2)/(4*pow(s+b,3))*s+pow(s,2)/(4*pow(s+b,3))*b);
		
std::cout << "Significance at 200-400 GeV is(s/sqrt(s+b)): " << significance1 <<" +/- "<< err_sign1<<std::endl<<s<<std::endl<<b<< std::endl;
std::cout << "Significance at 200-400 GeV is(s/sqrt(b)): " << significance2 << std::endl;
}
