// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME Dict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "interface/PhysicsObjects.h"
#include "interface/LeptonCand.h"
#include "PhysicsObjects.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEstringcOunsignedsPintgR_Dictionary();
   static void pairlEstringcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_pairlEstringcOunsignedsPintgR(void *p = 0);
   static void *newArray_pairlEstringcOunsignedsPintgR(Long_t size, void *p);
   static void delete_pairlEstringcOunsignedsPintgR(void *p);
   static void deleteArray_pairlEstringcOunsignedsPintgR(void *p);
   static void destruct_pairlEstringcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,unsigned int>*)
   {
      pair<string,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,unsigned int>", "string", 190,
                  typeid(pair<string,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<string,unsigned int>) );
      instance.SetNew(&new_pairlEstringcOunsignedsPintgR);
      instance.SetNewArray(&newArray_pairlEstringcOunsignedsPintgR);
      instance.SetDelete(&delete_pairlEstringcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOunsignedsPintgR);
      instance.SetDestructor(&destruct_pairlEstringcOunsignedsPintgR);

      ::ROOT::AddClassAlternate("pair<string,unsigned int>","pair<std::string,unsigned int>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<string,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,unsigned int>*)0x0)->GetClass();
      pairlEstringcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEvhtmcLcLMuoncOvhtmcLcLMuongR_Dictionary();
   static void pairlEvhtmcLcLMuoncOvhtmcLcLMuongR_TClassManip(TClass*);
   static void *new_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p = 0);
   static void *newArray_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(Long_t size, void *p);
   static void delete_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p);
   static void deleteArray_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p);
   static void destruct_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<vhtm::Muon,vhtm::Muon>*)
   {
      pair<vhtm::Muon,vhtm::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<vhtm::Muon,vhtm::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<vhtm::Muon,vhtm::Muon>", "string", 190,
                  typeid(pair<vhtm::Muon,vhtm::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEvhtmcLcLMuoncOvhtmcLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(pair<vhtm::Muon,vhtm::Muon>) );
      instance.SetNew(&new_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR);
      instance.SetNewArray(&newArray_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR);
      instance.SetDelete(&delete_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR);
      instance.SetDeleteArray(&deleteArray_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR);
      instance.SetDestructor(&destruct_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<vhtm::Muon,vhtm::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEvhtmcLcLMuoncOvhtmcLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<vhtm::Muon,vhtm::Muon>*)0x0)->GetClass();
      pairlEvhtmcLcLMuoncOvhtmcLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEvhtmcLcLMuoncOvhtmcLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLEvent(void *p = 0);
   static void *newArray_vhtmcLcLEvent(Long_t size, void *p);
   static void delete_vhtmcLcLEvent(void *p);
   static void deleteArray_vhtmcLcLEvent(void *p);
   static void destruct_vhtmcLcLEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::Event*)
   {
      ::vhtm::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::Event", ::vhtm::Event::Class_Version(), "PhysicsObjects.h", 11,
                  typeid(::vhtm::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::Event::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::Event) );
      instance.SetNew(&new_vhtmcLcLEvent);
      instance.SetNewArray(&newArray_vhtmcLcLEvent);
      instance.SetDelete(&delete_vhtmcLcLEvent);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLEvent);
      instance.SetDestructor(&destruct_vhtmcLcLEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::Event*)
   {
      return GenerateInitInstanceLocal((::vhtm::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLGenParticle(void *p = 0);
   static void *newArray_vhtmcLcLGenParticle(Long_t size, void *p);
   static void delete_vhtmcLcLGenParticle(void *p);
   static void deleteArray_vhtmcLcLGenParticle(void *p);
   static void destruct_vhtmcLcLGenParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::GenParticle*)
   {
      ::vhtm::GenParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::GenParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::GenParticle", ::vhtm::GenParticle::Class_Version(), "PhysicsObjects.h", 49,
                  typeid(::vhtm::GenParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::GenParticle::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::GenParticle) );
      instance.SetNew(&new_vhtmcLcLGenParticle);
      instance.SetNewArray(&newArray_vhtmcLcLGenParticle);
      instance.SetDelete(&delete_vhtmcLcLGenParticle);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLGenParticle);
      instance.SetDestructor(&destruct_vhtmcLcLGenParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::GenParticle*)
   {
      return GenerateInitInstanceLocal((::vhtm::GenParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::GenParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLLHEParticle(void *p = 0);
   static void *newArray_vhtmcLcLLHEParticle(Long_t size, void *p);
   static void delete_vhtmcLcLLHEParticle(void *p);
   static void deleteArray_vhtmcLcLLHEParticle(void *p);
   static void destruct_vhtmcLcLLHEParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::LHEParticle*)
   {
      ::vhtm::LHEParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::LHEParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::LHEParticle", ::vhtm::LHEParticle::Class_Version(), "PhysicsObjects.h", 67,
                  typeid(::vhtm::LHEParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::LHEParticle::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::LHEParticle) );
      instance.SetNew(&new_vhtmcLcLLHEParticle);
      instance.SetNewArray(&newArray_vhtmcLcLLHEParticle);
      instance.SetDelete(&delete_vhtmcLcLLHEParticle);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLLHEParticle);
      instance.SetDestructor(&destruct_vhtmcLcLLHEParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::LHEParticle*)
   {
      return GenerateInitInstanceLocal((::vhtm::LHEParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::LHEParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLMuon(void *p = 0);
   static void *newArray_vhtmcLcLMuon(Long_t size, void *p);
   static void delete_vhtmcLcLMuon(void *p);
   static void deleteArray_vhtmcLcLMuon(void *p);
   static void destruct_vhtmcLcLMuon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::Muon*)
   {
      ::vhtm::Muon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::Muon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::Muon", ::vhtm::Muon::Class_Version(), "PhysicsObjects.h", 82,
                  typeid(::vhtm::Muon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::Muon::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::Muon) );
      instance.SetNew(&new_vhtmcLcLMuon);
      instance.SetNewArray(&newArray_vhtmcLcLMuon);
      instance.SetDelete(&delete_vhtmcLcLMuon);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLMuon);
      instance.SetDestructor(&destruct_vhtmcLcLMuon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::Muon*)
   {
      return GenerateInitInstanceLocal((::vhtm::Muon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::Muon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLElectron(void *p = 0);
   static void *newArray_vhtmcLcLElectron(Long_t size, void *p);
   static void delete_vhtmcLcLElectron(void *p);
   static void deleteArray_vhtmcLcLElectron(void *p);
   static void destruct_vhtmcLcLElectron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::Electron*)
   {
      ::vhtm::Electron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::Electron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::Electron", ::vhtm::Electron::Class_Version(), "PhysicsObjects.h", 107,
                  typeid(::vhtm::Electron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::Electron::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::Electron) );
      instance.SetNew(&new_vhtmcLcLElectron);
      instance.SetNewArray(&newArray_vhtmcLcLElectron);
      instance.SetDelete(&delete_vhtmcLcLElectron);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLElectron);
      instance.SetDestructor(&destruct_vhtmcLcLElectron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::Electron*)
   {
      return GenerateInitInstanceLocal((::vhtm::Electron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::Electron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLMET(void *p = 0);
   static void *newArray_vhtmcLcLMET(Long_t size, void *p);
   static void delete_vhtmcLcLMET(void *p);
   static void deleteArray_vhtmcLcLMET(void *p);
   static void destruct_vhtmcLcLMET(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::MET*)
   {
      ::vhtm::MET *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::MET >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::MET", ::vhtm::MET::Class_Version(), "PhysicsObjects.h", 128,
                  typeid(::vhtm::MET), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::MET::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::MET) );
      instance.SetNew(&new_vhtmcLcLMET);
      instance.SetNewArray(&newArray_vhtmcLcLMET);
      instance.SetDelete(&delete_vhtmcLcLMET);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLMET);
      instance.SetDestructor(&destruct_vhtmcLcLMET);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::MET*)
   {
      return GenerateInitInstanceLocal((::vhtm::MET*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::MET*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLTau(void *p = 0);
   static void *newArray_vhtmcLcLTau(Long_t size, void *p);
   static void delete_vhtmcLcLTau(void *p);
   static void deleteArray_vhtmcLcLTau(void *p);
   static void destruct_vhtmcLcLTau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::Tau*)
   {
      ::vhtm::Tau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::Tau >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::Tau", ::vhtm::Tau::Class_Version(), "PhysicsObjects.h", 140,
                  typeid(::vhtm::Tau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::Tau::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::Tau) );
      instance.SetNew(&new_vhtmcLcLTau);
      instance.SetNewArray(&newArray_vhtmcLcLTau);
      instance.SetDelete(&delete_vhtmcLcLTau);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLTau);
      instance.SetDestructor(&destruct_vhtmcLcLTau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::Tau*)
   {
      return GenerateInitInstanceLocal((::vhtm::Tau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::Tau*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLJet(void *p = 0);
   static void *newArray_vhtmcLcLJet(Long_t size, void *p);
   static void delete_vhtmcLcLJet(void *p);
   static void deleteArray_vhtmcLcLJet(void *p);
   static void destruct_vhtmcLcLJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::Jet*)
   {
      ::vhtm::Jet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::Jet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::Jet", ::vhtm::Jet::Class_Version(), "PhysicsObjects.h", 156,
                  typeid(::vhtm::Jet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::Jet::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::Jet) );
      instance.SetNew(&new_vhtmcLcLJet);
      instance.SetNewArray(&newArray_vhtmcLcLJet);
      instance.SetDelete(&delete_vhtmcLcLJet);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLJet);
      instance.SetDestructor(&destruct_vhtmcLcLJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::Jet*)
   {
      return GenerateInitInstanceLocal((::vhtm::Jet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::Jet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLFatJet(void *p = 0);
   static void *newArray_vhtmcLcLFatJet(Long_t size, void *p);
   static void delete_vhtmcLcLFatJet(void *p);
   static void deleteArray_vhtmcLcLFatJet(void *p);
   static void destruct_vhtmcLcLFatJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::FatJet*)
   {
      ::vhtm::FatJet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::FatJet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::FatJet", ::vhtm::FatJet::Class_Version(), "PhysicsObjects.h", 176,
                  typeid(::vhtm::FatJet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::FatJet::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::FatJet) );
      instance.SetNew(&new_vhtmcLcLFatJet);
      instance.SetNewArray(&newArray_vhtmcLcLFatJet);
      instance.SetDelete(&delete_vhtmcLcLFatJet);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLFatJet);
      instance.SetDestructor(&destruct_vhtmcLcLFatJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::FatJet*)
   {
      return GenerateInitInstanceLocal((::vhtm::FatJet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::FatJet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_vhtmcLcLSubJet(void *p = 0);
   static void *newArray_vhtmcLcLSubJet(Long_t size, void *p);
   static void delete_vhtmcLcLSubJet(void *p);
   static void deleteArray_vhtmcLcLSubJet(void *p);
   static void destruct_vhtmcLcLSubJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::vhtm::SubJet*)
   {
      ::vhtm::SubJet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::vhtm::SubJet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("vhtm::SubJet", ::vhtm::SubJet::Class_Version(), "PhysicsObjects.h", 213,
                  typeid(::vhtm::SubJet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::vhtm::SubJet::Dictionary, isa_proxy, 4,
                  sizeof(::vhtm::SubJet) );
      instance.SetNew(&new_vhtmcLcLSubJet);
      instance.SetNewArray(&newArray_vhtmcLcLSubJet);
      instance.SetDelete(&delete_vhtmcLcLSubJet);
      instance.SetDeleteArray(&deleteArray_vhtmcLcLSubJet);
      instance.SetDestructor(&destruct_vhtmcLcLSubJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::vhtm::SubJet*)
   {
      return GenerateInitInstanceLocal((::vhtm::SubJet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::vhtm::SubJet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Event::Class_Name()
{
   return "vhtm::Event";
}

//______________________________________________________________________________
const char *Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Event*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr GenParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *GenParticle::Class_Name()
{
   return "vhtm::GenParticle";
}

//______________________________________________________________________________
const char *GenParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::GenParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int GenParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::GenParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GenParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::GenParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GenParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::GenParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr LHEParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LHEParticle::Class_Name()
{
   return "vhtm::LHEParticle";
}

//______________________________________________________________________________
const char *LHEParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::LHEParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LHEParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::LHEParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LHEParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::LHEParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LHEParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::LHEParticle*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr Muon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Muon::Class_Name()
{
   return "vhtm::Muon";
}

//______________________________________________________________________________
const char *Muon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Muon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Muon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Muon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Muon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Muon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Muon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Muon*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr Electron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Electron::Class_Name()
{
   return "vhtm::Electron";
}

//______________________________________________________________________________
const char *Electron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Electron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Electron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Electron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Electron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Electron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Electron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Electron*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr MET::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MET::Class_Name()
{
   return "vhtm::MET";
}

//______________________________________________________________________________
const char *MET::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::MET*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MET::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::MET*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MET::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::MET*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MET::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::MET*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr Tau::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Tau::Class_Name()
{
   return "vhtm::Tau";
}

//______________________________________________________________________________
const char *Tau::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Tau*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Tau::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Tau*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Tau::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Tau*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Tau::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Tau*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr Jet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Jet::Class_Name()
{
   return "vhtm::Jet";
}

//______________________________________________________________________________
const char *Jet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Jet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Jet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Jet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Jet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Jet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Jet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::Jet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr FatJet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *FatJet::Class_Name()
{
   return "vhtm::FatJet";
}

//______________________________________________________________________________
const char *FatJet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::FatJet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int FatJet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::FatJet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FatJet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::FatJet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FatJet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::FatJet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace vhtm {
//______________________________________________________________________________
atomic_TClass_ptr SubJet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SubJet::Class_Name()
{
   return "vhtm::SubJet";
}

//______________________________________________________________________________
const char *SubJet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::SubJet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SubJet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::vhtm::SubJet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SubJet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::SubJet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SubJet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD2(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::vhtm::SubJet*)0x0)->GetClass(); }
   return fgIsA;
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,unsigned int> : new pair<string,unsigned int>;
   }
   static void *newArray_pairlEstringcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,unsigned int>[nElements] : new pair<string,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOunsignedsPintgR(void *p) {
      delete ((pair<string,unsigned int>*)p);
   }
   static void deleteArray_pairlEstringcOunsignedsPintgR(void *p) {
      delete [] ((pair<string,unsigned int>*)p);
   }
   static void destruct_pairlEstringcOunsignedsPintgR(void *p) {
      typedef pair<string,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,unsigned int>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<vhtm::Muon,vhtm::Muon> : new pair<vhtm::Muon,vhtm::Muon>;
   }
   static void *newArray_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<vhtm::Muon,vhtm::Muon>[nElements] : new pair<vhtm::Muon,vhtm::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p) {
      delete ((pair<vhtm::Muon,vhtm::Muon>*)p);
   }
   static void deleteArray_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p) {
      delete [] ((pair<vhtm::Muon,vhtm::Muon>*)p);
   }
   static void destruct_pairlEvhtmcLcLMuoncOvhtmcLcLMuongR(void *p) {
      typedef pair<vhtm::Muon,vhtm::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<vhtm::Muon,vhtm::Muon>

namespace vhtm {
//______________________________________________________________________________
void Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::Event::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLEvent(void *p) {
      return  p ? new(p) ::vhtm::Event : new ::vhtm::Event;
   }
   static void *newArray_vhtmcLcLEvent(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::Event[nElements] : new ::vhtm::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLEvent(void *p) {
      delete ((::vhtm::Event*)p);
   }
   static void deleteArray_vhtmcLcLEvent(void *p) {
      delete [] ((::vhtm::Event*)p);
   }
   static void destruct_vhtmcLcLEvent(void *p) {
      typedef ::vhtm::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::Event

namespace vhtm {
//______________________________________________________________________________
void GenParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::GenParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::GenParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::GenParticle::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLGenParticle(void *p) {
      return  p ? new(p) ::vhtm::GenParticle : new ::vhtm::GenParticle;
   }
   static void *newArray_vhtmcLcLGenParticle(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::GenParticle[nElements] : new ::vhtm::GenParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLGenParticle(void *p) {
      delete ((::vhtm::GenParticle*)p);
   }
   static void deleteArray_vhtmcLcLGenParticle(void *p) {
      delete [] ((::vhtm::GenParticle*)p);
   }
   static void destruct_vhtmcLcLGenParticle(void *p) {
      typedef ::vhtm::GenParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::GenParticle

namespace vhtm {
//______________________________________________________________________________
void LHEParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::LHEParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::LHEParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::LHEParticle::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLLHEParticle(void *p) {
      return  p ? new(p) ::vhtm::LHEParticle : new ::vhtm::LHEParticle;
   }
   static void *newArray_vhtmcLcLLHEParticle(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::LHEParticle[nElements] : new ::vhtm::LHEParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLLHEParticle(void *p) {
      delete ((::vhtm::LHEParticle*)p);
   }
   static void deleteArray_vhtmcLcLLHEParticle(void *p) {
      delete [] ((::vhtm::LHEParticle*)p);
   }
   static void destruct_vhtmcLcLLHEParticle(void *p) {
      typedef ::vhtm::LHEParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::LHEParticle

namespace vhtm {
//______________________________________________________________________________
void Muon::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::Muon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::Muon::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::Muon::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLMuon(void *p) {
      return  p ? new(p) ::vhtm::Muon : new ::vhtm::Muon;
   }
   static void *newArray_vhtmcLcLMuon(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::Muon[nElements] : new ::vhtm::Muon[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLMuon(void *p) {
      delete ((::vhtm::Muon*)p);
   }
   static void deleteArray_vhtmcLcLMuon(void *p) {
      delete [] ((::vhtm::Muon*)p);
   }
   static void destruct_vhtmcLcLMuon(void *p) {
      typedef ::vhtm::Muon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::Muon

namespace vhtm {
//______________________________________________________________________________
void Electron::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::Electron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::Electron::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::Electron::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLElectron(void *p) {
      return  p ? new(p) ::vhtm::Electron : new ::vhtm::Electron;
   }
   static void *newArray_vhtmcLcLElectron(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::Electron[nElements] : new ::vhtm::Electron[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLElectron(void *p) {
      delete ((::vhtm::Electron*)p);
   }
   static void deleteArray_vhtmcLcLElectron(void *p) {
      delete [] ((::vhtm::Electron*)p);
   }
   static void destruct_vhtmcLcLElectron(void *p) {
      typedef ::vhtm::Electron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::Electron

namespace vhtm {
//______________________________________________________________________________
void MET::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::MET.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::MET::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::MET::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLMET(void *p) {
      return  p ? new(p) ::vhtm::MET : new ::vhtm::MET;
   }
   static void *newArray_vhtmcLcLMET(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::MET[nElements] : new ::vhtm::MET[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLMET(void *p) {
      delete ((::vhtm::MET*)p);
   }
   static void deleteArray_vhtmcLcLMET(void *p) {
      delete [] ((::vhtm::MET*)p);
   }
   static void destruct_vhtmcLcLMET(void *p) {
      typedef ::vhtm::MET current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::MET

namespace vhtm {
//______________________________________________________________________________
void Tau::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::Tau.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::Tau::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::Tau::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLTau(void *p) {
      return  p ? new(p) ::vhtm::Tau : new ::vhtm::Tau;
   }
   static void *newArray_vhtmcLcLTau(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::Tau[nElements] : new ::vhtm::Tau[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLTau(void *p) {
      delete ((::vhtm::Tau*)p);
   }
   static void deleteArray_vhtmcLcLTau(void *p) {
      delete [] ((::vhtm::Tau*)p);
   }
   static void destruct_vhtmcLcLTau(void *p) {
      typedef ::vhtm::Tau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::Tau

namespace vhtm {
//______________________________________________________________________________
void Jet::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::Jet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::Jet::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::Jet::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLJet(void *p) {
      return  p ? new(p) ::vhtm::Jet : new ::vhtm::Jet;
   }
   static void *newArray_vhtmcLcLJet(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::Jet[nElements] : new ::vhtm::Jet[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLJet(void *p) {
      delete ((::vhtm::Jet*)p);
   }
   static void deleteArray_vhtmcLcLJet(void *p) {
      delete [] ((::vhtm::Jet*)p);
   }
   static void destruct_vhtmcLcLJet(void *p) {
      typedef ::vhtm::Jet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::Jet

namespace vhtm {
//______________________________________________________________________________
void FatJet::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::FatJet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::FatJet::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::FatJet::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLFatJet(void *p) {
      return  p ? new(p) ::vhtm::FatJet : new ::vhtm::FatJet;
   }
   static void *newArray_vhtmcLcLFatJet(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::FatJet[nElements] : new ::vhtm::FatJet[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLFatJet(void *p) {
      delete ((::vhtm::FatJet*)p);
   }
   static void deleteArray_vhtmcLcLFatJet(void *p) {
      delete [] ((::vhtm::FatJet*)p);
   }
   static void destruct_vhtmcLcLFatJet(void *p) {
      typedef ::vhtm::FatJet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::FatJet

namespace vhtm {
//______________________________________________________________________________
void SubJet::Streamer(TBuffer &R__b)
{
   // Stream an object of class vhtm::SubJet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(vhtm::SubJet::Class(),this);
   } else {
      R__b.WriteClassBuffer(vhtm::SubJet::Class(),this);
   }
}

} // namespace vhtm
namespace ROOT {
   // Wrappers around operator new
   static void *new_vhtmcLcLSubJet(void *p) {
      return  p ? new(p) ::vhtm::SubJet : new ::vhtm::SubJet;
   }
   static void *newArray_vhtmcLcLSubJet(Long_t nElements, void *p) {
      return p ? new(p) ::vhtm::SubJet[nElements] : new ::vhtm::SubJet[nElements];
   }
   // Wrapper around operator delete
   static void delete_vhtmcLcLSubJet(void *p) {
      delete ((::vhtm::SubJet*)p);
   }
   static void deleteArray_vhtmcLcLSubJet(void *p) {
      delete [] ((::vhtm::SubJet*)p);
   }
   static void destruct_vhtmcLcLSubJet(void *p) {
      typedef ::vhtm::SubJet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::vhtm::SubJet

namespace ROOT {
   static TClass *vectorlEvhtmcLcLTaugR_Dictionary();
   static void vectorlEvhtmcLcLTaugR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLTaugR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLTaugR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLTaugR(void *p);
   static void deleteArray_vectorlEvhtmcLcLTaugR(void *p);
   static void destruct_vectorlEvhtmcLcLTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::Tau>*)
   {
      vector<vhtm::Tau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::Tau>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::Tau>", -2, "vector", 214,
                  typeid(vector<vhtm::Tau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLTaugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::Tau>) );
      instance.SetNew(&new_vectorlEvhtmcLcLTaugR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLTaugR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLTaugR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLTaugR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLTaugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::Tau> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::Tau>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::Tau>*)0x0)->GetClass();
      vectorlEvhtmcLcLTaugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLTaugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Tau> : new vector<vhtm::Tau>;
   }
   static void *newArray_vectorlEvhtmcLcLTaugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Tau>[nElements] : new vector<vhtm::Tau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLTaugR(void *p) {
      delete ((vector<vhtm::Tau>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLTaugR(void *p) {
      delete [] ((vector<vhtm::Tau>*)p);
   }
   static void destruct_vectorlEvhtmcLcLTaugR(void *p) {
      typedef vector<vhtm::Tau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::Tau>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLSubJetgR_Dictionary();
   static void vectorlEvhtmcLcLSubJetgR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLSubJetgR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLSubJetgR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLSubJetgR(void *p);
   static void deleteArray_vectorlEvhtmcLcLSubJetgR(void *p);
   static void destruct_vectorlEvhtmcLcLSubJetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::SubJet>*)
   {
      vector<vhtm::SubJet> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::SubJet>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::SubJet>", -2, "vector", 214,
                  typeid(vector<vhtm::SubJet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLSubJetgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::SubJet>) );
      instance.SetNew(&new_vectorlEvhtmcLcLSubJetgR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLSubJetgR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLSubJetgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLSubJetgR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLSubJetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::SubJet> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::SubJet>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLSubJetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::SubJet>*)0x0)->GetClass();
      vectorlEvhtmcLcLSubJetgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLSubJetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLSubJetgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::SubJet> : new vector<vhtm::SubJet>;
   }
   static void *newArray_vectorlEvhtmcLcLSubJetgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::SubJet>[nElements] : new vector<vhtm::SubJet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLSubJetgR(void *p) {
      delete ((vector<vhtm::SubJet>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLSubJetgR(void *p) {
      delete [] ((vector<vhtm::SubJet>*)p);
   }
   static void destruct_vectorlEvhtmcLcLSubJetgR(void *p) {
      typedef vector<vhtm::SubJet> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::SubJet>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLMuongR_Dictionary();
   static void vectorlEvhtmcLcLMuongR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLMuongR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLMuongR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLMuongR(void *p);
   static void deleteArray_vectorlEvhtmcLcLMuongR(void *p);
   static void destruct_vectorlEvhtmcLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::Muon>*)
   {
      vector<vhtm::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::Muon>", -2, "vector", 214,
                  typeid(vector<vhtm::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLMuongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::Muon>) );
      instance.SetNew(&new_vectorlEvhtmcLcLMuongR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLMuongR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLMuongR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLMuongR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLMuongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::Muon> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::Muon>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::Muon>*)0x0)->GetClass();
      vectorlEvhtmcLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLMuongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Muon> : new vector<vhtm::Muon>;
   }
   static void *newArray_vectorlEvhtmcLcLMuongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Muon>[nElements] : new vector<vhtm::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLMuongR(void *p) {
      delete ((vector<vhtm::Muon>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLMuongR(void *p) {
      delete [] ((vector<vhtm::Muon>*)p);
   }
   static void destruct_vectorlEvhtmcLcLMuongR(void *p) {
      typedef vector<vhtm::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::Muon>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLMETgR_Dictionary();
   static void vectorlEvhtmcLcLMETgR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLMETgR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLMETgR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLMETgR(void *p);
   static void deleteArray_vectorlEvhtmcLcLMETgR(void *p);
   static void destruct_vectorlEvhtmcLcLMETgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::MET>*)
   {
      vector<vhtm::MET> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::MET>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::MET>", -2, "vector", 214,
                  typeid(vector<vhtm::MET>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLMETgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::MET>) );
      instance.SetNew(&new_vectorlEvhtmcLcLMETgR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLMETgR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLMETgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLMETgR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLMETgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::MET> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::MET>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLMETgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::MET>*)0x0)->GetClass();
      vectorlEvhtmcLcLMETgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLMETgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLMETgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::MET> : new vector<vhtm::MET>;
   }
   static void *newArray_vectorlEvhtmcLcLMETgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::MET>[nElements] : new vector<vhtm::MET>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLMETgR(void *p) {
      delete ((vector<vhtm::MET>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLMETgR(void *p) {
      delete [] ((vector<vhtm::MET>*)p);
   }
   static void destruct_vectorlEvhtmcLcLMETgR(void *p) {
      typedef vector<vhtm::MET> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::MET>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLLHEParticlegR_Dictionary();
   static void vectorlEvhtmcLcLLHEParticlegR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLLHEParticlegR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLLHEParticlegR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLLHEParticlegR(void *p);
   static void deleteArray_vectorlEvhtmcLcLLHEParticlegR(void *p);
   static void destruct_vectorlEvhtmcLcLLHEParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::LHEParticle>*)
   {
      vector<vhtm::LHEParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::LHEParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::LHEParticle>", -2, "vector", 214,
                  typeid(vector<vhtm::LHEParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLLHEParticlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::LHEParticle>) );
      instance.SetNew(&new_vectorlEvhtmcLcLLHEParticlegR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLLHEParticlegR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLLHEParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLLHEParticlegR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLLHEParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::LHEParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::LHEParticle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLLHEParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::LHEParticle>*)0x0)->GetClass();
      vectorlEvhtmcLcLLHEParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLLHEParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLLHEParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::LHEParticle> : new vector<vhtm::LHEParticle>;
   }
   static void *newArray_vectorlEvhtmcLcLLHEParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::LHEParticle>[nElements] : new vector<vhtm::LHEParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLLHEParticlegR(void *p) {
      delete ((vector<vhtm::LHEParticle>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLLHEParticlegR(void *p) {
      delete [] ((vector<vhtm::LHEParticle>*)p);
   }
   static void destruct_vectorlEvhtmcLcLLHEParticlegR(void *p) {
      typedef vector<vhtm::LHEParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::LHEParticle>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLJetgR_Dictionary();
   static void vectorlEvhtmcLcLJetgR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLJetgR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLJetgR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLJetgR(void *p);
   static void deleteArray_vectorlEvhtmcLcLJetgR(void *p);
   static void destruct_vectorlEvhtmcLcLJetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::Jet>*)
   {
      vector<vhtm::Jet> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::Jet>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::Jet>", -2, "vector", 214,
                  typeid(vector<vhtm::Jet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLJetgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::Jet>) );
      instance.SetNew(&new_vectorlEvhtmcLcLJetgR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLJetgR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLJetgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLJetgR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLJetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::Jet> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::Jet>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLJetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::Jet>*)0x0)->GetClass();
      vectorlEvhtmcLcLJetgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLJetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLJetgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Jet> : new vector<vhtm::Jet>;
   }
   static void *newArray_vectorlEvhtmcLcLJetgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Jet>[nElements] : new vector<vhtm::Jet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLJetgR(void *p) {
      delete ((vector<vhtm::Jet>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLJetgR(void *p) {
      delete [] ((vector<vhtm::Jet>*)p);
   }
   static void destruct_vectorlEvhtmcLcLJetgR(void *p) {
      typedef vector<vhtm::Jet> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::Jet>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLGenParticlegR_Dictionary();
   static void vectorlEvhtmcLcLGenParticlegR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLGenParticlegR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLGenParticlegR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLGenParticlegR(void *p);
   static void deleteArray_vectorlEvhtmcLcLGenParticlegR(void *p);
   static void destruct_vectorlEvhtmcLcLGenParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::GenParticle>*)
   {
      vector<vhtm::GenParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::GenParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::GenParticle>", -2, "vector", 214,
                  typeid(vector<vhtm::GenParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLGenParticlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::GenParticle>) );
      instance.SetNew(&new_vectorlEvhtmcLcLGenParticlegR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLGenParticlegR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLGenParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLGenParticlegR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLGenParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::GenParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::GenParticle>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLGenParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::GenParticle>*)0x0)->GetClass();
      vectorlEvhtmcLcLGenParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLGenParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLGenParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::GenParticle> : new vector<vhtm::GenParticle>;
   }
   static void *newArray_vectorlEvhtmcLcLGenParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::GenParticle>[nElements] : new vector<vhtm::GenParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLGenParticlegR(void *p) {
      delete ((vector<vhtm::GenParticle>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLGenParticlegR(void *p) {
      delete [] ((vector<vhtm::GenParticle>*)p);
   }
   static void destruct_vectorlEvhtmcLcLGenParticlegR(void *p) {
      typedef vector<vhtm::GenParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::GenParticle>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLFatJetgR_Dictionary();
   static void vectorlEvhtmcLcLFatJetgR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLFatJetgR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLFatJetgR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLFatJetgR(void *p);
   static void deleteArray_vectorlEvhtmcLcLFatJetgR(void *p);
   static void destruct_vectorlEvhtmcLcLFatJetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::FatJet>*)
   {
      vector<vhtm::FatJet> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::FatJet>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::FatJet>", -2, "vector", 214,
                  typeid(vector<vhtm::FatJet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLFatJetgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::FatJet>) );
      instance.SetNew(&new_vectorlEvhtmcLcLFatJetgR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLFatJetgR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLFatJetgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLFatJetgR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLFatJetgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::FatJet> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::FatJet>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLFatJetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::FatJet>*)0x0)->GetClass();
      vectorlEvhtmcLcLFatJetgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLFatJetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLFatJetgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::FatJet> : new vector<vhtm::FatJet>;
   }
   static void *newArray_vectorlEvhtmcLcLFatJetgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::FatJet>[nElements] : new vector<vhtm::FatJet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLFatJetgR(void *p) {
      delete ((vector<vhtm::FatJet>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLFatJetgR(void *p) {
      delete [] ((vector<vhtm::FatJet>*)p);
   }
   static void destruct_vectorlEvhtmcLcLFatJetgR(void *p) {
      typedef vector<vhtm::FatJet> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::FatJet>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLEventgR_Dictionary();
   static void vectorlEvhtmcLcLEventgR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLEventgR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLEventgR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLEventgR(void *p);
   static void deleteArray_vectorlEvhtmcLcLEventgR(void *p);
   static void destruct_vectorlEvhtmcLcLEventgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::Event>*)
   {
      vector<vhtm::Event> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::Event>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::Event>", -2, "vector", 214,
                  typeid(vector<vhtm::Event>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLEventgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::Event>) );
      instance.SetNew(&new_vectorlEvhtmcLcLEventgR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLEventgR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLEventgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLEventgR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLEventgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::Event> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::Event>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLEventgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::Event>*)0x0)->GetClass();
      vectorlEvhtmcLcLEventgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLEventgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLEventgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Event> : new vector<vhtm::Event>;
   }
   static void *newArray_vectorlEvhtmcLcLEventgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Event>[nElements] : new vector<vhtm::Event>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLEventgR(void *p) {
      delete ((vector<vhtm::Event>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLEventgR(void *p) {
      delete [] ((vector<vhtm::Event>*)p);
   }
   static void destruct_vectorlEvhtmcLcLEventgR(void *p) {
      typedef vector<vhtm::Event> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::Event>

namespace ROOT {
   static TClass *vectorlEvhtmcLcLElectrongR_Dictionary();
   static void vectorlEvhtmcLcLElectrongR_TClassManip(TClass*);
   static void *new_vectorlEvhtmcLcLElectrongR(void *p = 0);
   static void *newArray_vectorlEvhtmcLcLElectrongR(Long_t size, void *p);
   static void delete_vectorlEvhtmcLcLElectrongR(void *p);
   static void deleteArray_vectorlEvhtmcLcLElectrongR(void *p);
   static void destruct_vectorlEvhtmcLcLElectrongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vhtm::Electron>*)
   {
      vector<vhtm::Electron> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vhtm::Electron>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vhtm::Electron>", -2, "vector", 214,
                  typeid(vector<vhtm::Electron>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvhtmcLcLElectrongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vhtm::Electron>) );
      instance.SetNew(&new_vectorlEvhtmcLcLElectrongR);
      instance.SetNewArray(&newArray_vectorlEvhtmcLcLElectrongR);
      instance.SetDelete(&delete_vectorlEvhtmcLcLElectrongR);
      instance.SetDeleteArray(&deleteArray_vectorlEvhtmcLcLElectrongR);
      instance.SetDestructor(&destruct_vectorlEvhtmcLcLElectrongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vhtm::Electron> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vhtm::Electron>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvhtmcLcLElectrongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vhtm::Electron>*)0x0)->GetClass();
      vectorlEvhtmcLcLElectrongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvhtmcLcLElectrongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvhtmcLcLElectrongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Electron> : new vector<vhtm::Electron>;
   }
   static void *newArray_vectorlEvhtmcLcLElectrongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vhtm::Electron>[nElements] : new vector<vhtm::Electron>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvhtmcLcLElectrongR(void *p) {
      delete ((vector<vhtm::Electron>*)p);
   }
   static void deleteArray_vectorlEvhtmcLcLElectrongR(void *p) {
      delete [] ((vector<vhtm::Electron>*)p);
   }
   static void destruct_vectorlEvhtmcLcLElectrongR(void *p) {
      typedef vector<vhtm::Electron> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vhtm::Electron>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 214,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<double> >*)
   {
      map<string,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<double> >", -2, "map", 96,
                  typeid(map<string,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<double> >) );
      instance.SetNew(&new_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0)->GetClass();
      maplEstringcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<double> > : new map<string,vector<double> >;
   }
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<double> >[nElements] : new map<string,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<string,vector<double> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<string,vector<double> >*)p);
   }
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      typedef map<string,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<double> >

namespace ROOT {
   static TClass *maplEstringcOunsignedsPintgR_Dictionary();
   static void maplEstringcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEstringcOunsignedsPintgR(void *p = 0);
   static void *newArray_maplEstringcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEstringcOunsignedsPintgR(void *p);
   static void deleteArray_maplEstringcOunsignedsPintgR(void *p);
   static void destruct_maplEstringcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,unsigned int>*)
   {
      map<string,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,unsigned int>", -2, "map", 96,
                  typeid(map<string,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,unsigned int>) );
      instance.SetNew(&new_maplEstringcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEstringcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEstringcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEstringcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,unsigned int>*)0x0)->GetClass();
      maplEstringcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,unsigned int> : new map<string,unsigned int>;
   }
   static void *newArray_maplEstringcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,unsigned int>[nElements] : new map<string,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOunsignedsPintgR(void *p) {
      delete ((map<string,unsigned int>*)p);
   }
   static void deleteArray_maplEstringcOunsignedsPintgR(void *p) {
      delete [] ((map<string,unsigned int>*)p);
   }
   static void destruct_maplEstringcOunsignedsPintgR(void *p) {
      typedef map<string,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,unsigned int>

namespace ROOT {
   static TClass *maplEdoublecOvectorlEdoublegRsPgR_Dictionary();
   static void maplEdoublecOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEdoublecOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_maplEdoublecOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEdoublecOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEdoublecOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEdoublecOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<double,vector<double> >*)
   {
      map<double,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<double,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<double,vector<double> >", -2, "map", 96,
                  typeid(map<double,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEdoublecOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<double,vector<double> >) );
      instance.SetNew(&new_maplEdoublecOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEdoublecOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEdoublecOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEdoublecOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEdoublecOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<double,vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<double,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEdoublecOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<double,vector<double> >*)0x0)->GetClass();
      maplEdoublecOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEdoublecOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEdoublecOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,vector<double> > : new map<double,vector<double> >;
   }
   static void *newArray_maplEdoublecOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<double,vector<double> >[nElements] : new map<double,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEdoublecOvectorlEdoublegRsPgR(void *p) {
      delete ((map<double,vector<double> >*)p);
   }
   static void deleteArray_maplEdoublecOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<double,vector<double> >*)p);
   }
   static void destruct_maplEdoublecOvectorlEdoublegRsPgR(void *p) {
      typedef map<double,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<double,vector<double> >

namespace {
  void TriggerDictionaryInitialization_Dict_Impl() {
    static const char* headers[] = {
"interface/PhysicsObjects.h",
"interface/LeptonCand.h",
0
    };
    static const char* includePaths[] = {
"./interface",
"./",
"/cvmfs/cms.cern.ch/slc7_amd64_gcc630/lcg/root/6.10.08-fmblme2/include",
"/afs/cern.ch/work/s/sbaradia/public/ChargedHiggs/ChargedHiggsAnalysis/Analysis/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$bits/char_traits.h")))  __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace std{template <typename > class __attribute__((annotate("$clingAutoload$bits/memoryfwd.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  Muon;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  SubJet;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  FatJet;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  Jet;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  Tau;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  MET;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  LHEParticle;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  GenParticle;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  Electron;}
namespace vhtm{class __attribute__((annotate("$clingAutoload$PhysicsObjects.h")))  Event;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "interface/PhysicsObjects.h"
#include "interface/LeptonCand.h"
#include "PhysicsObjects.h"

#ifdef __CINT__

#include <vector>
#include <map>
#include <string>
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ nestedtypedef;
#pragma link C++ class vhtm::Event+;
#pragma link C++ class std::vector<vhtm::Event>+;
#pragma link C++ class vhtm::Electron+;
#pragma link C++ class std::vector<vhtm::Electron>+;
#pragma link C++ class vhtm::GenParticle+;
#pragma link C++ class std::vector<vhtm::GenParticle>+;
#pragma link C++ class vhtm::LHEParticle+;
#pragma link C++ class std::vector<vhtm::LHEParticle>+;
#pragma link C++ class vhtm::MET+;
#pragma link C++ class std::vector<vhtm::MET>+;
#pragma link C++ class vhtm::Tau+;
#pragma link C++ class std::vector<vhtm::Tau>+;
#pragma link C++ class vhtm::Muon+;
#pragma link C++ class std::vector<vhtm::Muon>+;
#pragma link C++ class std::pair<vhtm::Muon,vhtm::Muon>+;
#pragma link C++ class vhtm::Jet+;
#pragma link C++ class std::vector<vhtm::Jet>+;
#pragma link C++ class vhtm::FatJet+;
#pragma link C++ class std::vector<vhtm::FatJet>+;
#pragma link C++ class vhtm::SubJet+;
#pragma link C++ class std::vector<vhtm::SubJet>+;
#pragma link C++ class std::vector<std::string>+;
#pragma link C++ class std::map<std::string,unsigned int>+;
#pragma link C++ class std::pair<std::string,unsigned int>+;
#pragma link C++ class std::map<double,std::vector<double> >+;
#pragma link C++ class std::map<std::string,std::vector<double> >+;
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"vhtm::Electron", payloadCode, "@",
"vhtm::Event", payloadCode, "@",
"vhtm::FatJet", payloadCode, "@",
"vhtm::GenParticle", payloadCode, "@",
"vhtm::Jet", payloadCode, "@",
"vhtm::LHEParticle", payloadCode, "@",
"vhtm::MET", payloadCode, "@",
"vhtm::Muon", payloadCode, "@",
"vhtm::SubJet", payloadCode, "@",
"vhtm::Tau", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_Dict_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_Dict() {
  TriggerDictionaryInitialization_Dict_Impl();
}
