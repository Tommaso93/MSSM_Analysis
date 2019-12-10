#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

#include "TChain.h"
#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TObjString.h"
#include "TSystem.h"
#include "TROOT.h"

#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/Tools.h"
#include "TMVA/TMVAGui.h"

void TMVAClassification(){
	
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
	

	Use["LD"]              = 0; // Linear Discriminant identical to Fisher
	Use["Fisher"]          = 0;
	Use["FisherG"]         = 0;
	Use["BoostedFisher"]   = 0; // uses generalised MVA method boosting
	Use["HMatrix"]         = 0;
	
        Use["KNN"]             = 0;

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
	#ifdef R__HAS_TMVAGPU
	Use["DNN_GPU"]         = 0; // CUDA-accelerated DNN training.
	#else
	Use["DNN_GPU"]         = 0;
	#endif

	#ifdef R__HAS_TMVACPU
	Use["DNN_CPU"]         = 0; // Multi-core accelerated DNN.
	#else
	Use["DNN_CPU"]         = 0;
	#endif
	
	Use["SVM"]             = 0;

	Use["BDT"]             = 1; // uses Adaptive Boost
	Use["BDTG"]            = 1; // uses Gradient Boost
	Use["BDTB"]            = 1; // uses Bagging
	Use["BDTD"]            = 1; // decorrelation + Adaptive Boost
	Use["BDTF"]            = 0; // allow usage of fisher discriminant for node splitting
	
	std::cout << std::endl;
	std::cout << "==> Start TMVAClassification" << std::endl;
	
	if (myMethodList != "") {
	   for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) it->second = 0;

	   std::vector<TString> mlist = TMVA::gTools().SplitString( myMethodList, ',' );
	   for (UInt_t i=0; i<mlist.size(); i++) {
	      std::string regMethod(mlist[i]);

	      if (Use.find(regMethod) == Use.end()) {
	         std::cout << "Method \"" << regMethod << "\" not known in TMVA under this name. Choose among the following:" << std::endl;
	         for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) std::cout << it->first << " ";
	         std::cout << std::endl;
	         return 1;
	      }
	      Use[regMethod] = 1;
	   }
	}
	
	TFile *input(0);
        TString fname = "../analysis_least1bjet.root";
	
	if (!gSystem->AccessPathName( fname )) {
	   input = TFile::Open( fname ); // check if file in local directory exists
	}
	else {
		std::cout << "ERROR: file not found" << std::endl;
	}
	
	if (!input) {
	   std::cout << "ERROR: could not open data file" << std::endl;
	   exit(1);
	}
	
	std::cout << "--- TMVAClassification       : Using input file: " << input->GetName() << std::endl;
	
	TTree *signalTree     = (TTree*)input->Get("signal_bbA_MA300tree");
	TTree *background     = (TTree*)input->Get("bkg_DY_nlo1tree");
        TTree *background2    = (TTree*)input->Get("bkg_ttbar_nlotree");
        
	// Output file
	
	TString outfileName( "TMVA.root" );
	TFile* outputFile = TFile::Open( outfileName, "RECREATE" );
	
	//Create the factory object. The first argument is the base of the name of the weghtfiles in the directory weight/. The second argument is the output file for the training results. (Output suppressed with the ! in front of Silent)

//	TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile, "!V:!Silent:Color:!DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=Classification" ); 
	TMVA::Factory *factory = new TMVA::Factory( "TMVAClassification", outputFile, "!V:!Silent:Color:!DrawProgressBar:Transformations=I:AnalysisType=Classification" ); 
	
	TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");
	
	//Define the input variables
	
	//dataloader->AddVariable( "myvar1 := var1+var2", 'F' );
	//dataloader->AddVariable( "myvar2 := var1-var2", "Expression 2", "", 'F' );
	dataloader->AddVariable( "dimuon_deltar", 'F' );
	dataloader->AddVariable( "dimuon_deltaphi", 'F' );
	dataloader->AddVariable( "dimuon_deltaeta", 'F' );
	//dataloader->AddVariable( "PU_Weight", 'F' );
	dataloader->AddVariable( "Met_Pt", 'F' );
	//dataloader->AddVariable( "Met_phi", 'F' );
	//dataloader->AddVariable( "Met_energy", 'F' );
	//dataloader->AddVariable( "Met_sumet", 'F' );
	dataloader->AddVariable( "btag_jet", 'I' );
	dataloader->AddVariable( "no_btag_jet", 'I' );
	dataloader->AddVariable( "bjet_pt", 'F' );
	dataloader->AddVariable( "bjet_eta", 'F' );
	dataloader->AddVariable( "btag_jet_over2.4", 'I' );
	dataloader->AddVariable( "delta_R_bjet_dimuon", 'F' );
	dataloader->AddVariable( "delta_pt_mupair_1bjet", 'F' );
	dataloader->AddVariable( "delta_eta_mupair_1bjet", 'F' );
	
    Double_t lumi_signal = 118201./0.00923;

	Double_t signalWeight     = 1.0;
	Double_t backgroundWeight = lumi_signal/(49144274./5765.);
        Double_t backgroundWeight2 = lumi_signal/(23958797./85.656);
	
	dataloader->AddSignalTree    ( signalTree,     signalWeight );
	dataloader->AddBackgroundTree( background, backgroundWeight );
	dataloader->AddBackgroundTree( background2, backgroundWeight2 );
	// Set fraction of training/test samples
	
	TCut mycuts = ""; // for example: TCut mycuts = "abs(var1)<0.5 && abs(var2-0.5)<1";
	TCut mycutb = ""; // for example: TCut mycutb = "abs(var1)<0.5";
	
	//dataloader->PrepareTrainingAndTestTree(mycuts,mycutb,"nTrain_Signal=1000:nTrain_Background=1000:SplitMode=Random:NormMode=NumEvents:!V");
	
	//dataloader->PrepareTrainingAndTestTree( mycuts, mycutb, "NsigTrain=5000:NbkgTrain=5000:NsigTest=1000:NbkgTest=1000:SplitMode=Random:NormMode=NumEvents:!V" );
	
	dataloader->PrepareTrainingAndTestTree( mycuts, mycutb,
	                                     "nTrain_Signal=18577:nTrain_Background=18577:nTest_Signal=4645:nTest_Background=4645:SplitMode=Random:NormMode=None:!V" );
	
	// -------- Methods ---------
	
	if (Use["KNN"])
           factory->BookMethod( dataloader, TMVA::Types::kKNN, "KNN",
                        "H:nkNN=20:ScaleFrac=0.8:SigmaFact=1.0:Kernel=Gaus:UseKernel=F:UseWeight=T" );

        if (Use["BDTG"]) // Gradient Boost
	   factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTG",
	                        "!H:!V:NTrees=1000:MinNodeSize=2.5%:BoostType=Grad:Shrinkage=0.20:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=6" );

	if (Use["BDT"])  // Adaptive Boost
	   factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDT",
	                        "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=6:BoostType=AdaBoost:AdaBoostBeta=0.3:UseBaggedBoost:BaggedSampleFraction=0.3:SeparationType=GiniIndex:nCuts=20" );

	if (Use["BDTB"]) // Bagging
	   factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTB",
	                        "!H:!V:NTrees=1000:BoostType=Bagging:SeparationType=GiniIndex:nCuts=20" );

	if (Use["BDTD"]) // Decorrelation + Adaptive Boost
	   factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTD",
	                        "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=6:BoostType=AdaBoost:AdaBoostBeta=0.7:SeparationType=GiniIndex:nCuts=20:VarTransform=Decorrelate" );

	if (Use["BDTF"])  // Allow Using Fisher discriminant in node splitting for (strong) linearly correlated variables
	   factory->BookMethod( dataloader, TMVA::Types::kBDT, "BDTF",
	                        "!H:!V:NTrees=500:MinNodeSize=2.5%:UseFisherCuts:MaxDepth=3:BoostType=AdaBoost:AdaBoostBeta=0.5:SeparationType=GiniIndex:nCuts=20" );
	if (Use["LD"])
           factory->BookMethod( dataloader, TMVA::Types::kLD, "LD", "H:!V:VarTransform=None:CreateMVAPdfs:PDFInterpolMVAPdf=Spline2:NbinsMVAPdf=50:NsmoothMVAPdf=10" );
	

        if (Use["DNN_CPU"] or Use["DNN_GPU"]) {
	   // General layout.
	   TString layoutString ("Layout=RELU|32,RELU|16,SIGMOID");

	   // Training strategies.
	   
           TString training3("LearningRate=1e-4,Momentum=0,Repetitions=1,"
                                             "ConvergenceSteps=30,BatchSize=256,TestRepetitions=10,"
                                                 "Regularization=None,"
                                                 "DropConfig=0.1+0.1+0.1+0.0, Multithreading=True");
           TString training0("LearningRate=1e-1,Momentum=0,Repetitions=1,"
					     "ConvergenceSteps=30,BatchSize=256,TestRepetitions=10,"
						 "WeightDecay=1e-4,Regularization=None,"
						 "DropConfig=0.1+0.1+0.1+0.0, Multithreading=True");
	   TString training1("LearningRate=1e-2,Momentum=0,Repetitions=1,"
						 "ConvergenceSteps=20,BatchSize=256,TestRepetitions=10,"
						 "WeightDecay=1e-4,Regularization=None,"
						 "DropConfig=0.0+0.0+0.0+0.0, Multithreading=True");
	   TString training2("LearningRate=1e-3,Momentum=0,Repetitions=1,"
					     "ConvergenceSteps=20,BatchSize=256,TestRepetitions=10,"
						 "WeightDecay=1e-4,Regularization=None,"
						 "DropConfig=0.0+0.0+0.0+0.0, Multithreading=True");
	   TString trainingStrategyString ("TrainingStrategy=");
	   trainingStrategyString += training0 + "|" + training1 + "|" + training2;

	   // General Options.
	   TString dnnOptions ("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=N:"
						   "WeightInitialization=XAVIERUNIFORM");
	   dnnOptions.Append (":"); dnnOptions.Append (layoutString);
	   dnnOptions.Append (":"); dnnOptions.Append (trainingStrategyString);

	   // Cuda implementation.
	   if (Use["DNN_GPU"]) {
	      TString gpuOptions = dnnOptions + ":Architecture=GPU";
		  factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_GPU", gpuOptions);
		  }
	   // Multi-core CPU implementation.
	   if (Use["DNN_CPU"]) {
		  TString cpuOptions = dnnOptions + ":Architecture=CPU";
		  factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_CPU", cpuOptions);
		   }
	   }

          if (Use["SVM"])
            factory->BookMethod( dataloader, TMVA::Types::kSVM, "SVM", "Gamma=0.25:Tol=0.001:VarTransform=Norm" );

          if (Use["MLP"]) {
            factory->BookMethod(dataloader, TMVA::Types::kMLP, "MLP", "!H:V:NeuronType=sigmoid:VarTransform=N:EstimatorType=sigmoid:BatchSize=400:NCycles=1000:HiddenLayers=30,15,5:TestRate=10:!UseRegulator");
          }
	
	// -------- Training and testing ---------
							
	factory->TrainAllMethods();
	
	factory->TestAllMethods();
	
	factory->EvaluateAllMethods();
	
	
	// -------- Save the output -------------
	
	outputFile->Close();

	std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
	std::cout << "==> TMVAClassification is done!" << std::endl;

	delete factory;
	delete dataloader;
	
	// Launch the GUI
	
	if (!gROOT->IsBatch()) TMVA::TMVAGui( outfileName );

	return 0;
	
}
