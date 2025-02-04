// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ScanCint
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
#include "EdbScanClient.h"
#include "EdbScanProc.h"
#include "EdbProcPars.h"
#include "EdbScanTracking.h"
#include "EdbScanClientBase.h"
#include "EdbScanClientPav.h"
#include "EdbScanClientSysal.h"
#include "MessageManager.h"
#include "MessageReader.h"
#include "tinyxml.h"
#include "tinystr.h"
#include "tinyxmlerror.h"
#include "tinyxmlparser.h"
#include "PAVProtocol.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_EdbScanClientBase(void *p);
   static void deleteArray_EdbScanClientBase(void *p);
   static void destruct_EdbScanClientBase(void *p);
   static void streamer_EdbScanClientBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanClientBase*)
   {
      ::EdbScanClientBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanClientBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanClientBase", ::EdbScanClientBase::Class_Version(), "EdbScanClientBase.h", 13,
                  typeid(::EdbScanClientBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanClientBase::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanClientBase) );
      instance.SetDelete(&delete_EdbScanClientBase);
      instance.SetDeleteArray(&deleteArray_EdbScanClientBase);
      instance.SetDestructor(&destruct_EdbScanClientBase);
      instance.SetStreamerFunc(&streamer_EdbScanClientBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanClientBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanClientBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanClientBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbScanClientCommon(void *p);
   static void deleteArray_EdbScanClientCommon(void *p);
   static void destruct_EdbScanClientCommon(void *p);
   static void streamer_EdbScanClientCommon(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanClientCommon*)
   {
      ::EdbScanClientCommon *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanClientCommon >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanClientCommon", ::EdbScanClientCommon::Class_Version(), "EdbScanClientBase.h", 54,
                  typeid(::EdbScanClientCommon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanClientCommon::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanClientCommon) );
      instance.SetDelete(&delete_EdbScanClientCommon);
      instance.SetDeleteArray(&deleteArray_EdbScanClientCommon);
      instance.SetDestructor(&destruct_EdbScanClientCommon);
      instance.SetStreamerFunc(&streamer_EdbScanClientCommon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanClientCommon*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanClientCommon*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanClientCommon*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanClient(void *p = nullptr);
   static void *newArray_EdbScanClient(Long_t size, void *p);
   static void delete_EdbScanClient(void *p);
   static void deleteArray_EdbScanClient(void *p);
   static void destruct_EdbScanClient(void *p);
   static void streamer_EdbScanClient(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanClient*)
   {
      ::EdbScanClient *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanClient >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanClient", ::EdbScanClient::Class_Version(), "EdbScanClient.h", 11,
                  typeid(::EdbScanClient), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanClient::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanClient) );
      instance.SetNew(&new_EdbScanClient);
      instance.SetNewArray(&newArray_EdbScanClient);
      instance.SetDelete(&delete_EdbScanClient);
      instance.SetDeleteArray(&deleteArray_EdbScanClient);
      instance.SetDestructor(&destruct_EdbScanClient);
      instance.SetStreamerFunc(&streamer_EdbScanClient);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanClient*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanClient*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanClient*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanProc(void *p = nullptr);
   static void *newArray_EdbScanProc(Long_t size, void *p);
   static void delete_EdbScanProc(void *p);
   static void deleteArray_EdbScanProc(void *p);
   static void destruct_EdbScanProc(void *p);
   static void streamer_EdbScanProc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanProc*)
   {
      ::EdbScanProc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanProc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanProc", ::EdbScanProc::Class_Version(), "EdbScanProc.h", 11,
                  typeid(::EdbScanProc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanProc::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanProc) );
      instance.SetNew(&new_EdbScanProc);
      instance.SetNewArray(&newArray_EdbScanProc);
      instance.SetDelete(&delete_EdbScanProc);
      instance.SetDeleteArray(&deleteArray_EdbScanProc);
      instance.SetDestructor(&destruct_EdbScanProc);
      instance.SetStreamerFunc(&streamer_EdbScanProc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanProc*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanProc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanProc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbProcPars(void *p = nullptr);
   static void *newArray_EdbProcPars(Long_t size, void *p);
   static void delete_EdbProcPars(void *p);
   static void deleteArray_EdbProcPars(void *p);
   static void destruct_EdbProcPars(void *p);
   static void streamer_EdbProcPars(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbProcPars*)
   {
      ::EdbProcPars *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbProcPars >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbProcPars", ::EdbProcPars::Class_Version(), "EdbProcPars.h", 5,
                  typeid(::EdbProcPars), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbProcPars::Dictionary, isa_proxy, 16,
                  sizeof(::EdbProcPars) );
      instance.SetNew(&new_EdbProcPars);
      instance.SetNewArray(&newArray_EdbProcPars);
      instance.SetDelete(&delete_EdbProcPars);
      instance.SetDeleteArray(&deleteArray_EdbProcPars);
      instance.SetDestructor(&destruct_EdbProcPars);
      instance.SetStreamerFunc(&streamer_EdbProcPars);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbProcPars*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbProcPars*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbProcPars*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTrackAssembler(void *p = nullptr);
   static void *newArray_EdbTrackAssembler(Long_t size, void *p);
   static void delete_EdbTrackAssembler(void *p);
   static void deleteArray_EdbTrackAssembler(void *p);
   static void destruct_EdbTrackAssembler(void *p);
   static void streamer_EdbTrackAssembler(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrackAssembler*)
   {
      ::EdbTrackAssembler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrackAssembler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrackAssembler", ::EdbTrackAssembler::Class_Version(), "EdbScanTracking.h", 16,
                  typeid(::EdbTrackAssembler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrackAssembler::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTrackAssembler) );
      instance.SetNew(&new_EdbTrackAssembler);
      instance.SetNewArray(&newArray_EdbTrackAssembler);
      instance.SetDelete(&delete_EdbTrackAssembler);
      instance.SetDeleteArray(&deleteArray_EdbTrackAssembler);
      instance.SetDestructor(&destruct_EdbTrackAssembler);
      instance.SetStreamerFunc(&streamer_EdbTrackAssembler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrackAssembler*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrackAssembler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrackAssembler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanTracking(void *p = nullptr);
   static void *newArray_EdbScanTracking(Long_t size, void *p);
   static void delete_EdbScanTracking(void *p);
   static void deleteArray_EdbScanTracking(void *p);
   static void destruct_EdbScanTracking(void *p);
   static void streamer_EdbScanTracking(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanTracking*)
   {
      ::EdbScanTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanTracking", ::EdbScanTracking::Class_Version(), "EdbScanTracking.h", 80,
                  typeid(::EdbScanTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanTracking::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanTracking) );
      instance.SetNew(&new_EdbScanTracking);
      instance.SetNewArray(&newArray_EdbScanTracking);
      instance.SetDelete(&delete_EdbScanTracking);
      instance.SetDeleteArray(&deleteArray_EdbScanTracking);
      instance.SetDestructor(&destruct_EdbScanTracking);
      instance.SetStreamerFunc(&streamer_EdbScanTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanTracking*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanTracking*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanTracking*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanClientPav(void *p = nullptr);
   static void *newArray_EdbScanClientPav(Long_t size, void *p);
   static void delete_EdbScanClientPav(void *p);
   static void deleteArray_EdbScanClientPav(void *p);
   static void destruct_EdbScanClientPav(void *p);
   static void streamer_EdbScanClientPav(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanClientPav*)
   {
      ::EdbScanClientPav *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanClientPav >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanClientPav", ::EdbScanClientPav::Class_Version(), "EdbScanClientPav.h", 8,
                  typeid(::EdbScanClientPav), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanClientPav::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanClientPav) );
      instance.SetNew(&new_EdbScanClientPav);
      instance.SetNewArray(&newArray_EdbScanClientPav);
      instance.SetDelete(&delete_EdbScanClientPav);
      instance.SetDeleteArray(&deleteArray_EdbScanClientPav);
      instance.SetDestructor(&destruct_EdbScanClientPav);
      instance.SetStreamerFunc(&streamer_EdbScanClientPav);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanClientPav*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanClientPav*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanClientPav*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanClientSysal(void *p = nullptr);
   static void *newArray_EdbScanClientSysal(Long_t size, void *p);
   static void delete_EdbScanClientSysal(void *p);
   static void deleteArray_EdbScanClientSysal(void *p);
   static void destruct_EdbScanClientSysal(void *p);
   static void streamer_EdbScanClientSysal(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanClientSysal*)
   {
      ::EdbScanClientSysal *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanClientSysal >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanClientSysal", ::EdbScanClientSysal::Class_Version(), "EdbScanClientSysal.h", 13,
                  typeid(::EdbScanClientSysal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanClientSysal::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanClientSysal) );
      instance.SetNew(&new_EdbScanClientSysal);
      instance.SetNewArray(&newArray_EdbScanClientSysal);
      instance.SetDelete(&delete_EdbScanClientSysal);
      instance.SetDeleteArray(&deleteArray_EdbScanClientSysal);
      instance.SetDestructor(&destruct_EdbScanClientSysal);
      instance.SetStreamerFunc(&streamer_EdbScanClientSysal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanClientSysal*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanClientSysal*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanClientSysal*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbScanClientBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanClientBase::Class_Name()
{
   return "EdbScanClientBase";
}

//______________________________________________________________________________
const char *EdbScanClientBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanClientBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanClientBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanClientBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanClientCommon::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanClientCommon::Class_Name()
{
   return "EdbScanClientCommon";
}

//______________________________________________________________________________
const char *EdbScanClientCommon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientCommon*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanClientCommon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientCommon*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanClientCommon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientCommon*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanClientCommon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientCommon*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanClient::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanClient::Class_Name()
{
   return "EdbScanClient";
}

//______________________________________________________________________________
const char *EdbScanClient::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClient*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanClient::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClient*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanClient::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClient*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanClient::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClient*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanProc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanProc::Class_Name()
{
   return "EdbScanProc";
}

//______________________________________________________________________________
const char *EdbScanProc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanProc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanProc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanProc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanProc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanProc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanProc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanProc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbProcPars::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbProcPars::Class_Name()
{
   return "EdbProcPars";
}

//______________________________________________________________________________
const char *EdbProcPars::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbProcPars*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbProcPars::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbProcPars*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbProcPars::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbProcPars*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbProcPars::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbProcPars*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTrackAssembler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrackAssembler::Class_Name()
{
   return "EdbTrackAssembler";
}

//______________________________________________________________________________
const char *EdbTrackAssembler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackAssembler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrackAssembler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackAssembler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrackAssembler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackAssembler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrackAssembler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackAssembler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanTracking::Class_Name()
{
   return "EdbScanTracking";
}

//______________________________________________________________________________
const char *EdbScanTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanClientPav::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanClientPav::Class_Name()
{
   return "EdbScanClientPav";
}

//______________________________________________________________________________
const char *EdbScanClientPav::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientPav*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanClientPav::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientPav*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanClientPav::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientPav*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanClientPav::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientPav*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanClientSysal::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanClientSysal::Class_Name()
{
   return "EdbScanClientSysal";
}

//______________________________________________________________________________
const char *EdbScanClientSysal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientSysal*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanClientSysal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientSysal*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanClientSysal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientSysal*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanClientSysal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanClientSysal*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbScanClientBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanClientBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, EdbScanClientBase::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanClientBase::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbScanClientBase(void *p) {
      delete (static_cast<::EdbScanClientBase*>(p));
   }
   static void deleteArray_EdbScanClientBase(void *p) {
      delete [] (static_cast<::EdbScanClientBase*>(p));
   }
   static void destruct_EdbScanClientBase(void *p) {
      typedef ::EdbScanClientBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanClientBase(TBuffer &buf, void *obj) {
      ((::EdbScanClientBase*)obj)->::EdbScanClientBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanClientBase

//______________________________________________________________________________
void EdbScanClientCommon::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanClientCommon.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbScanClientBase::Streamer(R__b);
      R__b >> eSock;
      R__b.ReadStaticArray((char*)eCMD);
      R__b.ReadStaticArray((char*)eMess);
      R__b.ReadStaticArray((char*)eMess1);
      R__b >> eNXview;
      R__b >> eNYview;
      R__b >> eXstep;
      R__b >> eYstep;
      R__b >> eMAXSCANATTEMPTS;
      R__b >> eMAXFAILS;
      R__b >> ePORT;
      eServer.Streamer(R__b);
      eRawDirServer.Streamer(R__b);
      eRawDirClient.Streamer(R__b);
      eProcTgtServer.Streamer(R__b);
      eProcPthServer.Streamer(R__b);
      eServerCreatedRunName.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbScanClientCommon::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanClientCommon::IsA(), kTRUE);
      EdbScanClientBase::Streamer(R__b);
      R__b << eSock;
      R__b.WriteArray(eCMD, 256);
      R__b.WriteArray(eMess, 256);
      R__b.WriteArray(eMess1, 256);
      R__b << eNXview;
      R__b << eNYview;
      R__b << eXstep;
      R__b << eYstep;
      R__b << eMAXSCANATTEMPTS;
      R__b << eMAXFAILS;
      R__b << ePORT;
      eServer.Streamer(R__b);
      eRawDirServer.Streamer(R__b);
      eRawDirClient.Streamer(R__b);
      eProcTgtServer.Streamer(R__b);
      eProcPthServer.Streamer(R__b);
      eServerCreatedRunName.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbScanClientCommon(void *p) {
      delete (static_cast<::EdbScanClientCommon*>(p));
   }
   static void deleteArray_EdbScanClientCommon(void *p) {
      delete [] (static_cast<::EdbScanClientCommon*>(p));
   }
   static void destruct_EdbScanClientCommon(void *p) {
      typedef ::EdbScanClientCommon current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanClientCommon(TBuffer &buf, void *obj) {
      ((::EdbScanClientCommon*)obj)->::EdbScanClientCommon::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanClientCommon

//______________________________________________________________________________
void EdbScanClient::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanClient.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbScanClientBase::Streamer(R__b);
      R__b.StreamObject(&(m_implementation),typeid(m_implementation));
      R__b >> eServerCreatesRootFile;
      R__b.CheckByteCount(R__s, R__c, EdbScanClient::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanClient::IsA(), kTRUE);
      EdbScanClientBase::Streamer(R__b);
      R__b.StreamObject(&(m_implementation),typeid(m_implementation));
      R__b << eServerCreatesRootFile;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanClient(void *p) {
      return  p ? new(p) ::EdbScanClient : new ::EdbScanClient;
   }
   static void *newArray_EdbScanClient(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanClient[nElements] : new ::EdbScanClient[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanClient(void *p) {
      delete (static_cast<::EdbScanClient*>(p));
   }
   static void deleteArray_EdbScanClient(void *p) {
      delete [] (static_cast<::EdbScanClient*>(p));
   }
   static void destruct_EdbScanClient(void *p) {
      typedef ::EdbScanClient current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanClient(TBuffer &buf, void *obj) {
      ((::EdbScanClient*)obj)->::EdbScanClient::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanClient

//______________________________________________________________________________
void EdbScanProc::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanProc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      eProcDirClient.Streamer(R__b);
      eProcDirServer.Streamer(R__b);
      eParDir.Streamer(R__b);
      eServerCreatedRunName.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbScanProc::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanProc::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      eProcDirClient.Streamer(R__b);
      eProcDirServer.Streamer(R__b);
      eParDir.Streamer(R__b);
      eServerCreatedRunName.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanProc(void *p) {
      return  p ? new(p) ::EdbScanProc : new ::EdbScanProc;
   }
   static void *newArray_EdbScanProc(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanProc[nElements] : new ::EdbScanProc[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanProc(void *p) {
      delete (static_cast<::EdbScanProc*>(p));
   }
   static void deleteArray_EdbScanProc(void *p) {
      delete [] (static_cast<::EdbScanProc*>(p));
   }
   static void destruct_EdbScanProc(void *p) {
      typedef ::EdbScanProc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanProc(TBuffer &buf, void *obj) {
      ((::EdbScanProc*)obj)->::EdbScanProc::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanProc

//______________________________________________________________________________
void EdbProcPars::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbProcPars.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbProcPars::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbProcPars::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbProcPars(void *p) {
      return  p ? new(p) ::EdbProcPars : new ::EdbProcPars;
   }
   static void *newArray_EdbProcPars(Long_t nElements, void *p) {
      return p ? new(p) ::EdbProcPars[nElements] : new ::EdbProcPars[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbProcPars(void *p) {
      delete (static_cast<::EdbProcPars*>(p));
   }
   static void deleteArray_EdbProcPars(void *p) {
      delete [] (static_cast<::EdbProcPars*>(p));
   }
   static void destruct_EdbProcPars(void *p) {
      typedef ::EdbProcPars current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbProcPars(TBuffer &buf, void *obj) {
      ((::EdbProcPars*)obj)->::EdbProcPars::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbProcPars

//______________________________________________________________________________
void EdbTrackAssembler::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTrackAssembler.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eSegments.Streamer(R__b);
      eTracks.Streamer(R__b);
      eTrZ.Streamer(R__b);
      R__b >> eZ;
      eTrZMap.Streamer(R__b);
      R__b >> eMapMarg;
      R__b >> eCellN;
      eFitter.Streamer(R__b);
      R__b >> eDTmax;
      R__b >> eDRmax;
      R__b >> eDZGapMax;
      R__b >> eProbMin;
      R__b >> eDoUseMCS;
      R__b >> eCollisionsRate;
      eCond.Streamer(R__b);
      R__b >> eHistProbBest;
      R__b >> eHistProbAll;
      R__b >> eHistThetaBest;
      R__b >> eHistThetaAll;
      R__b >> eHistNcnd;
      R__b.CheckByteCount(R__s, R__c, EdbTrackAssembler::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTrackAssembler::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eSegments.Streamer(R__b);
      eTracks.Streamer(R__b);
      eTrZ.Streamer(R__b);
      R__b << eZ;
      eTrZMap.Streamer(R__b);
      R__b << eMapMarg;
      R__b << eCellN;
      eFitter.Streamer(R__b);
      R__b << eDTmax;
      R__b << eDRmax;
      R__b << eDZGapMax;
      R__b << eProbMin;
      R__b << eDoUseMCS;
      R__b << eCollisionsRate;
      eCond.Streamer(R__b);
      R__b << (TObject*)eHistProbBest;
      R__b << (TObject*)eHistProbAll;
      R__b << (TObject*)eHistThetaBest;
      R__b << (TObject*)eHistThetaAll;
      R__b << (TObject*)eHistNcnd;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTrackAssembler(void *p) {
      return  p ? new(p) ::EdbTrackAssembler : new ::EdbTrackAssembler;
   }
   static void *newArray_EdbTrackAssembler(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTrackAssembler[nElements] : new ::EdbTrackAssembler[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTrackAssembler(void *p) {
      delete (static_cast<::EdbTrackAssembler*>(p));
   }
   static void deleteArray_EdbTrackAssembler(void *p) {
      delete [] (static_cast<::EdbTrackAssembler*>(p));
   }
   static void destruct_EdbTrackAssembler(void *p) {
      typedef ::EdbTrackAssembler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrackAssembler(TBuffer &buf, void *obj) {
      ((::EdbTrackAssembler*)obj)->::EdbTrackAssembler::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTrackAssembler

//______________________________________________________________________________
void EdbScanTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanTracking.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eNsegMin;
      R__b >> eNgapMax;
      R__b >> eSproc;
      R__b >> eDoRealign;
      R__b.CheckByteCount(R__s, R__c, EdbScanTracking::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanTracking::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eNsegMin;
      R__b << eNgapMax;
      R__b << eSproc;
      R__b << eDoRealign;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanTracking(void *p) {
      return  p ? new(p) ::EdbScanTracking : new ::EdbScanTracking;
   }
   static void *newArray_EdbScanTracking(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanTracking[nElements] : new ::EdbScanTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanTracking(void *p) {
      delete (static_cast<::EdbScanTracking*>(p));
   }
   static void deleteArray_EdbScanTracking(void *p) {
      delete [] (static_cast<::EdbScanTracking*>(p));
   }
   static void destruct_EdbScanTracking(void *p) {
      typedef ::EdbScanTracking current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanTracking(TBuffer &buf, void *obj) {
      ((::EdbScanTracking*)obj)->::EdbScanTracking::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanTracking

//______________________________________________________________________________
void EdbScanClientPav::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanClientPav.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbScanClientCommon::Streamer(R__b);
      R__b.StreamObject(&(m_mm),typeid(m_mm));
      R__b.StreamObject(&(m_mr),typeid(m_mr));
      R__b >> m_insize;
      {
         vector<uint8> &R__stl =  m_inbuf;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            unsigned char R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      { TString R__str; R__str.Streamer(R__b); m_pathLib = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); m_pathName = R__str.Data(); }
      { TString R__str; R__str.Streamer(R__b); m_predPathName = R__str.Data(); }
      R__b >> m_scanningStarted;
      R__b >> m_createdTarget;
      R__b.CheckByteCount(R__s, R__c, EdbScanClientPav::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanClientPav::IsA(), kTRUE);
      EdbScanClientCommon::Streamer(R__b);
      R__b.StreamObject(&(m_mm),typeid(m_mm));
      R__b.StreamObject(&(m_mr),typeid(m_mr));
      R__b << m_insize;
      {
         vector<uint8> &R__stl =  m_inbuf;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<uint8>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      { TString R__str = m_pathLib.c_str(); R__str.Streamer(R__b);}
      { TString R__str = m_pathName.c_str(); R__str.Streamer(R__b);}
      { TString R__str = m_predPathName.c_str(); R__str.Streamer(R__b);}
      R__b << m_scanningStarted;
      R__b << m_createdTarget;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanClientPav(void *p) {
      return  p ? new(p) ::EdbScanClientPav : new ::EdbScanClientPav;
   }
   static void *newArray_EdbScanClientPav(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanClientPav[nElements] : new ::EdbScanClientPav[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanClientPav(void *p) {
      delete (static_cast<::EdbScanClientPav*>(p));
   }
   static void deleteArray_EdbScanClientPav(void *p) {
      delete [] (static_cast<::EdbScanClientPav*>(p));
   }
   static void destruct_EdbScanClientPav(void *p) {
      typedef ::EdbScanClientPav current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanClientPav(TBuffer &buf, void *obj) {
      ((::EdbScanClientPav*)obj)->::EdbScanClientPav::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanClientPav

//______________________________________________________________________________
void EdbScanClientSysal::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanClientSysal.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbScanClientCommon::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbScanClientSysal::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanClientSysal::IsA(), kTRUE);
      EdbScanClientCommon::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanClientSysal(void *p) {
      return  p ? new(p) ::EdbScanClientSysal : new ::EdbScanClientSysal;
   }
   static void *newArray_EdbScanClientSysal(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanClientSysal[nElements] : new ::EdbScanClientSysal[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanClientSysal(void *p) {
      delete (static_cast<::EdbScanClientSysal*>(p));
   }
   static void deleteArray_EdbScanClientSysal(void *p) {
      delete [] (static_cast<::EdbScanClientSysal*>(p));
   }
   static void destruct_EdbScanClientSysal(void *p) {
      typedef ::EdbScanClientSysal current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanClientSysal(TBuffer &buf, void *obj) {
      ((::EdbScanClientSysal*)obj)->::EdbScanClientSysal::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanClientSysal

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "vector", 423,
                  typeid(vector<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned char>","std::vector<unsigned char, std::allocator<unsigned char> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned char>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned char>*>(nullptr))->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete (static_cast<vector<unsigned char>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] (static_cast<vector<unsigned char>*>(p));
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

namespace {
  void TriggerDictionaryInitialization_ScanCint_Impl() {
    static const char* headers[] = {
"EdbScanClient.h",
"EdbScanProc.h",
"EdbProcPars.h",
"EdbScanTracking.h",
"EdbScanClientBase.h",
"EdbScanClientPav.h",
"EdbScanClientSysal.h",
"MessageManager.h",
"MessageReader.h",
"tinyxml.h",
"tinystr.h",
"tinyxmlerror.h",
"tinyxmlparser.h",
"PAVProtocol.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libScan/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ScanCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbScanClientBase.h")))  __attribute__((annotate("$clingAutoload$EdbScanClient.h")))  EdbScanClientBase;
class __attribute__((annotate("$clingAutoload$EdbScanClientBase.h")))  __attribute__((annotate("$clingAutoload$EdbScanClient.h")))  EdbScanClientCommon;
class __attribute__((annotate("$clingAutoload$EdbScanClient.h")))  EdbScanClient;
class __attribute__((annotate("$clingAutoload$EdbScanProc.h")))  EdbScanProc;
class __attribute__((annotate("$clingAutoload$EdbProcPars.h")))  EdbProcPars;
class __attribute__((annotate("$clingAutoload$EdbScanTracking.h")))  EdbTrackAssembler;
class __attribute__((annotate("$clingAutoload$EdbScanTracking.h")))  EdbScanTracking;
class __attribute__((annotate("$clingAutoload$EdbScanClientPav.h")))  EdbScanClientPav;
class __attribute__((annotate("$clingAutoload$EdbScanClientSysal.h")))  EdbScanClientSysal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ScanCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbScanClient.h"
#include "EdbScanProc.h"
#include "EdbProcPars.h"
#include "EdbScanTracking.h"
#include "EdbScanClientBase.h"
#include "EdbScanClientPav.h"
#include "EdbScanClientSysal.h"
#include "MessageManager.h"
#include "MessageReader.h"
#include "tinyxml.h"
#include "tinystr.h"
#include "tinyxmlerror.h"
#include "tinyxmlparser.h"
#include "PAVProtocol.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbProcPars", payloadCode, "@",
"EdbScanClient", payloadCode, "@",
"EdbScanClientBase", payloadCode, "@",
"EdbScanClientCommon", payloadCode, "@",
"EdbScanClientPav", payloadCode, "@",
"EdbScanClientSysal", payloadCode, "@",
"EdbScanProc", payloadCode, "@",
"EdbScanTracking", payloadCode, "@",
"EdbTrackAssembler", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ScanCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ScanCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ScanCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ScanCint() {
  TriggerDictionaryInitialization_ScanCint_Impl();
}
