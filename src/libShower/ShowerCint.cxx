// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ShowerCint
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
#include "EdbShowerRec.h"
#include "EdbShowerAlg.h"
#include "EdbPVRQuality.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbShowerRec(void *p = nullptr);
   static void *newArray_EdbShowerRec(Long_t size, void *p);
   static void delete_EdbShowerRec(void *p);
   static void deleteArray_EdbShowerRec(void *p);
   static void destruct_EdbShowerRec(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerRec*)
   {
      ::EdbShowerRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerRec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerRec", ::EdbShowerRec::Class_Version(), "EdbShowerRec.h", 24,
                  typeid(::EdbShowerRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerRec::Dictionary, isa_proxy, 4,
                  sizeof(::EdbShowerRec) );
      instance.SetNew(&new_EdbShowerRec);
      instance.SetNewArray(&newArray_EdbShowerRec);
      instance.SetDelete(&delete_EdbShowerRec);
      instance.SetDeleteArray(&deleteArray_EdbShowerRec);
      instance.SetDestructor(&destruct_EdbShowerRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerAlg(void *p = nullptr);
   static void *newArray_EdbShowerAlg(Long_t size, void *p);
   static void delete_EdbShowerAlg(void *p);
   static void deleteArray_EdbShowerAlg(void *p);
   static void destruct_EdbShowerAlg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerAlg*)
   {
      ::EdbShowerAlg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerAlg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerAlg", ::EdbShowerAlg::Class_Version(), "EdbShowerAlg.h", 30,
                  typeid(::EdbShowerAlg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerAlg::Dictionary, isa_proxy, 4,
                  sizeof(::EdbShowerAlg) );
      instance.SetNew(&new_EdbShowerAlg);
      instance.SetNewArray(&newArray_EdbShowerAlg);
      instance.SetDelete(&delete_EdbShowerAlg);
      instance.SetDeleteArray(&deleteArray_EdbShowerAlg);
      instance.SetDestructor(&destruct_EdbShowerAlg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerAlg*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerAlg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerAlg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerAlg_GS(void *p = nullptr);
   static void *newArray_EdbShowerAlg_GS(Long_t size, void *p);
   static void delete_EdbShowerAlg_GS(void *p);
   static void deleteArray_EdbShowerAlg_GS(void *p);
   static void destruct_EdbShowerAlg_GS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerAlg_GS*)
   {
      ::EdbShowerAlg_GS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerAlg_GS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerAlg_GS", ::EdbShowerAlg_GS::Class_Version(), "EdbShowerAlg.h", 191,
                  typeid(::EdbShowerAlg_GS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerAlg_GS::Dictionary, isa_proxy, 4,
                  sizeof(::EdbShowerAlg_GS) );
      instance.SetNew(&new_EdbShowerAlg_GS);
      instance.SetNewArray(&newArray_EdbShowerAlg_GS);
      instance.SetDelete(&delete_EdbShowerAlg_GS);
      instance.SetDeleteArray(&deleteArray_EdbShowerAlg_GS);
      instance.SetDestructor(&destruct_EdbShowerAlg_GS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerAlg_GS*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerAlg_GS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerAlg_GS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerAlgESimple(void *p = nullptr);
   static void *newArray_EdbShowerAlgESimple(Long_t size, void *p);
   static void delete_EdbShowerAlgESimple(void *p);
   static void deleteArray_EdbShowerAlgESimple(void *p);
   static void destruct_EdbShowerAlgESimple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerAlgESimple*)
   {
      ::EdbShowerAlgESimple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerAlgESimple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerAlgESimple", ::EdbShowerAlgESimple::Class_Version(), "EdbShowerAlg.h", 323,
                  typeid(::EdbShowerAlgESimple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerAlgESimple::Dictionary, isa_proxy, 4,
                  sizeof(::EdbShowerAlgESimple) );
      instance.SetNew(&new_EdbShowerAlgESimple);
      instance.SetNewArray(&newArray_EdbShowerAlgESimple);
      instance.SetDelete(&delete_EdbShowerAlgESimple);
      instance.SetDeleteArray(&deleteArray_EdbShowerAlgESimple);
      instance.SetDestructor(&destruct_EdbShowerAlgESimple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerAlgESimple*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerAlgESimple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerAlgESimple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerAlgIDSimple(void *p = nullptr);
   static void *newArray_EdbShowerAlgIDSimple(Long_t size, void *p);
   static void delete_EdbShowerAlgIDSimple(void *p);
   static void deleteArray_EdbShowerAlgIDSimple(void *p);
   static void destruct_EdbShowerAlgIDSimple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerAlgIDSimple*)
   {
      ::EdbShowerAlgIDSimple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerAlgIDSimple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerAlgIDSimple", ::EdbShowerAlgIDSimple::Class_Version(), "EdbShowerAlg.h", 596,
                  typeid(::EdbShowerAlgIDSimple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerAlgIDSimple::Dictionary, isa_proxy, 4,
                  sizeof(::EdbShowerAlgIDSimple) );
      instance.SetNew(&new_EdbShowerAlgIDSimple);
      instance.SetNewArray(&newArray_EdbShowerAlgIDSimple);
      instance.SetDelete(&delete_EdbShowerAlgIDSimple);
      instance.SetDeleteArray(&deleteArray_EdbShowerAlgIDSimple);
      instance.SetDestructor(&destruct_EdbShowerAlgIDSimple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerAlgIDSimple*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerAlgIDSimple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerAlgIDSimple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPVRQuality(void *p = nullptr);
   static void *newArray_EdbPVRQuality(Long_t size, void *p);
   static void delete_EdbPVRQuality(void *p);
   static void deleteArray_EdbPVRQuality(void *p);
   static void destruct_EdbPVRQuality(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPVRQuality*)
   {
      ::EdbPVRQuality *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPVRQuality >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPVRQuality", ::EdbPVRQuality::Class_Version(), "EdbPVRQuality.h", 38,
                  typeid(::EdbPVRQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPVRQuality::Dictionary, isa_proxy, 4,
                  sizeof(::EdbPVRQuality) );
      instance.SetNew(&new_EdbPVRQuality);
      instance.SetNewArray(&newArray_EdbPVRQuality);
      instance.SetDelete(&delete_EdbPVRQuality);
      instance.SetDeleteArray(&deleteArray_EdbPVRQuality);
      instance.SetDestructor(&destruct_EdbPVRQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPVRQuality*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPVRQuality*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPVRQuality*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerRec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerRec::Class_Name()
{
   return "EdbShowerRec";
}

//______________________________________________________________________________
const char *EdbShowerRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerRec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerRec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerRec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerRec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerAlg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerAlg::Class_Name()
{
   return "EdbShowerAlg";
}

//______________________________________________________________________________
const char *EdbShowerAlg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerAlg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerAlg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerAlg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerAlg_GS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerAlg_GS::Class_Name()
{
   return "EdbShowerAlg_GS";
}

//______________________________________________________________________________
const char *EdbShowerAlg_GS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg_GS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerAlg_GS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg_GS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerAlg_GS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg_GS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerAlg_GS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlg_GS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerAlgESimple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerAlgESimple::Class_Name()
{
   return "EdbShowerAlgESimple";
}

//______________________________________________________________________________
const char *EdbShowerAlgESimple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgESimple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerAlgESimple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgESimple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerAlgESimple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgESimple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerAlgESimple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgESimple*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerAlgIDSimple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerAlgIDSimple::Class_Name()
{
   return "EdbShowerAlgIDSimple";
}

//______________________________________________________________________________
const char *EdbShowerAlgIDSimple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgIDSimple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerAlgIDSimple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgIDSimple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerAlgIDSimple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgIDSimple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerAlgIDSimple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerAlgIDSimple*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPVRQuality::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPVRQuality::Class_Name()
{
   return "EdbPVRQuality";
}

//______________________________________________________________________________
const char *EdbPVRQuality::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRQuality*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPVRQuality::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRQuality*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPVRQuality::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRQuality*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPVRQuality::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRQuality*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbShowerRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerRec.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbShowerRec::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbShowerRec::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerRec(void *p) {
      return  p ? new(p) ::EdbShowerRec : new ::EdbShowerRec;
   }
   static void *newArray_EdbShowerRec(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerRec[nElements] : new ::EdbShowerRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerRec(void *p) {
      delete (static_cast<::EdbShowerRec*>(p));
   }
   static void deleteArray_EdbShowerRec(void *p) {
      delete [] (static_cast<::EdbShowerRec*>(p));
   }
   static void destruct_EdbShowerRec(void *p) {
      typedef ::EdbShowerRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbShowerRec

//______________________________________________________________________________
void EdbShowerAlg::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerAlg.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbShowerAlg::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbShowerAlg::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerAlg(void *p) {
      return  p ? new(p) ::EdbShowerAlg : new ::EdbShowerAlg;
   }
   static void *newArray_EdbShowerAlg(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerAlg[nElements] : new ::EdbShowerAlg[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerAlg(void *p) {
      delete (static_cast<::EdbShowerAlg*>(p));
   }
   static void deleteArray_EdbShowerAlg(void *p) {
      delete [] (static_cast<::EdbShowerAlg*>(p));
   }
   static void destruct_EdbShowerAlg(void *p) {
      typedef ::EdbShowerAlg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbShowerAlg

//______________________________________________________________________________
void EdbShowerAlg_GS::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerAlg_GS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbShowerAlg_GS::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbShowerAlg_GS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerAlg_GS(void *p) {
      return  p ? new(p) ::EdbShowerAlg_GS : new ::EdbShowerAlg_GS;
   }
   static void *newArray_EdbShowerAlg_GS(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerAlg_GS[nElements] : new ::EdbShowerAlg_GS[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerAlg_GS(void *p) {
      delete (static_cast<::EdbShowerAlg_GS*>(p));
   }
   static void deleteArray_EdbShowerAlg_GS(void *p) {
      delete [] (static_cast<::EdbShowerAlg_GS*>(p));
   }
   static void destruct_EdbShowerAlg_GS(void *p) {
      typedef ::EdbShowerAlg_GS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbShowerAlg_GS

//______________________________________________________________________________
void EdbShowerAlgESimple::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerAlgESimple.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbShowerAlgESimple::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbShowerAlgESimple::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerAlgESimple(void *p) {
      return  p ? new(p) ::EdbShowerAlgESimple : new ::EdbShowerAlgESimple;
   }
   static void *newArray_EdbShowerAlgESimple(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerAlgESimple[nElements] : new ::EdbShowerAlgESimple[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerAlgESimple(void *p) {
      delete (static_cast<::EdbShowerAlgESimple*>(p));
   }
   static void deleteArray_EdbShowerAlgESimple(void *p) {
      delete [] (static_cast<::EdbShowerAlgESimple*>(p));
   }
   static void destruct_EdbShowerAlgESimple(void *p) {
      typedef ::EdbShowerAlgESimple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbShowerAlgESimple

//______________________________________________________________________________
void EdbShowerAlgIDSimple::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerAlgIDSimple.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbShowerAlgIDSimple::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbShowerAlgIDSimple::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerAlgIDSimple(void *p) {
      return  p ? new(p) ::EdbShowerAlgIDSimple : new ::EdbShowerAlgIDSimple;
   }
   static void *newArray_EdbShowerAlgIDSimple(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerAlgIDSimple[nElements] : new ::EdbShowerAlgIDSimple[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerAlgIDSimple(void *p) {
      delete (static_cast<::EdbShowerAlgIDSimple*>(p));
   }
   static void deleteArray_EdbShowerAlgIDSimple(void *p) {
      delete [] (static_cast<::EdbShowerAlgIDSimple*>(p));
   }
   static void destruct_EdbShowerAlgIDSimple(void *p) {
      typedef ::EdbShowerAlgIDSimple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbShowerAlgIDSimple

//______________________________________________________________________________
void EdbPVRQuality::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPVRQuality.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbPVRQuality::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbPVRQuality::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPVRQuality(void *p) {
      return  p ? new(p) ::EdbPVRQuality : new ::EdbPVRQuality;
   }
   static void *newArray_EdbPVRQuality(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPVRQuality[nElements] : new ::EdbPVRQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPVRQuality(void *p) {
      delete (static_cast<::EdbPVRQuality*>(p));
   }
   static void deleteArray_EdbPVRQuality(void *p) {
      delete [] (static_cast<::EdbPVRQuality*>(p));
   }
   static void destruct_EdbPVRQuality(void *p) {
      typedef ::EdbPVRQuality current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbPVRQuality

namespace {
  void TriggerDictionaryInitialization_ShowerCint_Impl() {
    static const char* headers[] = {
"EdbShowerRec.h",
"EdbShowerAlg.h",
"EdbPVRQuality.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libShower/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ShowerCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbShowerRec.h")))  EdbShowerRec;
class __attribute__((annotate("$clingAutoload$EdbShowerAlg.h")))  EdbShowerAlg;
class __attribute__((annotate("$clingAutoload$EdbShowerAlg.h")))  EdbShowerAlg_GS;
class __attribute__((annotate("$clingAutoload$EdbShowerAlg.h")))  EdbShowerAlgESimple;
class __attribute__((annotate("$clingAutoload$EdbShowerAlg.h")))  EdbShowerAlgIDSimple;
class __attribute__((annotate("$clingAutoload$EdbPVRQuality.h")))  EdbPVRQuality;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ShowerCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbShowerRec.h"
#include "EdbShowerAlg.h"
#include "EdbPVRQuality.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbPVRQuality", payloadCode, "@",
"EdbShowerAlg", payloadCode, "@",
"EdbShowerAlgESimple", payloadCode, "@",
"EdbShowerAlgIDSimple", payloadCode, "@",
"EdbShowerAlg_GS", payloadCode, "@",
"EdbShowerRec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ShowerCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ShowerCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ShowerCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ShowerCint() {
  TriggerDictionaryInitialization_ShowerCint_Impl();
}
