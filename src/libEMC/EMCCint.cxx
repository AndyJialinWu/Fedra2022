// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EMCCint
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
#include "EdbPVGen.h"
#include "EdbBrickGen.h"
#include "EdbViewDef.h"
#include "EdbViewGen.h"
#include "EdbViewRec.h"
#include "EdbViewMatch.h"
#include "EdbDataStore.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbPVGen(void *p = nullptr);
   static void *newArray_EdbPVGen(Long_t size, void *p);
   static void delete_EdbPVGen(void *p);
   static void deleteArray_EdbPVGen(void *p);
   static void destruct_EdbPVGen(void *p);
   static void streamer_EdbPVGen(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPVGen*)
   {
      ::EdbPVGen *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPVGen >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPVGen", ::EdbPVGen::Class_Version(), "EdbPVGen.h", 18,
                  typeid(::EdbPVGen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPVGen::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPVGen) );
      instance.SetNew(&new_EdbPVGen);
      instance.SetNewArray(&newArray_EdbPVGen);
      instance.SetDelete(&delete_EdbPVGen);
      instance.SetDeleteArray(&deleteArray_EdbPVGen);
      instance.SetDestructor(&destruct_EdbPVGen);
      instance.SetStreamerFunc(&streamer_EdbPVGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPVGen*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPVGen*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPVGen*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbBeamGen(void *p = nullptr);
   static void *newArray_EdbBeamGen(Long_t size, void *p);
   static void delete_EdbBeamGen(void *p);
   static void deleteArray_EdbBeamGen(void *p);
   static void destruct_EdbBeamGen(void *p);
   static void streamer_EdbBeamGen(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbBeamGen*)
   {
      ::EdbBeamGen *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbBeamGen >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbBeamGen", ::EdbBeamGen::Class_Version(), "EdbBrickGen.h", 14,
                  typeid(::EdbBeamGen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbBeamGen::Dictionary, isa_proxy, 16,
                  sizeof(::EdbBeamGen) );
      instance.SetNew(&new_EdbBeamGen);
      instance.SetNewArray(&newArray_EdbBeamGen);
      instance.SetDelete(&delete_EdbBeamGen);
      instance.SetDeleteArray(&deleteArray_EdbBeamGen);
      instance.SetDestructor(&destruct_EdbBeamGen);
      instance.SetStreamerFunc(&streamer_EdbBeamGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbBeamGen*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbBeamGen*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbBeamGen*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbBrickGen(void *p = nullptr);
   static void *newArray_EdbBrickGen(Long_t size, void *p);
   static void delete_EdbBrickGen(void *p);
   static void deleteArray_EdbBrickGen(void *p);
   static void destruct_EdbBrickGen(void *p);
   static void streamer_EdbBrickGen(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbBrickGen*)
   {
      ::EdbBrickGen *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbBrickGen >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbBrickGen", ::EdbBrickGen::Class_Version(), "EdbBrickGen.h", 49,
                  typeid(::EdbBrickGen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbBrickGen::Dictionary, isa_proxy, 16,
                  sizeof(::EdbBrickGen) );
      instance.SetNew(&new_EdbBrickGen);
      instance.SetNewArray(&newArray_EdbBrickGen);
      instance.SetDelete(&delete_EdbBrickGen);
      instance.SetDeleteArray(&deleteArray_EdbBrickGen);
      instance.SetDestructor(&destruct_EdbBrickGen);
      instance.SetStreamerFunc(&streamer_EdbBrickGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbBrickGen*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbBrickGen*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbBrickGen*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewDef(void *p = nullptr);
   static void *newArray_EdbViewDef(Long_t size, void *p);
   static void delete_EdbViewDef(void *p);
   static void deleteArray_EdbViewDef(void *p);
   static void destruct_EdbViewDef(void *p);
   static void streamer_EdbViewDef(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewDef*)
   {
      ::EdbViewDef *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewDef >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewDef", ::EdbViewDef::Class_Version(), "EdbViewDef.h", 12,
                  typeid(::EdbViewDef), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewDef::Dictionary, isa_proxy, 16,
                  sizeof(::EdbViewDef) );
      instance.SetNew(&new_EdbViewDef);
      instance.SetNewArray(&newArray_EdbViewDef);
      instance.SetDelete(&delete_EdbViewDef);
      instance.SetDeleteArray(&deleteArray_EdbViewDef);
      instance.SetDestructor(&destruct_EdbViewDef);
      instance.SetStreamerFunc(&streamer_EdbViewDef);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewDef*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewDef*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewDef*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewGen(void *p = nullptr);
   static void *newArray_EdbViewGen(Long_t size, void *p);
   static void delete_EdbViewGen(void *p);
   static void deleteArray_EdbViewGen(void *p);
   static void destruct_EdbViewGen(void *p);
   static void streamer_EdbViewGen(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewGen*)
   {
      ::EdbViewGen *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewGen >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewGen", ::EdbViewGen::Class_Version(), "EdbViewGen.h", 13,
                  typeid(::EdbViewGen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewGen::Dictionary, isa_proxy, 16,
                  sizeof(::EdbViewGen) );
      instance.SetNew(&new_EdbViewGen);
      instance.SetNewArray(&newArray_EdbViewGen);
      instance.SetDelete(&delete_EdbViewGen);
      instance.SetDeleteArray(&deleteArray_EdbViewGen);
      instance.SetDestructor(&destruct_EdbViewGen);
      instance.SetStreamerFunc(&streamer_EdbViewGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewGen*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewGen*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewGen*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewCell(void *p = nullptr);
   static void *newArray_EdbViewCell(Long_t size, void *p);
   static void delete_EdbViewCell(void *p);
   static void deleteArray_EdbViewCell(void *p);
   static void destruct_EdbViewCell(void *p);
   static void streamer_EdbViewCell(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewCell*)
   {
      ::EdbViewCell *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewCell >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewCell", ::EdbViewCell::Class_Version(), "EdbViewRec.h", 20,
                  typeid(::EdbViewCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewCell::Dictionary, isa_proxy, 16,
                  sizeof(::EdbViewCell) );
      instance.SetNew(&new_EdbViewCell);
      instance.SetNewArray(&newArray_EdbViewCell);
      instance.SetDelete(&delete_EdbViewCell);
      instance.SetDeleteArray(&deleteArray_EdbViewCell);
      instance.SetDestructor(&destruct_EdbViewCell);
      instance.SetStreamerFunc(&streamer_EdbViewCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewCell*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewCell*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewCell*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewRec(void *p = nullptr);
   static void *newArray_EdbViewRec(Long_t size, void *p);
   static void delete_EdbViewRec(void *p);
   static void deleteArray_EdbViewRec(void *p);
   static void destruct_EdbViewRec(void *p);
   static void streamer_EdbViewRec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewRec*)
   {
      ::EdbViewRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewRec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewRec", ::EdbViewRec::Class_Version(), "EdbViewRec.h", 102,
                  typeid(::EdbViewRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewRec::Dictionary, isa_proxy, 16,
                  sizeof(::EdbViewRec) );
      instance.SetNew(&new_EdbViewRec);
      instance.SetNewArray(&newArray_EdbViewRec);
      instance.SetDelete(&delete_EdbViewRec);
      instance.SetDeleteArray(&deleteArray_EdbViewRec);
      instance.SetDestructor(&destruct_EdbViewRec);
      instance.SetStreamerFunc(&streamer_EdbViewRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbClMatch(void *p = nullptr);
   static void *newArray_EdbClMatch(Long_t size, void *p);
   static void delete_EdbClMatch(void *p);
   static void deleteArray_EdbClMatch(void *p);
   static void destruct_EdbClMatch(void *p);
   static void streamer_EdbClMatch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbClMatch*)
   {
      ::EdbClMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbClMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbClMatch", ::EdbClMatch::Class_Version(), "EdbViewMatch.h", 18,
                  typeid(::EdbClMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbClMatch::Dictionary, isa_proxy, 16,
                  sizeof(::EdbClMatch) );
      instance.SetNew(&new_EdbClMatch);
      instance.SetNewArray(&newArray_EdbClMatch);
      instance.SetDelete(&delete_EdbClMatch);
      instance.SetDeleteArray(&deleteArray_EdbClMatch);
      instance.SetDestructor(&destruct_EdbClMatch);
      instance.SetStreamerFunc(&streamer_EdbClMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbClMatch*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbClMatch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbClMatch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewMatch(void *p = nullptr);
   static void *newArray_EdbViewMatch(Long_t size, void *p);
   static void delete_EdbViewMatch(void *p);
   static void deleteArray_EdbViewMatch(void *p);
   static void destruct_EdbViewMatch(void *p);
   static void streamer_EdbViewMatch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewMatch*)
   {
      ::EdbViewMatch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewMatch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewMatch", ::EdbViewMatch::Class_Version(), "EdbViewMatch.h", 34,
                  typeid(::EdbViewMatch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewMatch::Dictionary, isa_proxy, 16,
                  sizeof(::EdbViewMatch) );
      instance.SetNew(&new_EdbViewMatch);
      instance.SetNewArray(&newArray_EdbViewMatch);
      instance.SetDelete(&delete_EdbViewMatch);
      instance.SetDeleteArray(&deleteArray_EdbViewMatch);
      instance.SetDestructor(&destruct_EdbViewMatch);
      instance.SetStreamerFunc(&streamer_EdbViewMatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewMatch*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewMatch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewMatch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDataStore(void *p = nullptr);
   static void *newArray_EdbDataStore(Long_t size, void *p);
   static void delete_EdbDataStore(void *p);
   static void deleteArray_EdbDataStore(void *p);
   static void destruct_EdbDataStore(void *p);
   static void streamer_EdbDataStore(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDataStore*)
   {
      ::EdbDataStore *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDataStore >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDataStore", ::EdbDataStore::Class_Version(), "EdbDataStore.h", 15,
                  typeid(::EdbDataStore), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDataStore::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDataStore) );
      instance.SetNew(&new_EdbDataStore);
      instance.SetNewArray(&newArray_EdbDataStore);
      instance.SetDelete(&delete_EdbDataStore);
      instance.SetDeleteArray(&deleteArray_EdbDataStore);
      instance.SetDestructor(&destruct_EdbDataStore);
      instance.SetStreamerFunc(&streamer_EdbDataStore);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDataStore*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDataStore*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDataStore*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDSRec(void *p = nullptr);
   static void *newArray_EdbDSRec(Long_t size, void *p);
   static void delete_EdbDSRec(void *p);
   static void deleteArray_EdbDSRec(void *p);
   static void destruct_EdbDSRec(void *p);
   static void streamer_EdbDSRec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDSRec*)
   {
      ::EdbDSRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDSRec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDSRec", ::EdbDSRec::Class_Version(), "EdbDataStore.h", 90,
                  typeid(::EdbDSRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDSRec::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDSRec) );
      instance.SetNew(&new_EdbDSRec);
      instance.SetNewArray(&newArray_EdbDSRec);
      instance.SetDelete(&delete_EdbDSRec);
      instance.SetDeleteArray(&deleteArray_EdbDSRec);
      instance.SetDestructor(&destruct_EdbDSRec);
      instance.SetStreamerFunc(&streamer_EdbDSRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDSRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDSRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDSRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbPVGen::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPVGen::Class_Name()
{
   return "EdbPVGen";
}

//______________________________________________________________________________
const char *EdbPVGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPVGen*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPVGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPVGen*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPVGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPVGen*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPVGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPVGen*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbBeamGen::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbBeamGen::Class_Name()
{
   return "EdbBeamGen";
}

//______________________________________________________________________________
const char *EdbBeamGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbBeamGen*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbBeamGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbBeamGen*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbBeamGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbBeamGen*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbBeamGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbBeamGen*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbBrickGen::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbBrickGen::Class_Name()
{
   return "EdbBrickGen";
}

//______________________________________________________________________________
const char *EdbBrickGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickGen*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbBrickGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickGen*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbBrickGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickGen*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbBrickGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickGen*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewDef::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewDef::Class_Name()
{
   return "EdbViewDef";
}

//______________________________________________________________________________
const char *EdbViewDef::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewDef*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewDef::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewDef*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewDef::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewDef*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewDef::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewDef*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewGen::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewGen::Class_Name()
{
   return "EdbViewGen";
}

//______________________________________________________________________________
const char *EdbViewGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewGen*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewGen*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewGen*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewGen*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewCell::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewCell::Class_Name()
{
   return "EdbViewCell";
}

//______________________________________________________________________________
const char *EdbViewCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewCell*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewCell*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewCell*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewCell*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewRec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewRec::Class_Name()
{
   return "EdbViewRec";
}

//______________________________________________________________________________
const char *EdbViewRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewRec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewRec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewRec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewRec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbClMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbClMatch::Class_Name()
{
   return "EdbClMatch";
}

//______________________________________________________________________________
const char *EdbClMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbClMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbClMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbClMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbClMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbClMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbClMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbClMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewMatch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewMatch::Class_Name()
{
   return "EdbViewMatch";
}

//______________________________________________________________________________
const char *EdbViewMatch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMatch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewMatch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMatch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewMatch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMatch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewMatch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewMatch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDataStore::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDataStore::Class_Name()
{
   return "EdbDataStore";
}

//______________________________________________________________________________
const char *EdbDataStore::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataStore*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDataStore::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDataStore*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDataStore::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataStore*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDataStore::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDataStore*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDSRec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDSRec::Class_Name()
{
   return "EdbDSRec";
}

//______________________________________________________________________________
const char *EdbDSRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDSRec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDSRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDSRec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDSRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDSRec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDSRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDSRec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbPVGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPVGen.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> ePVolume;
      R__b >> eScanCond;
      R__b >> eTracks;
      R__b >> eVTX;
      R__b >> eEVR;
      R__b.CheckByteCount(R__s, R__c, EdbPVGen::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPVGen::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << ePVolume;
      R__b << eScanCond;
      R__b << eTracks;
      R__b << eVTX;
      R__b << eEVR;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPVGen(void *p) {
      return  p ? new(p) ::EdbPVGen : new ::EdbPVGen;
   }
   static void *newArray_EdbPVGen(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPVGen[nElements] : new ::EdbPVGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPVGen(void *p) {
      delete (static_cast<::EdbPVGen*>(p));
   }
   static void deleteArray_EdbPVGen(void *p) {
      delete [] (static_cast<::EdbPVGen*>(p));
   }
   static void destruct_EdbPVGen(void *p) {
      typedef ::EdbPVGen current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPVGen(TBuffer &buf, void *obj) {
      ((::EdbPVGen*)obj)->::EdbPVGen::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPVGen

//______________________________________________________________________________
void EdbBeamGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbBeamGen.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eMass;
      R__b >> eLimits;
      R__b >> eX0;
      R__b >> eSigmaX;
      R__b >> eY0;
      R__b >> eSigmaY;
      R__b >> eZ0;
      R__b >> eSigmaZ;
      R__b >> eTX0;
      R__b >> eSigmaTX;
      R__b >> eTY0;
      R__b >> eSigmaTY;
      R__b >> eP0;
      R__b >> eSigmaP;
      R__b.CheckByteCount(R__s, R__c, EdbBeamGen::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbBeamGen::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eMass;
      R__b << eLimits;
      R__b << eX0;
      R__b << eSigmaX;
      R__b << eY0;
      R__b << eSigmaY;
      R__b << eZ0;
      R__b << eSigmaZ;
      R__b << eTX0;
      R__b << eSigmaTX;
      R__b << eTY0;
      R__b << eSigmaTY;
      R__b << eP0;
      R__b << eSigmaP;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbBeamGen(void *p) {
      return  p ? new(p) ::EdbBeamGen : new ::EdbBeamGen;
   }
   static void *newArray_EdbBeamGen(Long_t nElements, void *p) {
      return p ? new(p) ::EdbBeamGen[nElements] : new ::EdbBeamGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbBeamGen(void *p) {
      delete (static_cast<::EdbBeamGen*>(p));
   }
   static void deleteArray_EdbBeamGen(void *p) {
      delete [] (static_cast<::EdbBeamGen*>(p));
   }
   static void destruct_EdbBeamGen(void *p) {
      typedef ::EdbBeamGen current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbBeamGen(TBuffer &buf, void *obj) {
      ((::EdbBeamGen*)obj)->::EdbBeamGen::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbBeamGen

//______________________________________________________________________________
void EdbBrickGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbBrickGen.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eBrick;
      R__b >> ePVG;
      R__b.CheckByteCount(R__s, R__c, EdbBrickGen::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbBrickGen::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eBrick;
      R__b << ePVG;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbBrickGen(void *p) {
      return  p ? new(p) ::EdbBrickGen : new ::EdbBrickGen;
   }
   static void *newArray_EdbBrickGen(Long_t nElements, void *p) {
      return p ? new(p) ::EdbBrickGen[nElements] : new ::EdbBrickGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbBrickGen(void *p) {
      delete (static_cast<::EdbBrickGen*>(p));
   }
   static void deleteArray_EdbBrickGen(void *p) {
      delete [] (static_cast<::EdbBrickGen*>(p));
   }
   static void destruct_EdbBrickGen(void *p) {
      typedef ::EdbBrickGen current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbBrickGen(TBuffer &buf, void *obj) {
      ((::EdbBrickGen*)obj)->::EdbBrickGen::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbBrickGen

//______________________________________________________________________________
void EdbViewDef::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbViewDef.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eNframes;
      R__b >> eZmin;
      R__b >> eZmax;
      R__b >> eZxy;
      R__b >> eXmin;
      R__b >> eXmax;
      R__b >> eYmin;
      R__b >> eYmax;
      R__b >> eX0;
      R__b >> eY0;
      R__b >> eX0opt;
      R__b >> eY0opt;
      R__b >> eTXopt;
      R__b >> eTYopt;
      R__b >> eClaSX;
      R__b >> eClaSY;
      R__b >> eClaSZ;
      R__b >> eClaSZvar;
      R__b >> eGrainSX;
      R__b >> eGrainSY;
      R__b >> eGrainSZ;
      R__b >> eFogDens;
      R__b >> eFogGrainArea;
      R__b >> eGrainArea;
      R__b >> eZdead;
      R__b >> eDZdead;
      R__b.CheckByteCount(R__s, R__c, EdbViewDef::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbViewDef::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eNframes;
      R__b << eZmin;
      R__b << eZmax;
      R__b << eZxy;
      R__b << eXmin;
      R__b << eXmax;
      R__b << eYmin;
      R__b << eYmax;
      R__b << eX0;
      R__b << eY0;
      R__b << eX0opt;
      R__b << eY0opt;
      R__b << eTXopt;
      R__b << eTYopt;
      R__b << eClaSX;
      R__b << eClaSY;
      R__b << eClaSZ;
      R__b << eClaSZvar;
      R__b << eGrainSX;
      R__b << eGrainSY;
      R__b << eGrainSZ;
      R__b << eFogDens;
      R__b << eFogGrainArea;
      R__b << eGrainArea;
      R__b << eZdead;
      R__b << eDZdead;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewDef(void *p) {
      return  p ? new(p) ::EdbViewDef : new ::EdbViewDef;
   }
   static void *newArray_EdbViewDef(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewDef[nElements] : new ::EdbViewDef[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewDef(void *p) {
      delete (static_cast<::EdbViewDef*>(p));
   }
   static void deleteArray_EdbViewDef(void *p) {
      delete [] (static_cast<::EdbViewDef*>(p));
   }
   static void destruct_EdbViewDef(void *p) {
      typedef ::EdbViewDef current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewDef(TBuffer &buf, void *obj) {
      ((::EdbViewDef*)obj)->::EdbViewDef::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewDef

//______________________________________________________________________________
void EdbViewGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbViewGen.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbViewDef::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbViewGen::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbViewGen::IsA(), kTRUE);
      EdbViewDef::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewGen(void *p) {
      return  p ? new(p) ::EdbViewGen : new ::EdbViewGen;
   }
   static void *newArray_EdbViewGen(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewGen[nElements] : new ::EdbViewGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewGen(void *p) {
      delete (static_cast<::EdbViewGen*>(p));
   }
   static void deleteArray_EdbViewGen(void *p) {
      delete [] (static_cast<::EdbViewGen*>(p));
   }
   static void destruct_EdbViewGen(void *p) {
      typedef ::EdbViewGen current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewGen(TBuffer &buf, void *obj) {
      ((::EdbViewGen*)obj)->::EdbViewGen::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewGen

//______________________________________________________________________________
void EdbViewCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbViewCell.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eXmin;
      R__b >> eXmax;
      R__b >> eYmin;
      R__b >> eYmax;
      R__b >> eZmin;
      R__b >> eZmax;
      R__b >> eBinZ;
      R__b >> eBinX;
      R__b >> eBinY;
      R__b >> eNfr;
      R__b >> eNx;
      R__b >> eNy;
      R__b >> eNcellXY;
      R__b >> eNcell;
      R__b >> eNcl;
      R__b >> eIFZ;
      R__b >> eNcellsLim;
      R__b >> eCellLim;
      R__b.ReadStaticArray((int*)eNeib);
      R__b.CheckByteCount(R__s, R__c, EdbViewCell::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbViewCell::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eXmin;
      R__b << eXmax;
      R__b << eYmin;
      R__b << eYmax;
      R__b << eZmin;
      R__b << eZmax;
      R__b << eBinZ;
      R__b << eBinX;
      R__b << eBinY;
      R__b << eNfr;
      R__b << eNx;
      R__b << eNy;
      R__b << eNcellXY;
      R__b << eNcell;
      R__b << eNcl;
      R__b << eIFZ;
      R__b << eNcellsLim;
      R__b << eCellLim;
      R__b.WriteArray(eNeib, 9);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewCell(void *p) {
      return  p ? new(p) ::EdbViewCell : new ::EdbViewCell;
   }
   static void *newArray_EdbViewCell(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewCell[nElements] : new ::EdbViewCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewCell(void *p) {
      delete (static_cast<::EdbViewCell*>(p));
   }
   static void deleteArray_EdbViewCell(void *p) {
      delete [] (static_cast<::EdbViewCell*>(p));
   }
   static void destruct_EdbViewCell(void *p) {
      typedef ::EdbViewCell current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewCell(TBuffer &buf, void *obj) {
      ((::EdbViewCell*)obj)->::EdbViewCell::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewCell

//______________________________________________________________________________
void EdbViewRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbViewRec.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbViewDef::Streamer(R__b);
      R__b >> eAddGrainsToView;
      R__b >> eDoGrainsProcessing;
      R__b >> eCheckSeedThres;
      R__b >> ePropagateToBase;
      R__b >> eGrainNbin;
      R__b >> eNgrMax;
      R__b >> eNsegMax;
      R__b >> eClMinA;
      R__b >> eClMaxA;
      R__b >> eNgr;
      R__b >> eNclGrMin;
      R__b >> eNclGrMax;
      R__b >> eDZmin;
      R__b >> eThetaLim;
      R__b >> eStep;
      R__b >> eStepFrom;
      R__b >> eStepTo;
      R__b >> eSeedThres0;
      eSeedThres.Streamer(R__b);
      eR.Streamer(R__b);
      R__b >> enSeedsLim;
      R__b >> eSeedLim;
      R__b >> eNseedMax0;
      eNseedMax.Streamer(R__b);
      R__b >> ePulsMin;
      R__b >> ePulsMax;
      R__b >> eSigmaMin;
      R__b >> eSigmaMax;
      R__b >> eZcenter;
      R__b >> enT;
      enP.Streamer(R__b);
      R__b >> enPtot;
      enY.Streamer(R__b);
      R__b >> enYtot;
      enX.Streamer(R__b);
      R__b >> enXtot;
      eTheta.Streamer(R__b);
      esP.Streamer(R__b);
      esY.Streamer(R__b);
      esX.Streamer(R__b);
      R__b >> eDmax;
      R__b >> eFact;
      R__b >> eRmax;
      R__b.CheckByteCount(R__s, R__c, EdbViewRec::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbViewRec::IsA(), kTRUE);
      EdbViewDef::Streamer(R__b);
      R__b << eAddGrainsToView;
      R__b << eDoGrainsProcessing;
      R__b << eCheckSeedThres;
      R__b << ePropagateToBase;
      R__b << eGrainNbin;
      R__b << eNgrMax;
      R__b << eNsegMax;
      R__b << eClMinA;
      R__b << eClMaxA;
      R__b << eNgr;
      R__b << eNclGrMin;
      R__b << eNclGrMax;
      R__b << eDZmin;
      R__b << eThetaLim;
      R__b << eStep;
      R__b << eStepFrom;
      R__b << eStepTo;
      R__b << eSeedThres0;
      eSeedThres.Streamer(R__b);
      eR.Streamer(R__b);
      R__b << enSeedsLim;
      R__b << eSeedLim;
      R__b << eNseedMax0;
      eNseedMax.Streamer(R__b);
      R__b << ePulsMin;
      R__b << ePulsMax;
      R__b << eSigmaMin;
      R__b << eSigmaMax;
      R__b << eZcenter;
      R__b << enT;
      enP.Streamer(R__b);
      R__b << enPtot;
      enY.Streamer(R__b);
      R__b << enYtot;
      enX.Streamer(R__b);
      R__b << enXtot;
      eTheta.Streamer(R__b);
      esP.Streamer(R__b);
      esY.Streamer(R__b);
      esX.Streamer(R__b);
      R__b << eDmax;
      R__b << eFact;
      R__b << eRmax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewRec(void *p) {
      return  p ? new(p) ::EdbViewRec : new ::EdbViewRec;
   }
   static void *newArray_EdbViewRec(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewRec[nElements] : new ::EdbViewRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewRec(void *p) {
      delete (static_cast<::EdbViewRec*>(p));
   }
   static void deleteArray_EdbViewRec(void *p) {
      delete [] (static_cast<::EdbViewRec*>(p));
   }
   static void destruct_EdbViewRec(void *p) {
      typedef ::EdbViewRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewRec(TBuffer &buf, void *obj) {
      ((::EdbViewRec*)obj)->::EdbViewRec::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewRec

//______________________________________________________________________________
void EdbClMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbClMatch.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eX;
      R__b >> eY;
      R__b >> eZ;
      R__b >> eXv;
      R__b >> eYv;
      R__b >> eView;
      R__b >> eFrame;
      R__b.CheckByteCount(R__s, R__c, EdbClMatch::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbClMatch::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eX;
      R__b << eY;
      R__b << eZ;
      R__b << eXv;
      R__b << eYv;
      R__b << eView;
      R__b << eFrame;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbClMatch(void *p) {
      return  p ? new(p) ::EdbClMatch : new ::EdbClMatch;
   }
   static void *newArray_EdbClMatch(Long_t nElements, void *p) {
      return p ? new(p) ::EdbClMatch[nElements] : new ::EdbClMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbClMatch(void *p) {
      delete (static_cast<::EdbClMatch*>(p));
   }
   static void deleteArray_EdbClMatch(void *p) {
      delete [] (static_cast<::EdbClMatch*>(p));
   }
   static void destruct_EdbClMatch(void *p) {
      typedef ::EdbClMatch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbClMatch(TBuffer &buf, void *obj) {
      ((::EdbClMatch*)obj)->::EdbClMatch::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbClMatch

//______________________________________________________________________________
void EdbViewMatch::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbViewMatch.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eNClMin;
      R__b >> eR2CenterMax;
      R__b >> eRmax;
      eCl.Streamer(R__b);
      eGr.Streamer(R__b);
      eGMap.Streamer(R__b);
      eCorrMap.Streamer(R__b);
      R__b >> eXpix;
      R__b >> eYpix;
      R__b >> eNXpix;
      R__b >> eNYpix;
      R__b >> eCorrectionMatrixStepX;
      R__b >> eCorrectionMatrixStepY;
      R__b >> eOutputFile;
      R__b >> eDumpGr;
      R__b >> eAreaMin;
      R__b >> eAreaMax;
      R__b >> eVolumeMin;
      R__b >> eVolumeMax;
      R__b.CheckByteCount(R__s, R__c, EdbViewMatch::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbViewMatch::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eNClMin;
      R__b << eR2CenterMax;
      R__b << eRmax;
      eCl.Streamer(R__b);
      eGr.Streamer(R__b);
      eGMap.Streamer(R__b);
      eCorrMap.Streamer(R__b);
      R__b << eXpix;
      R__b << eYpix;
      R__b << eNXpix;
      R__b << eNYpix;
      R__b << eCorrectionMatrixStepX;
      R__b << eCorrectionMatrixStepY;
      R__b << eOutputFile;
      R__b << eDumpGr;
      R__b << eAreaMin;
      R__b << eAreaMax;
      R__b << eVolumeMin;
      R__b << eVolumeMax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewMatch(void *p) {
      return  p ? new(p) ::EdbViewMatch : new ::EdbViewMatch;
   }
   static void *newArray_EdbViewMatch(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewMatch[nElements] : new ::EdbViewMatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewMatch(void *p) {
      delete (static_cast<::EdbViewMatch*>(p));
   }
   static void deleteArray_EdbViewMatch(void *p) {
      delete [] (static_cast<::EdbViewMatch*>(p));
   }
   static void destruct_EdbViewMatch(void *p) {
      typedef ::EdbViewMatch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewMatch(TBuffer &buf, void *obj) {
      ((::EdbViewMatch*)obj)->::EdbViewMatch::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewMatch

//______________________________________________________________________________
void EdbDataStore::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDataStore.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eBrick;
      eRawPV.Streamer(R__b);
      eSegPV.Streamer(R__b);
      eTracks.Streamer(R__b);
      eVTX.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbDataStore::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDataStore::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eBrick;
      eRawPV.Streamer(R__b);
      eSegPV.Streamer(R__b);
      eTracks.Streamer(R__b);
      eVTX.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDataStore(void *p) {
      return  p ? new(p) ::EdbDataStore : new ::EdbDataStore;
   }
   static void *newArray_EdbDataStore(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDataStore[nElements] : new ::EdbDataStore[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDataStore(void *p) {
      delete (static_cast<::EdbDataStore*>(p));
   }
   static void deleteArray_EdbDataStore(void *p) {
      delete [] (static_cast<::EdbDataStore*>(p));
   }
   static void destruct_EdbDataStore(void *p) {
      typedef ::EdbDataStore current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDataStore(TBuffer &buf, void *obj) {
      ((::EdbDataStore*)obj)->::EdbDataStore::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDataStore

//______________________________________________________________________________
void EdbDSRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDSRec.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbDataStore::Streamer(R__b);
      eVRec.Streamer(R__b);
      eMomEst.Streamer(R__b);
      eCond_b.Streamer(R__b);
      eCond_m.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbDSRec::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDSRec::IsA(), kTRUE);
      EdbDataStore::Streamer(R__b);
      eVRec.Streamer(R__b);
      eMomEst.Streamer(R__b);
      eCond_b.Streamer(R__b);
      eCond_m.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDSRec(void *p) {
      return  p ? new(p) ::EdbDSRec : new ::EdbDSRec;
   }
   static void *newArray_EdbDSRec(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDSRec[nElements] : new ::EdbDSRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDSRec(void *p) {
      delete (static_cast<::EdbDSRec*>(p));
   }
   static void deleteArray_EdbDSRec(void *p) {
      delete [] (static_cast<::EdbDSRec*>(p));
   }
   static void destruct_EdbDSRec(void *p) {
      typedef ::EdbDSRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDSRec(TBuffer &buf, void *obj) {
      ((::EdbDSRec*)obj)->::EdbDSRec::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDSRec

namespace {
  void TriggerDictionaryInitialization_EMCCint_Impl() {
    static const char* headers[] = {
"EdbPVGen.h",
"EdbBrickGen.h",
"EdbViewDef.h",
"EdbViewGen.h",
"EdbViewRec.h",
"EdbViewMatch.h",
"EdbDataStore.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEMC/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EMCCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbPVGen.h")))  EdbPVGen;
class __attribute__((annotate("$clingAutoload$EdbBrickGen.h")))  EdbBeamGen;
class __attribute__((annotate("$clingAutoload$EdbBrickGen.h")))  EdbBrickGen;
class __attribute__((annotate("$clingAutoload$EdbViewDef.h")))  EdbViewDef;
class __attribute__((annotate("$clingAutoload$EdbViewGen.h")))  EdbViewGen;
class __attribute__((annotate("$clingAutoload$EdbViewRec.h")))  EdbViewCell;
class __attribute__((annotate("$clingAutoload$EdbViewRec.h")))  EdbViewRec;
class __attribute__((annotate("$clingAutoload$EdbViewMatch.h")))  EdbClMatch;
class __attribute__((annotate("$clingAutoload$EdbViewMatch.h")))  EdbViewMatch;
class __attribute__((annotate("$clingAutoload$EdbDataStore.h")))  EdbDataStore;
class __attribute__((annotate("$clingAutoload$EdbDataStore.h")))  EdbDSRec;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EMCCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbPVGen.h"
#include "EdbBrickGen.h"
#include "EdbViewDef.h"
#include "EdbViewGen.h"
#include "EdbViewRec.h"
#include "EdbViewMatch.h"
#include "EdbDataStore.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbBeamGen", payloadCode, "@",
"EdbBrickGen", payloadCode, "@",
"EdbClMatch", payloadCode, "@",
"EdbDSRec", payloadCode, "@",
"EdbDataStore", payloadCode, "@",
"EdbPVGen", payloadCode, "@",
"EdbViewCell", payloadCode, "@",
"EdbViewDef", payloadCode, "@",
"EdbViewGen", payloadCode, "@",
"EdbViewMatch", payloadCode, "@",
"EdbViewRec", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EMCCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EMCCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EMCCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EMCCint() {
  TriggerDictionaryInitialization_EMCCint_Impl();
}
