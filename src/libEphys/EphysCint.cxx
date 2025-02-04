// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EphysCint
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
#include "EdbPhys.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbPhysics(void *p = nullptr);
   static void *newArray_EdbPhysics(Long_t size, void *p);
   static void delete_EdbPhysics(void *p);
   static void deleteArray_EdbPhysics(void *p);
   static void destruct_EdbPhysics(void *p);
   static void streamer_EdbPhysics(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPhysics*)
   {
      ::EdbPhysics *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPhysics >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPhysics", ::EdbPhysics::Class_Version(), "EdbPhys.h", 15,
                  typeid(::EdbPhysics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPhysics::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPhysics) );
      instance.SetNew(&new_EdbPhysics);
      instance.SetNewArray(&newArray_EdbPhysics);
      instance.SetDelete(&delete_EdbPhysics);
      instance.SetDeleteArray(&deleteArray_EdbPhysics);
      instance.SetDestructor(&destruct_EdbPhysics);
      instance.SetStreamerFunc(&streamer_EdbPhysics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPhysics*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPhysics*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPhysics*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbPhysics::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPhysics::Class_Name()
{
   return "EdbPhysics";
}

//______________________________________________________________________________
const char *EdbPhysics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPhysics*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPhysics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPhysics*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPhysics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPhysics*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPhysics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPhysics*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbPhysics::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPhysics.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbPhysics::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPhysics::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPhysics(void *p) {
      return  p ? new(p) ::EdbPhysics : new ::EdbPhysics;
   }
   static void *newArray_EdbPhysics(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPhysics[nElements] : new ::EdbPhysics[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPhysics(void *p) {
      delete (static_cast<::EdbPhysics*>(p));
   }
   static void deleteArray_EdbPhysics(void *p) {
      delete [] (static_cast<::EdbPhysics*>(p));
   }
   static void destruct_EdbPhysics(void *p) {
      typedef ::EdbPhysics current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPhysics(TBuffer &buf, void *obj) {
      ((::EdbPhysics*)obj)->::EdbPhysics::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPhysics

namespace {
  void TriggerDictionaryInitialization_EphysCint_Impl() {
    static const char* headers[] = {
"EdbPhys.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEphys/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EphysCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbPhys.h")))  EdbPhysics;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EphysCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbPhys.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbPhysics", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EphysCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EphysCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EphysCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EphysCint() {
  TriggerDictionaryInitialization_EphysCint_Impl();
}
