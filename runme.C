#include "TString.h"
#include "TROOT.h"

void runme(char const *arg){
gROOT->ProcessLine(".L NewAnalyzer.C++");
gROOT->ProcessLine(TString::Format("c = NewAnalyzer(\"%s\", 300., 200., 400., 0, 0)",arg));
gROOT->ProcessLine("c.Loop()");
gROOT->ProcessLine("c.Draw2()");
}
