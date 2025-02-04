// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EmrCint
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
#include "EdbEmrIO.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbEmrIO(void *p = nullptr);
   static void *newArray_EdbEmrIO(Long_t size, void *p);
   static void delete_EdbEmrIO(void *p);
   static void deleteArray_EdbEmrIO(void *p);
   static void destruct_EdbEmrIO(void *p);
   static void streamer_EdbEmrIO(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEmrIO*)
   {
      ::EdbEmrIO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEmrIO >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEmrIO", ::EdbEmrIO::Class_Version(), "EdbEmrIO.h", 20,
                  typeid(::EdbEmrIO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEmrIO::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEmrIO) );
      instance.SetNew(&new_EdbEmrIO);
      instance.SetNewArray(&newArray_EdbEmrIO);
      instance.SetDelete(&delete_EdbEmrIO);
      instance.SetDeleteArray(&deleteArray_EdbEmrIO);
      instance.SetDestructor(&destruct_EdbEmrIO);
      instance.SetStreamerFunc(&streamer_EdbEmrIO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEmrIO*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEmrIO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEmrIO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEmrFileAccess(void *p = nullptr);
   static void *newArray_EdbEmrFileAccess(Long_t size, void *p);
   static void delete_EdbEmrFileAccess(void *p);
   static void deleteArray_EdbEmrFileAccess(void *p);
   static void destruct_EdbEmrFileAccess(void *p);
   static void streamer_EdbEmrFileAccess(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEmrFileAccess*)
   {
      ::EdbEmrFileAccess *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEmrFileAccess >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEmrFileAccess", ::EdbEmrFileAccess::Class_Version(), "EdbEmrIO.h", 39,
                  typeid(::EdbEmrFileAccess), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEmrFileAccess::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEmrFileAccess) );
      instance.SetNew(&new_EdbEmrFileAccess);
      instance.SetNewArray(&newArray_EdbEmrFileAccess);
      instance.SetDelete(&delete_EdbEmrFileAccess);
      instance.SetDeleteArray(&deleteArray_EdbEmrFileAccess);
      instance.SetDestructor(&destruct_EdbEmrFileAccess);
      instance.SetStreamerFunc(&streamer_EdbEmrFileAccess);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEmrFileAccess*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEmrFileAccess*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEmrFileAccess*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbEmrIO::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEmrIO::Class_Name()
{
   return "EdbEmrIO";
}

//______________________________________________________________________________
const char *EdbEmrIO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrIO*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEmrIO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrIO*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEmrIO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrIO*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEmrIO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrIO*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEmrFileAccess::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEmrFileAccess::Class_Name()
{
   return "EdbEmrFileAccess";
}

//______________________________________________________________________________
const char *EdbEmrFileAccess::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrFileAccess*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEmrFileAccess::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrFileAccess*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEmrFileAccess::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrFileAccess*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEmrFileAccess::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEmrFileAccess*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbEmrIO::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEmrIO.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbEmrIO::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbEmrIO::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEmrIO(void *p) {
      return  p ? new(p) ::EdbEmrIO : new ::EdbEmrIO;
   }
   static void *newArray_EdbEmrIO(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEmrIO[nElements] : new ::EdbEmrIO[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEmrIO(void *p) {
      delete (static_cast<::EdbEmrIO*>(p));
   }
   static void deleteArray_EdbEmrIO(void *p) {
      delete [] (static_cast<::EdbEmrIO*>(p));
   }
   static void destruct_EdbEmrIO(void *p) {
      typedef ::EdbEmrIO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEmrIO(TBuffer &buf, void *obj) {
      ((::EdbEmrIO*)obj)->::EdbEmrIO::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEmrIO

//______________________________________________________________________________
void EdbEmrFileAccess::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEmrFileAccess.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eSides.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbEmrFileAccess::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbEmrFileAccess::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eSides.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEmrFileAccess(void *p) {
      return  p ? new(p) ::EdbEmrFileAccess : new ::EdbEmrFileAccess;
   }
   static void *newArray_EdbEmrFileAccess(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEmrFileAccess[nElements] : new ::EdbEmrFileAccess[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEmrFileAccess(void *p) {
      delete (static_cast<::EdbEmrFileAccess*>(p));
   }
   static void deleteArray_EdbEmrFileAccess(void *p) {
      delete [] (static_cast<::EdbEmrFileAccess*>(p));
   }
   static void destruct_EdbEmrFileAccess(void *p) {
      typedef ::EdbEmrFileAccess current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEmrFileAccess(TBuffer &buf, void *obj) {
      ((::EdbEmrFileAccess*)obj)->::EdbEmrFileAccess::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEmrFileAccess

namespace {
  void TriggerDictionaryInitialization_EmrCint_Impl() {
    static const char* headers[] = {
"EdbEmrIO.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEmr/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EmrCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbEmrIO.h")))  EdbEmrIO;
class __attribute__((annotate("$clingAutoload$EdbEmrIO.h")))  EdbEmrFileAccess;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EmrCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbEmrIO.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbEmrFileAccess", payloadCode, "@",
"EdbEmrIO", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EmrCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EmrCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EmrCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EmrCint() {
  TriggerDictionaryInitialization_EmrCint_Impl();
}
