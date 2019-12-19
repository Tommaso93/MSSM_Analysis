#include "TString.h"
#include "TROOT.h"
#include <string>

void runme(std::string arg, float mA){
std::string strng = "c = NewAnalyzer(\"" + arg + "\"," + std::to_string(mA) + "," + std::to_string(mA-100.) + "," + std::to_string(mA+100.) + ", 0, 0)";
gROOT->ProcessLine(".L NewAnalyzer.C++");
gROOT->ProcessLine(strng.c_str());
//gROOT->ProcessLine(TString::Format("c = NewAnalyzer(\"%s\", 300., 200., 400., 0, 0)",arg));
gROOT->ProcessLine("c.Loop()");
gROOT->ProcessLine("c.Draw2()");
}
