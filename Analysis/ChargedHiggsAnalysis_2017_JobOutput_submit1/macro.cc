#include "TCanvas.h"
#include "TLegend.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void plot(TString filename, TString var, TString category) {
  fstream file;
  vector<TString>filenames;
  vector<TString>tags;
  file.open(filename,ios::in);
  if (file.is_open()){  
    string line;
    while(getline(file, line)){
      //      cout << line << "\n"; 
      
      filenames.push_back(line);
      std::size_t pos = line.find(".");
      std::string tag = line.substr(0,pos);
      tags.push_back(tag);
    }
  }  
  
  TFile* f1 = new TFile(filenames[0]);
  if (!f1) return;
  TFile* f2 = new TFile(filenames[1]);
  if (!f2) return;
  TFile* f3 = new TFile(filenames[2]);
  if (!f3) return;
  TFile* f4 = new TFile(filenames[3]);
  if (!f4) return;
  TFile* f5 = new TFile(filenames[4]);
  if (!f5) return;
  TFile* f6 = new TFile(filenames[5]);
  if (!f6) return;
  TFile* f7 = new TFile(filenames[6]);
  if (!f7) return;
  TFile* f8 = new TFile(filenames[7]);
  if (!f8) return;
  TFile* f9 = new TFile(filenames[8]);
  if (!f9) return;
  TFile* f10 = new TFile(filenames[9]);
  if (!f10) return;
  TFile* f11 = new TFile(filenames[10]);
  if (!f11) return;  


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

  
  TCanvas* c1 = new TCanvas("c1", var1);
  //c->cd();                                                                                                                                                                                               
  TCanvas* c2 = new TCanvas("c2", var2);
  TCanvas* c3 = new TCanvas("c3", var3);

  TH1D *h1=(TH1D*)f1->Get(var1);
  TH1D *h2=(TH1D*)f2->Get(var1);
  TH1D *h3=(TH1D*)f3->Get(var1);
  //TH1D *h4=(TH1D*)f4->Get(var1);
  TH1D *h5=(TH1D*)f5->Get(var1);
  TH1D *h6=(TH1D*)f6->Get(var1);
  TH1D *h7=(TH1D*)f7->Get(var1);
  TH1D *h8=(TH1D*)f8->Get(var1);
  TH1D *h9=(TH1D*)f9->Get(var1);
  TH1D *h10=(TH1D*)f10->Get(var1);
  TH1D *h11=(TH1D*)f11->Get(var1);
  
  TH1D *h1_2=(TH1D*)f1->Get(var2);
  TH1D *h2_2=(TH1D*)f2->Get(var2);
  TH1D *h3_2=(TH1D*)f3->Get(var2);
  //TH1D *h4_2=(TH1D*)f4->Get(var2);
  TH1D *h5_2=(TH1D*)f5->Get(var2);
  TH1D *h6_2=(TH1D*)f6->Get(var2);
  TH1D *h7_2=(TH1D*)f7->Get(var2);
  TH1D *h8_2=(TH1D*)f8->Get(var2);
  TH1D *h9_2=(TH1D*)f9->Get(var2);
  TH1D *h10_2=(TH1D*)f10->Get(var2);
  TH1D *h11_2=(TH1D*)f11->Get(var2);

  TH1D *h1_3=(TH1D*)f1->Get(var3);
  TH1D *h2_3=(TH1D*)f2->Get(var3);
  TH1D *h3_3=(TH1D*)f3->Get(var3);
  //TH1D *h4_3=(TH1D*)f4->Get(var3);
  TH1D *h5_3=(TH1D*)f5->Get(var3);
  TH1D *h6_3=(TH1D*)f6->Get(var3);
  TH1D *h7_3=(TH1D*)f7->Get(var3);
  TH1D *h8_3=(TH1D*)f8->Get(var3);
  TH1D *h9_3=(TH1D*)f9->Get(var3);
  TH1D *h10_3=(TH1D*)f10->Get(var3);
  TH1D *h11_3=(TH1D*)f11->Get(var3);
 
  
  h1->SetLineColor(1);
  h2->SetLineColor(2);
  h3->SetLineColor(3);
  //h4->SetLineColor(4);
  h5->SetLineColor(5);
  h6->SetLineColor(6);
  h7->SetLineColor(7);
  h8->SetLineColor(8);
  h9->SetLineColor(9);
  h10->SetLineColor(29);
  h11->SetLineColor(49);
  
  h1_2->SetLineColor(1);
  h2_2->SetLineColor(2);
  h3_2->SetLineColor(3);
  //h4_2->SetLineColor(4);
  h5_2->SetLineColor(5);
  h6_2->SetLineColor(6);
  h7_2->SetLineColor(7);
  h8_2->SetLineColor(8);
  h9_2->SetLineColor(9);
  h10_2->SetLineColor(29);
  h11_2->SetLineColor(49);


  h1_3->SetLineColor(1);
  h2_3->SetLineColor(2);
  h3_3->SetLineColor(3);
  //h4_3->SetLineColor(4);
  h5_3->SetLineColor(5);
  h6_3->SetLineColor(6);
  h7_3->SetLineColor(7);
  h8_3->SetLineColor(8);
  h9_3->SetLineColor(9);
  h10_3->SetLineColor(29);
  h11_3->SetLineColor(49);
  

  double a1=h1->Integral();
  h1->Scale(1/a1);
  double a2=h2->Integral();
  h2->Scale(1/a2);
  double a3=h3->Integral();
  h3->Scale(1/a3);
  //double a4=h4->Integral();
  //h4->Scale(1/a4);
  double a5=h5->Integral();
  h5->Scale(1/a5);
  double a6=h6->Integral();
  h6->Scale(1/a6);
  double a7=h7->Integral();
  h7->Scale(1/a7);
  double a8=h8->Integral();
  h8->Scale(1/a8);
  double a9=h9->Integral();
  h9->Scale(1/a9);
  double a10=h10->Integral();
  h10->Scale(1/a10);
  double a11=h11->Integral();
  h11->Scale(1/a11);
  
  
  double a1_2=h1_2->Integral();
  h1_2->Scale(1/a1_2);
  double a2_2=h2_2->Integral();
  h2_2->Scale(1/a2_2);
  double a3_2=h3_2->Integral();
  h3_2->Scale(1/a3_2);
  //double a4_2=h4_2->Integral();
  //h4_2->Scale(1/a4_2);
  double a5_2=h5_2->Integral();
  h5_2->Scale(1/a5_2);
  double a6_2=h6_2->Integral();
  h6_2->Scale(1/a6_2);
  double a7_2=h7_2->Integral();
  h7_2->Scale(1/a7_2);
  double a8_2=h8_2->Integral();
  h8_2->Scale(1/a8_2);
  double a9_2=h9_2->Integral();
  h9_2->Scale(1/a9_2);
  double a10_2=h10_2->Integral();
  h10_2->Scale(1/a10_2);
  double a11_2=h11_2->Integral();
  h11_2->Scale(1/a11_2);
  

  double a1_3=h1_3->Integral();
  h1_3->Scale(1/a1_3);
  double a2_3=h2_3->Integral();
  h2_3->Scale(1/a2_3);
  double a3_3=h3_3->Integral();
  h3_3->Scale(1/a3_3);
  //double a4_3=h4_3->Integral();
  //h4_3->Scale(1/a4_3);
  double a5_3=h5_3->Integral();
  h5_3->Scale(1/a5_3);
  double a6_3=h6_3->Integral();
  h6_3->Scale(1/a6_3);
  double a7_3=h7_3->Integral();
  h7_3->Scale(1/a7_3);
  double a8_3=h8_3->Integral();
  h8_3->Scale(1/a8_3);
  double a9_3=h9_3->Integral();
  h9_3->Scale(1/a9_3);
  double a10_3=h10_3->Integral();
  h10_3->Scale(1/a10_3);
  double a11_3=h11_3->Integral();
  h11_3->Scale(1/a11_3);


  

  
  c1->cd();
  h1->Draw("hist");
  h2->Draw("SAMEhist");
  h3->Draw("SAMEhist");
  //h4->Draw("SAMEhist");
  h5->Draw("SAMEhist");
  h6->Draw("SAMEhist");
  h7->Draw("SAMEhist");
  h8->Draw("SAMEhist");
  h9->Draw("SAMEhist");
  h10->Draw("SAMEhist");
  h11->Draw("SAMEhist");
  auto l1= new TLegend(.5,.6,.7,.75);
  l1->AddEntry(h1,tags[0],"L");
  l1->AddEntry(h2,tags[1],"L");
  l1->AddEntry(h3,tags[2],"L");
  //l1->AddEntry(h4,tags[3],"L");
  l1->AddEntry(h5,tags[4],"L");
  l1->AddEntry(h6,tags[5],"L");
  l1->AddEntry(h7,tags[6],"L");
  l1->AddEntry(h8,tags[7],"L");
  l1->AddEntry(h9,tags[8],"L");
  l1->AddEntry(h10,tags[9],"L");
  l1->AddEntry(h11,tags[10],"L");
  l1->Draw();  


  c2->cd();
  h1_2->Draw("hist");
  h2_2->Draw("SAMEhist");
  h3_2->Draw("SAMEhist");
  //h4->Draw("SAMEhist");                                                                                                                                                                                  
  h5_2->Draw("SAMEhist");
  h6_2->Draw("SAMEhist");
  h7_2->Draw("SAMEhist");
  h8_2->Draw("SAMEhist");
  h9_2->Draw("SAMEhist");
  h10_2->Draw("SAMEhist");
  h11_2->Draw("SAMEhist");
  auto l2= new TLegend(.5,.6,.7,.75);
  l2->AddEntry(h1_2,tags[0],"L");
  l2->AddEntry(h2_2,tags[1],"L");
  l2->AddEntry(h3_2,tags[2],"L");
  //l2->AddEntry(h4_2,tags[3],"L");
  l2->AddEntry(h5_2,tags[4],"L");
  l2->AddEntry(h6_2,tags[5],"L");
  l2->AddEntry(h7_2,tags[6],"L");
  l2->AddEntry(h8_2,tags[7],"L");
  l2->AddEntry(h9_2,tags[8],"L");
  l2->AddEntry(h10_2,tags[9],"L");
  l2->AddEntry(h11_2,tags[10],"L");
  l2->Draw();



  c3->cd();
  h1_3->Draw("hist");
  h2_3->Draw("SAMEhist");
  h3_3->Draw("SAMEhist");
  //h4->Draw("SAMEhist");
  h5_3->Draw("SAMEhist");
  h6_3->Draw("SAMEhist");
  h7_3->Draw("SAMEhist");
  h8_3->Draw("SAMEhist");
  h9_3->Draw("SAMEhist");
  h10_3->Draw("SAMEhist");
  h11_3->Draw("SAMEhist");
  auto l3= new TLegend(.5,.6,.7,.75);
  l3->AddEntry(h1_3,tags[0],"L");
  l3->AddEntry(h2_3,tags[1],"L");
  l3->AddEntry(h3_3,tags[2],"L");
  // l3->AddEntry(h4_3,tags[3],"L");
  l3->AddEntry(h5_3,tags[4],"L");
  l3->AddEntry(h6_3,tags[5],"L");
  l3->AddEntry(h7_3,tags[6],"L");
  l3->AddEntry(h8_3,tags[7],"L");
  l3->AddEntry(h9_3,tags[8],"L");
  l3->AddEntry(h10_3,tags[9],"L");
  l3->AddEntry(h11_3,tags[10],"L");
  l3->Draw();

}
