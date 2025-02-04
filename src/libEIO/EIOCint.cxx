// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EIOCint
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
#include "EdbDataSet.h"
#include "EdbTraceBack.h"
#include "EdbRunAccess.h"
#include "EdbRunTracking.h"
#include "EdbRunParent.h"
#include "EdbViewMap.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbDataPiece(void *p = nullptr);
   static void *newArray_EdbDataPiece(Long_t size, void *p);
   static void delete_EdbDataPiece(void *p);
   static void deleteArray_EdbDataPiece(void *p);
   static void destruct_EdbDataPiece(void *p);
   static void streamer_EdbDataPiece(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDataPiece*)
   {
      ::EdbDataPiece *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDataPiece >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDataPiece", ::EdbDataPiece::Class_Version(), "EdbDataSet.h", 27,
                  typeid(::EdbDataPiece), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDataPiece::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDataPiece) );
      instance.SetNew(&new_EdbDataPiece);
      instance.SetNewArray(&newArray_EdbDataPiece);
      instance.SetDelete(&delete_EdbDataPiece);
      instance.SetDeleteArray(&deleteArray_EdbDataPiece);
      instance.SetDestructor(&destruct_EdbDataPiece);
      instance.SetStreamerFunc(&streamer_EdbDataPiece);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDataPiece*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDataPiece*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDataPiece*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDataSet(void *p = nullptr);
   static void *newArray_EdbDataSet(Long_t size, void *p);
   static void delete_EdbDataSet(void *p);
   static void deleteArray_EdbDataSet(void *p);
   static void destruct_EdbDataSet(void *p);
   static void streamer_EdbDataSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDataSet*)
   {
      ::EdbDataSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDataSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDataSet", ::EdbDataSet::Class_Version(), "EdbDataSet.h", 145,
                  typeid(::EdbDataSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDataSet::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDataSet) );
      instance.SetNew(&new_EdbDataSet);
      instance.SetNewArray(&newArray_EdbDataSet);
      instance.SetDelete(&delete_EdbDataSet);
      instance.SetDeleteArray(&deleteArray_EdbDataSet);
      instance.SetDestructor(&destruct_EdbDataSet);
      instance.SetStreamerFunc(&streamer_EdbDataSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDataSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDataSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDataSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDataProc(void *p = nullptr);
   static void *newArray_EdbDataProc(Long_t size, void *p);
   static void delete_EdbDataProc(void *p);
   static void deleteArray_EdbDataProc(void *p);
   static void destruct_EdbDataProc(void *p);
   static void streamer_EdbDataProc(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDataProc*)
   {
      ::EdbDataProc *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDataProc >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDataProc", ::EdbDataProc::Class_Version(), "EdbDataSet.h", 182,
                  typeid(::EdbDataProc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDataProc::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDataProc) );
      instance.SetNew(&new_EdbDataProc);
      instance.SetNewArray(&newArray_EdbDataProc);
      instance.SetDelete(&delete_EdbDataProc);
      instance.SetDeleteArray(&deleteArray_EdbDataProc);
      instance.SetDestructor(&destruct_EdbDataProc);
      instance.SetStreamerFunc(&streamer_EdbDataProc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDataProc*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDataProc*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDataProc*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTraceBack(void *p = nullptr);
   static void *newArray_EdbTraceBack(Long_t size, void *p);
   static void delete_EdbTraceBack(void *p);
   static void deleteArray_EdbTraceBack(void *p);
   static void destruct_EdbTraceBack(void *p);
   static void streamer_EdbTraceBack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTraceBack*)
   {
      ::EdbTraceBack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTraceBack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTraceBack", ::EdbTraceBack::Class_Version(), "EdbTraceBack.h", 15,
                  typeid(::EdbTraceBack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTraceBack::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTraceBack) );
      instance.SetNew(&new_EdbTraceBack);
      instance.SetNewArray(&newArray_EdbTraceBack);
      instance.SetDelete(&delete_EdbTraceBack);
      instance.SetDeleteArray(&deleteArray_EdbTraceBack);
      instance.SetDestructor(&destruct_EdbTraceBack);
      instance.SetStreamerFunc(&streamer_EdbTraceBack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTraceBack*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTraceBack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTraceBack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbRunAccess(void *p = nullptr);
   static void *newArray_EdbRunAccess(Long_t size, void *p);
   static void delete_EdbRunAccess(void *p);
   static void deleteArray_EdbRunAccess(void *p);
   static void destruct_EdbRunAccess(void *p);
   static void streamer_EdbRunAccess(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbRunAccess*)
   {
      ::EdbRunAccess *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbRunAccess >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbRunAccess", ::EdbRunAccess::Class_Version(), "EdbRunAccess.h", 22,
                  typeid(::EdbRunAccess), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbRunAccess::Dictionary, isa_proxy, 16,
                  sizeof(::EdbRunAccess) );
      instance.SetNew(&new_EdbRunAccess);
      instance.SetNewArray(&newArray_EdbRunAccess);
      instance.SetDelete(&delete_EdbRunAccess);
      instance.SetDeleteArray(&deleteArray_EdbRunAccess);
      instance.SetDestructor(&destruct_EdbRunAccess);
      instance.SetStreamerFunc(&streamer_EdbRunAccess);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbRunAccess*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbRunAccess*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbRunAccess*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbRunTracking(void *p = nullptr);
   static void *newArray_EdbRunTracking(Long_t size, void *p);
   static void delete_EdbRunTracking(void *p);
   static void deleteArray_EdbRunTracking(void *p);
   static void destruct_EdbRunTracking(void *p);
   static void streamer_EdbRunTracking(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbRunTracking*)
   {
      ::EdbRunTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbRunTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbRunTracking", ::EdbRunTracking::Class_Version(), "EdbRunTracking.h", 18,
                  typeid(::EdbRunTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbRunTracking::Dictionary, isa_proxy, 16,
                  sizeof(::EdbRunTracking) );
      instance.SetNew(&new_EdbRunTracking);
      instance.SetNewArray(&newArray_EdbRunTracking);
      instance.SetDelete(&delete_EdbRunTracking);
      instance.SetDeleteArray(&deleteArray_EdbRunTracking);
      instance.SetDestructor(&destruct_EdbRunTracking);
      instance.SetStreamerFunc(&streamer_EdbRunTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbRunTracking*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbRunTracking*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbRunTracking*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbRunParent(void *p = nullptr);
   static void *newArray_EdbRunParent(Long_t size, void *p);
   static void delete_EdbRunParent(void *p);
   static void deleteArray_EdbRunParent(void *p);
   static void destruct_EdbRunParent(void *p);
   static void streamer_EdbRunParent(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbRunParent*)
   {
      ::EdbRunParent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbRunParent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbRunParent", ::EdbRunParent::Class_Version(), "EdbRunParent.h", 13,
                  typeid(::EdbRunParent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbRunParent::Dictionary, isa_proxy, 16,
                  sizeof(::EdbRunParent) );
      instance.SetNew(&new_EdbRunParent);
      instance.SetNewArray(&newArray_EdbRunParent);
      instance.SetDelete(&delete_EdbRunParent);
      instance.SetDeleteArray(&deleteArray_EdbRunParent);
      instance.SetDestructor(&destruct_EdbRunParent);
      instance.SetStreamerFunc(&streamer_EdbRunParent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbRunParent*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbRunParent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbRunParent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewMap(void *p = nullptr);
   static void *newArray_EdbViewMap(Long_t size, void *p);
   static void delete_EdbViewMap(void *p);
   static void deleteArray_EdbViewMap(void *p);
   static void destruct_EdbViewMap(void *p);
   static void streamer_EdbViewMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewMap*)
   {
      ::EdbViewMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewMap", ::EdbViewMap::Class_Version(), "EdbViewMap.h", 70,
                  typeid(::EdbViewMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewMap::Dictionary, isa_proxy, 16,
                  sizeof(::EdbViewMap) );
      instance.SetNew(&new_EdbViewMap);
      instance.SetNewArray(&newArray_EdbViewMap);
      instance.SetDelete(&delete_EdbViewMap);
      instance.SetDeleteArray(&deleteArray_EdbViewMap);
      instance.SetDestructor(&destruct_EdbViewMap);
      instance.SetStreamerFunc(&streamer_EdbViewMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbDataPiece::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDataPiece::Class_Name()
{
   return "EdbDataPiece";
}

//______________________________________________________________________________
const char *EdbDataPiece::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataPiece*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDataPiece::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataPiece*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDataPiece::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataPiece*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDataPiece::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataPiece*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDataSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDataSet::Class_Name()
{
   return "EdbDataSet";
}

//______________________________________________________________________________
const char *EdbDataSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDataSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDataSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDataSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDataProc::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDataProc::Class_Name()
{
   return "EdbDataProc";
}

//______________________________________________________________________________
const char *EdbDataProc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataProc*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDataProc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataProc*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDataProc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataProc*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDataProc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataProc*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTraceBack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTraceBack::Class_Name()
{
   return "EdbTraceBack";
}

//______________________________________________________________________________
const char *EdbTraceBack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTraceBack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTraceBack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTraceBack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTraceBack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTraceBack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTraceBack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTraceBack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbRunAccess::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbRunAccess::Class_Name()
{
   return "EdbRunAccess";
}

//______________________________________________________________________________
const char *EdbRunAccess::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunAccess*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbRunAccess::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunAccess*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbRunAccess::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunAccess*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbRunAccess::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunAccess*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbRunTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbRunTracking::Class_Name()
{
   return "EdbRunTracking";
}

//______________________________________________________________________________
const char *EdbRunTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbRunTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbRunTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbRunTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbRunParent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbRunParent::Class_Name()
{
   return "EdbRunParent";
}

//______________________________________________________________________________
const char *EdbRunParent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunParent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbRunParent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunParent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbRunParent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunParent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbRunParent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunParent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewMap::Class_Name()
{
   return "EdbViewMap";
}

//______________________________________________________________________________
const char *EdbViewMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbDataPiece::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDataPiece.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> eAFID;
      R__b >> eCLUST;
      R__b >> ePlate;
      R__b >> ePiece;
      R__b >> eFlag;
      eRunFiles.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eLayers[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eCond[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eAreas[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eCuts[R__i];
      R__b.ReadStaticArray((float*)eCutCP);
      R__b >> eCutGR;
      R__b >> eOUTPUT;
      eFileNameCP.Streamer(R__b);
      eFileNamePar.Streamer(R__b);
      R__b >> eCouplesInd;
      R__b >> eEraseMask;
      R__b.CheckByteCount(R__s, R__c, EdbDataPiece::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDataPiece::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << eAFID;
      R__b << eCLUST;
      R__b << ePlate;
      R__b << ePiece;
      R__b << eFlag;
      eRunFiles.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eLayers[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eCond[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eAreas[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eCuts[R__i];
      R__b.WriteArray(eCutCP, 6);
      R__b << eCutGR;
      R__b << eOUTPUT;
      eFileNameCP.Streamer(R__b);
      eFileNamePar.Streamer(R__b);
      R__b << eCouplesInd;
      R__b << eEraseMask;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDataPiece(void *p) {
      return  p ? new(p) ::EdbDataPiece : new ::EdbDataPiece;
   }
   static void *newArray_EdbDataPiece(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDataPiece[nElements] : new ::EdbDataPiece[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDataPiece(void *p) {
      delete (static_cast<::EdbDataPiece*>(p));
   }
   static void deleteArray_EdbDataPiece(void *p) {
      delete [] (static_cast<::EdbDataPiece*>(p));
   }
   static void destruct_EdbDataPiece(void *p) {
      typedef ::EdbDataPiece current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDataPiece(TBuffer &buf, void *obj) {
      ((::EdbDataPiece*)obj)->::EdbDataPiece::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDataPiece

//______________________________________________________________________________
void EdbDataSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDataSet.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      eInputList.Streamer(R__b);
      eAnaDir.Streamer(R__b);
      eParDir.Streamer(R__b);
      eDBFileName.Streamer(R__b);
      R__b >> eDBFile;
      ePieces.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbDataSet::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDataSet::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      eInputList.Streamer(R__b);
      eAnaDir.Streamer(R__b);
      eParDir.Streamer(R__b);
      eDBFileName.Streamer(R__b);
      R__b << eDBFile;
      ePieces.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDataSet(void *p) {
      return  p ? new(p) ::EdbDataSet : new ::EdbDataSet;
   }
   static void *newArray_EdbDataSet(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDataSet[nElements] : new ::EdbDataSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDataSet(void *p) {
      delete (static_cast<::EdbDataSet*>(p));
   }
   static void deleteArray_EdbDataSet(void *p) {
      delete [] (static_cast<::EdbDataSet*>(p));
   }
   static void destruct_EdbDataSet(void *p) {
      typedef ::EdbDataSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDataSet(TBuffer &buf, void *obj) {
      ((::EdbDataSet*)obj)->::EdbDataSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDataSet

//______________________________________________________________________________
void EdbDataProc::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDataProc.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eDataSet;
      R__b >> ePVR;
      R__b >> eNoUpdate;
      R__b.CheckByteCount(R__s, R__c, EdbDataProc::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDataProc::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eDataSet;
      R__b << ePVR;
      R__b << eNoUpdate;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDataProc(void *p) {
      return  p ? new(p) ::EdbDataProc : new ::EdbDataProc;
   }
   static void *newArray_EdbDataProc(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDataProc[nElements] : new ::EdbDataProc[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDataProc(void *p) {
      delete (static_cast<::EdbDataProc*>(p));
   }
   static void deleteArray_EdbDataProc(void *p) {
      delete [] (static_cast<::EdbDataProc*>(p));
   }
   static void destruct_EdbDataProc(void *p) {
      typedef ::EdbDataProc current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDataProc(TBuffer &buf, void *obj) {
      ((::EdbDataProc*)obj)->::EdbDataProc::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDataProc

//______________________________________________________________________________
void EdbTraceBack::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTraceBack.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbTraceBack::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTraceBack::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTraceBack(void *p) {
      return  p ? new(p) ::EdbTraceBack : new ::EdbTraceBack;
   }
   static void *newArray_EdbTraceBack(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTraceBack[nElements] : new ::EdbTraceBack[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTraceBack(void *p) {
      delete (static_cast<::EdbTraceBack*>(p));
   }
   static void deleteArray_EdbTraceBack(void *p) {
      delete [] (static_cast<::EdbTraceBack*>(p));
   }
   static void destruct_EdbTraceBack(void *p) {
      typedef ::EdbTraceBack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTraceBack(TBuffer &buf, void *obj) {
      ((::EdbTraceBack*)obj)->::EdbTraceBack::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTraceBack

//______________________________________________________________________________
void EdbRunAccess::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbRunAccess.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eAFID;
      R__b >> eCLUST;
      R__b >> eUseExternalSurface;
      R__b >> eDoViewAnalysis;
      int R__i;
      for (R__i = 0; R__i < 3; R__i++)
         eHViewXY[R__i].Streamer(R__b);
      R__b >> eInvertSides;
      R__b >> eWeightAlg;
      R__b >> eUseDensityAsW;
      R__b >> eDoPixelCorr;
      R__b >> ePixelCorrX;
      R__b >> ePixelCorrY;
      eHeaderCut.Streamer(R__b);
      R__b >> eTracking;
      eRunFileName.Streamer(R__b);
      R__b >> eRun;
      R__b >> eAffStage2Abs;
      R__b >> eFirstArea;
      R__b >> eLastArea;
      R__b >> eNareas;
      R__b >> eNviewsPerArea;
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eLayers[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eCond[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eCuts[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> eVP[R__i];
      R__b >> eCutGR;
      R__b >> eXmin;
      R__b >> eXmax;
      R__b >> eYmin;
      R__b >> eYmax;
      R__b.ReadStaticArray((float*)eXstep);
      R__b.ReadStaticArray((float*)eYstep);
      R__b.ReadStaticArray((float*)eViewXmin);
      R__b.ReadStaticArray((float*)eViewXmax);
      R__b.ReadStaticArray((float*)eViewYmin);
      R__b.ReadStaticArray((float*)eViewYmax);
      R__b.CheckByteCount(R__s, R__c, EdbRunAccess::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbRunAccess::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eAFID;
      R__b << eCLUST;
      R__b << eUseExternalSurface;
      R__b << eDoViewAnalysis;
      int R__i;
      for (R__i = 0; R__i < 3; R__i++)
         eHViewXY[R__i].Streamer(R__b);
      R__b << eInvertSides;
      R__b << eWeightAlg;
      R__b << eUseDensityAsW;
      R__b << eDoPixelCorr;
      R__b << ePixelCorrX;
      R__b << ePixelCorrY;
      eHeaderCut.Streamer(R__b);
      R__b << eTracking;
      eRunFileName.Streamer(R__b);
      R__b << eRun;
      R__b << eAffStage2Abs;
      R__b << eFirstArea;
      R__b << eLastArea;
      R__b << eNareas;
      R__b << eNviewsPerArea;
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eLayers[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eCond[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eCuts[R__i];
      for (R__i = 0; R__i < 3; R__i++)
         R__b << eVP[R__i];
      R__b << eCutGR;
      R__b << eXmin;
      R__b << eXmax;
      R__b << eYmin;
      R__b << eYmax;
      R__b.WriteArray(eXstep, 3);
      R__b.WriteArray(eYstep, 3);
      R__b.WriteArray(eViewXmin, 3);
      R__b.WriteArray(eViewXmax, 3);
      R__b.WriteArray(eViewYmin, 3);
      R__b.WriteArray(eViewYmax, 3);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbRunAccess(void *p) {
      return  p ? new(p) ::EdbRunAccess : new ::EdbRunAccess;
   }
   static void *newArray_EdbRunAccess(Long_t nElements, void *p) {
      return p ? new(p) ::EdbRunAccess[nElements] : new ::EdbRunAccess[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbRunAccess(void *p) {
      delete (static_cast<::EdbRunAccess*>(p));
   }
   static void deleteArray_EdbRunAccess(void *p) {
      delete [] (static_cast<::EdbRunAccess*>(p));
   }
   static void destruct_EdbRunAccess(void *p) {
      typedef ::EdbRunAccess current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbRunAccess(TBuffer &buf, void *obj) {
      ((::EdbRunAccess*)obj)->::EdbRunAccess::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbRunAccess

//______________________________________________________________________________
void EdbRunTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbRunTracking.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbRunAccess::Streamer(R__b);
      eCondMT.Streamer(R__b);
      eCondBT.Streamer(R__b);
      R__b >> eDeltaRview;
      R__b >> eDeltaTheta;
      R__b >> ePreliminaryPulsMinMT;
      R__b >> ePreliminaryChi2MaxMT;
      eS1pre.Streamer(R__b);
      eS2pre.Streamer(R__b);
      R__b >> eDeltaR;
      eSpre.Streamer(R__b);
      R__b >> ePulsMinBT;
      R__b >> ePulsMinDegradMT;
      R__b >> eChi2MaxBT;
      eScnd.Streamer(R__b);
      R__b >> ePulsMinMT;
      R__b >> ePulsMinDegradBT;
      R__b >> eChi2MaxMT;
      eS1cnd.Streamer(R__b);
      eS2cnd.Streamer(R__b);
      ePred.Streamer(R__b);
      eS.Streamer(R__b);
      eS1.Streamer(R__b);
      eS2.Streamer(R__b);
      eNext.Streamer(R__b);
      R__b >> eStatus;
      R__b >> eDegradPos;
      R__b >> eDegradSlope;
      R__b.ReadStaticArray((int*)eIdp);
      R__b.ReadStaticArray((int*)eIdf);
      R__b >> ePredictionScan;
      R__b.CheckByteCount(R__s, R__c, EdbRunTracking::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbRunTracking::IsA(), kTRUE);
      EdbRunAccess::Streamer(R__b);
      eCondMT.Streamer(R__b);
      eCondBT.Streamer(R__b);
      R__b << eDeltaRview;
      R__b << eDeltaTheta;
      R__b << ePreliminaryPulsMinMT;
      R__b << ePreliminaryChi2MaxMT;
      eS1pre.Streamer(R__b);
      eS2pre.Streamer(R__b);
      R__b << eDeltaR;
      eSpre.Streamer(R__b);
      R__b << ePulsMinBT;
      R__b << ePulsMinDegradMT;
      R__b << eChi2MaxBT;
      eScnd.Streamer(R__b);
      R__b << ePulsMinMT;
      R__b << ePulsMinDegradBT;
      R__b << eChi2MaxMT;
      eS1cnd.Streamer(R__b);
      eS2cnd.Streamer(R__b);
      ePred.Streamer(R__b);
      eS.Streamer(R__b);
      eS1.Streamer(R__b);
      eS2.Streamer(R__b);
      eNext.Streamer(R__b);
      R__b << eStatus;
      R__b << eDegradPos;
      R__b << eDegradSlope;
      R__b.WriteArray(eIdp, 4);
      R__b.WriteArray(eIdf, 4);
      R__b << ePredictionScan;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbRunTracking(void *p) {
      return  p ? new(p) ::EdbRunTracking : new ::EdbRunTracking;
   }
   static void *newArray_EdbRunTracking(Long_t nElements, void *p) {
      return p ? new(p) ::EdbRunTracking[nElements] : new ::EdbRunTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbRunTracking(void *p) {
      delete (static_cast<::EdbRunTracking*>(p));
   }
   static void deleteArray_EdbRunTracking(void *p) {
      delete [] (static_cast<::EdbRunTracking*>(p));
   }
   static void destruct_EdbRunTracking(void *p) {
      typedef ::EdbRunTracking current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbRunTracking(TBuffer &buf, void *obj) {
      ((::EdbRunTracking*)obj)->::EdbRunTracking::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbRunTracking

//______________________________________________________________________________
void EdbRunParent::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbRunParent.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbRunTracking::Streamer(R__b);
      R__b >> eIPmax;
      R__b.CheckByteCount(R__s, R__c, EdbRunParent::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbRunParent::IsA(), kTRUE);
      EdbRunTracking::Streamer(R__b);
      R__b << eIPmax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbRunParent(void *p) {
      return  p ? new(p) ::EdbRunParent : new ::EdbRunParent;
   }
   static void *newArray_EdbRunParent(Long_t nElements, void *p) {
      return p ? new(p) ::EdbRunParent[nElements] : new ::EdbRunParent[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbRunParent(void *p) {
      delete (static_cast<::EdbRunParent*>(p));
   }
   static void deleteArray_EdbRunParent(void *p) {
      delete [] (static_cast<::EdbRunParent*>(p));
   }
   static void destruct_EdbRunParent(void *p) {
      typedef ::EdbRunParent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbRunParent(TBuffer &buf, void *obj) {
      ((::EdbRunParent*)obj)->::EdbRunParent::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbRunParent

//______________________________________________________________________________
void EdbViewMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbViewMap.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eNcp;
      R__b >> eNvh;
      eViewHeaders.Streamer(R__b);
      R__b >> eNpvh;
      ePinViewHeaders.Streamer(R__b);
      R__b.StreamObject(&(eAR),typeid(eAR));
      R__b >> eAHT;
      R__b >> eAlgorithm;
      R__b >> ePinPointID;
      R__b >> eHX0odd;
      R__b >> eHX0even;
      R__b >> eHY0odd;
      R__b >> eHY0even;
      R__b >> eHX1odd;
      R__b >> eHX1even;
      R__b >> eHY1odd;
      R__b >> eHY1even;
      R__b.CheckByteCount(R__s, R__c, EdbViewMap::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbViewMap::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eNcp;
      R__b << eNvh;
      eViewHeaders.Streamer(R__b);
      R__b << eNpvh;
      ePinViewHeaders.Streamer(R__b);
      R__b.StreamObject(&(eAR),typeid(eAR));
      R__b << eAHT;
      R__b << eAlgorithm;
      R__b << ePinPointID;
      R__b << (TObject*)eHX0odd;
      R__b << (TObject*)eHX0even;
      R__b << (TObject*)eHY0odd;
      R__b << (TObject*)eHY0even;
      R__b << (TObject*)eHX1odd;
      R__b << (TObject*)eHX1even;
      R__b << (TObject*)eHY1odd;
      R__b << (TObject*)eHY1even;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewMap(void *p) {
      return  p ? new(p) ::EdbViewMap : new ::EdbViewMap;
   }
   static void *newArray_EdbViewMap(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewMap[nElements] : new ::EdbViewMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewMap(void *p) {
      delete (static_cast<::EdbViewMap*>(p));
   }
   static void deleteArray_EdbViewMap(void *p) {
      delete [] (static_cast<::EdbViewMap*>(p));
   }
   static void destruct_EdbViewMap(void *p) {
      typedef ::EdbViewMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewMap(TBuffer &buf, void *obj) {
      ((::EdbViewMap*)obj)->::EdbViewMap::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewMap

namespace {
  void TriggerDictionaryInitialization_EIOCint_Impl() {
    static const char* headers[] = {
"EdbDataSet.h",
"EdbTraceBack.h",
"EdbRunAccess.h",
"EdbRunTracking.h",
"EdbRunParent.h",
"EdbViewMap.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEIO/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EIOCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbDataSet.h")))  EdbDataPiece;
class __attribute__((annotate("$clingAutoload$EdbDataSet.h")))  EdbDataSet;
class __attribute__((annotate("$clingAutoload$EdbDataSet.h")))  EdbDataProc;
class __attribute__((annotate("$clingAutoload$EdbTraceBack.h")))  EdbTraceBack;
class __attribute__((annotate("$clingAutoload$EdbRunAccess.h")))  EdbRunAccess;
class __attribute__((annotate("$clingAutoload$EdbRunTracking.h")))  EdbRunTracking;
class __attribute__((annotate("$clingAutoload$EdbRunParent.h")))  EdbRunParent;
class __attribute__((annotate("$clingAutoload$EdbViewMap.h")))  EdbViewMap;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EIOCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbDataSet.h"
#include "EdbTraceBack.h"
#include "EdbRunAccess.h"
#include "EdbRunTracking.h"
#include "EdbRunParent.h"
#include "EdbViewMap.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbDataPiece", payloadCode, "@",
"EdbDataProc", payloadCode, "@",
"EdbDataSet", payloadCode, "@",
"EdbRunAccess", payloadCode, "@",
"EdbRunParent", payloadCode, "@",
"EdbRunTracking", payloadCode, "@",
"EdbTraceBack", payloadCode, "@",
"EdbViewMap", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EIOCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EIOCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EIOCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EIOCint() {
  TriggerDictionaryInitialization_EIOCint_Impl();
}
