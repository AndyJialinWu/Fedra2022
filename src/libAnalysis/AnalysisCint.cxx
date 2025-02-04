// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME AnalysisCint
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
#include "EdbDecaySearch.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbTrackDS(void *p = nullptr);
   static void *newArray_EdbTrackDS(Long_t size, void *p);
   static void delete_EdbTrackDS(void *p);
   static void deleteArray_EdbTrackDS(void *p);
   static void destruct_EdbTrackDS(void *p);
   static void streamer_EdbTrackDS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrackDS*)
   {
      ::EdbTrackDS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrackDS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrackDS", ::EdbTrackDS::Class_Version(), "EdbDecaySearch.h", 8,
                  typeid(::EdbTrackDS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrackDS::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTrackDS) );
      instance.SetNew(&new_EdbTrackDS);
      instance.SetNewArray(&newArray_EdbTrackDS);
      instance.SetDelete(&delete_EdbTrackDS);
      instance.SetDeleteArray(&deleteArray_EdbTrackDS);
      instance.SetDestructor(&destruct_EdbTrackDS);
      instance.SetStreamerFunc(&streamer_EdbTrackDS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrackDS*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrackDS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrackDS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDecayVertex(void *p = nullptr);
   static void *newArray_EdbDecayVertex(Long_t size, void *p);
   static void delete_EdbDecayVertex(void *p);
   static void deleteArray_EdbDecayVertex(void *p);
   static void destruct_EdbDecayVertex(void *p);
   static void streamer_EdbDecayVertex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDecayVertex*)
   {
      ::EdbDecayVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDecayVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDecayVertex", ::EdbDecayVertex::Class_Version(), "EdbDecaySearch.h", 114,
                  typeid(::EdbDecayVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDecayVertex::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDecayVertex) );
      instance.SetNew(&new_EdbDecayVertex);
      instance.SetNewArray(&newArray_EdbDecayVertex);
      instance.SetDelete(&delete_EdbDecayVertex);
      instance.SetDeleteArray(&deleteArray_EdbDecayVertex);
      instance.SetDestructor(&destruct_EdbDecayVertex);
      instance.SetStreamerFunc(&streamer_EdbDecayVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDecayVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDecayVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDecayVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbSmallKink(void *p);
   static void deleteArray_EdbSmallKink(void *p);
   static void destruct_EdbSmallKink(void *p);
   static void streamer_EdbSmallKink(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSmallKink*)
   {
      ::EdbSmallKink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSmallKink >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSmallKink", ::EdbSmallKink::Class_Version(), "EdbDecaySearch.h", 155,
                  typeid(::EdbSmallKink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSmallKink::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSmallKink) );
      instance.SetDelete(&delete_EdbSmallKink);
      instance.SetDeleteArray(&deleteArray_EdbSmallKink);
      instance.SetDestructor(&destruct_EdbSmallKink);
      instance.SetStreamerFunc(&streamer_EdbSmallKink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSmallKink*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSmallKink*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSmallKink*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDecaySearch(void *p = nullptr);
   static void *newArray_EdbDecaySearch(Long_t size, void *p);
   static void delete_EdbDecaySearch(void *p);
   static void deleteArray_EdbDecaySearch(void *p);
   static void destruct_EdbDecaySearch(void *p);
   static void streamer_EdbDecaySearch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDecaySearch*)
   {
      ::EdbDecaySearch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDecaySearch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDecaySearch", ::EdbDecaySearch::Class_Version(), "EdbDecaySearch.h", 204,
                  typeid(::EdbDecaySearch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDecaySearch::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDecaySearch) );
      instance.SetNew(&new_EdbDecaySearch);
      instance.SetNewArray(&newArray_EdbDecaySearch);
      instance.SetDelete(&delete_EdbDecaySearch);
      instance.SetDeleteArray(&deleteArray_EdbDecaySearch);
      instance.SetDestructor(&destruct_EdbDecaySearch);
      instance.SetStreamerFunc(&streamer_EdbDecaySearch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDecaySearch*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDecaySearch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDecaySearch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbTrackDS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrackDS::Class_Name()
{
   return "EdbTrackDS";
}

//______________________________________________________________________________
const char *EdbTrackDS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackDS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrackDS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackDS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrackDS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackDS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrackDS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackDS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDecayVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDecayVertex::Class_Name()
{
   return "EdbDecayVertex";
}

//______________________________________________________________________________
const char *EdbDecayVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDecayVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDecayVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDecayVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDecayVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDecayVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDecayVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDecayVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSmallKink::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSmallKink::Class_Name()
{
   return "EdbSmallKink";
}

//______________________________________________________________________________
const char *EdbSmallKink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSmallKink*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSmallKink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSmallKink*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSmallKink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSmallKink*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSmallKink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSmallKink*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDecaySearch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDecaySearch::Class_Name()
{
   return "EdbDecaySearch";
}

//______________________________________________________________________________
const char *EdbDecaySearch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDecaySearch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDecaySearch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDecaySearch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDecaySearch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDecaySearch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDecaySearch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDecaySearch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbTrackDS::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTrackDS.

   EdbTrackP::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTrackDS(void *p) {
      return  p ? new(p) ::EdbTrackDS : new ::EdbTrackDS;
   }
   static void *newArray_EdbTrackDS(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTrackDS[nElements] : new ::EdbTrackDS[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTrackDS(void *p) {
      delete (static_cast<::EdbTrackDS*>(p));
   }
   static void deleteArray_EdbTrackDS(void *p) {
      delete [] (static_cast<::EdbTrackDS*>(p));
   }
   static void destruct_EdbTrackDS(void *p) {
      typedef ::EdbTrackDS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrackDS(TBuffer &buf, void *obj) {
      ((::EdbTrackDS*)obj)->::EdbTrackDS::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTrackDS

//______________________________________________________________________________
void EdbDecayVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDecayVertex.

   EdbVertex::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDecayVertex(void *p) {
      return  p ? new(p) ::EdbDecayVertex : new ::EdbDecayVertex;
   }
   static void *newArray_EdbDecayVertex(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDecayVertex[nElements] : new ::EdbDecayVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDecayVertex(void *p) {
      delete (static_cast<::EdbDecayVertex*>(p));
   }
   static void deleteArray_EdbDecayVertex(void *p) {
      delete [] (static_cast<::EdbDecayVertex*>(p));
   }
   static void destruct_EdbDecayVertex(void *p) {
      typedef ::EdbDecayVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDecayVertex(TBuffer &buf, void *obj) {
      ((::EdbDecayVertex*)obj)->::EdbDecayVertex::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDecayVertex

//______________________________________________________________________________
void EdbSmallKink::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSmallKink.

   EdbVertex::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbSmallKink(void *p) {
      delete (static_cast<::EdbSmallKink*>(p));
   }
   static void deleteArray_EdbSmallKink(void *p) {
      delete [] (static_cast<::EdbSmallKink*>(p));
   }
   static void destruct_EdbSmallKink(void *p) {
      typedef ::EdbSmallKink current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSmallKink(TBuffer &buf, void *obj) {
      ((::EdbSmallKink*)obj)->::EdbSmallKink::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSmallKink

//______________________________________________________________________________
void EdbDecaySearch::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDecaySearch.

   ::Error("EdbDecaySearch::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDecaySearch(void *p) {
      return  p ? new(p) ::EdbDecaySearch : new ::EdbDecaySearch;
   }
   static void *newArray_EdbDecaySearch(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDecaySearch[nElements] : new ::EdbDecaySearch[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDecaySearch(void *p) {
      delete (static_cast<::EdbDecaySearch*>(p));
   }
   static void deleteArray_EdbDecaySearch(void *p) {
      delete [] (static_cast<::EdbDecaySearch*>(p));
   }
   static void destruct_EdbDecaySearch(void *p) {
      typedef ::EdbDecaySearch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDecaySearch(TBuffer &buf, void *obj) {
      ((::EdbDecaySearch*)obj)->::EdbDecaySearch::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDecaySearch

namespace {
  void TriggerDictionaryInitialization_AnalysisCint_Impl() {
    static const char* headers[] = {
"EdbDecaySearch.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libAnalysis/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "AnalysisCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbDecaySearch.h")))  EdbTrackDS;
class __attribute__((annotate("$clingAutoload$EdbDecaySearch.h")))  EdbDecayVertex;
class __attribute__((annotate("$clingAutoload$EdbDecaySearch.h")))  EdbSmallKink;
class __attribute__((annotate("$clingAutoload$EdbDecaySearch.h")))  EdbDecaySearch;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "AnalysisCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbDecaySearch.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbDecaySearch", payloadCode, "@",
"EdbDecayVertex", payloadCode, "@",
"EdbSmallKink", payloadCode, "@",
"EdbTrackDS", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("AnalysisCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_AnalysisCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_AnalysisCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_AnalysisCint() {
  TriggerDictionaryInitialization_AnalysisCint_Impl();
}
