# MSSM_Analysis
Analyzer code for MSSM analysis of a neutral Higgs Boson decaying into 2 Muons.

## How to execute the analyzer

```
root -l
root[] .x runme.C("bbA_MA300_Tanb-25",300.)
```
runme.C has two parameters:
- The string of the dataset you want to produce the corresponding tree in the root file (only bbA dataset available);
- The corresponding mass value of the signal mass, 0 for background.

For background samples, only "DY_nlo1" and "ttbar_nlo" are available.

Tommaso
