#include "TCanvas.h"
#include "TLegend.h"

void ratioplot(TString filename1, TString filename2, TString var, TString bkg_process, TString category) {
  TFile* f1 = new TFile(filename1);
  if (!f1) return;
  TFile* f2 = new TFile(filename2);
  if (!f2) return;
  
  TString variable =var;
  variable += "_";
  variable +=category;
  variable += "_WZ_SR_";
    
  TString var1 =variable;
  var1 += "MuMu";
  
  TString var2 =variable;
  var2 += "EleEle";
  
  TString var3 =variable;
  var3 += "EleMu";
  
  //TString var4 =variable;
  //var4 += "_WZ_FR_MuMu";
  
  //TString var4 =variable;
  //var4 += "_WZ_FR_EleEle";
  
  //TString var5 =variable;
  //var5 += "_WZ_FR_EleMu";
  
  
  TString name = var;
  name +="_";
  name +="ratio";
  
  TCanvas* c1 = new TCanvas("c1", var1);
  //c->cd();
  TCanvas* c2 = new TCanvas("c2", var2);
  TCanvas* c3 = new TCanvas("c3", var3);

  TH1D *h1=(TH1D*)f1->Get(var1);
  TH1D *h2=(TH1D*)f2->Get(var1);

  TH1D *h3=(TH1D*)f1->Get(var2);
  TH1D *h4=(TH1D*)f2->Get(var2);

  TH1D *h5=(TH1D*)f1->Get(var3);
  TH1D *h6=(TH1D*)f2->Get(var3);

  
  
  h1->SetLineColor(4);
  h2->SetLineColor(3);

  h3->SetLineColor(4);
  h4->SetLineColor(3);

  h5->SetLineColor(4);
  h6->SetLineColor(3);
  
  /* if(var[0] != 'n' && var[0] != 'h') {
   h1->Rebin(5);
   h2->Rebin(5);
   }
   
   if(var[0] == 'h') {
   h1->Rebin(2);
   h2->Rebin(2);
   }*/
  
  double a1=h1->Integral();
  h1->Scale(1/a1);
  double a2=h2->Integral();
  h2->Scale(1/a2);

  double a3=h3->Integral();
  h3->Scale(1/a3);
  double a4=h4->Integral();
  h4->Scale(1/a4);

  double a5=h5->Integral();
  h5->Scale(1/a5);
  double a6=h6->Integral();
  h6->Scale(1/a6);

  
  auto ratio1 = new TRatioPlot(h1, h2,"divsym");
  c1->cd();
  ratio1->Draw();
  TPad *p1 = ratio1->GetUpperPad();
  p1->cd();
  auto l1= new TLegend(.5,.6,.7,.75);
  l1->AddEntry(h1,"Signal","L");
  l1->AddEntry(h2,bkg_process,"L");
  l1->Draw(); 

  auto ratio2 = new TRatioPlot(h3, h4,"divsym");
  c2->cd();
  ratio2->Draw();
  TPad *p2 = ratio2->GetUpperPad();
  p2->cd();
  auto l2= new TLegend(.5,.6,.7,.75);
  l2->AddEntry(h3,"Signal","L");
  l2->AddEntry(h4,bkg_process,"L");
  l2->Draw();

  auto ratio3 = new TRatioPlot(h5, h6,"divsym");
  c3->cd();
  ratio3->Draw();
  TPad *p3 = ratio3->GetUpperPad();
  p3->cd();
  auto l3= new TLegend(.5,.6,.7,.75);
  l3->AddEntry(h1,"Signal","L");
  l3->AddEntry(h2,bkg_process,"L");
  l3->Draw();
}
  
   
