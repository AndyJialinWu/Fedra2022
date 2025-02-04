// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EGACint
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
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

// Header files passed as explicit arguments
#include "EdbGA.h"
#include "EdbIP.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbGA(void *p = nullptr);
   static void *newArray_EdbGA(Long_t size, void *p);
   static void delete_EdbGA(void *p);
   static void deleteArray_EdbGA(void *p);
   static void destruct_EdbGA(void *p);
   static void streamer_EdbGA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbGA*)
   {
      ::EdbGA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbGA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbGA", ::EdbGA::Class_Version(), "EdbGA.h", 17,
                  typeid(::EdbGA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbGA::Dictionary, isa_proxy, 16,
                  sizeof(::EdbGA) );
      instance.SetNew(&new_EdbGA);
      instance.SetNewArray(&newArray_EdbGA);
      instance.SetDelete(&delete_EdbGA);
      instance.SetDeleteArray(&deleteArray_EdbGA);
      instance.SetDestructor(&destruct_EdbGA);
      instance.SetStreamerFunc(&streamer_EdbGA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbGA*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbGA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbGA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbFIRF(void *p = nullptr);
   static void *newArray_EdbFIRF(Long_t size, void *p);
   static void delete_EdbFIRF(void *p);
   static void deleteArray_EdbFIRF(void *p);
   static void destruct_EdbFIRF(void *p);
   static void streamer_EdbFIRF(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbFIRF*)
   {
      ::EdbFIRF *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbFIRF >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbFIRF", ::EdbFIRF::Class_Version(), "EdbIP.h", 22,
                  typeid(::EdbFIRF), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbFIRF::Dictionary, isa_proxy, 16,
                  sizeof(::EdbFIRF) );
      instance.SetNew(&new_EdbFIRF);
      instance.SetNewArray(&newArray_EdbFIRF);
      instance.SetDelete(&delete_EdbFIRF);
      instance.SetDeleteArray(&deleteArray_EdbFIRF);
      instance.SetDestructor(&destruct_EdbFIRF);
      instance.SetStreamerFunc(&streamer_EdbFIRF);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbFIRF*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbFIRF*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbFIRF*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbClustP(void *p = nullptr);
   static void *newArray_EdbClustP(Long_t size, void *p);
   static void delete_EdbClustP(void *p);
   static void deleteArray_EdbClustP(void *p);
   static void destruct_EdbClustP(void *p);
   static void streamer_EdbClustP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbClustP*)
   {
      ::EdbClustP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbClustP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbClustP", ::EdbClustP::Class_Version(), "EdbIP.h", 58,
                  typeid(::EdbClustP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbClustP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbClustP) );
      instance.SetNew(&new_EdbClustP);
      instance.SetNewArray(&newArray_EdbClustP);
      instance.SetDelete(&delete_EdbClustP);
      instance.SetDeleteArray(&deleteArray_EdbClustP);
      instance.SetDestructor(&destruct_EdbClustP);
      instance.SetStreamerFunc(&streamer_EdbClustP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbClustP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbClustP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbClustP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbIP(void *p = nullptr);
   static void *newArray_EdbIP(Long_t size, void *p);
   static void delete_EdbIP(void *p);
   static void deleteArray_EdbIP(void *p);
   static void destruct_EdbIP(void *p);
   static void streamer_EdbIP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbIP*)
   {
      ::EdbIP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbIP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbIP", ::EdbIP::Class_Version(), "EdbIP.h", 87,
                  typeid(::EdbIP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbIP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbIP) );
      instance.SetNew(&new_EdbIP);
      instance.SetNewArray(&newArray_EdbIP);
      instance.SetDelete(&delete_EdbIP);
      instance.SetDeleteArray(&deleteArray_EdbIP);
      instance.SetDestructor(&destruct_EdbIP);
      instance.SetStreamerFunc(&streamer_EdbIP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbIP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbIP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbIP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbGA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbGA::Class_Name()
{
   return "EdbGA";
}

//______________________________________________________________________________
const char *EdbGA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbGA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbGA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbGA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbGA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbGA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbGA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbGA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbFIRF::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbFIRF::Class_Name()
{
   return "EdbFIRF";
}

//______________________________________________________________________________
const char *EdbFIRF::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbFIRF*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbFIRF::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbFIRF*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbFIRF::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbFIRF*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbFIRF::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbFIRF*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbClustP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbClustP::Class_Name()
{
   return "EdbClustP";
}

//______________________________________________________________________________
const char *EdbClustP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbClustP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbClustP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbClustP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbClustP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbClustP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbClustP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbClustP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbIP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbIP::Class_Name()
{
   return "EdbIP";
}

//______________________________________________________________________________
const char *EdbIP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbIP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbIP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbIP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbIP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbIP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbIP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbIP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbGA::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbGA.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eRun;
      R__b >> eBinX;
      R__b >> eBinY;
      R__b >> eBinZ;
      R__b >> eVid;
      R__b >> eGrainsFile;
      R__b >> eGrains;
      eClusters->Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbGA::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbGA::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eRun;
      R__b << eBinX;
      R__b << eBinY;
      R__b << eBinZ;
      R__b << eVid;
      R__b << eGrainsFile;
      R__b << eGrains;
      eClusters->Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbGA(void *p) {
      return  p ? new(p) ::EdbGA : new ::EdbGA;
   }
   static void *newArray_EdbGA(Long_t nElements, void *p) {
      return p ? new(p) ::EdbGA[nElements] : new ::EdbGA[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbGA(void *p) {
      delete (static_cast<::EdbGA*>(p));
   }
   static void deleteArray_EdbGA(void *p) {
      delete [] (static_cast<::EdbGA*>(p));
   }
   static void destruct_EdbGA(void *p) {
      typedef ::EdbGA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbGA(TBuffer &buf, void *obj) {
      ((::EdbGA*)obj)->::EdbGA::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbGA

//______________________________________________________________________________
void EdbFIRF::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbFIRF.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> eArr;
      R__b >> eColumns;
      R__b >> eRows;
      R__b.CheckByteCount(R__s, R__c, EdbFIRF::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbFIRF::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << eArr;
      R__b << eColumns;
      R__b << eRows;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbFIRF(void *p) {
      return  p ? new(p) ::EdbFIRF : new ::EdbFIRF;
   }
   static void *newArray_EdbFIRF(Long_t nElements, void *p) {
      return p ? new(p) ::EdbFIRF[nElements] : new ::EdbFIRF[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbFIRF(void *p) {
      delete (static_cast<::EdbFIRF*>(p));
   }
   static void deleteArray_EdbFIRF(void *p) {
      delete [] (static_cast<::EdbFIRF*>(p));
   }
   static void destruct_EdbFIRF(void *p) {
      typedef ::EdbFIRF current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbFIRF(TBuffer &buf, void *obj) {
      ((::EdbFIRF*)obj)->::EdbFIRF::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbFIRF

//______________________________________________________________________________
void EdbClustP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbClustP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbCluster::Streamer(R__b);
      R__b >> eXcg;
      R__b >> eYcg;
      R__b >> ePeak;
      R__b >> eXp;
      R__b >> eYp;
      R__b.CheckByteCount(R__s, R__c, EdbClustP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbClustP::IsA(), kTRUE);
      EdbCluster::Streamer(R__b);
      R__b << eXcg;
      R__b << eYcg;
      R__b << ePeak;
      R__b << eXp;
      R__b << eYp;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbClustP(void *p) {
      return  p ? new(p) ::EdbClustP : new ::EdbClustP;
   }
   static void *newArray_EdbClustP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbClustP[nElements] : new ::EdbClustP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbClustP(void *p) {
      delete (static_cast<::EdbClustP*>(p));
   }
   static void deleteArray_EdbClustP(void *p) {
      delete [] (static_cast<::EdbClustP*>(p));
   }
   static void destruct_EdbClustP(void *p) {
      typedef ::EdbClustP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbClustP(TBuffer &buf, void *obj) {
      ((::EdbClustP*)obj)->::EdbClustP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbClustP

//______________________________________________________________________________
void EdbIP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbIP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eFIR;
      R__b >> eThr;
      R__b.CheckByteCount(R__s, R__c, EdbIP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbIP::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eFIR;
      R__b << eThr;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbIP(void *p) {
      return  p ? new(p) ::EdbIP : new ::EdbIP;
   }
   static void *newArray_EdbIP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbIP[nElements] : new ::EdbIP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbIP(void *p) {
      delete (static_cast<::EdbIP*>(p));
   }
   static void deleteArray_EdbIP(void *p) {
      delete [] (static_cast<::EdbIP*>(p));
   }
   static void destruct_EdbIP(void *p) {
      typedef ::EdbIP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbIP(TBuffer &buf, void *obj) {
      ((::EdbIP*)obj)->::EdbIP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbIP

namespace {
  void TriggerDictionaryInitialization_EGACint_Impl() {
    static const char* headers[] = {
"EdbGA.h",
"EdbIP.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEGA/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EGACint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbGA.h")))  EdbGA;
class __attribute__((annotate("$clingAutoload$EdbIP.h")))  EdbFIRF;
class __attribute__((annotate("$clingAutoload$EdbIP.h")))  EdbClustP;
class __attribute__((annotate("$clingAutoload$EdbIP.h")))  EdbIP;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EGACint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbGA.h"
#include "EdbIP.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbClustP", payloadCode, "@",
"EdbFIRF", payloadCode, "@",
"EdbGA", payloadCode, "@",
"EdbIP", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EGACint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EGACint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EGACint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EGACint() {
  TriggerDictionaryInitialization_EGACint_Impl();
}
