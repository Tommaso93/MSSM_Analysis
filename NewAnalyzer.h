//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan 11 10:29:32 2017 by ROOT version 6.06/01
// from TTree MSSMtree/H2mu Variables
// found on file: /home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/DY_test.root
//////////////////////////////////////////////////////////

#ifndef NewAnalyzer_h
#define NewAnalyzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TClonesArray.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <set>
#include <fstream>
#include <iostream>
#include <sstream>
#include "TTree.h"
#include "TString.h"
#include <TLorentzVector.h>
#include <TMath.h>
#include <map>
// Header file for the classes stored in the TTree if any.
#include "vector"
#include <TLorentzVector.h>

class NewAnalyzer {
 public :

  TString sel_dataset;
  Float_t MassCat1, MassCat2;
  //bool highptselection;
  Float_t mass;
  Float_t Min_mass;
  Float_t Max_mass;
  //Float_t bjet_pt[20];
  Float_t bjet_pt0;
  //Float_t bjet_eta[20];
  Float_t bjet_eta0;
  //Float_t delta_R_bjet_dimuon[20];
  Float_t delta_R_bjet_dimuon0=0; 

  int MomentumScaleCorrection;

  bool Higgs_pt_reweight;
  
  Double_t pi;

  // general cuts 

  Float_t ptpreselMu_cut;
  Float_t etaMu_cut;
  Float_t zVTX_cut;
  Float_t dofVTX_cut;


  Float_t pt1_Mu_cut;
  Float_t pt2_Mu_cut;
  Float_t Mu_iso_cut;

  Float_t DR_jet_mu_cut;
  Float_t Min_pt_btagjet; 
  Float_t Max_eta_btagjet;
  Float_t Max_eta_jet; 
  Float_t Btag_disc_cut;

  // Gianni's tree variables
    
  TLorentzVector tight_dimuon;
  Float_t My_MEt;
  Float_t My_MEt_phi;
  Float_t My_MEt_eta;
  Float_t My_MEt_energy;
  Float_t My_MEt_sumet;
  Float_t mu_deltar,mu_deltaphi,mu_deltaeta;
  Float_t delta_pt_mupair_1bjet, delta_eta_mupair_1bjet;
  Int_t Nbjet, Nbjet2, not_bjet;
  
  
  // declare histrograms here

  

  /* TH1D *Mu_abvcut_tgh;  */
  /* TH1D *Mu_abvcut_glb;  */

  /* TH1D *Mu_iso04,  *Mu_iso04_Pt_lt_50, *Mu_iso04_Pt_gt_50; */
  /* TH2D *Mu_iso04_vs_mupt; */

  /* TH1F *Mu_abvcut; */
  
  /* TH2D *DR_bjet_mu1_vs_ptjet, *DR_bjet_mu2_vs_ptjet; */
  /* TH2D *DR_vetoed_bjet_mu1_vs_ptjet, *DR_vetoed_bjet_mu2_vs_ptjet; */
  /* TH2D *recobjet_vs_genjet_Pt, *recojet_vs_genjet_Pt_abv24; */
  /* TH1D *genjet_close_flav, *genjet_close_flav_abv24; */
  /* TH1D *DR_mup_bjet; */

  /* TH1D *Dr_clean1; */

  TH1F *hist_eff, *hist_jetacc, *Minv_Cat1,  *Minv_Cat2, *hist_trueMet, *histHP_trueMet, *hist_prefiring, *hist_bjet_pt_inclusive ;
  std::map<TString, TH1F *> histos;
  
  //==================================

  TFile *outputFile, *outputFile2;
  // declare variables
 
  TTree *masstree_, *masstree1_, *masstree2_, *signaltree_;
  // Fixed size dimensions of array or collections stored in the TTree if any.

  TTree          *fChain;   //!pointer to the analyzed TTree or TChain
  Int_t           fCurrent; //!current Tree number in a TChain

  // Declaration of leaf types

  Int_t           metfilter;
  Int_t           runnumber;
  Int_t           lumiblock;
  ULong64_t       eventNumber;
  Float_t         timestamp;
  Int_t           bunchXing;
  Int_t           orbitNum;
  Short_t         NBeam;
  Double_t        BS_x;
  Double_t        BS_y;
  Double_t        BS_z;
  Double_t        BS_xerr;
  Double_t        BS_yerr;
  Double_t        BS_zerr;
  Double_t        BS_Wx;
  Double_t        BS_Wy;
  Double_t        BS_Wxerr;
  Double_t        BS_Wyerr;
  Double_t        BS_dxdz;
  Double_t        BS_dxdzerr;
  Double_t        BS_dydz;
  Double_t        BS_dydzerr;
  Short_t         NGenP;
  vector<int>     *Genp_particleId;
  vector<int>     *Genp_status;
  vector<double>  *Genp_pt;
  vector<double>  *Genp_p;
  vector<double>  *Genp_et;
  vector<double>  *Genp_e;
  vector<double>  *Genp_mt;
  vector<double>  *Genp_m;
  vector<double>  *Genp_eta;
  vector<double>  *Genp_phi;
  vector<double>  *Genp_vx;
  vector<double>  *Genp_vy;
  vector<double>  *Genp_vz;
  vector<int>     *Genp_nMmothers;
  vector<int>     *Genp_nDaughters;
  vector<int>     *Genp_particleId_mother;
  vector<int>     *Genp_status_mother;
  vector<double>  *Genp_pt_mother;
  vector<double>  *Genp_eta_mother;
  vector<double>  *Genp_phi_mother;
  vector<double>  *Genp_m_mother;
  Double_t        PU_Weight;
  Double_t        PU_WeightUp;
  Double_t        PU_WeightDown;
  Short_t         Nhlt;
  vector<TString> *hlt_path;
  vector<double>  *PV_x;
  vector<double>  *PV_y;
  vector<double>  *PV_z;
  vector<double>  *PV_xerr;
  vector<double>  *PV_yerr;
  vector<double>  *PV_zerr;
  vector<double>  *PV_normchi2;
  vector<double>  *PV_chi2;
  vector<double>  *PV_ndof;
  vector<int>     *PV_ntracks;
  vector<bool>    *PV_validity;
  vector<bool>    *PV_fake;
  vector<double>  *PV_SumPtTracks;
  Short_t         NPVtx;
  vector<bool>    *Mu_hasTriggeredIso;
  vector<bool>    *Mu_hasTriggeredIsoEr;
  vector<bool>    *Mu_hasTriggeredIsoTk;
  //vector<bool>    *Mu_hasTriggeredIsoTkEr;
  vector<bool>    *Mu_hasTriggeredMu50;
  vector<bool>    *Mu_hasTriggeredTkMu50;
  vector<float>   *Mu_pt;
  vector<float>   *Mu_px;
  vector<float>   *Mu_py;
  vector<float>   *Mu_pz;
  vector<float>   *Mu_en;
  vector<float>   *Mu_phi;
  vector<float>   *Mu_eta;
  vector<short>   *Mu_charge;
  vector<float>   *Mu_triggerSF_BF;
  vector<float>   *Mu_triggerSF_GH;
  vector<float>   *Mu_idSF_BF;
  vector<float>   *Mu_idSF_GH;
  vector<float>   *Mu_isoSF_BF;
  vector<float>   *Mu_isoSF_GH;

  vector<float>   *Mu_hptriggerSF_BF;
  vector<float>   *Mu_hptriggerSF_GH;
  vector<float>   *Mu_hpidSF_BF;
  vector<float>   *Mu_hpidSF_GH;
  vector<float>   *Mu_hpisoSF_BF;
  vector<float>   *Mu_hpisoSF_GH;

  vector<float>   *Mu_roch_correction;
  vector<float>   *Mu_vertex_vx;
  vector<float>   *Mu_vertex_vy;
  vector<float>   *Mu_vertex_vz;
  vector<short>   *Mu_isPFMu;
  vector<short>   *Mu_isMediumMu;
  vector<short>   *Mu_isTightMu;
  vector<short>   *Mu_isHighPtMu;
  vector<short>   *Mu_isMuGlobal;
  vector<short>   *Mu_isMuTracker;
  vector<short>   *Mu_isMuStandAlone;
  vector<int>     *Mu_numberOfChambers;
  vector<int>     *Mu_numberOfMatches;
  vector<int>     *Mu_numberOfMatchedStation;
  vector<float>   *Mu_dB;
  vector<int>     *Mu_stationMask;
  vector<int>     *Mu_numberOfMatchedRPCLayers;
  vector<int>     *Mu_timingVeto;
  vector<float>   *Mu_sumPtIsoR03;
  vector<float>   *Mu_ntkIsoR03;
  vector<float>   *Mu_emIsoR03;
  vector<float>   *Mu_hadIsoR03;
  vector<float>   *Mu_hoEtIsoR03;
  vector<float>   *Mu_nJetsIsoR03;
  vector<float>   *Mu_sumPtIsoR05;
  vector<float>   *Mu_ntkIsoR05;
  vector<float>   *Mu_emIsoR05;
  vector<float>   *Mu_hadIsoR05;
  vector<float>   *Mu_hoEtIsoR05;
  vector<float>   *Mu_nJetsIsoR05;
  vector<float>   *Mu_sumCHPtPFIsoR04;
  vector<float>   *Mu_sumCPPtPFIsoR04;
  vector<float>   *Mu_sumNHPtPFIsoR04;
  vector<float>   *Mu_sumPhoEtPFIsoR04;
  vector<float>   *Mu_sumPUPtPFIsoR04;
  vector<float>   *Mu_sumCHPtPFIsoR03;
  vector<float>   *Mu_sumCPPtPFIsoR03;
  vector<float>   *Mu_sumNHPtPFIsoR03;
  vector<float>   *Mu_sumPhoEtPFIsoR03;
  vector<float>   *Mu_sumPUPtPFIsoR03;
  vector<float>   *Mu_calEnergyEm;
  vector<float>   *Mu_calEnergyHad;
  vector<float>   *Mu_calEnergyHo;
  vector<float>   *Mu_calEnergyEmS9;
  vector<float>   *Mu_calEnergyHadS9;
  vector<float>   *Mu_calEnergyHoS9;
  vector<int>     *Mu_numberOfHits_sta;
  vector<short>   *Mu_recHitsSize;
  vector<float>   *Mu_normchi2_sta;
  vector<float>   *Mu_dxy_sta;
  vector<float>   *Mu_dz_sta;
  vector<float>   *Mu_vx_sta;
  vector<float>   *Mu_vy_sta;
  vector<float>   *Mu_vz_sta;
  vector<float>   *GLBMu_pt;
  vector<float>   *GLBMu_pt_err;
  vector<float>   *GLBMu_eta;
  vector<float>   *GLBMu_phi;
  vector<float>   *GLBMu_chi2;
  vector<float>   *GLBMu_ndf;
  vector<float>   *GLBMu_qOverPt;
  vector<float>   *Mu_normchi2_glb;
  vector<float>   *Mu_dxy_glb;
  vector<float>   *Mu_dz_glb;
  vector<int>     *Mu_numberOfPixelHits_glb;
  vector<int>     *Mu_numberOfTrackerHits_glb;
  vector<int>     *Mu_numberOfMuonsHits_glb;
  vector<float>   *Mu_vx_glb;
  vector<float>   *Mu_vy_glb;
  vector<float>   *Mu_vz_glb;
  vector<float>   *TRKMu_pt;
  vector<float>   *TRKMu_pt_err;
  vector<float>   *TRKMu_eta;
  vector<float>   *TRKMu_phi;
  vector<float>   *TRKMu_chi2;
  vector<float>   *TRKMu_ndf;
  vector<float>   *TRKMu_qOverPt;
  vector<float>   *Mu_normchi2_trk;
  vector<float>   *Mu_dxy_trk;
  vector<float>   *Mu_dz_trk;
  vector<int>     *Mu_numberOfPixelHits_trk;
  vector<int>     *Mu_numberOfTrackerHits_trk;
  vector<float>   *Mu_dzPV_trk;
  vector<int>     *Mu_trackerLayersWithMeasurement_trk;
  Short_t         Nmuons;
  Short_t         NGlobalMuons;
  Short_t         NTrackerMuons;
  Short_t         NStandAloneMuons;
  vector<float>   *TPMu_pt;
  vector<float>   *TPMu_pt_err;
  vector<float>   *TPMu_eta;
  vector<float>   *TPMu_phi;
  vector<float>   *TPMu_chi2;
  vector<float>   *TPMu_ndf;
  vector<float>   *TPMu_qOverPt;
  Short_t         NpfJets;
  Short_t         NbTagHE_pfJets;
  Short_t         NbTagHP_pfJets;
  vector<float>   *Jet_PUmva_pfjet;
  vector<bool>    *Jet_PULoose_pfjet;
  vector<bool>    *Jet_PUMedium_pfjet;
  vector<bool>    *Jet_PUTight_pfjet;
  vector<float>   *Jet_pt_pfjet;
  vector<float>   *Jet_ptL5_pfjet;
  vector<float>   *Jet_ptL7_pfjet;
  vector<float>   *Jet_px_pfjet;
  vector<float>   *Jet_py_pfjet;
  vector<float>   *Jet_pz_pfjet;
  vector<float>   *Jet_en_pfjet;
  vector<float>   *Jet_phi_pfjet;
  vector<float>   *Jet_eta_pfjet;
  vector<float>   *Jet_Area_pfjet;
  vector<float>   *Jet_JECunc_pfjet;
  vector<bool>    *Jet_isLoose_pfjet;
  vector<bool>    *Jet_isTight_pfjet;
  vector<bool>    *Jet_isTightLepVeto_pfjet;
  vector<float>   *Jet_ChargedHadEn_pfjet;
  vector<float>   *Jet_NeutralHadEn_pfjet;
  vector<float>   *Jet_ChargedEmEn_pfjet;
  vector<float>   *Jet_ChargedMuEn_pfjet;
  vector<float>   *Jet_NeutralEmEn_pfjet;
  vector<float>   *Jet_ChargedMultiplicity_pfjet;
  vector<float>   *Jet_NeutralMultiplicity_pfjet;
  vector<float>   *Jet_MuonMultiplicity_pfjet;
  vector<float>   *Jet_ElectronMultiplicity_pfjet;
  vector<float>   *Jet_discriminatorHE_pfjet;
  vector<float>   *Jet_discriminatorHP_pfjet;
  vector<float>   *Jet_discriminatorCSV_pfjet;
  Short_t         NpfMet;
  vector<float>   *Met_pt_pfmet; //Questa va salvata nel tree (in for loop su NpfMet)
  vector<float>   *Met_phi_pfmet;
  vector<float>   *Met_eta_pfmet;
  vector<float>   *Met_energy_pfmet;
  vector<float>   *Met_sumet_pfmet;
  vector<float>   *Met_ptsignificance_pfmet;
  vector<float>   *Met_etsignificance_pfmet;
  vector<float>   *Met_type01smear_pt_pfmet;
  vector<float>   *Met_totUp_pt_pfmet;
  vector<float>   *Met_totDown_pt_pfmet;
  vector<float>   *Met_jetEnUp_pfmet;
  vector<float>   *Met_jetEnDown_pfmet;
  vector<float>   *Met_jetResUp_pfmet;
  vector<float>   *Met_jetResDown_pfmet;
  vector<float>   *Met_unclusterUp_pfmet;
  vector<float>   *Met_unclusterDown_pfmet;
  vector<float>   *Met_tauUp_pfmet;
  vector<float>   *Met_tauDown_pfmet;
  vector<float>   *Met_eleUp_pfmet;
  vector<float>   *Met_eleDown_pfmet;
  vector<float>   *Met_photonUp_pfmet;
  vector<float>   *Met_photonDown_pfmet;
  vector<float>   *Met_muUp_pfmet;
  vector<float>   *Met_muDown_pfmet;
  vector<float>   *Met_phi_umet;
  vector<float>   *Met_pt_umet;
  vector<float>   *Met_sumet_umet;

  // List of branches
  TBranch        *b_metfilter;   //!
  TBranch        *b_runnumber;   //!
  TBranch        *b_lumiblock;   //!
  TBranch        *b_eventNumber;   //!
  TBranch        *b_timestamp;   //!
  TBranch        *b_bunchXing;   //!
  TBranch        *b_orbitNum;   //!
  TBranch        *b_NBeam;   //!
  TBranch        *b_BS_x;   //!
  TBranch        *b_BS_y;   //!
  TBranch        *b_BS_z;   //!
  TBranch        *b_BS_xerr;   //!
  TBranch        *b_BS_yerr;   //!
  TBranch        *b_BS_zerr;   //!
  TBranch        *b_BS_Wx;   //!
  TBranch        *b_BS_Wy;   //!
  TBranch        *b_BS_Wxerr;   //!
  TBranch        *b_BS_Wyerr;   //!
  TBranch        *b_BS_dxdz;   //!
  TBranch        *b_BS_dxdzerr;   //!
  TBranch        *b_BS_dydz;   //!
  TBranch        *b_BS_dydzerr;   //!
  TBranch        *b_NGenP;   //!
  TBranch        *b_Genp_particleId;   //!
  TBranch        *b_Genp_status;   //!
  TBranch        *b_Genp_pt;   //!
  TBranch        *b_Genp_p;   //!
  TBranch        *b_Genp_et;   //!
  TBranch        *b_Genp_e;   //!
  TBranch        *b_Genp_mt;   //!
  TBranch        *b_Genp_m;   //!
  TBranch        *b_Genp_eta;   //!
  TBranch        *b_Genp_phi;   //!
  TBranch        *b_Genp_vx;   //!
  TBranch        *b_Genp_vy;   //!
  TBranch        *b_Genp_vz;   //!
  TBranch        *b_Genp_nMmothers;   //!
  TBranch        *b_Genp_nDaughters;   //!
  TBranch        *b_Genp_particleId_mother;   //!
  TBranch        *b_Genp_status_mother;   //!
  TBranch        *b_Genp_pt_mother;   //!
  TBranch        *b_Genp_eta_mother;   //!
  TBranch        *b_Genp_phi_mother;   //!
  TBranch        *b_Genp_m_mother;   //!
  TBranch        *b_MyWeight;   //!
  TBranch        *b_MyWeightUp;   //!
  TBranch        *b_MyWeightDown;   //!
  TBranch        *b_Nhlt;   //!
  TBranch        *b_hlt_path;   //!
  TBranch        *b_PV_x;   //!
  TBranch        *b_PV_y;   //!
  TBranch        *b_PV_z;   //!
  TBranch        *b_PV_xerr;   //!
  TBranch        *b_PV_yerr;   //!
  TBranch        *b_PV_zerr;   //!
  TBranch        *b_PV_normchi2;   //!
  TBranch        *b_PV_chi2;   //!
  TBranch        *b_PV_ndof;   //!
  TBranch        *b_PV_ntracks;   //!
  TBranch        *b_PV_validity;   //!
  TBranch        *b_PV_fake;   //!
  TBranch        *b_PV_SumPtTracks;   //!
  TBranch        *b_NPVtx;   //!
  TBranch        *b_Mu_hasTriggeredIso;   //!
  TBranch        *b_Mu_hasTriggeredIsoEr;   //!
  TBranch        *b_Mu_hasTriggeredIsoTk;   //!
  //TBranch        *b_Mu_hasTriggeredIsoTkEr;   //!
  TBranch        *b_Mu_hasTriggeredTkMu50;   //!
  TBranch        *b_Mu_hasTriggeredMu50;   //!
  TBranch        *b_Mu_pt;   //!
  TBranch        *b_Mu_px;   //!
  TBranch        *b_Mu_py;   //!
  TBranch        *b_Mu_pz;   //!
  TBranch        *b_Mu_en;   //!
  TBranch        *b_Mu_phi;   //!
  TBranch        *b_Mu_eta;   //!
  TBranch        *b_Mu_charge;   //!
  TBranch        *b_Mu_triggerSF_BF;   //!
  TBranch        *b_Mu_triggerSF_GH;   //!
  TBranch        *b_Mu_idSF_BF;   //!
  TBranch        *b_Mu_idSF_GH;   //!
  TBranch        *b_Mu_isoSF_BF;   //!
  TBranch        *b_Mu_isoSF_GH;   //!

  TBranch        *b_Mu_hptriggerSF_BF;   //!
  TBranch        *b_Mu_hptriggerSF_GH;   //!
  TBranch        *b_Mu_hpidSF_BF;   //!
  TBranch        *b_Mu_hpidSF_GH;   //!
  TBranch        *b_Mu_hpisoSF_BF;   //!
  TBranch        *b_Mu_hpisoSF_GH;   //!

  TBranch        *b_Mu_roch_correction;   //!
  TBranch        *b_Mu_vertex_vx;   //!
  TBranch        *b_Mu_vertex_vy;   //!
  TBranch        *b_Mu_vertex_vz;   //!
  TBranch        *b_Mu_isPFMu;   //!
  TBranch        *b_Mu_isMediumMu;   //!
  TBranch        *b_Mu_isTightMu;   //!
  TBranch        *b_Mu_isHighPtMu;   //!
  TBranch        *b_Mu_isMuGlobal;   //!
  TBranch        *b_Mu_isMuTracker;   //!
  TBranch        *b_Mu_isMuStandAlone;   //!
  TBranch        *b_Mu_numberOfChambers;   //!
  TBranch        *b_Mu_numberOfMatches;   //!
  TBranch        *b_Mu_numberOfMatchedStation;   //!
  TBranch        *b_Mu_dB;   //!
  TBranch        *b_Mu_stationMask;   //!
  TBranch        *b_Mu_numberOfMatchedRPCLayers;   //!
  TBranch        *b_Mu_timingVeto;   //!
  TBranch        *b_Mu_sumPtIsoR03;   //!
  TBranch        *b_Mu_ntkIsoR03;   //!
  TBranch        *b_Mu_emIsoR03;   //!
  TBranch        *b_Mu_hadIsoR03;   //!
  TBranch        *b_Mu_hoEtIsoR03;   //!
  TBranch        *b_Mu_nJetsIsoR03;   //!
  TBranch        *b_Mu_sumPtIsoR05;   //!
  TBranch        *b_Mu_ntkIsoR05;   //!
  TBranch        *b_Mu_emIsoR05;   //!
  TBranch        *b_Mu_hadIsoR05;   //!
  TBranch        *b_Mu_hoEtIsoR05;   //!
  TBranch        *b_Mu_nJetsIsoR05;   //!
  TBranch        *b_Mu_sumCHPtPFIsoR04;   //!
  TBranch        *b_Mu_sumCPPtPFIsoR04;   //!
  TBranch        *b_Mu_sumNHPtPFIsoR04;   //!
  TBranch        *b_Mu_sumPhoEtPFIsoR04;   //!
  TBranch        *b_Mu_sumPUPtPFIsoR04;   //!
  TBranch        *b_Mu_sumCHPtPFIsoR03;   //!
  TBranch        *b_Mu_sumCPPtPFIsoR03;   //!
  TBranch        *b_Mu_sumNHPtPFIsoR03;   //!
  TBranch        *b_Mu_sumPhoEtPFIsoR03;   //!
  TBranch        *b_Mu_sumPUPtPFIsoR03;   //!
  TBranch        *b_Mu_calEnergyEm;   //!
  TBranch        *b_Mu_calEnergyHad;   //!
  TBranch        *b_Mu_calEnergyHo;   //!
  TBranch        *b_Mu_calEnergyEmS9;   //!
  TBranch        *b_Mu_calEnergyHadS9;   //!
  TBranch        *b_Mu_calEnergyHoS9;   //!
  TBranch        *b_Mu_numberOfHits_sta;   //!
  TBranch        *b_Mu_recHitsSize;   //!
  TBranch        *b_Mu_normchi2_sta;   //!
  TBranch        *b_Mu_dxy_sta;   //!
  TBranch        *b_Mu_dz_sta;   //!
  TBranch        *b_Mu_vx_sta;   //!
  TBranch        *b_Mu_vy_sta;   //!
  TBranch        *b_Mu_vz_sta;   //!
  TBranch        *b_GLBMu_pt;   //!
  TBranch        *b_GLBMu_pt_err;   //!
  TBranch        *b_GLBMu_eta;   //!
  TBranch        *b_GLBMu_phi;   //!
  TBranch        *b_GLBMu_chi2;   //!
  TBranch        *b_GLBMu_ndf;   //!
  TBranch        *b_GLBMu_qOverPt;   //!
  TBranch        *b_Mu_normchi2_glb;   //!
  TBranch        *b_Mu_dxy_glb;   //!
  TBranch        *b_Mu_dz_glb;   //!
  TBranch        *b_Mu_numberOfPixelHits_glb;   //!
  TBranch        *b_Mu_numberOfTrackerHits_glb;   //!
  TBranch        *b_Mu_numberOfMuonsHits_glb;   //!
  TBranch        *b_Mu_vx_glb;   //!
  TBranch        *b_Mu_vy_glb;   //!
  TBranch        *b_Mu_vz_glb;   //!
  TBranch        *b_TRKMu_pt;   //!
  TBranch        *b_TRKMu_pt_err;   //!
  TBranch        *b_TRKMu_eta;   //!
  TBranch        *b_TRKMu_phi;   //!
  TBranch        *b_TRKMu_chi2;   //!
  TBranch        *b_TRKMu_ndf;   //!
  TBranch        *b_TRKMu_qOverPt;   //!
  TBranch        *b_Mu_normchi2_trk;   //!
  TBranch        *b_Mu_dxy_trk;   //!
  TBranch        *b_Mu_dz_trk;   //!
  TBranch        *b_Mu_numberOfPixelHits_trk;   //!
  TBranch        *b_Mu_numberOfTrackerHits_trk;   //!
  TBranch        *b_Mu_dzPV_trk;   //!
  TBranch        *b_Mu_trackerLayersWithMeasurement_trk;   //!
  TBranch        *b_Nmuons;   //!
  TBranch        *b_NGlobalMuons;   //!
  TBranch        *b_NTrackerMuons;   //!
  TBranch        *b_NStandAloneMuons;   //!
  TBranch        *b_TPMu_pt;   //!
  TBranch        *b_TPMu_pt_err;   //!
  TBranch        *b_TPMu_eta;   //!
  TBranch        *b_TPMu_phi;   //!
  TBranch        *b_TPMu_chi2;   //!
  TBranch        *b_TPMu_ndf;   //!
  TBranch        *b_TPMu_qOverPt;   //!
  TBranch        *b_NpfJets;   //!
  TBranch        *b_NbTagHE_pfJets;   //!
  TBranch        *b_NbTagHP_pfJets;   //!
  TBranch        *b_Jet_PUmva_pfjet;   //!
  TBranch        *b_Jet_PULoose_pfjet;   //!
  TBranch        *b_Jet_PUMedium_pfjet;   //!
  TBranch        *b_Jet_PUTight_pfjet;   //!
  TBranch        *b_Jet_pt_pfjet;   //!
  TBranch        *b_Jet_ptL5_pfjet;   //!
  TBranch        *b_Jet_ptL7_pfjet;   //!
  TBranch        *b_Jet_px_pfjet;   //!
  TBranch        *b_Jet_py_pfjet;   //!
  TBranch        *b_Jet_pz_pfjet;   //!
  TBranch        *b_Jet_en_pfjet;   //!
  TBranch        *b_Jet_phi_pfjet;   //!
  TBranch        *b_Jet_eta_pfjet;   //!
  TBranch        *b_Jet_Area_pfjet;   //!
  TBranch        *b_Jet_JECunc_pfjet;   //!
  TBranch        *b_Jet_isLoose_pfjet;   //!
  TBranch        *b_Jet_isTight_pfjet;   //!
  TBranch        *b_Jet_isTightLepVeto_pfjet;   //!
  TBranch        *b_Jet_ChargedHadEn_pfjet;   //!
  TBranch        *b_Jet_NeutralHadEn_pfjet;   //!
  TBranch        *b_Jet_ChargedEmEn_pfjet;   //!
  TBranch        *b_Jet_ChargedMuEn_pfjet;   //!
  TBranch        *b_Jet_NeutralEmEn_pfjet;   //!
  TBranch        *b_Jet_ChargedMultiplicity_pfjet;   //!
  TBranch        *b_Jet_NeutralMultiplicity_pfjet;   //!
  TBranch        *b_Jet_MuonMultiplicity_pfjet;   //!
  TBranch        *b_Jet_ElectronMultiplicity_pfjet;   //!
  TBranch        *b_Jet_discriminatorHE_pfjet;   //!
  TBranch        *b_Jet_discriminatorHP_pfjet;   //!
  TBranch        *b_Jet_discriminatorCSV_pfjet;   //!
  TBranch        *b_NpfMet;   //!
  TBranch        *b_Met_pt_pfmet;   //!
  TBranch        *b_Met_phi_pfmet;   //!
  TBranch        *b_Met_eta_pfmet;   //!
  TBranch        *b_Met_energy_pfmet;   //!
  TBranch        *b_Met_sumet_pfmet;   //!
  TBranch        *b_Met_ptsignificance_pfmet;   //!
  TBranch        *b_Met_etsignificance_pfmet;   //!
  TBranch        *b_Met_type01smear_pt_pfmet;   //!
  TBranch        *b_Met_totUp_pt_pfmet;   //!
  TBranch        *b_Met_totDown_pt_pfmet;   //!
  TBranch        *b_Met_jetEnUp_pfmet;   //!
  TBranch        *b_Met_jetEnDown_pfmet;   //!
  TBranch        *b_Met_jetResUp_pfmet;   //!
  TBranch        *b_Met_jetResDown_pfmet;   //!
  TBranch        *b_Met_unclusterUp_pfmet;   //!
  TBranch        *b_Met_unclusterDown_pfmet;   //!
  TBranch        *b_Met_tauUp_pfmet;   //!
  TBranch        *b_Met_tauDown_pfmet;   //!
  TBranch        *b_Met_eleUp_pfmet;   //!
  TBranch        *b_Met_eleDown_pfmet;   //!
  TBranch        *b_Met_photonUp_pfmet;   //!
  TBranch        *b_Met_photonDown_pfmet;   //!
  TBranch        *b_Met_muUp_pfmet;   //!
  TBranch        *b_Met_muDown_pfmet;   //!
  TBranch        *b_Met_phi_umet;   //!
  TBranch        *b_Met_pt_umet;   //!
  TBranch        *b_Met_sumet_umet;   //!
  
   
  NewAnalyzer(TString dataset, float mA, float min, float max, int ScaleCorrection, bool HptReweight, TTree *tree=0);
  virtual ~NewAnalyzer();
  virtual Int_t    Cut(Long64_t entry);
  virtual Int_t    GetEntry(Long64_t entry);
  virtual Long64_t LoadTree(Long64_t entry);
  virtual void     Init(TTree *tree);
  virtual void     Loop();
  virtual void     Draw();
  virtual void     Draw2();
  virtual void     BookHistos();
  virtual Bool_t   Notify();
  virtual void     Show(Long64_t entry = -1);
  void             selectDimuonPair(std::vector<TLorentzVector>, std::vector<bool> , std::vector<int> ,  std::vector<TLorentzVector>&);
 
  TLorentzVector   buildDimuonPair(std::vector<TLorentzVector>,  double , double );
  void             CleanJetsFromMuons(std::vector<TLorentzVector>& , std::vector<float>&,  std::vector<TLorentzVector> , float);
};

#endif

#ifdef NewAnalyzer_cxx
NewAnalyzer::NewAnalyzer(TString dataset, float mA, float min, float max, int ScaleCorrection, bool HptReweight, TTree *tree) // : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.

  sel_dataset = dataset;

  //highptselection = sel;

  mass = mA;
  Min_mass = min;
  Max_mass = max;

  MomentumScaleCorrection = ScaleCorrection;

  Higgs_pt_reweight = HptReweight;

  if (tree == 0) { 
    

    TChain * chain = new TChain("analysis/MSSMtree",""); 

    if(sel_dataset.Contains("Tanb-15"))
      std::cout << " WARNING !!! 2016 samples: for mA < 200 Tanb-15 really corresponds to simulated signal at Tanb-14 " << std::endl;

    if(sel_dataset.Contains("Tanb-10"))
      std::cout << " WARNING !!! 2016 samples: for mA < 200 Tanb-10 really corresponds to simulated signal at Tanb-11 " << std::endl;   

    if(sel_dataset == "guest")
      //      chain->Add("/afs/cern.ch/work/f/federica/MSSM/Federica/CMSSW_8_0_26_patch1/src/MyAnalyzer/MiniAnalyzer/test/MSSM_ggA_mA300_tanB50.root");
      chain->Add("/afs/cern.ch/work/f/federica/MSSM/Federica/CMSSW_8_0_26_patch1/src/MyAnalyzer/MiniAnalyzer/test/MSSM_ggA_mA1000_tanB20.root");
      
    if(sel_dataset == "bbh125")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH125-HiggsToMuMu_13TeV_pythia8_Merged.root"); 
    
    if(sel_dataset == "ggh125")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH125-HiggsToMuMu_13TeV_pythia8_Merged.root"); 
    
     
    if(sel_dataset == "bbA_MA1000_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA1000_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-1000_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA110_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-110_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA120_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-120_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA130_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-130_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA140_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-140_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA150_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-150_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA160_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-160_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA170_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-170_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA180_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-180_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA190_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-190_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA200_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-200_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA225_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-225_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA250_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-250_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA275_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-275_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300"){
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-5_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-10_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-15_13TeV_pythia8_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-20_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-25_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-30_13TeV_pythia8_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-35_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-40_13TeV_pythia8_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-45_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-50_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-55_13TeV_pythia8_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-60_13TeV_pythia8_Merged.root");
    }
    if(sel_dataset == "bbA_MA300_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-20_13TeV_pythia8_Merged.root");
    if(sel_dataset == "bbA_MA300_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA300_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-300_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA350_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-350_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA400_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-400_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA450_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-450_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA500_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-500_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA600_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-600_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA700_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-700_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA800_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-800_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbA_MA900_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbA-HiggsToMuMu_MA-900_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA1000_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-1000_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA110_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-110_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA120_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-120_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA130_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-130_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA140_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-140_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA150_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-150_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA160_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-160_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA170_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-170_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA180_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-180_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA190_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-190_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA200_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-200_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA225_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-225_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA250_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-250_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA275_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-275_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-20_13TeV_pythia8_Merged.root");  	
    if(sel_dataset == "bbH_MA300_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA300_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-300_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA350_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-350_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA400_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-400_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA450_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-450_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA500_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-500_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA600_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-600_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA700_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-700_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA800_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-800_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "bbH_MA900_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMbbH-HiggsToMuMu_MA-900_Tanb-60_13TeV_pythia8_Merged.root");  
    if(sel_dataset == "ggA_MA1000_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA1000_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-1000_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA110_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-110_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA120_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-120_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA130_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-130_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA140_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-140_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA150_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-150_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA160_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-160_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA170_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-170_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA180_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-180_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA190_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-190_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA200_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-200_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA225_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-225_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA250_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-250_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA275_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-275_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA300_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-300_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA350_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-350_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA400_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-400_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA450_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-450_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA500_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-500_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA600_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-600_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA700_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-700_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA800_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-800_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggA_MA900_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggA-HiggsToMuMu_MA-900_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA1000_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-1000_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA110_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-110_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA120_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-120_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA130_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-130_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA140_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-140_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA150_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-150_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA160_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-160_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA170_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-170_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA180_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-180_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-11_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-14_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-17")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-17_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA190_Tanb-8")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-190_Tanb-8_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA200_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-200_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA225_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-225_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA250_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-250_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA275_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-275_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA300_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-300_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA350_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-350_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA400_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-400_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA450_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-450_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA500_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-500_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA600_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-600_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA700_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-700_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA800_Tanb-60")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-800_Tanb-60_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-10")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-10_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-15")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-15_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-20")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-20_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-25")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-25_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-30")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-30_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-35")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-35_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-40")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-40_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-45")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-45_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-50")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-50_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-55")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-55_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-5")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/MSSMggH-HiggsToMuMu_MA-900_Tanb-5_13TeV_pythia8_Merged.root"); 
    if(sel_dataset == "ggH_MA900_Tanb-60")
      chain->Add("MSSMggH-HiggsToMuMu_MA-900_Tanb-60_13TeV_pythia8_Merged.root"); 
   

    // ====================================== data =================================================
    
    if(sel_dataset == "data_Run2016B"){
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016B-03Feb2017_ver2-v2_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016B-03Feb2017_ver2-v2_Merged_bis.root");
    }
    if(sel_dataset == "data_Run2016C")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016C-03Feb2017-v1_Merged.root"); 
    if(sel_dataset == "data_Run2016D")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016D-03Feb2017-v1_Merged.root"); 
    if(sel_dataset == "data_Run2016E")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016E-03Feb2017-v1_Merged.root"); 
    if(sel_dataset == "data_Run2016F")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016F-03Feb2017-v1_Merged.root"); 
    if(sel_dataset == "data_Run2016G")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016G-03Feb2017-v1_Merged.root"); 
    if(sel_dataset == "data_Run2016H"){
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016H-03Feb2017_ver3-v1_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016H-03Feb2017_ver2-v1_Merged.root");
    }
    // ================================= ***** ALL DATA ***** =================================================
    if (sel_dataset == "all_2016_data") {
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016B-03Feb2017_ver2-v2_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016C-03Feb2017-v1_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016D-03Feb2017-v1_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016E-03Feb2017-v1_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016G-03Feb2017-v1_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016H-03Feb2017_ver3-v1_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_data_Run2016H-03Feb2017_ver2-v1_Merged.root");
      
    }

    // ====================================== bkg 2016 =================================================
    
    /* if(sel_dataset == "DY_nlo"){ */
    /*   chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged.root"); */
    /*   chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged_bis.root"); */
    /*   chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged_tris.root"); */
    /*   chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged_tris.root"); */
    /* } */
    

    if(sel_dataset == "DY_nlo1")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged.root");
    if(sel_dataset == "DY_nlo2")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged_bis.root");
    if(sel_dataset == "DY_nlo3")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged_tris.root");
    if(sel_dataset == "DY_nlo4")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_nlo_ext_Merged_quis.root");
    

    if(sel_dataset == "DY_mad"){
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged.root"); 
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged_bis.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged_quis.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged_quis.root");
    }


    if(sel_dataset == "DY_mad1")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged.root"); 
    if(sel_dataset == "DY_mad2")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged_bis.root");
    if(sel_dataset == "DY_mad3")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged_quis.root");
    if(sel_dataset == "DY_mad4")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_DYJetsToLL_M-50_asymptotic_Moriond17_madgraph_Merged_quis.root");
    

    if(sel_dataset == "tWantitop")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_tWantitop_asymptotic_Moriond17_pow_Merged.root"); 
    if(sel_dataset == "tWtop")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_tWtop_asymptotic_Moriond17_pow_Merged.root"); 

    if(sel_dataset == "ttbar_nlo")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_TTbarJets_nlo_Merged.root"); 

    if(sel_dataset == "ttbar_mad1")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_TTbarJets_madgraph_Merged.root");
    if(sel_dataset == "ttbar_mad2")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_TTbarJets_madgraph_Merged_bis.root");

    if(sel_dataset == "ttbar_mad"){
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_TTbarJets_madgraph_Merged.root");
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_TTbarJets_madgraph_Merged_bis.root");
    }

    if(sel_dataset == "WW")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_WW2L2Nu_asymptotic_Moriond17_pow_Merged.root"); 

    if(sel_dataset == "WZ2L2Q")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_WZ2L2Q_asymptotic_Moriond17_pow_Merged.root"); 
    if(sel_dataset == "WZ3LNu")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_WZ3LNu_asymptotic_Moriond17_pow_Merged.root"); 

    if(sel_dataset == "ZZ2L2Nu")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_ZZ2L2Nu_asymptotic_Moriond17_pow_Merged.root"); 
    if(sel_dataset == "ZZ2L2Q")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_ZZ2L2Q_asymptotic_Moriond17_pow_Merged.root"); 
   
    if(sel_dataset == "SingleTopAntitopT")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_SingleTopAntitopT_Merged.root"); 
    if(sel_dataset == "SingleTopT")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_SingleTopT_Merged.root");
    if(sel_dataset == "SingleTopS")
      chain->Add("/eos/cms/store/user/federica/Moriond18/V2/NTuple_mc_SingleTopS_Merged.root"); 



    // ======================================== Drell-Yan =========================================
    
    if (sel_dataset == "DY_mad_2017")       
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_mc_DYJetsToLL_M-50_asymptotic_Summer17_madgraph/Merged.root");
    
    
    if (sel_dataset == "ttbar_mad_2017")
      chain->Add("/eos/cms/store/user/federica/tier3/EPS17/NTuple_mc_TTbarJets_madgraph/Merged_170610_082941.root");
    
    if (sel_dataset == "ttbar_mad_2017")
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_mc_TTbarJets_nlo_Summer17/Merged.root");
    
    
    // ====================================== ALL Data 2017 =================================================
    if (sel_dataset == "data_2017All") {
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_data_Run2017B-PromptReco-v1/Merged.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_data_Run2017B-PromptReco-v2/Merged.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_data_Run2017C-PromptReco-v1/Merged.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_data_Run2017C-PromptReco-v2/Merged.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMcMoriond18/NTuple_data_Run2017C-PromptReco-v3/Merged.root");
    }

    
    // --------- signal 300 GeV
    if (sel_dataset == "bbA_mA300_tanB20") {
      //      chain->Add("/home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/MSSM_NTuple_bbA_mA300_tanB20.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMoriond17/NTuple_mc_Signal/MatchedStationsOLD/MSSM_NTuple_bbA_mA300_tanB20.root");
    }
    if (sel_dataset == "ggA_mA300_tanB20") {
      //   chain->Add("/home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/MSSM_NTuple_ggA_mA300_tanB20.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMoriond17/NTuple_mc_Signal/MatchedStationsOLD/MSSM_NTuple_ggA_mA300_tanB20.root");
    }
    if (sel_dataset == "bbH_mA300_tanB20") {
      //     chain->Add("/home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/MSSM_NTuple_bbH0_mA300_tanB20.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMoriond17/NTuple_mc_Signal/MatchedStationsOLD/MSSM_NTuple_bbH0_mA300_tanB20.root");
    }
    if (sel_dataset == "ggH_mA300_tanB20") {
      //  chain->Add("/home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/MSSM_NTuple_ggH0_mA300_tanB20.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMoriond17/NTuple_mc_Signal/MatchedStationsOLD/MSSM_NTuple_ggH0_mA300_tanB20.root");
    }
    if (sel_dataset == "ggh_mA300_tanB20") {
      chain->Add("/home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/MSSM_NTuple_ggh_mA300_tanB20.root");
    }
    // --------- signal 500 GeV
    
    if (sel_dataset == "bbA_mA500_tanB20") {
      //     chain->Add("/home/CMS-T3/marcelli/MSSM/CMSSW_8_0_21/src/root_input/MSSM_NTuple_bbA_mA500_tanB20.root");
      chain->Add("/eos/cms/store/user/federica/tier3/DataMoriond17/NTuple_mc_Signal/MatchedStationsOLD/MSSM_NTuple_bbA_mA500_tanB20.root");
    }	
    
    
    tree = chain;
  }
  Init(tree);
}

NewAnalyzer::~NewAnalyzer()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t NewAnalyzer::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t NewAnalyzer::LoadTree(Long64_t entry)
{
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;

  if (!fChain->InheritsFrom(TChain::Class()))  return centry;
  TChain *chain = (TChain*)fChain;

  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber();
    Notify();
  }
  return centry;
}

void NewAnalyzer::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).

  BookHistos();

  // Set object pointer

  Genp_particleId = 0;
  Genp_status = 0;
  Genp_pt = 0;
  Genp_p = 0;
  Genp_et = 0;
  Genp_e = 0;
  Genp_mt = 0;
  Genp_m = 0;
  Genp_eta = 0;
  Genp_phi = 0;
  Genp_vx = 0;
  Genp_vy = 0;
  Genp_vz = 0;
  Genp_nMmothers = 0;
  Genp_nDaughters = 0;
  Genp_particleId_mother = 0;
  Genp_status_mother = 0;
  Genp_pt_mother = 0;
  Genp_eta_mother = 0;
  Genp_phi_mother = 0;
  Genp_m_mother = 0; 
  hlt_path = 0;
  PV_x = 0;
  PV_y = 0;
  PV_z = 0;
  PV_xerr = 0;
  PV_yerr = 0;
  PV_zerr = 0;
  PV_normchi2 = 0;
  PV_chi2 = 0;
  PV_ndof = 0;
  PV_ntracks = 0;
  PV_validity = 0;
  PV_fake = 0;
  PV_SumPtTracks = 0;
  Mu_hasTriggeredIso = 0;
  Mu_hasTriggeredIsoEr = 0;
  Mu_hasTriggeredIsoTk = 0;
  //Mu_hasTriggeredIsoTkEr = 0;
  Mu_hasTriggeredMu50 = 0;
  Mu_hasTriggeredTkMu50 = 0; 
  Mu_pt = 0;
  Mu_px = 0;
  Mu_py = 0;
  Mu_pz = 0;
  Mu_en = 0;
  Mu_phi = 0;
  Mu_eta = 0;
  Mu_charge = 0;
  Mu_triggerSF_BF = 0;
  Mu_triggerSF_GH = 0;
  Mu_idSF_BF = 0;
  Mu_idSF_GH = 0;
  Mu_isoSF_BF = 0;
  Mu_isoSF_GH = 0;

  Mu_hptriggerSF_BF = 0;
  Mu_hptriggerSF_GH = 0;
  Mu_hpidSF_BF = 0;
  Mu_hpidSF_GH = 0;
  Mu_hpisoSF_BF = 0;
  Mu_hpisoSF_GH = 0;

  Mu_roch_correction = 0;
  Mu_vertex_vx = 0;
  Mu_vertex_vy = 0;
  Mu_vertex_vz = 0;
  Mu_isPFMu = 0;
  Mu_isMediumMu = 0;
  Mu_isTightMu = 0;
  Mu_isHighPtMu = 0;
  Mu_isMuGlobal = 0;
  Mu_isMuTracker = 0;
  Mu_isMuStandAlone = 0;
  Mu_numberOfChambers = 0;
  Mu_numberOfMatches = 0;
  Mu_numberOfMatchedStation = 0;
  Mu_dB = 0;
  Mu_stationMask = 0;
  Mu_numberOfMatchedRPCLayers = 0;
  Mu_timingVeto = 0;
  Mu_sumPtIsoR03 = 0;
  Mu_ntkIsoR03 = 0;
  Mu_emIsoR03 = 0;
  Mu_hadIsoR03 = 0;
  Mu_hoEtIsoR03 = 0;
  Mu_nJetsIsoR03 = 0;
  Mu_sumPtIsoR05 = 0;
  Mu_ntkIsoR05 = 0;
  Mu_emIsoR05 = 0;
  Mu_hadIsoR05 = 0;
  Mu_hoEtIsoR05 = 0;
  Mu_nJetsIsoR05 = 0;
  Mu_sumCHPtPFIsoR04 = 0;
  Mu_sumCPPtPFIsoR04 = 0;
  Mu_sumNHPtPFIsoR04 = 0;
  Mu_sumPhoEtPFIsoR04 = 0;
  Mu_sumPUPtPFIsoR04 = 0;
  Mu_sumCHPtPFIsoR03 = 0;
  Mu_sumCPPtPFIsoR03 = 0;
  Mu_sumNHPtPFIsoR03 = 0;
  Mu_sumPhoEtPFIsoR03 = 0;
  Mu_sumPUPtPFIsoR03 = 0;
  Mu_calEnergyEm = 0;
  Mu_calEnergyHad = 0;
  Mu_calEnergyHo = 0;
  Mu_calEnergyEmS9 = 0;
  Mu_calEnergyHadS9 = 0;
  Mu_calEnergyHoS9 = 0;
  Mu_numberOfHits_sta = 0;
  Mu_recHitsSize = 0;
  Mu_normchi2_sta = 0;
  Mu_dxy_sta = 0;
  Mu_dz_sta = 0;
  Mu_vx_sta = 0;
  Mu_vy_sta = 0;
  Mu_vz_sta = 0;
  GLBMu_pt = 0;
  GLBMu_pt_err = 0;
  GLBMu_eta = 0;
  GLBMu_phi = 0;
  GLBMu_chi2 = 0;
  GLBMu_ndf = 0;
  GLBMu_qOverPt = 0;
  Mu_normchi2_glb = 0;
  Mu_dxy_glb = 0;
  Mu_dz_glb = 0;
  Mu_numberOfPixelHits_glb = 0;
  Mu_numberOfTrackerHits_glb = 0;
  Mu_numberOfMuonsHits_glb = 0;
  Mu_vx_glb = 0;
  Mu_vy_glb = 0;
  Mu_vz_glb = 0;
  TRKMu_pt = 0;
  TRKMu_pt_err = 0;
  TRKMu_eta = 0;
  TRKMu_phi = 0;
  TRKMu_chi2 = 0;
  TRKMu_ndf = 0;
  TRKMu_qOverPt = 0;
  Mu_normchi2_trk = 0;
  Mu_dxy_trk = 0;
  Mu_dz_trk = 0;
  Mu_numberOfPixelHits_trk = 0;
  Mu_numberOfTrackerHits_trk = 0;
  Mu_dzPV_trk = 0;
  Mu_trackerLayersWithMeasurement_trk = 0;
  TPMu_pt = 0;
  TPMu_pt_err = 0;
  TPMu_eta = 0;
  TPMu_phi = 0;
  TPMu_chi2 = 0;
  TPMu_ndf = 0;
  TPMu_qOverPt = 0;
  Jet_PUmva_pfjet = 0;
  Jet_PULoose_pfjet = 0;
  Jet_PUMedium_pfjet = 0;
  Jet_PUTight_pfjet = 0;
  Jet_pt_pfjet = 0;
  Jet_ptL5_pfjet = 0;
  Jet_ptL7_pfjet = 0;
  Jet_px_pfjet = 0;
  Jet_py_pfjet = 0;
  Jet_pz_pfjet = 0;
  Jet_en_pfjet = 0;
  Jet_phi_pfjet = 0;
  Jet_eta_pfjet = 0;
  Jet_Area_pfjet = 0;
  Jet_JECunc_pfjet = 0;
  Jet_isLoose_pfjet = 0;
  Jet_isTight_pfjet = 0;
  Jet_isTightLepVeto_pfjet = 0;
  Jet_ChargedHadEn_pfjet = 0;
  Jet_NeutralHadEn_pfjet = 0;
  Jet_ChargedEmEn_pfjet = 0;
  Jet_ChargedMuEn_pfjet = 0;
  Jet_NeutralEmEn_pfjet = 0;
  Jet_ChargedMultiplicity_pfjet = 0;
  Jet_NeutralMultiplicity_pfjet = 0;
  Jet_MuonMultiplicity_pfjet = 0;
  Jet_ElectronMultiplicity_pfjet = 0;
  Jet_discriminatorHE_pfjet = 0;
  Jet_discriminatorHP_pfjet = 0;
  Jet_discriminatorCSV_pfjet = 0;
  Met_pt_pfmet = 0;
  Met_phi_pfmet = 0;
  Met_eta_pfmet = 0;
  Met_energy_pfmet = 0;
  Met_sumet_pfmet = 0;
  Met_ptsignificance_pfmet = 0;
  Met_etsignificance_pfmet = 0;
  Met_type01smear_pt_pfmet = 0;
  Met_totUp_pt_pfmet = 0;
  Met_totDown_pt_pfmet = 0;
  Met_jetEnUp_pfmet = 0;
  Met_jetEnDown_pfmet = 0;
  Met_jetResUp_pfmet = 0;
  Met_jetResDown_pfmet = 0;
  Met_unclusterUp_pfmet = 0;
  Met_unclusterDown_pfmet = 0;
  Met_tauUp_pfmet = 0;
  Met_tauDown_pfmet = 0;
  Met_eleUp_pfmet = 0;
  Met_eleDown_pfmet = 0;
  Met_photonUp_pfmet = 0;
  Met_photonDown_pfmet = 0;
  Met_muUp_pfmet = 0;
  Met_muDown_pfmet = 0;
  Met_phi_umet = 0;
  Met_pt_umet = 0;
  Met_sumet_umet = 0;
  // Set branch addresses and branch pointers
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);

  fChain->SetBranchAddress("metfilter", &metfilter, &b_metfilter);
  fChain->SetBranchAddress("runnumber", &runnumber, &b_runnumber);
  fChain->SetBranchAddress("lumiblock", &lumiblock, &b_lumiblock);
  fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
  fChain->SetBranchAddress("timestamp", &timestamp, &b_timestamp);
  fChain->SetBranchAddress("bunchXing", &bunchXing, &b_bunchXing);
  fChain->SetBranchAddress("orbitNum", &orbitNum, &b_orbitNum);
  fChain->SetBranchAddress("NBeam", &NBeam, &b_NBeam);
  fChain->SetBranchAddress("BS_x", &BS_x, &b_BS_x);
  fChain->SetBranchAddress("BS_y", &BS_y, &b_BS_y);
  fChain->SetBranchAddress("BS_z", &BS_z, &b_BS_z);
  fChain->SetBranchAddress("BS_xerr", &BS_xerr, &b_BS_xerr);
  fChain->SetBranchAddress("BS_yerr", &BS_yerr, &b_BS_yerr);
  fChain->SetBranchAddress("BS_zerr", &BS_zerr, &b_BS_zerr);
  fChain->SetBranchAddress("BS_Wx", &BS_Wx, &b_BS_Wx);
  fChain->SetBranchAddress("BS_Wy", &BS_Wy, &b_BS_Wy);
  fChain->SetBranchAddress("BS_Wxerr", &BS_Wxerr, &b_BS_Wxerr);
  fChain->SetBranchAddress("BS_Wyerr", &BS_Wyerr, &b_BS_Wyerr);
  fChain->SetBranchAddress("BS_dxdz", &BS_dxdz, &b_BS_dxdz);
  fChain->SetBranchAddress("BS_dxdzerr", &BS_dxdzerr, &b_BS_dxdzerr);
  fChain->SetBranchAddress("BS_dydz", &BS_dydz, &b_BS_dydz);
  fChain->SetBranchAddress("BS_dydzerr", &BS_dydzerr, &b_BS_dydzerr);
  fChain->SetBranchAddress("NGenP", &NGenP, &b_NGenP);
  fChain->SetBranchAddress("Genp_particleId", &Genp_particleId, &b_Genp_particleId);
  fChain->SetBranchAddress("Genp_status", &Genp_status, &b_Genp_status);
  fChain->SetBranchAddress("Genp_pt", &Genp_pt, &b_Genp_pt);
  fChain->SetBranchAddress("Genp_p", &Genp_p, &b_Genp_p);
  fChain->SetBranchAddress("Genp_et", &Genp_et, &b_Genp_et);
  fChain->SetBranchAddress("Genp_e", &Genp_e, &b_Genp_e);
  fChain->SetBranchAddress("Genp_mt", &Genp_mt, &b_Genp_mt);
  fChain->SetBranchAddress("Genp_m", &Genp_m, &b_Genp_m);
  fChain->SetBranchAddress("Genp_eta", &Genp_eta, &b_Genp_eta);
  fChain->SetBranchAddress("Genp_phi", &Genp_phi, &b_Genp_phi);
  fChain->SetBranchAddress("Genp_vx", &Genp_vx, &b_Genp_vx);
  fChain->SetBranchAddress("Genp_vy", &Genp_vy, &b_Genp_vy);
  fChain->SetBranchAddress("Genp_vz", &Genp_vz, &b_Genp_vz);
  fChain->SetBranchAddress("Genp_nMmothers", &Genp_nMmothers, &b_Genp_nMmothers);
  fChain->SetBranchAddress("Genp_nDaughters", &Genp_nDaughters, &b_Genp_nDaughters);
  fChain->SetBranchAddress("Genp_particleId_mother", &Genp_particleId_mother, &b_Genp_particleId_mother);
  fChain->SetBranchAddress("Genp_status_mother", &Genp_status_mother, &b_Genp_status_mother);
  fChain->SetBranchAddress("Genp_pt_mother", &Genp_pt_mother, &b_Genp_pt_mother);
  fChain->SetBranchAddress("Genp_eta_mother", &Genp_eta_mother, &b_Genp_eta_mother);
  fChain->SetBranchAddress("Genp_phi_mother", &Genp_phi_mother, &b_Genp_phi_mother);
  fChain->SetBranchAddress("Genp_m_mother", &Genp_m_mother, &b_Genp_m_mother);
  fChain->SetBranchAddress("PU_Weight", &PU_Weight, &b_MyWeight);
  fChain->SetBranchAddress("PU_WeightUp", &PU_WeightUp, &b_MyWeightUp);
  fChain->SetBranchAddress("PU_WeightDown", &PU_WeightDown, &b_MyWeightDown);
  fChain->SetBranchAddress("Nhlt", &Nhlt, &b_Nhlt);
  fChain->SetBranchAddress("hlt_path", &hlt_path, &b_hlt_path);
  fChain->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
  fChain->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
  fChain->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
  fChain->SetBranchAddress("PV_xerr", &PV_xerr, &b_PV_xerr);
  fChain->SetBranchAddress("PV_yerr", &PV_yerr, &b_PV_yerr);
  fChain->SetBranchAddress("PV_zerr", &PV_zerr, &b_PV_zerr);
  fChain->SetBranchAddress("PV_normchi2", &PV_normchi2, &b_PV_normchi2);
  fChain->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
  fChain->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
  fChain->SetBranchAddress("PV_ntracks", &PV_ntracks, &b_PV_ntracks);
  fChain->SetBranchAddress("PV_validity", &PV_validity, &b_PV_validity);
  fChain->SetBranchAddress("PV_fake", &PV_fake, &b_PV_fake);
  fChain->SetBranchAddress("PV_SumPtTracks", &PV_SumPtTracks, &b_PV_SumPtTracks);
  fChain->SetBranchAddress("NPVtx", &NPVtx, &b_NPVtx);
  fChain->SetBranchAddress("Mu_hasTriggeredIso", &Mu_hasTriggeredIso, &b_Mu_hasTriggeredIso);
  fChain->SetBranchAddress("Mu_hasTriggeredIsoEr", &Mu_hasTriggeredIsoEr, &b_Mu_hasTriggeredIsoEr);
  fChain->SetBranchAddress("Mu_hasTriggeredIsoTk", &Mu_hasTriggeredIsoTk, &b_Mu_hasTriggeredIsoTk);
  //fChain->SetBranchAddress("Mu_hasTriggeredIsoTkEr", &Mu_hasTriggeredIsoTkEr, &b_Mu_hasTriggeredIsoTkEr);
  fChain->SetBranchAddress("Mu_hasTriggeredTkMu50", &Mu_hasTriggeredTkMu50, &b_Mu_hasTriggeredTkMu50);
  fChain->SetBranchAddress("Mu_hasTriggeredMu50", &Mu_hasTriggeredMu50, &b_Mu_hasTriggeredMu50);
  fChain->SetBranchAddress("Mu_pt", &Mu_pt, &b_Mu_pt);
  fChain->SetBranchAddress("Mu_px", &Mu_px, &b_Mu_px);
  fChain->SetBranchAddress("Mu_py", &Mu_py, &b_Mu_py);
  fChain->SetBranchAddress("Mu_pz", &Mu_pz, &b_Mu_pz);
  fChain->SetBranchAddress("Mu_en", &Mu_en, &b_Mu_en);
  fChain->SetBranchAddress("Mu_phi", &Mu_phi, &b_Mu_phi);
  fChain->SetBranchAddress("Mu_eta", &Mu_eta, &b_Mu_eta);
  fChain->SetBranchAddress("Mu_charge", &Mu_charge, &b_Mu_charge);
  fChain->SetBranchAddress("Mu_triggerSF_BF", &Mu_triggerSF_BF, &b_Mu_triggerSF_BF);
  fChain->SetBranchAddress("Mu_triggerSF_GH", &Mu_triggerSF_GH, &b_Mu_triggerSF_GH);
  fChain->SetBranchAddress("Mu_idSF_BF", &Mu_idSF_BF, &b_Mu_idSF_BF);
  fChain->SetBranchAddress("Mu_idSF_GH", &Mu_idSF_GH, &b_Mu_idSF_GH);
  fChain->SetBranchAddress("Mu_isoSF_BF", &Mu_isoSF_BF, &b_Mu_isoSF_BF);
  fChain->SetBranchAddress("Mu_isoSF_GH", &Mu_isoSF_GH, &b_Mu_isoSF_GH);

  fChain->SetBranchAddress("Mu_hptriggerSF_BF", &Mu_hptriggerSF_BF, &b_Mu_hptriggerSF_BF);
  fChain->SetBranchAddress("Mu_hptriggerSF_GH", &Mu_hptriggerSF_GH, &b_Mu_hptriggerSF_GH);
  fChain->SetBranchAddress("Mu_hpidSF_BF", &Mu_hpidSF_BF, &b_Mu_hpidSF_BF);
  fChain->SetBranchAddress("Mu_hpidSF_GH", &Mu_hpidSF_GH, &b_Mu_hpidSF_GH);
  fChain->SetBranchAddress("Mu_hpisoSF_BF", &Mu_hpisoSF_BF, &b_Mu_hpisoSF_BF);
  fChain->SetBranchAddress("Mu_hpisoSF_GH", &Mu_hpisoSF_GH, &b_Mu_hpisoSF_GH);


  fChain->SetBranchAddress("Mu_roch_correction", &Mu_roch_correction, &b_Mu_roch_correction);
  fChain->SetBranchAddress("Mu_vertex_vx", &Mu_vertex_vx, &b_Mu_vertex_vx);
  fChain->SetBranchAddress("Mu_vertex_vy", &Mu_vertex_vy, &b_Mu_vertex_vy);
  fChain->SetBranchAddress("Mu_vertex_vz", &Mu_vertex_vz, &b_Mu_vertex_vz);
  fChain->SetBranchAddress("Mu_isPFMu", &Mu_isPFMu, &b_Mu_isPFMu);
  fChain->SetBranchAddress("Mu_isMediumMu", &Mu_isMediumMu, &b_Mu_isMediumMu);
  fChain->SetBranchAddress("Mu_isTightMu", &Mu_isTightMu, &b_Mu_isTightMu);
  fChain->SetBranchAddress("Mu_isHighPtMu", &Mu_isHighPtMu, &b_Mu_isHighPtMu);
  fChain->SetBranchAddress("Mu_isMuGlobal", &Mu_isMuGlobal, &b_Mu_isMuGlobal);
  fChain->SetBranchAddress("Mu_isMuTracker", &Mu_isMuTracker, &b_Mu_isMuTracker);
  fChain->SetBranchAddress("Mu_isMuStandAlone", &Mu_isMuStandAlone, &b_Mu_isMuStandAlone);
  fChain->SetBranchAddress("Mu_numberOfChambers", &Mu_numberOfChambers, &b_Mu_numberOfChambers);
  fChain->SetBranchAddress("Mu_numberOfMatches", &Mu_numberOfMatches, &b_Mu_numberOfMatches);
  fChain->SetBranchAddress("Mu_numberOfMatchedStation", &Mu_numberOfMatchedStation, &b_Mu_numberOfMatchedStation);
  fChain->SetBranchAddress("Mu_dB", &Mu_dB, &b_Mu_dB);
  fChain->SetBranchAddress("Mu_stationMask", &Mu_stationMask, &b_Mu_stationMask);
  fChain->SetBranchAddress("Mu_numberOfMatchedRPCLayers", &Mu_numberOfMatchedRPCLayers, &b_Mu_numberOfMatchedRPCLayers);
  fChain->SetBranchAddress("Mu_timingVeto", &Mu_timingVeto, &b_Mu_timingVeto);
  fChain->SetBranchAddress("Mu_sumPtIsoR03", &Mu_sumPtIsoR03, &b_Mu_sumPtIsoR03);
  fChain->SetBranchAddress("Mu_ntkIsoR03", &Mu_ntkIsoR03, &b_Mu_ntkIsoR03);
  fChain->SetBranchAddress("Mu_emIsoR03", &Mu_emIsoR03, &b_Mu_emIsoR03);
  fChain->SetBranchAddress("Mu_hadIsoR03", &Mu_hadIsoR03, &b_Mu_hadIsoR03);
  fChain->SetBranchAddress("Mu_hoEtIsoR03", &Mu_hoEtIsoR03, &b_Mu_hoEtIsoR03);
  fChain->SetBranchAddress("Mu_nJetsIsoR03", &Mu_nJetsIsoR03, &b_Mu_nJetsIsoR03);
  fChain->SetBranchAddress("Mu_sumPtIsoR05", &Mu_sumPtIsoR05, &b_Mu_sumPtIsoR05);
  fChain->SetBranchAddress("Mu_ntkIsoR05", &Mu_ntkIsoR05, &b_Mu_ntkIsoR05);
  fChain->SetBranchAddress("Mu_emIsoR05", &Mu_emIsoR05, &b_Mu_emIsoR05);
  fChain->SetBranchAddress("Mu_hadIsoR05", &Mu_hadIsoR05, &b_Mu_hadIsoR05);
  fChain->SetBranchAddress("Mu_hoEtIsoR05", &Mu_hoEtIsoR05, &b_Mu_hoEtIsoR05);
  fChain->SetBranchAddress("Mu_nJetsIsoR05", &Mu_nJetsIsoR05, &b_Mu_nJetsIsoR05);
  fChain->SetBranchAddress("Mu_sumCHPtPFIsoR04", &Mu_sumCHPtPFIsoR04, &b_Mu_sumCHPtPFIsoR04);
  fChain->SetBranchAddress("Mu_sumCPPtPFIsoR04", &Mu_sumCPPtPFIsoR04, &b_Mu_sumCPPtPFIsoR04);
  fChain->SetBranchAddress("Mu_sumNHPtPFIsoR04", &Mu_sumNHPtPFIsoR04, &b_Mu_sumNHPtPFIsoR04);
  fChain->SetBranchAddress("Mu_sumPhoEtPFIsoR04", &Mu_sumPhoEtPFIsoR04, &b_Mu_sumPhoEtPFIsoR04);
  fChain->SetBranchAddress("Mu_sumPUPtPFIsoR04", &Mu_sumPUPtPFIsoR04, &b_Mu_sumPUPtPFIsoR04);
  fChain->SetBranchAddress("Mu_sumCHPtPFIsoR03", &Mu_sumCHPtPFIsoR03, &b_Mu_sumCHPtPFIsoR03);
  fChain->SetBranchAddress("Mu_sumCPPtPFIsoR03", &Mu_sumCPPtPFIsoR03, &b_Mu_sumCPPtPFIsoR03);
  fChain->SetBranchAddress("Mu_sumNHPtPFIsoR03", &Mu_sumNHPtPFIsoR03, &b_Mu_sumNHPtPFIsoR03);
  fChain->SetBranchAddress("Mu_sumPhoEtPFIsoR03", &Mu_sumPhoEtPFIsoR03, &b_Mu_sumPhoEtPFIsoR03);
  fChain->SetBranchAddress("Mu_sumPUPtPFIsoR03", &Mu_sumPUPtPFIsoR03, &b_Mu_sumPUPtPFIsoR03);
  fChain->SetBranchAddress("Mu_calEnergyEm", &Mu_calEnergyEm, &b_Mu_calEnergyEm);
  fChain->SetBranchAddress("Mu_calEnergyHad", &Mu_calEnergyHad, &b_Mu_calEnergyHad);
  fChain->SetBranchAddress("Mu_calEnergyHo", &Mu_calEnergyHo, &b_Mu_calEnergyHo);
  fChain->SetBranchAddress("Mu_calEnergyEmS9", &Mu_calEnergyEmS9, &b_Mu_calEnergyEmS9);
  fChain->SetBranchAddress("Mu_calEnergyHadS9", &Mu_calEnergyHadS9, &b_Mu_calEnergyHadS9);
  fChain->SetBranchAddress("Mu_calEnergyHoS9", &Mu_calEnergyHoS9, &b_Mu_calEnergyHoS9);
  fChain->SetBranchAddress("Mu_numberOfHits_sta", &Mu_numberOfHits_sta, &b_Mu_numberOfHits_sta);
  fChain->SetBranchAddress("Mu_recHitsSize", &Mu_recHitsSize, &b_Mu_recHitsSize);
  fChain->SetBranchAddress("Mu_normchi2_sta", &Mu_normchi2_sta, &b_Mu_normchi2_sta);
  fChain->SetBranchAddress("Mu_dxy_sta", &Mu_dxy_sta, &b_Mu_dxy_sta);
  fChain->SetBranchAddress("Mu_dz_sta", &Mu_dz_sta, &b_Mu_dz_sta);
  fChain->SetBranchAddress("Mu_vx_sta", &Mu_vx_sta, &b_Mu_vx_sta);
  fChain->SetBranchAddress("Mu_vy_sta", &Mu_vy_sta, &b_Mu_vy_sta);
  fChain->SetBranchAddress("Mu_vz_sta", &Mu_vz_sta, &b_Mu_vz_sta);
  fChain->SetBranchAddress("GLBMu_pt", &GLBMu_pt, &b_GLBMu_pt);
  fChain->SetBranchAddress("GLBMu_pt_err", &GLBMu_pt_err, &b_GLBMu_pt_err);
  fChain->SetBranchAddress("GLBMu_eta", &GLBMu_eta, &b_GLBMu_eta);
  fChain->SetBranchAddress("GLBMu_phi", &GLBMu_phi, &b_GLBMu_phi);
  fChain->SetBranchAddress("GLBMu_chi2", &GLBMu_chi2, &b_GLBMu_chi2);
  fChain->SetBranchAddress("GLBMu_ndf", &GLBMu_ndf, &b_GLBMu_ndf);
  fChain->SetBranchAddress("GLBMu_qOverPt", &GLBMu_qOverPt, &b_GLBMu_qOverPt);
  fChain->SetBranchAddress("Mu_normchi2_glb", &Mu_normchi2_glb, &b_Mu_normchi2_glb);
  fChain->SetBranchAddress("Mu_dxy_glb", &Mu_dxy_glb, &b_Mu_dxy_glb);
  fChain->SetBranchAddress("Mu_dz_glb", &Mu_dz_glb, &b_Mu_dz_glb);
  fChain->SetBranchAddress("Mu_numberOfPixelHits_glb", &Mu_numberOfPixelHits_glb, &b_Mu_numberOfPixelHits_glb);
  fChain->SetBranchAddress("Mu_numberOfTrackerHits_glb", &Mu_numberOfTrackerHits_glb, &b_Mu_numberOfTrackerHits_glb);
  fChain->SetBranchAddress("Mu_numberOfMuonsHits_glb", &Mu_numberOfMuonsHits_glb, &b_Mu_numberOfMuonsHits_glb);
  fChain->SetBranchAddress("Mu_vx_glb", &Mu_vx_glb, &b_Mu_vx_glb);
  fChain->SetBranchAddress("Mu_vy_glb", &Mu_vy_glb, &b_Mu_vy_glb);
  fChain->SetBranchAddress("Mu_vz_glb", &Mu_vz_glb, &b_Mu_vz_glb);
  fChain->SetBranchAddress("TRKMu_pt", &TRKMu_pt, &b_TRKMu_pt);
  fChain->SetBranchAddress("TRKMu_pt_err", &TRKMu_pt_err, &b_TRKMu_pt_err);
  fChain->SetBranchAddress("TRKMu_eta", &TRKMu_eta, &b_TRKMu_eta);
  fChain->SetBranchAddress("TRKMu_phi", &TRKMu_phi, &b_TRKMu_phi);
  fChain->SetBranchAddress("TRKMu_chi2", &TRKMu_chi2, &b_TRKMu_chi2);
  fChain->SetBranchAddress("TRKMu_ndf", &TRKMu_ndf, &b_TRKMu_ndf);
  fChain->SetBranchAddress("TRKMu_qOverPt", &TRKMu_qOverPt, &b_TRKMu_qOverPt);
  fChain->SetBranchAddress("Mu_normchi2_trk", &Mu_normchi2_trk, &b_Mu_normchi2_trk);
  fChain->SetBranchAddress("Mu_dxy_trk", &Mu_dxy_trk, &b_Mu_dxy_trk);
  fChain->SetBranchAddress("Mu_dz_trk", &Mu_dz_trk, &b_Mu_dz_trk);
  fChain->SetBranchAddress("Mu_numberOfPixelHits_trk", &Mu_numberOfPixelHits_trk, &b_Mu_numberOfPixelHits_trk);
  fChain->SetBranchAddress("Mu_numberOfTrackerHits_trk", &Mu_numberOfTrackerHits_trk, &b_Mu_numberOfTrackerHits_trk);
  fChain->SetBranchAddress("Mu_dzPV_trk", &Mu_dzPV_trk, &b_Mu_dzPV_trk);
  fChain->SetBranchAddress("Mu_trackerLayersWithMeasurement_trk", &Mu_trackerLayersWithMeasurement_trk, &b_Mu_trackerLayersWithMeasurement_trk);
  fChain->SetBranchAddress("Nmuons", &Nmuons, &b_Nmuons);
  fChain->SetBranchAddress("NGlobalMuons", &NGlobalMuons, &b_NGlobalMuons);
  fChain->SetBranchAddress("NTrackerMuons", &NTrackerMuons, &b_NTrackerMuons);
  fChain->SetBranchAddress("NStandAloneMuons", &NStandAloneMuons, &b_NStandAloneMuons);
  fChain->SetBranchAddress("TPMu_pt", &TPMu_pt, &b_TPMu_pt);
  fChain->SetBranchAddress("TPMu_pt_err", &TPMu_pt_err, &b_TPMu_pt_err);
  fChain->SetBranchAddress("TPMu_eta", &TPMu_eta, &b_TPMu_eta);
  fChain->SetBranchAddress("TPMu_phi", &TPMu_phi, &b_TPMu_phi);
  fChain->SetBranchAddress("TPMu_chi2", &TPMu_chi2, &b_TPMu_chi2);
  fChain->SetBranchAddress("TPMu_ndf", &TPMu_ndf, &b_TPMu_ndf);
  fChain->SetBranchAddress("TPMu_qOverPt", &TPMu_qOverPt, &b_TPMu_qOverPt);
  fChain->SetBranchAddress("NpfJets", &NpfJets, &b_NpfJets);
  fChain->SetBranchAddress("NbTagHE_pfJets", &NbTagHE_pfJets, &b_NbTagHE_pfJets);
  fChain->SetBranchAddress("NbTagHP_pfJets", &NbTagHP_pfJets, &b_NbTagHP_pfJets);
  fChain->SetBranchAddress("Jet_PUmva_pfjet", &Jet_PUmva_pfjet, &b_Jet_PUmva_pfjet);
  fChain->SetBranchAddress("Jet_PULoose_pfjet", &Jet_PULoose_pfjet, &b_Jet_PULoose_pfjet);
  fChain->SetBranchAddress("Jet_PUMedium_pfjet", &Jet_PUMedium_pfjet, &b_Jet_PUMedium_pfjet);
  fChain->SetBranchAddress("Jet_PUTight_pfjet", &Jet_PUTight_pfjet, &b_Jet_PUTight_pfjet);
  fChain->SetBranchAddress("Jet_pt_pfjet", &Jet_pt_pfjet, &b_Jet_pt_pfjet);
  fChain->SetBranchAddress("Jet_ptL5_pfjet", &Jet_ptL5_pfjet, &b_Jet_ptL5_pfjet);
  fChain->SetBranchAddress("Jet_ptL7_pfjet", &Jet_ptL7_pfjet, &b_Jet_ptL7_pfjet);
  fChain->SetBranchAddress("Jet_px_pfjet", &Jet_px_pfjet, &b_Jet_px_pfjet);
  fChain->SetBranchAddress("Jet_py_pfjet", &Jet_py_pfjet, &b_Jet_py_pfjet);
  fChain->SetBranchAddress("Jet_pz_pfjet", &Jet_pz_pfjet, &b_Jet_pz_pfjet);
  fChain->SetBranchAddress("Jet_en_pfjet", &Jet_en_pfjet, &b_Jet_en_pfjet);
  fChain->SetBranchAddress("Jet_phi_pfjet", &Jet_phi_pfjet, &b_Jet_phi_pfjet);
  fChain->SetBranchAddress("Jet_eta_pfjet", &Jet_eta_pfjet, &b_Jet_eta_pfjet);
  fChain->SetBranchAddress("Jet_Area_pfjet", &Jet_Area_pfjet, &b_Jet_Area_pfjet);
  fChain->SetBranchAddress("Jet_JECunc_pfjet", &Jet_JECunc_pfjet, &b_Jet_JECunc_pfjet);
  fChain->SetBranchAddress("Jet_isLoose_pfjet", &Jet_isLoose_pfjet, &b_Jet_isLoose_pfjet);
  fChain->SetBranchAddress("Jet_isTight_pfjet", &Jet_isTight_pfjet, &b_Jet_isTight_pfjet);
  fChain->SetBranchAddress("Jet_isTightLepVeto_pfjet", &Jet_isTightLepVeto_pfjet, &b_Jet_isTightLepVeto_pfjet);
  fChain->SetBranchAddress("Jet_ChargedHadEn_pfjet", &Jet_ChargedHadEn_pfjet, &b_Jet_ChargedHadEn_pfjet);
  fChain->SetBranchAddress("Jet_NeutralHadEn_pfjet", &Jet_NeutralHadEn_pfjet, &b_Jet_NeutralHadEn_pfjet);
  fChain->SetBranchAddress("Jet_ChargedEmEn_pfjet", &Jet_ChargedEmEn_pfjet, &b_Jet_ChargedEmEn_pfjet);
  fChain->SetBranchAddress("Jet_ChargedMuEn_pfjet", &Jet_ChargedMuEn_pfjet, &b_Jet_ChargedMuEn_pfjet);
  fChain->SetBranchAddress("Jet_NeutralEmEn_pfjet", &Jet_NeutralEmEn_pfjet, &b_Jet_NeutralEmEn_pfjet);
  fChain->SetBranchAddress("Jet_ChargedMultiplicity_pfjet", &Jet_ChargedMultiplicity_pfjet, &b_Jet_ChargedMultiplicity_pfjet);
  fChain->SetBranchAddress("Jet_NeutralMultiplicity_pfjet", &Jet_NeutralMultiplicity_pfjet, &b_Jet_NeutralMultiplicity_pfjet);
  fChain->SetBranchAddress("Jet_MuonMultiplicity_pfjet", &Jet_MuonMultiplicity_pfjet, &b_Jet_MuonMultiplicity_pfjet);
  fChain->SetBranchAddress("Jet_ElectronMultiplicity_pfjet", &Jet_ElectronMultiplicity_pfjet, &b_Jet_ElectronMultiplicity_pfjet);
  fChain->SetBranchAddress("Jet_discriminatorHE_pfjet", &Jet_discriminatorHE_pfjet, &b_Jet_discriminatorHE_pfjet);
  fChain->SetBranchAddress("Jet_discriminatorHP_pfjet", &Jet_discriminatorHP_pfjet, &b_Jet_discriminatorHP_pfjet);
  fChain->SetBranchAddress("Jet_discriminatorCSV_pfjet", &Jet_discriminatorCSV_pfjet, &b_Jet_discriminatorCSV_pfjet);
  fChain->SetBranchAddress("NpfMet", &NpfMet, &b_NpfMet);
  fChain->SetBranchAddress("Met_pt_pfmet", &Met_pt_pfmet, &b_Met_pt_pfmet);
  fChain->SetBranchAddress("Met_phi_pfmet", &Met_phi_pfmet, &b_Met_phi_pfmet);
  fChain->SetBranchAddress("Met_eta_pfmet", &Met_eta_pfmet, &b_Met_eta_pfmet);
  fChain->SetBranchAddress("Met_energy_pfmet", &Met_energy_pfmet, &b_Met_energy_pfmet);
  fChain->SetBranchAddress("Met_sumet_pfmet", &Met_sumet_pfmet, &b_Met_sumet_pfmet);
  fChain->SetBranchAddress("Met_ptsignificance_pfmet", &Met_ptsignificance_pfmet, &b_Met_ptsignificance_pfmet);
  fChain->SetBranchAddress("Met_etsignificance_pfmet", &Met_etsignificance_pfmet, &b_Met_etsignificance_pfmet);
  fChain->SetBranchAddress("Met_type01smear_pt_pfmet", &Met_type01smear_pt_pfmet, &b_Met_type01smear_pt_pfmet);
  fChain->SetBranchAddress("Met_totUp_pt_pfmet", &Met_totUp_pt_pfmet, &b_Met_totUp_pt_pfmet);
  fChain->SetBranchAddress("Met_totDown_pt_pfmet", &Met_totDown_pt_pfmet, &b_Met_totDown_pt_pfmet);
  fChain->SetBranchAddress("Met_jetEnUp_pfmet", &Met_jetEnUp_pfmet, &b_Met_jetEnUp_pfmet);
  fChain->SetBranchAddress("Met_jetEnDown_pfmet", &Met_jetEnDown_pfmet, &b_Met_jetEnDown_pfmet);
  fChain->SetBranchAddress("Met_jetResUp_pfmet", &Met_jetResUp_pfmet, &b_Met_jetResUp_pfmet);
  fChain->SetBranchAddress("Met_jetResDown_pfmet", &Met_jetResDown_pfmet, &b_Met_jetResDown_pfmet);
  fChain->SetBranchAddress("Met_unclusterUp_pfmet", &Met_unclusterUp_pfmet, &b_Met_unclusterUp_pfmet);
  fChain->SetBranchAddress("Met_unclusterDown_pfmet", &Met_unclusterDown_pfmet, &b_Met_unclusterDown_pfmet);
  fChain->SetBranchAddress("Met_tauUp_pfmet", &Met_tauUp_pfmet, &b_Met_tauUp_pfmet);
  fChain->SetBranchAddress("Met_tauDown_pfmet", &Met_tauDown_pfmet, &b_Met_tauDown_pfmet);
  fChain->SetBranchAddress("Met_eleUp_pfmet", &Met_eleUp_pfmet, &b_Met_eleUp_pfmet);
  fChain->SetBranchAddress("Met_eleDown_pfmet", &Met_eleDown_pfmet, &b_Met_eleDown_pfmet);
  fChain->SetBranchAddress("Met_photonUp_pfmet", &Met_photonUp_pfmet, &b_Met_photonUp_pfmet);
  fChain->SetBranchAddress("Met_photonDown_pfmet", &Met_photonDown_pfmet, &b_Met_photonDown_pfmet);
  fChain->SetBranchAddress("Met_muUp_pfmet", &Met_muUp_pfmet, &b_Met_muUp_pfmet);
  fChain->SetBranchAddress("Met_muDown_pfmet", &Met_muDown_pfmet, &b_Met_muDown_pfmet);
  fChain->SetBranchAddress("Met_phi_umet", &Met_phi_umet, &b_Met_phi_umet);
  fChain->SetBranchAddress("Met_pt_umet", &Met_pt_umet, &b_Met_pt_umet);
  fChain->SetBranchAddress("Met_sumet_umet", &Met_sumet_umet, &b_Met_sumet_umet);

  Notify();

}

Bool_t NewAnalyzer::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void NewAnalyzer::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t NewAnalyzer::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}
#endif // #ifdef Analyzer_cxx
