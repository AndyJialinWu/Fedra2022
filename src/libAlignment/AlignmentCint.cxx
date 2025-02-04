// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME AlignmentCint
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
#include "EdbPatCell2.h"
#include "EdbPositionAlignment.h"
#include "EdbAlignmentMap.h"
#include "EdbPeakProb.h"
#include "EdbTestAl.h"
#include "EdbAlignmentV.h"
#include "EdbPlateAlignment.h"
#include "EdbLinking.h"
#include "EdbCorrectionMapper.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbPatCell2(void *p = nullptr);
   static void *newArray_EdbPatCell2(Long_t size, void *p);
   static void delete_EdbPatCell2(void *p);
   static void deleteArray_EdbPatCell2(void *p);
   static void destruct_EdbPatCell2(void *p);
   static void streamer_EdbPatCell2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPatCell2*)
   {
      ::EdbPatCell2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPatCell2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPatCell2", ::EdbPatCell2::Class_Version(), "EdbPatCell2.h", 9,
                  typeid(::EdbPatCell2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPatCell2::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPatCell2) );
      instance.SetNew(&new_EdbPatCell2);
      instance.SetNewArray(&newArray_EdbPatCell2);
      instance.SetDelete(&delete_EdbPatCell2);
      instance.SetDeleteArray(&deleteArray_EdbPatCell2);
      instance.SetDestructor(&destruct_EdbPatCell2);
      instance.SetStreamerFunc(&streamer_EdbPatCell2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPatCell2*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPatCell2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPatCell2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPositionAlignment(void *p = nullptr);
   static void *newArray_EdbPositionAlignment(Long_t size, void *p);
   static void delete_EdbPositionAlignment(void *p);
   static void deleteArray_EdbPositionAlignment(void *p);
   static void destruct_EdbPositionAlignment(void *p);
   static void streamer_EdbPositionAlignment(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPositionAlignment*)
   {
      ::EdbPositionAlignment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPositionAlignment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPositionAlignment", ::EdbPositionAlignment::Class_Version(), "EdbPositionAlignment.h", 13,
                  typeid(::EdbPositionAlignment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPositionAlignment::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPositionAlignment) );
      instance.SetNew(&new_EdbPositionAlignment);
      instance.SetNewArray(&newArray_EdbPositionAlignment);
      instance.SetDelete(&delete_EdbPositionAlignment);
      instance.SetDeleteArray(&deleteArray_EdbPositionAlignment);
      instance.SetDestructor(&destruct_EdbPositionAlignment);
      instance.SetStreamerFunc(&streamer_EdbPositionAlignment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPositionAlignment*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPositionAlignment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPositionAlignment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbAlignmentMap(void *p = nullptr);
   static void *newArray_EdbAlignmentMap(Long_t size, void *p);
   static void delete_EdbAlignmentMap(void *p);
   static void deleteArray_EdbAlignmentMap(void *p);
   static void destruct_EdbAlignmentMap(void *p);
   static void streamer_EdbAlignmentMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbAlignmentMap*)
   {
      ::EdbAlignmentMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbAlignmentMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbAlignmentMap", ::EdbAlignmentMap::Class_Version(), "EdbAlignmentMap.h", 15,
                  typeid(::EdbAlignmentMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbAlignmentMap::Dictionary, isa_proxy, 16,
                  sizeof(::EdbAlignmentMap) );
      instance.SetNew(&new_EdbAlignmentMap);
      instance.SetNewArray(&newArray_EdbAlignmentMap);
      instance.SetDelete(&delete_EdbAlignmentMap);
      instance.SetDeleteArray(&deleteArray_EdbAlignmentMap);
      instance.SetDestructor(&destruct_EdbAlignmentMap);
      instance.SetStreamerFunc(&streamer_EdbAlignmentMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbAlignmentMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbAlignmentMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbAlignmentMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPeakProb(void *p = nullptr);
   static void *newArray_EdbPeakProb(Long_t size, void *p);
   static void delete_EdbPeakProb(void *p);
   static void deleteArray_EdbPeakProb(void *p);
   static void destruct_EdbPeakProb(void *p);
   static void streamer_EdbPeakProb(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPeakProb*)
   {
      ::EdbPeakProb *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPeakProb >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPeakProb", ::EdbPeakProb::Class_Version(), "EdbPeakProb.h", 7,
                  typeid(::EdbPeakProb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPeakProb::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPeakProb) );
      instance.SetNew(&new_EdbPeakProb);
      instance.SetNewArray(&newArray_EdbPeakProb);
      instance.SetDelete(&delete_EdbPeakProb);
      instance.SetDeleteArray(&deleteArray_EdbPeakProb);
      instance.SetDestructor(&destruct_EdbPeakProb);
      instance.SetStreamerFunc(&streamer_EdbPeakProb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPeakProb*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPeakProb*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPeakProb*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTestAl(void *p = nullptr);
   static void *newArray_EdbTestAl(Long_t size, void *p);
   static void delete_EdbTestAl(void *p);
   static void deleteArray_EdbTestAl(void *p);
   static void destruct_EdbTestAl(void *p);
   static void streamer_EdbTestAl(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTestAl*)
   {
      ::EdbTestAl *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTestAl >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTestAl", ::EdbTestAl::Class_Version(), "EdbTestAl.h", 11,
                  typeid(::EdbTestAl), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTestAl::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTestAl) );
      instance.SetNew(&new_EdbTestAl);
      instance.SetNewArray(&newArray_EdbTestAl);
      instance.SetDelete(&delete_EdbTestAl);
      instance.SetDeleteArray(&deleteArray_EdbTestAl);
      instance.SetDestructor(&destruct_EdbTestAl);
      instance.SetStreamerFunc(&streamer_EdbTestAl);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTestAl*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTestAl*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTestAl*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbAlignmentV(void *p = nullptr);
   static void *newArray_EdbAlignmentV(Long_t size, void *p);
   static void delete_EdbAlignmentV(void *p);
   static void deleteArray_EdbAlignmentV(void *p);
   static void destruct_EdbAlignmentV(void *p);
   static void streamer_EdbAlignmentV(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbAlignmentV*)
   {
      ::EdbAlignmentV *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbAlignmentV >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbAlignmentV", ::EdbAlignmentV::Class_Version(), "EdbAlignmentV.h", 12,
                  typeid(::EdbAlignmentV), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbAlignmentV::Dictionary, isa_proxy, 16,
                  sizeof(::EdbAlignmentV) );
      instance.SetNew(&new_EdbAlignmentV);
      instance.SetNewArray(&newArray_EdbAlignmentV);
      instance.SetDelete(&delete_EdbAlignmentV);
      instance.SetDeleteArray(&deleteArray_EdbAlignmentV);
      instance.SetDestructor(&destruct_EdbAlignmentV);
      instance.SetStreamerFunc(&streamer_EdbAlignmentV);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbAlignmentV*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbAlignmentV*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbAlignmentV*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPlateAlignment(void *p = nullptr);
   static void *newArray_EdbPlateAlignment(Long_t size, void *p);
   static void delete_EdbPlateAlignment(void *p);
   static void deleteArray_EdbPlateAlignment(void *p);
   static void destruct_EdbPlateAlignment(void *p);
   static void streamer_EdbPlateAlignment(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPlateAlignment*)
   {
      ::EdbPlateAlignment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPlateAlignment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPlateAlignment", ::EdbPlateAlignment::Class_Version(), "EdbPlateAlignment.h", 7,
                  typeid(::EdbPlateAlignment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPlateAlignment::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPlateAlignment) );
      instance.SetNew(&new_EdbPlateAlignment);
      instance.SetNewArray(&newArray_EdbPlateAlignment);
      instance.SetDelete(&delete_EdbPlateAlignment);
      instance.SetDeleteArray(&deleteArray_EdbPlateAlignment);
      instance.SetDestructor(&destruct_EdbPlateAlignment);
      instance.SetStreamerFunc(&streamer_EdbPlateAlignment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPlateAlignment*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPlateAlignment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPlateAlignment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbLinking(void *p = nullptr);
   static void *newArray_EdbLinking(Long_t size, void *p);
   static void delete_EdbLinking(void *p);
   static void deleteArray_EdbLinking(void *p);
   static void destruct_EdbLinking(void *p);
   static void streamer_EdbLinking(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbLinking*)
   {
      ::EdbLinking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbLinking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbLinking", ::EdbLinking::Class_Version(), "EdbLinking.h", 10,
                  typeid(::EdbLinking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbLinking::Dictionary, isa_proxy, 16,
                  sizeof(::EdbLinking) );
      instance.SetNew(&new_EdbLinking);
      instance.SetNewArray(&newArray_EdbLinking);
      instance.SetDelete(&delete_EdbLinking);
      instance.SetDeleteArray(&deleteArray_EdbLinking);
      instance.SetDestructor(&destruct_EdbLinking);
      instance.SetStreamerFunc(&streamer_EdbLinking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbLinking*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbLinking*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbLinking*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCorrectionBin(void *p = nullptr);
   static void *newArray_EdbCorrectionBin(Long_t size, void *p);
   static void delete_EdbCorrectionBin(void *p);
   static void deleteArray_EdbCorrectionBin(void *p);
   static void destruct_EdbCorrectionBin(void *p);
   static void streamer_EdbCorrectionBin(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCorrectionBin*)
   {
      ::EdbCorrectionBin *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCorrectionBin >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCorrectionBin", ::EdbCorrectionBin::Class_Version(), "EdbCorrectionMapper.h", 10,
                  typeid(::EdbCorrectionBin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCorrectionBin::Dictionary, isa_proxy, 16,
                  sizeof(::EdbCorrectionBin) );
      instance.SetNew(&new_EdbCorrectionBin);
      instance.SetNewArray(&newArray_EdbCorrectionBin);
      instance.SetDelete(&delete_EdbCorrectionBin);
      instance.SetDeleteArray(&deleteArray_EdbCorrectionBin);
      instance.SetDestructor(&destruct_EdbCorrectionBin);
      instance.SetStreamerFunc(&streamer_EdbCorrectionBin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCorrectionBin*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCorrectionBin*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCorrectionBin*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCorrectionMapper(void *p = nullptr);
   static void *newArray_EdbCorrectionMapper(Long_t size, void *p);
   static void delete_EdbCorrectionMapper(void *p);
   static void deleteArray_EdbCorrectionMapper(void *p);
   static void destruct_EdbCorrectionMapper(void *p);
   static void streamer_EdbCorrectionMapper(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCorrectionMapper*)
   {
      ::EdbCorrectionMapper *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCorrectionMapper >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCorrectionMapper", ::EdbCorrectionMapper::Class_Version(), "EdbCorrectionMapper.h", 31,
                  typeid(::EdbCorrectionMapper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCorrectionMapper::Dictionary, isa_proxy, 16,
                  sizeof(::EdbCorrectionMapper) );
      instance.SetNew(&new_EdbCorrectionMapper);
      instance.SetNewArray(&newArray_EdbCorrectionMapper);
      instance.SetDelete(&delete_EdbCorrectionMapper);
      instance.SetDeleteArray(&deleteArray_EdbCorrectionMapper);
      instance.SetDestructor(&destruct_EdbCorrectionMapper);
      instance.SetStreamerFunc(&streamer_EdbCorrectionMapper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCorrectionMapper*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCorrectionMapper*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCorrectionMapper*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbPatCell2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPatCell2::Class_Name()
{
   return "EdbPatCell2";
}

//______________________________________________________________________________
const char *EdbPatCell2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCell2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPatCell2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCell2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPatCell2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCell2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPatCell2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCell2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPositionAlignment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPositionAlignment::Class_Name()
{
   return "EdbPositionAlignment";
}

//______________________________________________________________________________
const char *EdbPositionAlignment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPositionAlignment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPositionAlignment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPositionAlignment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPositionAlignment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPositionAlignment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPositionAlignment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPositionAlignment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbAlignmentMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbAlignmentMap::Class_Name()
{
   return "EdbAlignmentMap";
}

//______________________________________________________________________________
const char *EdbAlignmentMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbAlignmentMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbAlignmentMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbAlignmentMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPeakProb::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPeakProb::Class_Name()
{
   return "EdbPeakProb";
}

//______________________________________________________________________________
const char *EdbPeakProb::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPeakProb*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPeakProb::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPeakProb*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPeakProb::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPeakProb*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPeakProb::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPeakProb*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTestAl::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTestAl::Class_Name()
{
   return "EdbTestAl";
}

//______________________________________________________________________________
const char *EdbTestAl::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTestAl*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTestAl::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTestAl*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTestAl::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTestAl*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTestAl::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTestAl*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbAlignmentV::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbAlignmentV::Class_Name()
{
   return "EdbAlignmentV";
}

//______________________________________________________________________________
const char *EdbAlignmentV::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentV*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbAlignmentV::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentV*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbAlignmentV::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentV*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbAlignmentV::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAlignmentV*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPlateAlignment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPlateAlignment::Class_Name()
{
   return "EdbPlateAlignment";
}

//______________________________________________________________________________
const char *EdbPlateAlignment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateAlignment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPlateAlignment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateAlignment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPlateAlignment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateAlignment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPlateAlignment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateAlignment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbLinking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbLinking::Class_Name()
{
   return "EdbLinking";
}

//______________________________________________________________________________
const char *EdbLinking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbLinking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbLinking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbLinking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbLinking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbLinking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbLinking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbLinking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCorrectionBin::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCorrectionBin::Class_Name()
{
   return "EdbCorrectionBin";
}

//______________________________________________________________________________
const char *EdbCorrectionBin::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionBin*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCorrectionBin::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionBin*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCorrectionBin::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionBin*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCorrectionBin::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionBin*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCorrectionMapper::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCorrectionMapper::Class_Name()
{
   return "EdbCorrectionMapper";
}

//______________________________________________________________________________
const char *EdbCorrectionMapper::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMapper*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCorrectionMapper::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMapper*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCorrectionMapper::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMapper*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCorrectionMapper::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMapper*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbPatCell2::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPatCell2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbCell2::Streamer(R__b);
      R__b >> eDXlim;
      R__b >> eDYlim;
      R__b >> eDTXlim;
      R__b >> eDTYlim;
      R__b >> eXmarg;
      R__b >> eYmarg;
      R__b >> eApplyCorr;
      R__b >> eDX;
      R__b >> eDY;
      R__b >> eDZ;
      R__b >> eShr;
      R__b >> eDTX;
      R__b >> eDTY;
      R__b >> ePhi;
      R__b >> eDoubletsRate;
      R__b.CheckByteCount(R__s, R__c, EdbPatCell2::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPatCell2::IsA(), kTRUE);
      EdbCell2::Streamer(R__b);
      R__b << eDXlim;
      R__b << eDYlim;
      R__b << eDTXlim;
      R__b << eDTYlim;
      R__b << eXmarg;
      R__b << eYmarg;
      R__b << eApplyCorr;
      R__b << eDX;
      R__b << eDY;
      R__b << eDZ;
      R__b << eShr;
      R__b << eDTX;
      R__b << eDTY;
      R__b << ePhi;
      R__b << (TObject*)eDoubletsRate;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPatCell2(void *p) {
      return  p ? new(p) ::EdbPatCell2 : new ::EdbPatCell2;
   }
   static void *newArray_EdbPatCell2(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPatCell2[nElements] : new ::EdbPatCell2[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPatCell2(void *p) {
      delete (static_cast<::EdbPatCell2*>(p));
   }
   static void deleteArray_EdbPatCell2(void *p) {
      delete [] (static_cast<::EdbPatCell2*>(p));
   }
   static void destruct_EdbPatCell2(void *p) {
      typedef ::EdbPatCell2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPatCell2(TBuffer &buf, void *obj) {
      ((::EdbPatCell2*)obj)->::EdbPatCell2::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPatCell2

//______________________________________________________________________________
void EdbPositionAlignment::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPositionAlignment.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      ePC1.Streamer(R__b);
      ePC2.Streamer(R__b);
      eComb1.Streamer(R__b);
      eComb2.Streamer(R__b);
      eTracks.Streamer(R__b);
      eSegCouples.Streamer(R__b);
      ePC.Streamer(R__b);
      R__b >> eX0;
      R__b >> eY0;
      R__b >> eXcell;
      R__b >> eYcell;
      R__b >> eDTXmax;
      R__b >> eDTYmax;
      R__b >> eBinX;
      R__b >> eBinY;
      R__b >> eDXmin;
      R__b >> eDYmin;
      R__b >> eDTXmin;
      R__b >> eDTYmin;
      R__b >> eRpeak;
      R__b >> eZ1from;
      R__b >> eZ1to;
      R__b >> eZ2from;
      R__b >> eZ2to;
      R__b >> eNZ1step;
      R__b >> eNZ2step;
      R__b >> eZ1peak;
      R__b >> eZ2peak;
      R__b >> eXpeak;
      R__b >> eYpeak;
      R__b >> eNpeak;
      R__b >> eAff;
      eHpeak.Streamer(R__b);
      eHDZ.Streamer(R__b);
      eSmoothKernel.Streamer(R__b);
      R__b >> ePosTree;
      R__b >> eS0x;
      R__b >> eS0y;
      R__b >> eS0tx;
      R__b >> eS0ty;
      R__b >> eWbaseMin;
      R__b >> eChi2Max;
      R__b >> eShr1from;
      R__b >> eShr1to;
      R__b >> eShr2from;
      R__b >> eShr2to;
      R__b >> eNShr1step;
      R__b >> eNShr2step;
      eHShr1.Streamer(R__b);
      eHShr2.Streamer(R__b);
      R__b >> eDoRot;
      eRot.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbPositionAlignment::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPositionAlignment::IsA(), kTRUE);
      TObject::Streamer(R__b);
      ePC1.Streamer(R__b);
      ePC2.Streamer(R__b);
      eComb1.Streamer(R__b);
      eComb2.Streamer(R__b);
      eTracks.Streamer(R__b);
      eSegCouples.Streamer(R__b);
      ePC.Streamer(R__b);
      R__b << eX0;
      R__b << eY0;
      R__b << eXcell;
      R__b << eYcell;
      R__b << eDTXmax;
      R__b << eDTYmax;
      R__b << eBinX;
      R__b << eBinY;
      R__b << eDXmin;
      R__b << eDYmin;
      R__b << eDTXmin;
      R__b << eDTYmin;
      R__b << eRpeak;
      R__b << eZ1from;
      R__b << eZ1to;
      R__b << eZ2from;
      R__b << eZ2to;
      R__b << eNZ1step;
      R__b << eNZ2step;
      R__b << eZ1peak;
      R__b << eZ2peak;
      R__b << eXpeak;
      R__b << eYpeak;
      R__b << eNpeak;
      R__b << eAff;
      eHpeak.Streamer(R__b);
      eHDZ.Streamer(R__b);
      eSmoothKernel.Streamer(R__b);
      R__b << ePosTree;
      R__b << eS0x;
      R__b << eS0y;
      R__b << eS0tx;
      R__b << eS0ty;
      R__b << eWbaseMin;
      R__b << eChi2Max;
      R__b << eShr1from;
      R__b << eShr1to;
      R__b << eShr2from;
      R__b << eShr2to;
      R__b << eNShr1step;
      R__b << eNShr2step;
      eHShr1.Streamer(R__b);
      eHShr2.Streamer(R__b);
      R__b << eDoRot;
      eRot.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPositionAlignment(void *p) {
      return  p ? new(p) ::EdbPositionAlignment : new ::EdbPositionAlignment;
   }
   static void *newArray_EdbPositionAlignment(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPositionAlignment[nElements] : new ::EdbPositionAlignment[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPositionAlignment(void *p) {
      delete (static_cast<::EdbPositionAlignment*>(p));
   }
   static void deleteArray_EdbPositionAlignment(void *p) {
      delete [] (static_cast<::EdbPositionAlignment*>(p));
   }
   static void destruct_EdbPositionAlignment(void *p) {
      typedef ::EdbPositionAlignment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPositionAlignment(TBuffer &buf, void *obj) {
      ((::EdbPositionAlignment*)obj)->::EdbPositionAlignment::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPositionAlignment

//______________________________________________________________________________
void EdbAlignmentMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbAlignmentMap.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eEnv;
      R__b >> ePat1;
      R__b >> ePat2;
      R__b >> eDensityMax;
      R__b >> ePlate;
      eGlobal.Streamer(R__b);
      eGV1.Streamer(R__b);
      eGV2.Streamer(R__b);
      R__b >> eXcell;
      R__b >> eYcell;
      R__b >> eNx;
      R__b >> eNy;
      eMap.Streamer(R__b);
      R__b >> eGraphDX;
      R__b >> eGraphDY;
      R__b >> eGraphDZ1;
      R__b >> eGraphDZ2;
      R__b >> eOutputFile;
      R__b >> eMapTree;
      R__b.CheckByteCount(R__s, R__c, EdbAlignmentMap::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbAlignmentMap::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eEnv;
      R__b << ePat1;
      R__b << ePat2;
      R__b << eDensityMax;
      R__b << ePlate;
      eGlobal.Streamer(R__b);
      eGV1.Streamer(R__b);
      eGV2.Streamer(R__b);
      R__b << eXcell;
      R__b << eYcell;
      R__b << eNx;
      R__b << eNy;
      eMap.Streamer(R__b);
      R__b << eGraphDX;
      R__b << eGraphDY;
      R__b << eGraphDZ1;
      R__b << eGraphDZ2;
      R__b << eOutputFile;
      R__b << eMapTree;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbAlignmentMap(void *p) {
      return  p ? new(p) ::EdbAlignmentMap : new ::EdbAlignmentMap;
   }
   static void *newArray_EdbAlignmentMap(Long_t nElements, void *p) {
      return p ? new(p) ::EdbAlignmentMap[nElements] : new ::EdbAlignmentMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbAlignmentMap(void *p) {
      delete (static_cast<::EdbAlignmentMap*>(p));
   }
   static void deleteArray_EdbAlignmentMap(void *p) {
      delete [] (static_cast<::EdbAlignmentMap*>(p));
   }
   static void destruct_EdbAlignmentMap(void *p) {
      typedef ::EdbAlignmentMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbAlignmentMap(TBuffer &buf, void *obj) {
      ((::EdbAlignmentMap*)obj)->::EdbAlignmentMap::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbAlignmentMap

//______________________________________________________________________________
void EdbPeakProb::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPeakProb.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> ePeakRMSmin;
      R__b >> ePeakRMSmax;
      R__b >> ePeakNmin;
      R__b >> ePeakNmax;
      R__b >> ePeakRMS;
      R__b >> ePeakX;
      R__b >> ePeakY;
      R__b >> eProb;
      R__b >> eHD;
      R__b >> eHbin;
      R__b >> eHpeak;
      R__b >> eVerbosity;
      R__b.CheckByteCount(R__s, R__c, EdbPeakProb::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPeakProb::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << ePeakRMSmin;
      R__b << ePeakRMSmax;
      R__b << ePeakNmin;
      R__b << ePeakNmax;
      R__b << ePeakRMS;
      R__b << ePeakX;
      R__b << ePeakY;
      R__b << eProb;
      R__b << (TObject*)eHD;
      R__b << (TObject*)eHbin;
      R__b << (TObject*)eHpeak;
      R__b << eVerbosity;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPeakProb(void *p) {
      return  p ? new(p) ::EdbPeakProb : new ::EdbPeakProb;
   }
   static void *newArray_EdbPeakProb(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPeakProb[nElements] : new ::EdbPeakProb[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPeakProb(void *p) {
      delete (static_cast<::EdbPeakProb*>(p));
   }
   static void deleteArray_EdbPeakProb(void *p) {
      delete [] (static_cast<::EdbPeakProb*>(p));
   }
   static void destruct_EdbPeakProb(void *p) {
      typedef ::EdbPeakProb current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPeakProb(TBuffer &buf, void *obj) {
      ((::EdbPeakProb*)obj)->::EdbPeakProb::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPeakProb

//______________________________________________________________________________
void EdbTestAl::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTestAl.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eITMAX;
      R__b >> eOCMAX;
      R__b >> eOffset;
      R__b >> eBinSize;
      R__b >> eS1;
      R__b >> eS2;
      R__b >> eBinTree;
      R__b >> eT;
      R__b >> eFile;
      R__b >> HD;
      R__b >> HDF;
      R__b >> HDF2;
      R__b.ReadStaticArray((int*)eN);
      R__b.ReadStaticArray((float*)eDmin);
      R__b.ReadStaticArray((float*)eDmax);
      R__b.ReadStaticArray((float*)eD0);
      R__b >> eMaxBin;
      R__b.CheckByteCount(R__s, R__c, EdbTestAl::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTestAl::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eITMAX;
      R__b << eOCMAX;
      R__b << eOffset;
      R__b << eBinSize;
      R__b << eS1;
      R__b << eS2;
      R__b << eBinTree;
      R__b << eT;
      R__b << eFile;
      R__b << (TObject*)HD;
      R__b << (TObject*)HDF;
      R__b << (TObject*)HDF2;
      R__b.WriteArray(eN, 4);
      R__b.WriteArray(eDmin, 4);
      R__b.WriteArray(eDmax, 4);
      R__b.WriteArray(eD0, 4);
      R__b << eMaxBin;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTestAl(void *p) {
      return  p ? new(p) ::EdbTestAl : new ::EdbTestAl;
   }
   static void *newArray_EdbTestAl(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTestAl[nElements] : new ::EdbTestAl[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTestAl(void *p) {
      delete (static_cast<::EdbTestAl*>(p));
   }
   static void deleteArray_EdbTestAl(void *p) {
      delete [] (static_cast<::EdbTestAl*>(p));
   }
   static void destruct_EdbTestAl(void *p) {
      typedef ::EdbTestAl current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTestAl(TBuffer &buf, void *obj) {
      ((::EdbTestAl*)obj)->::EdbTestAl::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTestAl

//______________________________________________________________________________
void EdbAlignmentV::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbAlignmentV.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((float*)eDVsame);
      int R__i;
      for (R__i = 0; R__i < 2; R__i++)
         ePC[R__i].Streamer(R__b);
      R__b >> eXmarg;
      R__b >> eYmarg;
      for (R__i = 0; R__i < 2; R__i++)
         eS[R__i].Streamer(R__b);
      R__b >> eUseAffCorr;
      for (R__i = 0; R__i < 2; R__i++)
         eCorr[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 2; R__i++)
         eCorrL[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 14; R__i++)
         eH[0][R__i].Streamer(R__b);
      eHxy.Streamer(R__b);
      R__b >> eDoubletsRate;
      R__b >> eOutputFile;
      R__b.CheckByteCount(R__s, R__c, EdbAlignmentV::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbAlignmentV::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(eDVsame, 4);
      int R__i;
      for (R__i = 0; R__i < 2; R__i++)
         ePC[R__i].Streamer(R__b);
      R__b << eXmarg;
      R__b << eYmarg;
      for (R__i = 0; R__i < 2; R__i++)
         eS[R__i].Streamer(R__b);
      R__b << eUseAffCorr;
      for (R__i = 0; R__i < 2; R__i++)
         eCorr[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 2; R__i++)
         eCorrL[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 14; R__i++)
         eH[0][R__i].Streamer(R__b);
      eHxy.Streamer(R__b);
      R__b << (TObject*)eDoubletsRate;
      R__b << eOutputFile;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbAlignmentV(void *p) {
      return  p ? new(p) ::EdbAlignmentV : new ::EdbAlignmentV;
   }
   static void *newArray_EdbAlignmentV(Long_t nElements, void *p) {
      return p ? new(p) ::EdbAlignmentV[nElements] : new ::EdbAlignmentV[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbAlignmentV(void *p) {
      delete (static_cast<::EdbAlignmentV*>(p));
   }
   static void deleteArray_EdbAlignmentV(void *p) {
      delete [] (static_cast<::EdbAlignmentV*>(p));
   }
   static void destruct_EdbAlignmentV(void *p) {
      typedef ::EdbAlignmentV current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbAlignmentV(TBuffer &buf, void *obj) {
      ((::EdbAlignmentV*)obj)->::EdbAlignmentV::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbAlignmentV

//______________________________________________________________________________
void EdbPlateAlignment::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPlateAlignment.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbAlignmentV::Streamer(R__b);
      R__b.ReadStaticArray((float*)eSigma);
      R__b >> eOffsetMax;
      R__b >> eDZ;
      R__b >> eDPHI;
      R__b.ReadStaticArray((float*)eDoublets);
      R__b >> eNoScale;
      R__b >> eDoTestAl;
      R__b >> eTestAlOK;
      R__b >> eDoCoarse;
      R__b >> eCoarseOK;
      R__b >> eDoFine;
      R__b >> eFineOK;
      R__b >> eRankCouples;
      R__b >> eSaveCouples;
      R__b >> eStatus;
      R__b >> eNcoins;
      R__b >> eFineMin;
      R__b >> eCoarseMin;
      eH_zphi_coarse.Streamer(R__b);
      eH_xy_coarse.Streamer(R__b);
      eH_xy_final.Streamer(R__b);
      eSegCouples.Streamer(R__b);
      R__b >> eDoCorrectBeforeSaving;
      R__b.CheckByteCount(R__s, R__c, EdbPlateAlignment::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPlateAlignment::IsA(), kTRUE);
      EdbAlignmentV::Streamer(R__b);
      R__b.WriteArray(eSigma, 2);
      R__b << eOffsetMax;
      R__b << eDZ;
      R__b << eDPHI;
      R__b.WriteArray(eDoublets, 4);
      R__b << eNoScale;
      R__b << eDoTestAl;
      R__b << eTestAlOK;
      R__b << eDoCoarse;
      R__b << eCoarseOK;
      R__b << eDoFine;
      R__b << eFineOK;
      R__b << eRankCouples;
      R__b << eSaveCouples;
      R__b << eStatus;
      R__b << eNcoins;
      R__b << eFineMin;
      R__b << eCoarseMin;
      eH_zphi_coarse.Streamer(R__b);
      eH_xy_coarse.Streamer(R__b);
      eH_xy_final.Streamer(R__b);
      eSegCouples.Streamer(R__b);
      R__b << eDoCorrectBeforeSaving;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPlateAlignment(void *p) {
      return  p ? new(p) ::EdbPlateAlignment : new ::EdbPlateAlignment;
   }
   static void *newArray_EdbPlateAlignment(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPlateAlignment[nElements] : new ::EdbPlateAlignment[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPlateAlignment(void *p) {
      delete (static_cast<::EdbPlateAlignment*>(p));
   }
   static void deleteArray_EdbPlateAlignment(void *p) {
      delete [] (static_cast<::EdbPlateAlignment*>(p));
   }
   static void destruct_EdbPlateAlignment(void *p) {
      typedef ::EdbPlateAlignment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPlateAlignment(TBuffer &buf, void *obj) {
      ((::EdbPlateAlignment*)obj)->::EdbPlateAlignment::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPlateAlignment

//______________________________________________________________________________
void EdbLinking::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbLinking.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbAlignmentV::Streamer(R__b);
      R__b >> eDoSaveCouples;
      R__b >> eDoCorrectAngles;
      R__b >> eDoCorrectShrinkage;
      R__b >> eDoFullLinking;
      R__b >> eDoDumpDoubletsTree;
      R__b >> eCPRankingAlg;
      R__b >> eDRfull;
      R__b >> eDTfull;
      R__b >> eCHI2Pmax;
      R__b >> eChi2Acorr;
      R__b >> eNsigmaEQshr;
      R__b >> eNsigmaEQlnk;
      R__b >> eShr0;
      R__b >> eDShr;
      R__b >> eBinOK;
      eCond.Streamer(R__b);
      R__b.ReadStaticArray((int*)eNshr);
      R__b >> eNcorrMin;
      eSegCouples.Streamer(R__b);
      eL1.Streamer(R__b);
      eL2.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 2; R__i++)
         eHdxyShr[R__i].Streamer(R__b);
      R__b.StreamObject(&(eRemoveDoublets),typeid(eRemoveDoublets));
      R__b.CheckByteCount(R__s, R__c, EdbLinking::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbLinking::IsA(), kTRUE);
      EdbAlignmentV::Streamer(R__b);
      R__b << eDoSaveCouples;
      R__b << eDoCorrectAngles;
      R__b << eDoCorrectShrinkage;
      R__b << eDoFullLinking;
      R__b << eDoDumpDoubletsTree;
      R__b << eCPRankingAlg;
      R__b << eDRfull;
      R__b << eDTfull;
      R__b << eCHI2Pmax;
      R__b << eChi2Acorr;
      R__b << eNsigmaEQshr;
      R__b << eNsigmaEQlnk;
      R__b << eShr0;
      R__b << eDShr;
      R__b << eBinOK;
      eCond.Streamer(R__b);
      R__b.WriteArray(eNshr, 2);
      R__b << eNcorrMin;
      eSegCouples.Streamer(R__b);
      eL1.Streamer(R__b);
      eL2.Streamer(R__b);
      int R__i;
      for (R__i = 0; R__i < 2; R__i++)
         eHdxyShr[R__i].Streamer(R__b);
      R__b.StreamObject(&(eRemoveDoublets),typeid(eRemoveDoublets));
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbLinking(void *p) {
      return  p ? new(p) ::EdbLinking : new ::EdbLinking;
   }
   static void *newArray_EdbLinking(Long_t nElements, void *p) {
      return p ? new(p) ::EdbLinking[nElements] : new ::EdbLinking[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbLinking(void *p) {
      delete (static_cast<::EdbLinking*>(p));
   }
   static void deleteArray_EdbLinking(void *p) {
      delete [] (static_cast<::EdbLinking*>(p));
   }
   static void destruct_EdbLinking(void *p) {
      typedef ::EdbLinking current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbLinking(TBuffer &buf, void *obj) {
      ((::EdbLinking*)obj)->::EdbLinking::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbLinking

//______________________________________________________________________________
void EdbCorrectionBin::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbCorrectionBin.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eAl.Streamer(R__b);
      eLayer.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbCorrectionBin::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbCorrectionBin::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eAl.Streamer(R__b);
      eLayer.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCorrectionBin(void *p) {
      return  p ? new(p) ::EdbCorrectionBin : new ::EdbCorrectionBin;
   }
   static void *newArray_EdbCorrectionBin(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCorrectionBin[nElements] : new ::EdbCorrectionBin[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCorrectionBin(void *p) {
      delete (static_cast<::EdbCorrectionBin*>(p));
   }
   static void deleteArray_EdbCorrectionBin(void *p) {
      delete [] (static_cast<::EdbCorrectionBin*>(p));
   }
   static void destruct_EdbCorrectionBin(void *p) {
      typedef ::EdbCorrectionBin current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCorrectionBin(TBuffer &buf, void *obj) {
      ((::EdbCorrectionBin*)obj)->::EdbCorrectionBin::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCorrectionBin

//______________________________________________________________________________
void EdbCorrectionMapper::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbCorrectionMapper.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbCorrectionBin::Streamer(R__b);
      eMapAl.Streamer(R__b);
      eMap.Streamer(R__b);
      eHdxy.Streamer(R__b);
      eHdtxy.Streamer(R__b);
      eHdz.Streamer(R__b);
      eHshr.Streamer(R__b);
      eHdty_ty.Streamer(R__b);
      eHxy1.Streamer(R__b);
      eHxy2.Streamer(R__b);
      eHtxty1.Streamer(R__b);
      eHtxty2.Streamer(R__b);
      eID1.Streamer(R__b);
      eID2.Streamer(R__b);
      R__b >> eZ1;
      R__b >> eZ2;
      R__b >> eNcpMin;
      R__b.CheckByteCount(R__s, R__c, EdbCorrectionMapper::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbCorrectionMapper::IsA(), kTRUE);
      EdbCorrectionBin::Streamer(R__b);
      eMapAl.Streamer(R__b);
      eMap.Streamer(R__b);
      eHdxy.Streamer(R__b);
      eHdtxy.Streamer(R__b);
      eHdz.Streamer(R__b);
      eHshr.Streamer(R__b);
      eHdty_ty.Streamer(R__b);
      eHxy1.Streamer(R__b);
      eHxy2.Streamer(R__b);
      eHtxty1.Streamer(R__b);
      eHtxty2.Streamer(R__b);
      eID1.Streamer(R__b);
      eID2.Streamer(R__b);
      R__b << eZ1;
      R__b << eZ2;
      R__b << eNcpMin;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCorrectionMapper(void *p) {
      return  p ? new(p) ::EdbCorrectionMapper : new ::EdbCorrectionMapper;
   }
   static void *newArray_EdbCorrectionMapper(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCorrectionMapper[nElements] : new ::EdbCorrectionMapper[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCorrectionMapper(void *p) {
      delete (static_cast<::EdbCorrectionMapper*>(p));
   }
   static void deleteArray_EdbCorrectionMapper(void *p) {
      delete [] (static_cast<::EdbCorrectionMapper*>(p));
   }
   static void destruct_EdbCorrectionMapper(void *p) {
      typedef ::EdbCorrectionMapper current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCorrectionMapper(TBuffer &buf, void *obj) {
      ((::EdbCorrectionMapper*)obj)->::EdbCorrectionMapper::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCorrectionMapper

namespace {
  void TriggerDictionaryInitialization_AlignmentCint_Impl() {
    static const char* headers[] = {
"EdbPatCell2.h",
"EdbPositionAlignment.h",
"EdbAlignmentMap.h",
"EdbPeakProb.h",
"EdbTestAl.h",
"EdbAlignmentV.h",
"EdbPlateAlignment.h",
"EdbLinking.h",
"EdbCorrectionMapper.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libAlignment/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "AlignmentCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbPatCell2.h")))  EdbPatCell2;
class __attribute__((annotate("$clingAutoload$EdbPositionAlignment.h")))  EdbPositionAlignment;
class __attribute__((annotate("$clingAutoload$EdbAlignmentMap.h")))  EdbAlignmentMap;
class __attribute__((annotate("$clingAutoload$EdbPeakProb.h")))  EdbPeakProb;
class __attribute__((annotate("$clingAutoload$EdbTestAl.h")))  EdbTestAl;
class __attribute__((annotate("$clingAutoload$EdbAlignmentV.h")))  EdbAlignmentV;
class __attribute__((annotate("$clingAutoload$EdbPlateAlignment.h")))  EdbPlateAlignment;
class __attribute__((annotate("$clingAutoload$EdbLinking.h")))  EdbLinking;
class __attribute__((annotate("$clingAutoload$EdbCorrectionMapper.h")))  EdbCorrectionBin;
class __attribute__((annotate("$clingAutoload$EdbCorrectionMapper.h")))  EdbCorrectionMapper;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "AlignmentCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbPatCell2.h"
#include "EdbPositionAlignment.h"
#include "EdbAlignmentMap.h"
#include "EdbPeakProb.h"
#include "EdbTestAl.h"
#include "EdbAlignmentV.h"
#include "EdbPlateAlignment.h"
#include "EdbLinking.h"
#include "EdbCorrectionMapper.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbAlignmentMap", payloadCode, "@",
"EdbAlignmentV", payloadCode, "@",
"EdbCorrectionBin", payloadCode, "@",
"EdbCorrectionMapper", payloadCode, "@",
"EdbLinking", payloadCode, "@",
"EdbPatCell2", payloadCode, "@",
"EdbPeakProb", payloadCode, "@",
"EdbPlateAlignment", payloadCode, "@",
"EdbPositionAlignment", payloadCode, "@",
"EdbTestAl", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("AlignmentCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_AlignmentCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_AlignmentCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_AlignmentCint() {
  TriggerDictionaryInitialization_AlignmentCint_Impl();
}
