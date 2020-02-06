#!/usr/bin/env python

from ROOT import TMVA, TFile, TTree, TCut
from subprocess import call
from os.path import isfile

#from keras.models import Sequential
#from keras.layers import Dense, Activation
#from keras.regularizers import l2
#from keras.optimizers import SGD

# Setup TMVA
TMVA.Tools.Instance()
TMVA.PyMethodBase.PyInitialize()

output = TFile.Open('pyTMVA.root', 'RECREATE')
factory = TMVA.Factory('TMVAClassification', output,
                       '!V:!Silent:Color:DrawProgressBar:Transformations=D,G:AnalysisType=Classification')

# Load data
if not isfile('../analysis_least1bjet.root'):
    print('File not found...')

data = TFile.Open('../analysis_least1bjet.root')
signal = data.Get('signal_bbA_MA300tree')
background_DY = data.Get('bkg_DY_nlo1tree')
background_ttbar = data.Get('bkg_ttbar_nlotree')

variables = ["dimuon_deltar",
			 "dimuon_deltaphi",
			 "dimuon_deltaeta",
			 "Met_Pt",
			 "btag_jet",
			 "no_btag_jet",
			 "bjet_pt",
			 "bjet_eta",
			 "btag_jet_over2.4",
			 "delta_R_bjet_dimuon",
			 "delta_pt_mupair_1bjet",
			 "delta_eta_mupair_1bjet"
			]


dataloader = TMVA.DataLoader('dataset')
for v in variables:
    dataloader.AddVariable(v)

lumi_signal      =  18201./0.00923
signal_weight    =  1.0
bkg_DY_weight    =  lumi_signal/(49144274./5765.)
bkg_ttbar_weight =  lumi_signal/(23958797./85.656)

dataloader.AddSignalTree(signal, signal_weight)
dataloader.AddBackgroundTree(background_DY, bkg_DY_weight)
dataloader.AddBackgroundTree(background_ttbar, bkg_ttbar_weight)
dataloader.PrepareTrainingAndTestTree(TCut(''),
                                      "nTrain_Signal=18577:nTrain_Background=18577:nTest_Signal=4645:nTest_Background=4645:SplitMode=Random:NormMode=None:!V")

# Generate model

# Define model
#model = Sequential()
#model.add(Dense(64, activation='relu', W_regularizer=l2(1e-5), input_dim=4))
#model.add(Dense(2, activation='softmax'))

# Set loss and optimizer
#model.compile(loss='categorical_crossentropy',
#              optimizer=SGD(lr=0.01), metrics=['accuracy', ])

# Store model to file
#model.save('model.h5')
#model.summary()

# Book methods
factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG",
	                        "!H:!V:NTrees=1000:MinNodeSize=2.5%:BoostType=Grad:Shrinkage=0.20:UseBaggedBoost:BaggedSampleFraction=0.5:nCuts=20:MaxDepth=6" );

factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDT",
	                        "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=6:BoostType=AdaBoost:AdaBoostBeta=0.3:UseBaggedBoost:BaggedSampleFraction=0.3:SeparationType=GiniIndex:nCuts=20" );

factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTB",
	                        "!H:!V:NTrees=1000:BoostType=Bagging:SeparationType=GiniIndex:nCuts=20" );

factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTD",
	                        "!H:!V:NTrees=1000:MinNodeSize=2.5%:MaxDepth=6:BoostType=AdaBoost:AdaBoostBeta=0.7:SeparationType=GiniIndex:nCuts=20:VarTransform=Decorrelate" );


# Run training, test and evaluation
factory.TrainAllMethods()
factory.TestAllMethods()
factory.EvaluateAllMethods()


# Save output
print("""
		==> Wrote root file: {} \n
		==> TMVAClassification is done!\n
	  """).format(output.GetName())


TMVA.TMVAGui(output)
