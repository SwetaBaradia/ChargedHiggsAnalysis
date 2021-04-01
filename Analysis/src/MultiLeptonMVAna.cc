#include "configana.h"
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <functional>
#include <numeric>
#include <string>
#include <climits>
#include <cassert>
#include <cstdlib>
#include <sstream>
#include <utility> 
#include <typeinfo>
#include <memory>

#include "TROOT.h"
#include "TSystem.h"
#include "TChain.h"
#include "TClonesArray.h"
#include "TCanvas.h"
#include "TFrame.h"
#include "TRandom.h"
#include "TStopwatch.h"
#include "TFile.h"
#include "TH1K.h"
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

#include "configana.h"
#include "LeptonCand.h"
#include "MultiLeptonMVAna.h"

using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::ostringstream;
using std::vector;
using std::map;
using std::pair;
using std::setprecision;
using std::setw;

// -----------
// Constructor
// -----------
MultiLeptonMVAna::MultiLeptonMVAna()
  : PhysicsObjSelector()
   {}

// ----------
// Destructor
// ----------
MultiLeptonMVAna::~MultiLeptonMVAna() 
{
}
// -------------------------------------------------------
// Prepare for the run, do necessary initialisation etc.
// -------------------------------------------------------
bool MultiLeptonMVAna::beginJob() 
{ 
  if (!PhysicsObjSelector::beginJob()) return false;

  histf()->cd();
  histf()->mkdir("TMVAnalysis");

  histf()->cd();
  histf()->mkdir("Analysis");

  histf()->cd();
  histf()->mkdir("Categorical_Analysis");

  fakehistf()->cd();
  fakehistf()->mkdir("TMVAnalysis");


  bookHistograms();

  if (_createMVATree) {
#ifdef TRUE_CPP14
    skimObj_ = std::make_unique <MVASkim> (_mvaInputFile);
#else
    skimObj_ = std::unique_ptr <MVASkim>(new MVASkim (_mvaInputFile));
#endif
    if (!skimObj_) return false;
  }

  else if (_readMVA) {
#ifdef TRUE_CPP14
    mvaObj_ = std::make_unique<MVAnalysis>(_MVAnetwork, _MVAxmlFile);
#else
    mvaObj_ = std::unique_ptr <MVAnalysis>(new MVAnalysis (_MVAnetwork, _MVAxmlFile));
#endif
    if (!mvaObj_) return false;
  }

#ifdef  SKIP_DUPLICATE_ALL
  eventIdStore_.clear();
#endif

  return true;
}

// ---------------
// Book histograms
// ---------------
void MultiLeptonMVAna::bookHistograms()
{
  PhysicsObjSelector::bookHistograms();
  histf()->cd();
  histf()->cd("TMVAnalysis");

  // book histograms to be filled at different stages
  new TH1D("nPV", "Number of vertices", 60, 0, 60);
  new TH1D("nGoodPV", "Number of Good vertices", 60, 0, 60);
  if (isMC()) {
    new TH1D("puWeight", "PU wight", 100, -20., 20.);
    new TH1D("evWeight", "Evt Wt", 100, -20., 20.);
    new TH1D("TotWt", "Total Wt", 100, -20., 20.);
    new TH1D("pu_evtWt", "PU*Event weight factor (MC events)", 20, -10., 10.);
    new TH1D("nLHEJets", "nJets in ME level", 10, -0.5, 9.5);
  }
  new TH1D("bTagWt", "CSSV2", 100, 0., 10.);
  new TH1D("evType", "0,1,2=Same Charged Leptons :: -1=Opposite charged Leptons", 7, -1.5, 5.5);
  
  new TH1D("evtCutFlow", "Event CutFlow", 12, -0.5, 11.5);
  if (isMC()) new TH1D("evtCutFlowWt", "Event CutFlow (Weighted)", 12, -0.5, 11.5);
  new TH1D("nMuons", "nTightIsoMuons", 10, -0.5, 9.5);
  new TH1D("nElectrons", "nTightIsoElectrons", 10, -0.5, 9.5);

  
  histf()->cd();
  histf()->cd("Analysis");

  new TH1D("nj_ak8clean", "", 10, -0.5, 9.5);
  new TH1D("nj", "", 10, -0.5, 9.5);
  new TH1D("nbj", "", 10, -0.5, 9.5);
  new TH1D("nfj", "", 10, -0.5, 9.5);
  new TH1D("nfbj", "", 10, -0.5, 9.5);

  new TH1D ("fj1_pt", "", 40, 0., 1000.);
  new TH1D ("fj2_pt", "", 40, 0., 1000.);
  new TH1D ("fj3_pt", "", 40, 0., 1000.);
  new TH1D ("fj4_pt", "", 40, 0., 1000.);
  new TH1D ("fj5_pt", "", 40, 0., 1000.);

  new TH1D ("j1_pt", "", 40, 0., 1000.);
  new TH1D ("j2_pt", "", 40, 0., 1000.);
  new TH1D ("j3_pt", "", 40, 0., 1000.);
  new TH1D ("j4_pt", "", 40, 0., 1000.);
  new TH1D ("j5_pt", "", 40, 0., 1000.);


  new TH1D ("j1_ak8clean_pt", "", 40, 0., 1000.);
  new TH1D ("j2_ak8clean_pt", "", 40, 0., 1000.);
  new TH1D ("j3_ak8clean_pt", "", 40, 0., 1000.);
  new TH1D ("j4_ak8clean_pt", "", 40, 0., 1000.);
  new TH1D ("j5_ak8clean_pt", "", 40, 0., 1000.);
  new TH1D("fj1j1_ak8clean_dR", "", 100, -0.5, 4.5);


  histf()->cd();
  histf()->cd("Categorical_Analysis");
  new TH1D("evYield_nfatjets", "", 4, -0.5, 3.5);

  //Resolved Category ........................0 FATJET
  //mumu event                                                                                                                                                                                            
  new TH1D("muon_1_mumu_pt_R", "", 300, 0., 300.);
  new TH1D("muon_2_mumu_pt_R", "", 300, 0., 300.);
  new TH1D("mu1mu2_dR_R", "", 100, -0.5, 4.5);

  //elel event                                                                                                                                                                                             
  new TH1D("ele_1_elel_pt_R", "", 300, 0., 300.);
  new TH1D("ele_2_elel_pt_R", "", 300, 0., 300.);
  new TH1D("ele1ele2_dR_R", "", 100, -0.5, 4.5);

  //mu el event                                                                                                                                                                                             
  new TH1D("muon_muel_pt_R", "", 300, 0., 300.);
  new TH1D("ele_muel_pt_R", "", 300, 0., 300.);
  new TH1D("muel_dR_R", "", 100, -0.5, 4.5);

  new TH1D("nj_R", "", 10, -0.5, 9.5);
  new TH1D("j1lep1_dR_R","", 50, 0, 5);
  new TH1D("j1lep2_dR_R","", 50, 0, 5);
  new TH1D("j2lep1_dR_R","", 50, 0, 5);
  new TH1D("j2lep2_dR_R","", 50, 0, 5);
  new TH1D("j3lep1_dR_R","", 50, 0, 5);
  new TH1D("j3lep2_dR_R","", 50, 0, 5);
  new TH1D("j4lep1_dR_R","", 50, 0, 5);
  new TH1D("j4lep2_dR_R","", 50, 0, 5);

  new TH1D("j1_pt_R", "", 200, 0., 1000.);
  new TH1D("j2_pt_R", "", 200, 0., 1000.);
  new TH1D("j3_pt_R", "", 200, 0., 1000.);
  new TH1D("j4_pt_R", "", 200, 0., 1000.);
  new TH1D("j1j2_dR_R", "", 100, -0.5, 4.5);
  new TH1D("j2j3_dR_R", "", 100, -0.5, 4.5);
  new TH1D("j1j3_dR_R", "", 100, -0.5, 4.5);
  new TH1D("j_dR_min_R", "", 100, -0.5, 4.5);

  new TH1D("hT_vector_all_R", "", 1000, 0, 5000);
  new TH1D("hT_scalar_all_R", "", 1000, 0, 5000);
  new TH1D("hT_vector_j_R", "", 1000, 0., 5000.);
  new TH1D("hT_scalar_j_R", "", 1000, 0., 5000.);
  new TH1D("jInvM_R", "", 200, -50., 950.);
 
  //Boosted Category .....................FATJET >=1

  //mumu event                                                                                                                                                                                             
  new TH1D("muon_1_mumu_pt_B", "", 300, 0., 300.);
  new TH1D("muon_2_mumu_pt_B", "", 300, 0., 300.);
  new TH1D("mu1mu2_dR_B", "", 100, -0.5, 4.5);

  //elel event                                                                                                                                                                                             
  new TH1D("ele_1_elel_pt_B", "", 300, 0., 300.);
  new TH1D("ele_2_elel_pt_B", "", 300, 0., 300.);
  new TH1D("ele1ele2_dR_B", "", 100, -0.5, 4.5);

  //mu el event                                                                                                                                                                                            
  new TH1D("muon_muel_pt_B", "", 300, 0., 300.);
  new TH1D("ele_muel_pt_B", "", 300, 0., 300.);
  new TH1D("muel_dR_B", "", 100, -0.5, 4.5);

  new TH1D("hT_vector_all_B", "", 1000, 0, 5000);
  new TH1D("hT_scalar_all_B", "", 1000, 0, 5000);
  new TH1D("hT_vector_j_ak8clean_B", "", 1000, 0., 5000.);
  new TH1D("hT_scalar_j_ak8clean_B", "", 1000, 0., 5000.);
  new TH1D("hT_vector_fj_B", "", 1000, 0., 5000.);
  new TH1D("hT_scalar_fj_B", "", 1000, 0., 5000.);


  new TH1D("nj_ak8clean_B", "", 10, -0.5, 9.5);
  new TH1D("nfj_B", "", 10, -0.5, 9.5);


  //FATJET ==1 
  new TH1D ("fj1_pt_has1FatJet_B", "", 1000, 0., 1000.);
  new TH1D ("fj1_mass_has1FatJet_B", "", 500, 0, 500);
  new TH1D ("fj1_massSD_has1FatJet_B", "", 100, -50., 450.);
  new TH1D ("fj1_tau1_has1FatJet_B", "", 100, 0, 1);
  new TH1D ("fj1_tau2_has1FatJet_B", "", 100, 0, 1);
  new TH1D ("fj1_tau3_has1FatJet_B", "", 100, 0, 1);
  new TH1D ("fj1_tau3ovtau2_has1FatJet_B", "", 100, -0.5, 1.5);
  new TH1D ("fj1_tau2ovtau1_has1FatJet_B", "", 100, -0.5, 1.5);

  //subjet nFJ =1                                                                                                                                                                                         
                                                                             
  new TH1D("s1fj1_pt_has1FatJet_B", "", 1000, 0., 1000.);
  new TH1D("s1fj1_mass_has1FatJet_B", "", 100, -50.0, 450.0);

  new TH1D("s2fj1_pt_has1FatJet_B", "", 1000, 0., 1000.);
  new TH1D("s2fj1_mass_has1FatJet_B", "", 100, -50.0, 450.0);

  new TH1D ("fjInvM_has1FatJet_B", "", 100, -50., 450.);
  //  new TH1D ("fjInvM_has1FatJet_B", "", 100, -50., 450.);



  new TH1D("nj_ak8clean_has1FatJet_B", "", 10, -0.5, 9.5);


  //jetColl_ak8clean.size()>=1                                                                                                                                                                
  new TH1D("j1_ak8clean_pt_has1FatJet_B", "", 200, 0., 1000.);
  new TH1D("j1_ak8cleanfj_dR_has1FatJet_B","", 50, 0, 5);  

  //jetColl_ak8clean.size()>=2                                                                                                                                                                                
  new TH1D("j2_ak8clean_pt_has1FatJet_B", "", 200, 0., 1000.);
  new TH1D("j2_ak8cleanfj_dR_has1FatJet_B", "", 50, 0., 5);
  new TH1D("j1j2_ak8clean_dR_has1FatJet_B", "", 100, -0.5, 4.5);

  //jetColl_ak8clean.size()>=3
  new TH1D("j3_ak8clean_pt_has1FatJet_B", "", 200, 0., 1000.);
  new TH1D("j3_ak8cleanfj_dR_has1FatJet_B", "", 50, 0., 5);





  //FATJET >1
  // fjet no 1                                                                                                                                                                                             
  new TH1D ("fj1_pt_has2FatJet_B", "", 1000, 0., 1000.);
  new TH1D ("fj1_mass_has2FatJet_B", "", 500, 0, 500);
  new TH1D ("fj1_massSD_has2FatJet_B", "", 100, -50., 450.);
  new TH1D ("fj1_tau1_has2FatJet_B", "", 100, 0, 1);
  new TH1D ("fj1_tau2_has2FatJet_B", "", 100, 0, 1);
  new TH1D ("fj1_tau3_has2FatJet_B", "", 100, 0, 1);
  new TH1D ("fj1_tau3ovtau2_has2FatJet_B", "", 100, -0.5, 1.5);

  //subjet                                                                                                                                                                       
  new TH1D("s1fj1_pt_has2FatJet_B", "", 1000, 0., 1000.);
  new TH1D("s1fj1_mass_has2FatJet_B", "", 100, -50.0, 450.0);

  new TH1D("s2fj1_pt_has2FatJet_B", "", 1000, 0., 1000.);
  new TH1D("s2fj1_mass_has2FatJet_B", "", 100, -50.0, 450.0);

  new TH1D("fj1InvM_has2FatJet_B", "", 100, -50., 450.);
  //new TH1D("fj1InvM_has2FatJet_B", "", 100, -50., 450.);

  // fjet no 2                                                                                                                    

  new TH1D ("fj2_pt_has2FatJet_B", "", 1000, 0., 1000.);
  new TH1D ("fj2_mass_has2FatJet_B", "", 500, 0, 500);
  new TH1D ("fj2_massSD_has2FatJet_B", "", 100, -50., 450.);
  new TH1D ("fj2_tau1_has2FatJet_B", "", 100, 0, 1);
  new TH1D ("fj2_tau2_has2FatJet_B", "", 100, 0, 1);
  new TH1D ("fj2_tau3_has2FatJet_B", "", 100, 0, 1);
  new TH1D ("fj2_tau3ovtau2_has2FatJet_B", "", 100, -0.5, 1.5);

  //subjet                                                                                                                                                                                                 
  new TH1D("s1fj2_pt_has2FatJet_B", "", 1000, 0., 1000.);
  new TH1D("s1fj2_mass_has2FatJet_B", "", 100, -50.0, 450.0);

  new TH1D("s2fj2_pt_has2FatJet_B", "", 1000, 0., 1000.);
  new TH1D("s2fj2_mass_has2FatJet_B", "", 100, -50.0, 450.0);

  new TH1D("fj2InvM_has2FatJet_B", "", 100, -50., 450.);
  //new TH1D("fj2InvM_has2FatJet_B", "", 100, -50., 450.);
                                                                                                     


  new TH1D("nj_ak8clean_has2FatJet_B", "", 10, -0.5, 9.5);
                                                                                                     
  //jetColl_ak8clean.size()>=1                                                                                                    
  new TH1D("j1_ak8clean_pt_has2FatJet_B", "", 200, 0., 1000.);
  new TH1D("j1_ak8cleanfj1_dR_has2FatJet_B","", 50, 0, 5);
  new TH1D("j1_ak8cleanfj2_dR_has2FatJet_B","", 50, 0, 5);

  //jetColl_ak8clean.size()>=2                                                                                                    
  new TH1D("j2_ak8clean_pt_has2FatJet_B", "", 200, 0., 1000.);
  new TH1D("j2_ak8cleanfj1_dR_has2FatJet_B", "", 50, 0., 5);
  new TH1D("j2_ak8cleanfj2_dR_has2FatJet_B", "", 50, 0., 5);
  new TH1D("j1j2_ak8clean_dR_has2FatJet_B", "", 100, -0.5, 4.5);
 
  //jetColl_ak8clean.size()>=3                                                                                                     
  new TH1D("j3_ak8clean_pt_has2FatJet_B", "", 200, 0., 1000.);
  new TH1D("j3_ak8cleanfj1_dR_has2FatJet_B", "", 50, 0., 5);
  new TH1D("j3_ak8cleanfj2_dR_has2FatJet_B", "",50, 0., 5);

  // new TH1D("fjInvM_has2FatJet_usingsubjet_B", "", 100, -50., 450.);
  // new TH1D("fjInvM_has2FatJet_B", "", 100, -50., 450.);


  histf()->cd();
  histf()->ls();

  fakehistf()->cd();
  fakehistf()->cd("TMVAnalysis");
  new TH1D("nMuons", "nTightIsoMuons", 10, -0.5, 9.5);
  new TH1D("nElectrons", "nTightIsoElectrons", 10, -0.5, 9.5);

  fakehistf()->cd();
  fakehistf()->ls();
}

// -------------------------------
// Clear vectors before event loop
// -------------------------------

void MultiLeptonMVAna::clearLists() {
  PhysicsObjSelector::clear();
}
// -------------------
// The main event loop
// -------------------

void MultiLeptonMVAna::eventLoop()
{
  Options op;
  op.verbose = true;
  op.usesbit = true;  // Crucial
  op.printselected = false;

  //if (!beginJob()) std::cout<<"See your beginJob() function!!!\n";
  int nPrint = std::max(100000, nEvents()/10000);
  
  // --------------------
  // Start the event loop
  // --------------------
  string lastFile;
  int fevt = (firstEvent() > -1) ? firstEvent() : 0;
  int levt = (lastEvent() > -1) ? lastEvent() : nEvents();
  cout << ">>> Event range: [" << fevt << ", " << levt -1 << "]" << endl;
  int ev = 0;

  //--------------------------------------------------//
  //---Sum of GenEvWtSum over all the trees in chain--//
  //--------------------------------------------------//

  if (isMC()) {
    while (treeReaderRun()->Next()) {
      evtWeightSum_ += getGenSumW();
    }
    lumiFac = lumiWt(evtWeightSum_, true);
    cout <<">>> lumiWt: "<<lumiFac<<" <<<<"<<endl;
  }
  //--------------------------------------------------//
  //--------------------Event Loop--------------------//
  //--------------------------------------------------//
  while (treeReader()->Next()) {
    ev++;
    if (ev > levt) {
      std::cout<<"Event Loop Finished!!!"<<std::endl;
      break;
    }

    clearEvent(); // reset tree variables 
    clearLists(); // reset analysis related lists for each event

    string currentFile(gSystem->BaseName(chain()->GetCurrentFile()->GetName()));
    if (!findEventInfo()) std::cout<<">>>Event Info Not Found :( :( :(\n";


    if (isMC() && readGenInfo())
      if (!findGenPartInfo()) 
	std::cout<<">>>Gen Info Not Found :( :( :(\n";

    const auto& eventlist = getEventList();
    const vhtm::Event& evt = eventlist.at(0);

    // Show the status
    if (ev%nPrint == 0 || firstEvent() > -1)
    //    if (ev%nPrint == 0)
      cout << "Tree# " << setw(4) << chain()->GetTreeNumber()
	   << " ==> " << currentFile
	   << " <<< Run# " << setw(8) << evt.run
	   << " Lumis# " << setw(6) << evt.lumis
	   << " Event# " << setw(12) << evt.event << " >>> "
	   << " Events proc. " << setw(8) << ((firstEvent() > -1) ? ev - firstEvent() : ev)
	   << endl;
    
    // Select a set of events by [run, event]
    if (useEventList_ && eventIdMap().size()) {
      std::ostringstream mkey;
      mkey << evt.run << "-" << evt.lumis << "-" << evt.event;
      if (eventIdMap().find(mkey.str()) != eventIdMap().end()) continue;
    }

    histf()->cd(); //required
    histf()->cd("TMVAnalysis");
    
    //if (isMC()) AnaUtil::fillHist1D ("nLHEJets", evt.nLHEJets, 1.0);
    // For data or for MC without pileup
    float puWt   = 1.0; //for Data
    float evWt   = 1.0; //for Data
    float allWt  = 1.0; //for Data

    AnaUtil::fillHist1D("bTagWt", evt.btagWeight_CSVV2);

    if (isMC()) {
      evWt = evt.genEvWt;
      AnaUtil::fillHist1D ("evWeight", evWt, 1.0);
      if (usePUWt()) {
	puWt = evt.PUWeight;
	AnaUtil::fillHist1D("puWeight", puWt);      
      }
      allWt = evWt * puWt * evt.btagWeight_CSVV2 * lumiFac;
      AnaUtil::fillHist1D ("TotWt", allWt, 1.0);
    }
    if (op.verbose && ev == 1) 
      cout << " <<<eventNo# " << setw(8) << ev <<"\n"
	   << " eventWt# " << setw(8) << evWt <<"\n"
	   << " pileUpWt# " << setw(8) << puWt <<"\n"
	   << " lumiWt# " << setw(8) << lumiFac <<"\n"
	   << " bTagWt# " << setw(8) << evt.btagWeight_CSVV2 << "\n"
	   << " totalWt# " << setw(8) << allWt << " >>> "
	   << endl;

    //    else evtWeightSum_ += evWt;

    AnaUtil::fillHist1D("evType", evt.evType, allWt);

    AnaUtil::fillHist1D("evtCutFlow", 0);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 0, allWt);

    AnaUtil::fillHist1D("nPV", evt.nPV, allWt);
    AnaUtil::fillHist1D("nGoodPV", evt.nGoodPV, allWt);
    if (evt.nGoodPV < 1) continue;
    AnaUtil::fillHist1D("evtCutFlow", 1);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 1, allWt);

    bool trigDoubleMuonHLT {false};
    bool trigSingleMuonHLT {false};
    bool trigDoubleEgHLT {false};
    bool trigSingleEleHLT {false};
    bool trigMuonEgHLT {false};

    // HLT Selection
    auto doubleMuHLTpaths  = AnaBase::getDoubleMuonHLTpaths();
    auto doubleMuHLTscores = PhysicsObjSelector::getDoubleMuonHLTscores();
    for (size_t i = 0; i < doubleMuHLTpaths.size(); ++i){
      if (doubleMuHLTscores[i]) {
	trigDoubleMuonHLT = true;
        break;
      }
    }
    auto doubleEgHLTpaths  = AnaBase::getDoubleEgHLTpaths();
    auto doubleEgHLTscores = PhysicsObjSelector::getDoubleEgHLTscores();
    for (size_t i = 0; i < doubleEgHLTpaths.size(); ++i){
      if (doubleEgHLTscores[i]) {
	trigDoubleEgHLT = true;
	break;
      }
    }
    auto muonEgHLTpaths  = AnaBase::getMuonEgHLTpaths();
    auto muonEgHLTscores = PhysicsObjSelector::getMuonEgHLTscores();
    for (size_t i = 0; i < muonEgHLTpaths.size(); ++i){
      if (muonEgHLTscores[i]) {
	trigMuonEgHLT = true;
	break;
      }
    }
    auto singleMuHLTpaths  = AnaBase::getSingleMuonHLTpaths();
    auto singleMuHLTscores = PhysicsObjSelector::getSingleMuonHLTscores();
    for (size_t i = 0; i < singleMuHLTpaths.size(); ++i){
      if (singleMuHLTscores[i]) {
	trigSingleMuonHLT = true;
	break;
      }
    }
    auto singleEleHLTpaths  = AnaBase::getSingleElectronHLTpaths();
    auto singleEleHLTscores = PhysicsObjSelector::getSingleElectronHLTscores();
    for (size_t i = 0; i < singleEleHLTpaths.size(); ++i){
      if (singleEleHLTscores[i]) {
	trigSingleEleHLT = true;
	break;
      }
    }
    
    //Making the object collections ready!!!
    findObjects();

    //if (ev < 100) dumpEverything (ev, fLog());

    histf()->cd(); //required
    histf()->cd("TMVAnalysis");

    //Access Selected Objects
    const auto& preselElColl   = getPreSelEleList();
    const auto& preselMuColl   = getPreSelMuList();
    const auto& fakeableElColl = getFakeableEleList();
    const auto& fakeableMuColl = getFakeableMuList();
    const auto& tightElColl    = getTightEleList();
    const auto& tightMuColl    = getTightMuList();
    const auto& jetColl        = getCleanJetList(); //all jets
    const auto& bJetColl       = getBJetList();
    const auto& fatJetColl     = getCleanFatJetList();// all fat jets
    const auto& subJetColl     = getSubJetList();                                                                                                                                     
    const auto& fatbJetColl    = getBTaggedFatJetList();
    const auto& tauColl        = getLepCleanTauList();
    const auto& jetColl_ak8clean        = getSJetCleanJetList(); //all ak8 cleanjets                                                                                                                                             
    const vhtm::MET& met       = getMETList().at(0);

    
    int nJet = jetColl.size();
    int nfJet = fatJetColl.size();
    int nbJet = bJetColl.size();
    int nbfJet = fatbJetColl.size();
    int nJet_ak8clean = jetColl_ak8clean.size();


    //P A C K I N G  L E P T O N S
    std::vector<LeptonCand>preselLepColl;
    if (preselMuColl.size() > 0) packLeptons <vhtm::Muon> (preselMuColl, preselLepColl);
    if (preselElColl.size() > 0) packLeptons <vhtm::Electron> (preselElColl, preselLepColl);
    AnaUtil::fillHist1D("nPreselLeptons", preselLepColl.size(), allWt);

    std::vector<LeptonCand>fakeableLepColl;
    if (fakeableMuColl.size() > 0) packLeptons <vhtm::Muon> (fakeableMuColl, fakeableLepColl);
    if (fakeableElColl.size() > 0) packLeptons <vhtm::Electron> (fakeableElColl, fakeableLepColl);
    AnaUtil::fillHist1D("nFakeableLeptons", fakeableLepColl.size(), allWt);
    std::sort(std::begin(fakeableLepColl), std::end(fakeableLepColl), PtComparator<LeptonCand>()); //sorting fakeable lepton candidates

    std::vector<LeptonCand>tightLepColl;
    if (tightMuColl.size() > 0) packLeptons <vhtm::Muon> (tightMuColl, tightLepColl);
    if (tightElColl.size() > 0) packLeptons <vhtm::Electron> (tightElColl, tightLepColl);
    AnaUtil::fillHist1D("nTightLeptons", tightLepColl.size(), allWt);
    std::sort(std::begin(tightLepColl), std::end(tightLepColl), PtComparator<LeptonCand>()); //sorting tight  lepton candidates

    if (fakeableLepColl.size() < 2) continue;
    AnaUtil::fillHist1D("evtCutFlow", 2);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 2, allWt);

    if (!(fakeableLepColl[0].pt > 25 && fakeableLepColl[1].pt > 15)) continue;
    AnaUtil::fillHist1D("evtCutFlow", 3);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 3, allWt);

    bool passMuTrig {false}; 
    bool passElTrig {false};
    bool passEgTrig {false};

    if (fakeableLepColl[0].flavour == 1 && fakeableLepColl[1].flavour == 1) { 
      if (trigDoubleMuonHLT || trigSingleMuonHLT) passMuTrig = true;}
    
    else if (fakeableLepColl[0].flavour == 2 && fakeableLepColl[1].flavour == 2) {  
      if (trigDoubleEgHLT || trigSingleEleHLT) passElTrig = true;}

    if ((fakeableLepColl[0].flavour == 1 && fakeableLepColl[1].flavour == 2) || (fakeableLepColl[0].flavour == 2 && fakeableLepColl[1].flavour == 1)) { 
      if (trigSingleMuonHLT || trigSingleEleHLT || trigMuonEgHLT) passEgTrig = true;}

    if (!(passMuTrig || passElTrig || passEgTrig)) continue;
    AnaUtil::fillHist1D("evtCutFlow", 4);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 4, allWt);

    if (fakeableLepColl[0].charge * fakeableLepColl[1].charge < 0) continue;
    AnaUtil::fillHist1D("evtCutFlow", 5);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 5, allWt);
    
    if (hasLowMassResonance(preselLepColl)) continue;
    AnaUtil::fillHist1D("evtCutFlow", 6);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 6, allWt);

    if (hasZcandidate(preselLepColl)) continue;
    AnaUtil::fillHist1D("evtCutFlow", 7);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 7, allWt);

    if (tightLepColl.size() > 2) continue;
    AnaUtil::fillHist1D("evtCutFlow", 8);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 8, allWt);

    if (tauColl.size() > 0) continue;
    AnaUtil::fillHist1D("evtCutFlow", 9);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 9, allWt);

    bool isSR {false};
    bool isFake {false};
    size_t tlep = 0;
      
    for (size_t i = 0; i < 2; ++i) {
      auto indx = fakeableLepColl[i].index;
      auto flav = fakeableLepColl[i].flavour;
      if (flav == 1) {
	for (auto& mu : tightMuColl) 
	  if (indx == mu.index) tlep++;
      }
      else if (flav == 2) {
	for (auto& el : tightElColl)
	  if (indx == el.index) tlep++;
      }
    }

    isSR = (tlep == 2) ? true : false;
    isFake = (isSR) ? false : true;

    if (!isSR) continue; 
    AnaUtil::fillHist1D("evtCutFlow", 10);
    if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 10, allWt);
    
    /* else if (isFake) {
      AnaUtil::fillHist1D("evtCutFlow", 11);
      if (isMC()) AnaUtil::fillHist1D("evtCutFlowWt", 11, allWt);
      }
    */

     
    histf()->cd();
    histf()->cd("Analysis");
    AnaUtil::fillHist1D ("nj_ak8clean", nJet_ak8clean, allWt);
    AnaUtil::fillHist1D ("nj", nJet, allWt);
    AnaUtil::fillHist1D ("nbj", nbJet, allWt);
    AnaUtil::fillHist1D ("nfj", nfJet, allWt);
    AnaUtil::fillHist1D ("nfbj", nbfJet, allWt);
    if(nfJet >= 1) {
      AnaUtil::fillHist1D ("fj1_pt", fatJetColl[0].pt, allWt);
      if(nJet_ak8clean >=1 ) 
	AnaUtil::fillHist1D ("fj1j1_ak8clean_dR", AnaUtil::getP4(fatJetColl[0]).DeltaR(AnaUtil::getP4(jetColl_ak8clean[0])),allWt);
    }

    if(nfJet >= 2)
      AnaUtil::fillHist1D ("fj2_pt", fatJetColl[1].pt, allWt);
    if(nfJet >= 3)
      AnaUtil::fillHist1D ("fj3_pt", fatJetColl[2].pt, allWt);
    if(nfJet >= 4)
      AnaUtil::fillHist1D ("fj4_pt", fatJetColl[3].pt, allWt);
    if(nfJet >= 5)
      AnaUtil::fillHist1D ("fj5_pt", fatJetColl[4].pt, allWt);

    if(nJet >= 1) 
      AnaUtil::fillHist1D ("j1_pt", jetColl[0].pt, allWt);
    if(nJet >= 2)
      AnaUtil::fillHist1D ("j2_pt", jetColl[1].pt, allWt);
    if(nJet >= 3)
      AnaUtil::fillHist1D ("j3_pt", jetColl[2].pt, allWt);
    if(nJet >= 4)
      AnaUtil::fillHist1D ("j4_pt", jetColl[3].pt, allWt);
    if(nJet >= 5)
      AnaUtil::fillHist1D ("j5_pt", jetColl[4].pt, allWt);


    if(nJet_ak8clean >= 1)
      AnaUtil::fillHist1D ("j1_ak8clean_pt", jetColl_ak8clean[0].pt, allWt);
    if(nJet_ak8clean >= 2)
      AnaUtil::fillHist1D ("j2_ak8clean_pt", jetColl_ak8clean[1].pt, allWt);
    if(nJet_ak8clean >= 3)
      AnaUtil::fillHist1D ("j3_ak8clean_pt", jetColl_ak8clean[2].pt, allWt);
    if(nJet_ak8clean >= 4)
      AnaUtil::fillHist1D ("j4_ak8clean_pt", jetColl_ak8clean[3].pt, allWt);
    if(nJet_ak8clean >= 5)
      AnaUtil::fillHist1D ("j5_ak8clean_pt", jetColl_ak8clean[4].pt, allWt);


    bool isResolved = (jetColl.size() >= 3 && fatJetColl.size() == 0 && bJetColl.size()==0) ? true : false;    //either WW or WZ events...
    bool isBoosted  = (fatJetColl.size() >= 1 && bJetColl.size()==0 && fatbJetColl.size()==0) ? true : false;  //either WW or WZ events...
    
                        
    histf()->cd();
    histf()->cd("Categorical_Analysis");


    if(isResolved) {
      AnaUtil::fillHist1D("nj_R", jetColl.size(), allWt);
      AnaUtil::fillHist1D ("j1lep1_dR_R", AnaUtil::getP4(jetColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[0])),allWt);
      AnaUtil::fillHist1D ("j1lep2_dR_R", AnaUtil::getP4(jetColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
      AnaUtil::fillHist1D ("j2lep1_dR_R", AnaUtil::getP4(jetColl[1]).DeltaR(AnaUtil::getP4(tightLepColl[0])),allWt);
      AnaUtil::fillHist1D ("j2lep2_dR_R", AnaUtil::getP4(jetColl[1]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
      AnaUtil::fillHist1D ("j3lep1_dR_R", AnaUtil::getP4(jetColl[2]).DeltaR(AnaUtil::getP4(tightLepColl[0])),allWt);
      AnaUtil::fillHist1D ("j3lep2_dR_R", AnaUtil::getP4(jetColl[2]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);

      if(jetColl.size() == 3) {
        TLorentzVector jetp4;
        for (auto& jet : jetColl)
          jetp4 = jetp4 +  AnaUtil::getP4(jet);
	AnaUtil::fillHist1D ("jInvM_R", jetp4.M(), allWt);
      }

      if(jetColl.size() >3) {
        TLorentzVector jetp4;
        for (auto& jet : jetColl)
          jetp4 = jetp4 + AnaUtil::getP4(jet);
	AnaUtil::fillHist1D ("j4lep1_dR_R", AnaUtil::getP4(jetColl[3]).DeltaR(AnaUtil::getP4(tightLepColl[0])),allWt);
	AnaUtil::fillHist1D ("j4lep2_dR_R", AnaUtil::getP4(jetColl[3]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
	AnaUtil::fillHist1D ("j4_pt_R", jetColl[3].pt, allWt);
 	AnaUtil::fillHist1D ("jInvM_R", jetp4.M(), allWt);
      }

      TLorentzVector metp4;
      TLorentzVector hT_vector_all;
      double hT_scalar_all = 0.;
      double hT_scalar_jet = 0.;
      TLorentzVector jp4;
      double jet_dR_min =10.00;
      double check;

      for(unsigned int i=0 ; i < jetColl.size() ; i++) {
	jp4 = jp4 + AnaUtil::getP4( jetColl[i]);
        hT_scalar_jet = hT_scalar_jet + jetColl[i].pt;
	for(unsigned int j=0 ; j < jetColl.size() ; j++) {
	  if(i!=j) {
            check = AnaUtil::getP4(jetColl[i]).DeltaR(AnaUtil::getP4(jetColl[j]));
            if(check <= jet_dR_min)
              jet_dR_min = check;
	  }
	}
      }
      metp4.SetPtEtaPhiE(met.pt, 0.0, met.phi, met.pt);
      hT_vector_all = jp4 + AnaUtil::getP4(tightLepColl[0]) + AnaUtil::getP4(tightLepColl[1]) + metp4;
      hT_scalar_all = hT_scalar_all + hT_scalar_jet + tightLepColl[0].pt + tightLepColl[1].pt + met.pt;
      if(tightLepColl[0].flavour == tightLepColl[1].flavour) {
	if(tightLepColl[0].flavour == 1){
	  AnaUtil::fillHist1D ("muon_1_mumu_pt_R",tightLepColl[0].pt ,allWt);
	  AnaUtil::fillHist1D ("muon_2_mumu_pt_R",tightLepColl[1].pt ,allWt);
	  AnaUtil::fillHist1D ("mu1mu2_dR_R", AnaUtil::getP4(tightLepColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
	}
	if(tightLepColl[0].flavour == 2){
	  AnaUtil::fillHist1D ("ele_1_elel_pt_R",tightLepColl[0].pt ,allWt);
	  AnaUtil::fillHist1D ("ele_2_elel_pt_R",tightLepColl[1].pt ,allWt);
	  AnaUtil::fillHist1D ("ele1ele2_dR_R", AnaUtil::getP4(tightLepColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
	}
      }
      else {
	AnaUtil::fillHist1D ("muon_muel_pt_R",tightLepColl[0].pt , allWt);
	AnaUtil::fillHist1D ("ele_muel_pt_R",tightLepColl[1].pt , allWt);
	AnaUtil::fillHist1D ("muel_dR_R", AnaUtil::getP4(tightLepColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
      }

      AnaUtil::fillHist1D ("j1_pt_R", jetColl[0].pt, allWt);
      AnaUtil::fillHist1D ("j2_pt_R", jetColl[1].pt,allWt);
      AnaUtil::fillHist1D ("j3_pt_R", jetColl[2].pt, allWt);
      AnaUtil::fillHist1D ("j1j2_dR_R", AnaUtil::getP4(jetColl[0]).DeltaR(AnaUtil::getP4(jetColl[1])),allWt);
      AnaUtil::fillHist1D ("j2j3_dR_R", AnaUtil::getP4(jetColl[1]).DeltaR(AnaUtil::getP4(jetColl[2])),allWt);
      AnaUtil::fillHist1D ("j1j3_dR_R", AnaUtil::getP4(jetColl[0]).DeltaR(AnaUtil::getP4(jetColl[2])),allWt);
      AnaUtil::fillHist1D ("j_dR_min_R", jet_dR_min,allWt);
      AnaUtil::fillHist1D ("hT_vector_j_R", jp4.Pt(), 1);
      AnaUtil::fillHist1D ("hT_scalar_j_R",hT_scalar_jet, 1);
      AnaUtil::fillHist1D("hT_vector_all_R", hT_vector_all.Pt(), 1);
      AnaUtil::fillHist1D("hT_scalar_all_R", hT_scalar_all, 1);
      AnaUtil::fillHist1D ("evYield_nfatjets", 0, allWt);
    }

    
    if(isBoosted) {
      AnaUtil::fillHist1D ("nfj_B", nfJet, allWt);
      AnaUtil::fillHist1D ("nj_ak8clean_B", nJet_ak8clean, allWt);

      if(tightLepColl[0].flavour == tightLepColl[1].flavour) {
        if(tightLepColl[0].flavour == 1){
	  AnaUtil::fillHist1D ("muon_1_mumu_pt_B",tightLepColl[0].pt ,allWt);
	  AnaUtil::fillHist1D ("muon_2_mumu_pt_B",tightLepColl[1].pt ,allWt);
	  AnaUtil::fillHist1D ("mu1mu2_dR_B", AnaUtil::getP4(tightLepColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
        }
        if(tightLepColl[0].flavour == 2){
	  AnaUtil::fillHist1D ("ele_1_elel_pt_B",tightLepColl[0].pt ,allWt);
	  AnaUtil::fillHist1D ("ele_2_elel_pt_B",tightLepColl[1].pt ,allWt);
	  AnaUtil::fillHist1D ("ele1ele2_dR_B", AnaUtil::getP4(tightLepColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
        }
      }
      else {
	AnaUtil::fillHist1D ("muon_muel_pt_B",tightLepColl[0].pt , allWt);
	AnaUtil::fillHist1D ("ele_muel_pt_B",tightLepColl[1].pt , allWt);
	AnaUtil::fillHist1D ("muel_dR_B", AnaUtil::getP4(tightLepColl[0]).DeltaR(AnaUtil::getP4(tightLepColl[1])),allWt);
      }


      double hT_scalar_fjet = 0.;
      double hT_scalar_jet = 0.;
      double hT_scalar_all = 0.;
      TLorentzVector fjp4;
      TLorentzVector jp4;
      TLorentzVector metp4;
      TLorentzVector hT_vector_all;

      for (auto& fj: fatJetColl) {
        fjp4 = fjp4 + AnaUtil::getP4(fj);
        hT_scalar_fjet = hT_scalar_fjet + fj.pt;
        // if(fj.softDropMass < 20.0)                                                                                                                                                                              //cut++;                                                                                                                                                                                           
      }
      // if(cut == 0) {                                                                                                                                                                                         //        AnaUtil::fillHist1D ("nFatJetsabovecut_20_nfj!0", nfJet, allWt);                                                                                                                           
      for(auto& j: jetColl_ak8clean) {
	jp4 = jp4 + AnaUtil::getP4(j);
	hT_scalar_jet = hT_scalar_jet + j.pt;
      }

      metp4.SetPtEtaPhiE(met.pt, 0.0, met.phi, met.pt);
      hT_vector_all = jp4 + fjp4 + AnaUtil::getP4(tightLepColl[0]) + AnaUtil::getP4(tightLepColl[1]) + metp4;
      hT_scalar_all = hT_scalar_all + hT_scalar_jet + hT_scalar_fjet + tightLepColl[0].pt + tightLepColl[1].pt + met.pt;
      AnaUtil::fillHist1D ("hT_vector_j_ak8clean_B", jp4.Pt(), 1);
      AnaUtil::fillHist1D ("hT_scalar_j_ak8clean_B",hT_scalar_jet, 1);
      AnaUtil::fillHist1D ("hT_vector_fj_B", fjp4.Pt(), 1);
      AnaUtil::fillHist1D ("hT_scalar_fj_B",hT_scalar_fjet, 1);
      AnaUtil::fillHist1D("hT_vector_all_B", hT_vector_all.Pt(), 1);
      AnaUtil::fillHist1D("hT_scalar_all_B", hT_scalar_all, 1);


      if(fatJetColl.size() == 1) {
	AnaUtil::fillHist1D ("fj1_pt_has1FatJet_B", fatJetColl[0].pt, allWt);
	AnaUtil::fillHist1D ("fj1_mass_has1FatJet_B",fatJetColl[0].mass, allWt);
	AnaUtil::fillHist1D ("fj1_massSD_has1FatJet_B", fatJetColl[0].softDropMass, allWt);
	AnaUtil::fillHist1D ("fj1_tau1_has1FatJet_B", fatJetColl[0].tau1, allWt);
	AnaUtil::fillHist1D ("fj1_tau2_has1FatJet_B", fatJetColl[0].tau2, allWt);
	AnaUtil::fillHist1D ("fj1_tau3_has1FatJet_B", fatJetColl[0].tau3, allWt);
	AnaUtil::fillHist1D ("fj1_tau3ovtau2_has1FatJet_B", fatJetColl[0].tau3/fatJetColl[0].tau2, allWt);
	AnaUtil::fillHist1D ("fj1_tau2ovtau1_has1FatJet_B", fatJetColl[0].tau2/fatJetColl[0].tau1, allWt);
	unsigned int i1 = fatJetColl[0].subJetIdx1;
	unsigned int i2 = fatJetColl[0].subJetIdx2;
	TLorentzVector Fj1InvMass_1;
	for (auto& fj: subJetColl) {
	  if(fj.index == i1) {
	    float subjet1_pt =  fj.pt;
	    float subjet1_mass = fj.mass;
	    AnaUtil::fillHist1D ("s1fj1_pt_has1FatJet_B", subjet1_pt, allWt);
	    AnaUtil::fillHist1D ("s1fj1_mass_has1FatJet_B", subjet1_mass, allWt);
	    Fj1InvMass_1 = Fj1InvMass_1 + AnaUtil::getP4(fj);
	  }
	  else  if(fj.index == i2) {
	    float subjet2_pt =fj.pt;
	    float subjet2_mass = fj.mass;

	    AnaUtil::fillHist1D ("s2fj1_pt_has1FatJet_B", subjet2_pt, allWt);
	    AnaUtil::fillHist1D ("s2fj1_mass_has1FatJet_B", subjet2_mass, allWt);

	    Fj1InvMass_1 = Fj1InvMass_1 + AnaUtil::getP4(fj);
	  }
	}
	
	AnaUtil::fillHist1D ("fjInvM_has1FatJet_B", Fj1InvMass_1.M(), allWt);
	//	AnaUtil::fillHist1D ("fjInvM_has1FatJet_B", AnaUtil::getP4(fatJetColl[0]).M(), allWt);
	AnaUtil::fillHist1D("nj_ak8clean_has1FatJet_B", jetColl_ak8clean.size(), allWt);


      
	if(jetColl_ak8clean.size()>=1) {
	  AnaUtil::fillHist1D ("j1_ak8cleanfj_dR_has1FatJet_B", AnaUtil::getP4(jetColl_ak8clean[0]).DeltaR(AnaUtil::getP4(fatJetColl[0])),allWt);
	  AnaUtil::fillHist1D ("j1_ak8clean_pt_has1FatJet_B", jetColl_ak8clean[0].pt, allWt);
	}
	if(jetColl_ak8clean.size()>=2) {
	  AnaUtil::fillHist1D ("j2_ak8cleanfj_dR_has1FatJet_B", AnaUtil::getP4(jetColl_ak8clean[1]).DeltaR(AnaUtil::getP4(fatJetColl[0])),allWt);
	  AnaUtil::fillHist1D ("j2_ak8clean_pt_has1FatJet_B", jetColl_ak8clean[1].pt, allWt);
	  AnaUtil::fillHist1D ("j1j2_ak8clean_dR_has1FatJet_B", AnaUtil::getP4(jetColl[0]).DeltaR(AnaUtil::getP4(jetColl[1])),allWt);
	}
	if(jetColl_ak8clean.size()>=3) {
	AnaUtil::fillHist1D ("j3_ak8cleanfj_dR_has1FatJet_B", AnaUtil::getP4(jetColl_ak8clean[2]).DeltaR(AnaUtil::getP4(fatJetColl[0])),allWt);
	AnaUtil::fillHist1D ("j3_ak8clean_pt_has1FatJet_B", jetColl_ak8clean[2].pt, allWt);
	}
	
      }

      if(fatJetColl.size() >= 2) {

	AnaUtil::fillHist1D ("fj1_pt_has2FatJet_B", fatJetColl[0].pt, allWt);
	AnaUtil::fillHist1D ("fj1_mass_has2FatJet_B", fatJetColl[0].mass, allWt);
	AnaUtil::fillHist1D ("fj1_massSD_has2FatJet_B",fatJetColl[0].softDropMass, allWt);
	AnaUtil::fillHist1D ("fj1_tau1_has2FatJet_B", fatJetColl[0].tau1, allWt);
	AnaUtil::fillHist1D ("fj1_tau2_has2FatJet_B", fatJetColl[0].tau2, allWt);
	AnaUtil::fillHist1D ("fj1_tau3_has2FatJet_B", fatJetColl[0].tau3, allWt);                                             
	AnaUtil::fillHist1D ("fj1_tau3ovtau2_has2FatJet_B", fatJetColl[0].tau3/fatJetColl[0].tau2, allWt);                  
	AnaUtil::fillHist1D ("fj1_tau2ovtau1_has2FatJet_B", fatJetColl[0].tau2/fatJetColl[0].tau1, allWt); 

	AnaUtil::fillHist1D ("fj2_pt_has2FatJet_B", fatJetColl[1].pt, allWt);
	AnaUtil::fillHist1D ("fj2_mass_has2FatJet_B", fatJetColl[1].mass, allWt);
	AnaUtil::fillHist1D ("fj2_massSD_has2FatJet_B", fatJetColl[1].softDropMass, allWt);
	AnaUtil::fillHist1D ("fj2_tau1_has2FatJet_B", fatJetColl[1].tau1, allWt);
	AnaUtil::fillHist1D ("fj2_tau2_has2FatJet_B", fatJetColl[1].tau2, allWt);
	AnaUtil::fillHist1D ("fj2_tau3_has2FatJet_B", fatJetColl[1].tau3, allWt);
	AnaUtil::fillHist1D ("fj2_tau3ovtau2_has2FatJet_B", fatJetColl[1].tau3/fatJetColl[1].tau2, allWt);
	AnaUtil::fillHist1D ("fj2_tau2ovtau1_has2FatJet_B", fatJetColl[1].tau2/fatJetColl[1].tau1, allWt);
	AnaUtil::fillHist1D ("fj1_tau3ovtau2_has2FatJet_B", fatJetColl[0].tau3/fatJetColl[0].tau2, allWt);                                                                                                        
          unsigned int i1 = fatJetColl[0].subJetIdx1;
          unsigned int i2 = fatJetColl[0].subJetIdx2;
          unsigned int i3 = fatJetColl[1].subJetIdx1;
          unsigned int i4 = fatJetColl[1].subJetIdx2;
          TLorentzVector Fj1InvMass_2;
          TLorentzVector Fj2InvMass_2;
          for (auto& fj: subJetColl) {

            if(fj.index == i1) {
              float subjet1_pt_1 = fj.pt;
              float subjet1_mass_1 = fj.mass;
	      AnaUtil::fillHist1D ("s1fj1_pt_has2FatJet_B", subjet1_pt_1, allWt);
	      AnaUtil::fillHist1D ("s1fj1_mass_has2FatJet_B", subjet1_mass_1, allWt);
              Fj1InvMass_2 = Fj1InvMass_2 + AnaUtil::getP4(fj);

            }
            if(fj.index == i2) {
              float subjet2_pt_1 = fj.pt;
              float subjet2_mass_1 = fj.mass;
	      AnaUtil::fillHist1D ("s2fj1_pt_has2FatJet_B", subjet2_pt_1, allWt);
	      AnaUtil::fillHist1D ("s2fj1_mass_has2FatJet_B", subjet2_mass_1, allWt);
              Fj1InvMass_2 = Fj1InvMass_2 + AnaUtil::getP4(fj);

            }


	    if(fj.index == i3) {
              float subjet1_pt_2 = fj.pt;
              float subjet1_mass_2 = fj.mass;
	      AnaUtil::fillHist1D ("s1fj2_pt_has2FatJet_B", subjet1_pt_2, allWt);
	      AnaUtil::fillHist1D ("s1fj2_mass_has2FatJet_B", subjet1_mass_2, allWt);
              Fj2InvMass_2 = Fj2InvMass_2 + AnaUtil::getP4(fj);
            }
            if(fj.index == i4) {
              float subjet2_pt_2 = fj.pt;
              float subjet2_mass_2 = fj.mass;
	      AnaUtil::fillHist1D ("s2fj2_pt_has2FatJet_B", subjet2_pt_2, allWt);
	      AnaUtil::fillHist1D ("s2fj2_mass_has2FatJet_B", subjet2_mass_2, allWt);
              Fj2InvMass_2 = Fj2InvMass_2 + AnaUtil::getP4(fj);
            }
          }

	  AnaUtil::fillHist1D ("fj2InvM_has2FatJet_B", Fj2InvMass_2.M(), allWt);
	  AnaUtil::fillHist1D ("fj1InvM_has2FatJet_B", Fj1InvMass_2.M(), allWt);
	  //AnaUtil::fillHist1D ("fj2InvM_has2FatJet_B", AnaUtil::getP4(fatJetColl[0]).M(), allWt);
	  //AnaUtil::fillHist1D ("fj1InvM_has2FatJet_B", AnaUtil::getP4(fatJetColl[1]).M(), allWt);
         
	  AnaUtil::fillHist1D("nj_ak8clean_has2FatJet_B", jetColl_ak8clean.size(), allWt);



      if(jetColl_ak8clean.size()>=1) {
	AnaUtil::fillHist1D ("j1_ak8cleanfj1_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[0]).DeltaR(AnaUtil::getP4(fatJetColl[0])),allWt);
	AnaUtil::fillHist1D ("j1_ak8cleanfj2_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[0]).DeltaR(AnaUtil::getP4(fatJetColl[1])),allWt);
	AnaUtil::fillHist1D ("j1_ak8clean_pt_has2FatJet_B", jetColl_ak8clean[0].pt, allWt);

      }
      if(jetColl_ak8clean.size()>=2) {
	AnaUtil::fillHist1D ("j2_ak8cleanfj1_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[1]).DeltaR(AnaUtil::getP4(fatJetColl[0])),allWt);
	AnaUtil::fillHist1D ("j2_ak8cleanfj2_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[1]).DeltaR(AnaUtil::getP4(fatJetColl[1])),allWt);
	AnaUtil::fillHist1D ("j2_ak8clean_pt_has2FatJet_B",jetColl_ak8clean[1].pt,allWt);
	AnaUtil::fillHist1D ("j1j2_ak8clean_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[0]).DeltaR(AnaUtil::getP4(jetColl_ak8clean[1])),allWt);
      
      }
      if(jetColl_ak8clean.size()>=3) {
	AnaUtil::fillHist1D ("j3_ak8cleanfj1_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[2]).DeltaR(AnaUtil::getP4(fatJetColl[0])),allWt);
	AnaUtil::fillHist1D ("j3_ak8cleanfj2_dR_has2FatJet_B", AnaUtil::getP4(jetColl_ak8clean[2]).DeltaR(AnaUtil::getP4(fatJetColl[1])),allWt);
	AnaUtil::fillHist1D ("j3_ak8clean_pt_has2FatJet_B",jetColl_ak8clean[1].pt,allWt);

      }

      TLorentzVector fj1p4 = AnaUtil::getP4(fatJetColl[0]);
      TLorentzVector fj2p4 = AnaUtil::getP4(fatJetColl[1]);
      TLorentzVector fjp4 = fj1p4 + fj2p4;
      //    AnaUtil::fillHist1D ("fjInvM_has2FatJet_usingsubjet_B", Fj1InvMass_2.M() + Fj2InvMass_2.M(), allWt);
      //AnaUtil::fillHist1D ("fjInvM_has2FatJet_B", fjp4.M(), allWt);
      //}
      AnaUtil::fillHist1D ("evYield_nfatjets", 1, allWt);                                                                                                                                                
    }

    }

    if (!isMC()) selEvLog() << evt.run << " " << evt.lumis << " " << evt.event << std::endl;
   // Print only the first n events; n configurable
   //  if (isMC() && dumpEventCount_ > -1 && ++nEventSel >= dumpEventCount_) continue;
  }
  // Analysis over
}

bool MultiLeptonMVAna::hasZcandidate(const std::vector<LeptonCand>& lepColl) {
  bool hasZToLL {false};
  for (size_t i = 0; i < lepColl.size(); ++i){
    auto& lep1 = lepColl.at(i);
    TLorentzVector l1p4 = AnaUtil::getP4(lep1);
    for (size_t j = i+1; j < lepColl.size(); ++j){
      auto& lep2 = lepColl.at(j);
      TLorentzVector l2p4 = AnaUtil::getP4(lep2);
      double lepInvM = (l1p4+l2p4).M();
      if(lep1.flavour == lep2.flavour) {
	if (lep1.charge * lep2.charge < 0.0 && std::fabs(lepInvM - 91.1876) < 10.0) {
	  hasZToLL = true;
	  if (hasZToLL) break;
	}
      }
    }
    if (hasZToLL) return true;
  }
  return false;
}

bool MultiLeptonMVAna::hasLowMassResonance(const std::vector<LeptonCand>& lepColl) {
  bool hasLowMassRes {false};
  for (size_t i = 0; i < lepColl.size(); ++i){
    auto& lep1 = lepColl.at(i);
    TLorentzVector l1p4 = AnaUtil::getP4(lep1);
    for (size_t j = i+1; j < lepColl.size(); ++j){
      auto& lep2 = lepColl.at(j);
      TLorentzVector l2p4 = AnaUtil::getP4(lep2);
      double lepInvM = (l1p4+l2p4).M();
      if (lepInvM < 12.0) {
	hasLowMassRes = true;
	if (hasLowMassRes) break;
      }
    }
    if (hasLowMassRes) return true;
  }
  return false;
}


void MultiLeptonMVAna::endJob() {
  PhysicsObjSelector::endJob();
  
  histf()->cd();
  histf()->cd("TMVAnalysis");
  vector<string> evLabels {
      "Events processed                    : ",
      "has GoodPV                          : ",
      "at least 2 fakeable leptons         : ",
      "lep1pt > 25 and lep2pt > 15         : ",
      "pass HLT                            : ",
      "OS fakeable leptons                 : ",
      "low mass resonance veto             : ",
      "Z mass resonance veto               : ",
      "has max 2 tight leptons             : ",
      "tau veto                            : ",
      "is SR                               : ",
      "is Fake                             : "
      };
  AnaUtil::showEfficiency("evtCutFlow", evLabels, "Event Selection");  
  if (isMC()) {
    cout << endl
         << "evtWeightSum: " << setw(10) << setprecision(0) << evtWeightSum_ << endl
         << "      lumiWt: " << setw(10) << setprecision(5) << lumiFac
         << endl;
    AnaUtil::showEfficiency("evtCutFlowWt", evLabels, "Event Selection (Weighted)", "Events");
  }
  else AnaUtil::showEfficiency("evtCutFlow", evLabels, "Event Selection", "Events");
}

void MultiLeptonMVAna::closeFiles() {
  AnaBase::closeFiles();
  // Take care of local stuff first 
  if (skimObj_ != nullptr) skimObj_->close(); 
}


// -------------------------------------------------------------------------------
// Poor man's way of a datacard. Each line between the 'START' and 'END' tags
// is read in turn, split into words, where the first element is the 'key' and
// the rest the value(s). If more than one values are present they are 
// stored in a vector. No safety mechanism is in place. Any line with an unknown 
// key is skipped. Comments lines should start with either '#' or '//', preferably
// in the first column. Empty lines are skipped. The file containing the datacards 
// is passed as the only argument of the program, there is no default
// -------------------------------------------------------------------------------
bool MultiLeptonMVAna::readJob(const string& jobFile, int& nFiles)
{
  if (!PhysicsObjSelector::readJob(jobFile, nFiles)) return false;
  
  // Open the same file containing the datacards again to read analysis specific cards
  ifstream fin(jobFile.c_str(), std::ios::in);    
  if (!fin) {
    cerr << "==> Input File: " << jobFile << " could not be opened!" << endl;
    return false;
  }
  
  eventFilelist_.clear();  

  static constexpr int BUF_SIZE = 256;
  char buf[BUF_SIZE];
  while (fin.getline(buf, BUF_SIZE, '\n')) {  // Pops off the newline character
    string line(buf);
    if (line.empty() || line == "START") continue;   
    
    // enable '#' and '//' style comments
    if (line.substr(0,1) == "#" || line.substr(0,2) == "//") continue;
    if (line == "END") break;
    
    // Split the line into words
    vector<string> tokens;
    AnaUtil::tokenize(line, tokens);
    std::cout << line << std::endl;
    assert(tokens.size() > 1);
    const string& key   = tokens[0];
    const string& value = tokens[1];
    if (key == "useEventList")
      useEventList_ = std::stoi(value.c_str()) > 0 ? true : false;
    else if (key == "skipDuplicate")
      skipDuplicate_ = std::stoi(value.c_str()) > 0 ? true : false;
    else if (key == "dumpGenInfo")
      dumpGenInfo_ = std::stoi(value.c_str()) > 0 ? true : false;
    else if (key == "inputEventFile")
      eventFilelist_.push_back(value.c_str());
    else if (key == "syncDumpFile")
      dumpFilename_ = value.c_str();
    else if (key == "dumpEventMax")
      dumpEventCount_ = std::stoi(value.c_str());
    else if (key == "selectPartons")
      selectPM_ = std::stoi(value.c_str()) > 0 ? true : false;
    else if (key == "nMEPartons")
      nMEPartons_ = std::stoi(value.c_str());
    else if (key == "readMVA")
      _readMVA = (atoi(value.c_str()) > 0) ? true : false;
    else if (key == "MVAnetwork")
      _MVAnetwork = value;
    else if (key == "MVAxmlFile")
      _MVAxmlFile = value;
    else if (key == "createMVATree")
      _createMVATree = (atoi(value.c_str()) > 0) ? true : false;
    else if (key == "mvaInputFile")
      _mvaInputFile = value;
  }
  // Close the file
  fin.close();
  
  if (!dumpFilename_.empty()) {
    syncDumpf_.open(dumpFilename_, std::ios::out);
    if (!syncDumpf_) {
      cerr << "Output File: " << dumpFilename_ << " could not be opened!" << endl;
      return false;
    }
  }  

  printJob();
  return true;
}
void MultiLeptonMVAna::printJob(ostream& os) const
{
  AnaBase::printJob(os);
  os << endl;
  /*
  os << "   useEventList: " << std::boolalpha << useEventList_ << endl
     << "  skipDuplicate: " << std::boolalpha << skipDuplicate_ << endl
     << " dumpEventCount: " << dumpEventCount_ << endl
     << "   syncDumpFile: " << dumpFilename_ << endl
     << "   dumpEventMax: " << dumpEventCount_ << endl
     << "  selectPartons: " << std::boolalpha << selectPM_ << endl
     << "     nMEPartons: " << nMEPartons_ << endl;*/
}
