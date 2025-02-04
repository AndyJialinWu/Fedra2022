// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EmathCint
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
#include "TIndexCell.h"
#include "EdbMath.h"
#include "EdbCell2.h"
#include "EdbCell1.h"
#include "EdbMask.h"
#include "EdbCombGen.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TIndexCell(void *p = nullptr);
   static void *newArray_TIndexCell(Long_t size, void *p);
   static void delete_TIndexCell(void *p);
   static void deleteArray_TIndexCell(void *p);
   static void destruct_TIndexCell(void *p);
   static void streamer_TIndexCell(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndexCell*)
   {
      ::TIndexCell *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TIndexCell >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TIndexCell", ::TIndexCell::Class_Version(), "TIndexCell.h", 19,
                  typeid(::TIndexCell), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TIndexCell::Dictionary, isa_proxy, 16,
                  sizeof(::TIndexCell) );
      instance.SetNew(&new_TIndexCell);
      instance.SetNewArray(&newArray_TIndexCell);
      instance.SetDelete(&delete_TIndexCell);
      instance.SetDeleteArray(&deleteArray_TIndexCell);
      instance.SetDestructor(&destruct_TIndexCell);
      instance.SetStreamerFunc(&streamer_TIndexCell);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndexCell*)
   {
      return GenerateInitInstanceLocal(static_cast<::TIndexCell*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TIndexCell*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TIndexCellIter(void *p);
   static void deleteArray_TIndexCellIter(void *p);
   static void destruct_TIndexCellIter(void *p);
   static void streamer_TIndexCellIter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndexCellIter*)
   {
      ::TIndexCellIter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TIndexCellIter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TIndexCellIter", ::TIndexCellIter::Class_Version(), "TIndexCell.h", 110,
                  typeid(::TIndexCellIter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TIndexCellIter::Dictionary, isa_proxy, 16,
                  sizeof(::TIndexCellIter) );
      instance.SetDelete(&delete_TIndexCellIter);
      instance.SetDeleteArray(&deleteArray_TIndexCellIter);
      instance.SetDestructor(&destruct_TIndexCellIter);
      instance.SetStreamerFunc(&streamer_TIndexCellIter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndexCellIter*)
   {
      return GenerateInitInstanceLocal(static_cast<::TIndexCellIter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TIndexCellIter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TIndexCellIterV(void *p);
   static void deleteArray_TIndexCellIterV(void *p);
   static void destruct_TIndexCellIterV(void *p);
   static void streamer_TIndexCellIterV(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndexCellIterV*)
   {
      ::TIndexCellIterV *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TIndexCellIterV >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TIndexCellIterV", ::TIndexCellIterV::Class_Version(), "TIndexCell.h", 142,
                  typeid(::TIndexCellIterV), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TIndexCellIterV::Dictionary, isa_proxy, 16,
                  sizeof(::TIndexCellIterV) );
      instance.SetDelete(&delete_TIndexCellIterV);
      instance.SetDeleteArray(&deleteArray_TIndexCellIterV);
      instance.SetDestructor(&destruct_TIndexCellIterV);
      instance.SetStreamerFunc(&streamer_TIndexCellIterV);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndexCellIterV*)
   {
      return GenerateInitInstanceLocal(static_cast<::TIndexCellIterV*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TIndexCellIterV*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbMath(void *p = nullptr);
   static void *newArray_EdbMath(Long_t size, void *p);
   static void delete_EdbMath(void *p);
   static void deleteArray_EdbMath(void *p);
   static void destruct_EdbMath(void *p);
   static void streamer_EdbMath(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbMath*)
   {
      ::EdbMath *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbMath >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbMath", ::EdbMath::Class_Version(), "EdbMath.h", 17,
                  typeid(::EdbMath), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbMath::Dictionary, isa_proxy, 16,
                  sizeof(::EdbMath) );
      instance.SetNew(&new_EdbMath);
      instance.SetNewArray(&newArray_EdbMath);
      instance.SetDelete(&delete_EdbMath);
      instance.SetDeleteArray(&deleteArray_EdbMath);
      instance.SetDestructor(&destruct_EdbMath);
      instance.SetStreamerFunc(&streamer_EdbMath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbMath*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbMath*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbMath*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TIndex2(void *p = nullptr);
   static void *newArray_TIndex2(Long_t size, void *p);
   static void delete_TIndex2(void *p);
   static void deleteArray_TIndex2(void *p);
   static void destruct_TIndex2(void *p);
   static void streamer_TIndex2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TIndex2*)
   {
      ::TIndex2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TIndex2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TIndex2", ::TIndex2::Class_Version(), "EdbMath.h", 49,
                  typeid(::TIndex2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TIndex2::Dictionary, isa_proxy, 16,
                  sizeof(::TIndex2) );
      instance.SetNew(&new_TIndex2);
      instance.SetNewArray(&newArray_TIndex2);
      instance.SetDelete(&delete_TIndex2);
      instance.SetDeleteArray(&deleteArray_TIndex2);
      instance.SetDestructor(&destruct_TIndex2);
      instance.SetStreamerFunc(&streamer_TIndex2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TIndex2*)
   {
      return GenerateInitInstanceLocal(static_cast<::TIndex2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TIndex2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbFilter2D(void *p = nullptr);
   static void *newArray_EdbFilter2D(Long_t size, void *p);
   static void delete_EdbFilter2D(void *p);
   static void deleteArray_EdbFilter2D(void *p);
   static void destruct_EdbFilter2D(void *p);
   static void streamer_EdbFilter2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbFilter2D*)
   {
      ::EdbFilter2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbFilter2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbFilter2D", ::EdbFilter2D::Class_Version(), "EdbMath.h", 72,
                  typeid(::EdbFilter2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbFilter2D::Dictionary, isa_proxy, 16,
                  sizeof(::EdbFilter2D) );
      instance.SetNew(&new_EdbFilter2D);
      instance.SetNewArray(&newArray_EdbFilter2D);
      instance.SetDelete(&delete_EdbFilter2D);
      instance.SetDeleteArray(&deleteArray_EdbFilter2D);
      instance.SetDestructor(&destruct_EdbFilter2D);
      instance.SetStreamerFunc(&streamer_EdbFilter2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbFilter2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbFilter2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbFilter2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbH1(void *p = nullptr);
   static void *newArray_EdbH1(Long_t size, void *p);
   static void delete_EdbH1(void *p);
   static void deleteArray_EdbH1(void *p);
   static void destruct_EdbH1(void *p);
   static void streamer_EdbH1(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbH1*)
   {
      ::EdbH1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbH1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbH1", ::EdbH1::Class_Version(), "EdbCell1.h", 17,
                  typeid(::EdbH1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbH1::Dictionary, isa_proxy, 16,
                  sizeof(::EdbH1) );
      instance.SetNew(&new_EdbH1);
      instance.SetNewArray(&newArray_EdbH1);
      instance.SetDelete(&delete_EdbH1);
      instance.SetDeleteArray(&deleteArray_EdbH1);
      instance.SetDestructor(&destruct_EdbH1);
      instance.SetStreamerFunc(&streamer_EdbH1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbH1*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbH1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbH1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCell1(void *p = nullptr);
   static void *newArray_EdbCell1(Long_t size, void *p);
   static void delete_EdbCell1(void *p);
   static void deleteArray_EdbCell1(void *p);
   static void destruct_EdbCell1(void *p);
   static void streamer_EdbCell1(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCell1*)
   {
      ::EdbCell1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCell1 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCell1", ::EdbCell1::Class_Version(), "EdbCell1.h", 117,
                  typeid(::EdbCell1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCell1::Dictionary, isa_proxy, 16,
                  sizeof(::EdbCell1) );
      instance.SetNew(&new_EdbCell1);
      instance.SetNewArray(&newArray_EdbCell1);
      instance.SetDelete(&delete_EdbCell1);
      instance.SetDeleteArray(&deleteArray_EdbCell1);
      instance.SetDestructor(&destruct_EdbCell1);
      instance.SetStreamerFunc(&streamer_EdbCell1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCell1*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCell1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCell1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbH2(void *p = nullptr);
   static void *newArray_EdbH2(Long_t size, void *p);
   static void delete_EdbH2(void *p);
   static void deleteArray_EdbH2(void *p);
   static void destruct_EdbH2(void *p);
   static void streamer_EdbH2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbH2*)
   {
      ::EdbH2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbH2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbH2", ::EdbH2::Class_Version(), "EdbCell2.h", 19,
                  typeid(::EdbH2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbH2::Dictionary, isa_proxy, 16,
                  sizeof(::EdbH2) );
      instance.SetNew(&new_EdbH2);
      instance.SetNewArray(&newArray_EdbH2);
      instance.SetDelete(&delete_EdbH2);
      instance.SetDeleteArray(&deleteArray_EdbH2);
      instance.SetDestructor(&destruct_EdbH2);
      instance.SetStreamerFunc(&streamer_EdbH2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbH2*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbH2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbH2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPeak2(void *p = nullptr);
   static void *newArray_EdbPeak2(Long_t size, void *p);
   static void delete_EdbPeak2(void *p);
   static void deleteArray_EdbPeak2(void *p);
   static void destruct_EdbPeak2(void *p);
   static void streamer_EdbPeak2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPeak2*)
   {
      ::EdbPeak2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPeak2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPeak2", ::EdbPeak2::Class_Version(), "EdbCell2.h", 105,
                  typeid(::EdbPeak2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPeak2::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPeak2) );
      instance.SetNew(&new_EdbPeak2);
      instance.SetNewArray(&newArray_EdbPeak2);
      instance.SetDelete(&delete_EdbPeak2);
      instance.SetDeleteArray(&deleteArray_EdbPeak2);
      instance.SetDestructor(&destruct_EdbPeak2);
      instance.SetStreamerFunc(&streamer_EdbPeak2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPeak2*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPeak2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPeak2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCell2(void *p = nullptr);
   static void *newArray_EdbCell2(Long_t size, void *p);
   static void delete_EdbCell2(void *p);
   static void deleteArray_EdbCell2(void *p);
   static void destruct_EdbCell2(void *p);
   static void streamer_EdbCell2(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCell2*)
   {
      ::EdbCell2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCell2 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCell2", ::EdbCell2::Class_Version(), "EdbCell2.h", 148,
                  typeid(::EdbCell2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCell2::Dictionary, isa_proxy, 17,
                  sizeof(::EdbCell2) );
      instance.SetNew(&new_EdbCell2);
      instance.SetNewArray(&newArray_EdbCell2);
      instance.SetDelete(&delete_EdbCell2);
      instance.SetDeleteArray(&deleteArray_EdbCell2);
      instance.SetDestructor(&destruct_EdbCell2);
      instance.SetStreamerFunc(&streamer_EdbCell2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCell2*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCell2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCell2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbMask(void *p = nullptr);
   static void *newArray_EdbMask(Long_t size, void *p);
   static void delete_EdbMask(void *p);
   static void deleteArray_EdbMask(void *p);
   static void destruct_EdbMask(void *p);
   static void streamer_EdbMask(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbMask*)
   {
      ::EdbMask *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbMask >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbMask", ::EdbMask::Class_Version(), "EdbMask.h", 8,
                  typeid(::EdbMask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbMask::Dictionary, isa_proxy, 16,
                  sizeof(::EdbMask) );
      instance.SetNew(&new_EdbMask);
      instance.SetNewArray(&newArray_EdbMask);
      instance.SetDelete(&delete_EdbMask);
      instance.SetDeleteArray(&deleteArray_EdbMask);
      instance.SetDestructor(&destruct_EdbMask);
      instance.SetStreamerFunc(&streamer_EdbMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbMask*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbMask*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbMask*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCombGen(void *p = nullptr);
   static void *newArray_EdbCombGen(Long_t size, void *p);
   static void delete_EdbCombGen(void *p);
   static void deleteArray_EdbCombGen(void *p);
   static void destruct_EdbCombGen(void *p);
   static void streamer_EdbCombGen(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCombGen*)
   {
      ::EdbCombGen *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCombGen >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCombGen", ::EdbCombGen::Class_Version(), "EdbCombGen.h", 15,
                  typeid(::EdbCombGen), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCombGen::Dictionary, isa_proxy, 16,
                  sizeof(::EdbCombGen) );
      instance.SetNew(&new_EdbCombGen);
      instance.SetNewArray(&newArray_EdbCombGen);
      instance.SetDelete(&delete_EdbCombGen);
      instance.SetDeleteArray(&deleteArray_EdbCombGen);
      instance.SetDestructor(&destruct_EdbCombGen);
      instance.SetStreamerFunc(&streamer_EdbCombGen);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCombGen*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCombGen*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCombGen*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TIndexCell::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TIndexCell::Class_Name()
{
   return "TIndexCell";
}

//______________________________________________________________________________
const char *TIndexCell::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexCell*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TIndexCell::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexCell*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIndexCell::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexCell*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIndexCell::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexCell*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TIndexCellIter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TIndexCellIter::Class_Name()
{
   return "TIndexCellIter";
}

//______________________________________________________________________________
const char *TIndexCellIter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TIndexCellIter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIndexCellIter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIndexCellIter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TIndexCellIterV::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TIndexCellIterV::Class_Name()
{
   return "TIndexCellIterV";
}

//______________________________________________________________________________
const char *TIndexCellIterV::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIterV*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TIndexCellIterV::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIterV*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIndexCellIterV::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIterV*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIndexCellIterV::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndexCellIterV*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbMath::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbMath::Class_Name()
{
   return "EdbMath";
}

//______________________________________________________________________________
const char *EdbMath::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMath*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbMath::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMath*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbMath::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMath*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbMath::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMath*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TIndex2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TIndex2::Class_Name()
{
   return "TIndex2";
}

//______________________________________________________________________________
const char *TIndex2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndex2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TIndex2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TIndex2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TIndex2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndex2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TIndex2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TIndex2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbFilter2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbFilter2D::Class_Name()
{
   return "EdbFilter2D";
}

//______________________________________________________________________________
const char *EdbFilter2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbFilter2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbFilter2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbFilter2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbFilter2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbFilter2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbFilter2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbFilter2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbH1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbH1::Class_Name()
{
   return "EdbH1";
}

//______________________________________________________________________________
const char *EdbH1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbH1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbH1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbH1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbH1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbH1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbH1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbH1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCell1::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCell1::Class_Name()
{
   return "EdbCell1";
}

//______________________________________________________________________________
const char *EdbCell1::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCell1*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCell1::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCell1*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCell1::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCell1*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCell1::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCell1*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbH2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbH2::Class_Name()
{
   return "EdbH2";
}

//______________________________________________________________________________
const char *EdbH2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbH2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbH2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbH2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbH2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbH2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbH2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbH2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPeak2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPeak2::Class_Name()
{
   return "EdbPeak2";
}

//______________________________________________________________________________
const char *EdbPeak2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPeak2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPeak2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPeak2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPeak2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPeak2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPeak2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPeak2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCell2::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCell2::Class_Name()
{
   return "EdbCell2";
}

//______________________________________________________________________________
const char *EdbCell2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCell2*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCell2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCell2*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCell2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCell2*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCell2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCell2*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbMask::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbMask::Class_Name()
{
   return "EdbMask";
}

//______________________________________________________________________________
const char *EdbMask::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMask*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbMask::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMask*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbMask::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMask*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbMask::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMask*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCombGen::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCombGen::Class_Name()
{
   return "EdbCombGen";
}

//______________________________________________________________________________
const char *EdbCombGen::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCombGen*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCombGen::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCombGen*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCombGen::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCombGen*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCombGen::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCombGen*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TIndexCell::Streamer(TBuffer &R__b)
{
   // Stream an object of class TIndexCell.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fValue;
      R__b >> fList;
      R__b.CheckByteCount(R__s, R__c, TIndexCell::IsA());
   } else {
      R__c = R__b.WriteVersion(TIndexCell::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fValue;
      R__b << fList;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TIndexCell(void *p) {
      return  p ? new(p) ::TIndexCell : new ::TIndexCell;
   }
   static void *newArray_TIndexCell(Long_t nElements, void *p) {
      return p ? new(p) ::TIndexCell[nElements] : new ::TIndexCell[nElements];
   }
   // Wrapper around operator delete
   static void delete_TIndexCell(void *p) {
      delete (static_cast<::TIndexCell*>(p));
   }
   static void deleteArray_TIndexCell(void *p) {
      delete [] (static_cast<::TIndexCell*>(p));
   }
   static void destruct_TIndexCell(void *p) {
      typedef ::TIndexCell current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TIndexCell(TBuffer &buf, void *obj) {
      ((::TIndexCell*)obj)->::TIndexCell::Streamer(buf);
   }
} // end of namespace ROOT for class ::TIndexCell

//______________________________________________________________________________
void TIndexCellIter::Streamer(TBuffer &R__b)
{
   // Stream an object of class TIndexCellIter.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TIndexCellIter(void *p) {
      delete (static_cast<::TIndexCellIter*>(p));
   }
   static void deleteArray_TIndexCellIter(void *p) {
      delete [] (static_cast<::TIndexCellIter*>(p));
   }
   static void destruct_TIndexCellIter(void *p) {
      typedef ::TIndexCellIter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TIndexCellIter(TBuffer &buf, void *obj) {
      ((::TIndexCellIter*)obj)->::TIndexCellIter::Streamer(buf);
   }
} // end of namespace ROOT for class ::TIndexCellIter

//______________________________________________________________________________
void TIndexCellIterV::Streamer(TBuffer &R__b)
{
   // Stream an object of class TIndexCellIterV.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TIndexCellIterV(void *p) {
      delete (static_cast<::TIndexCellIterV*>(p));
   }
   static void deleteArray_TIndexCellIterV(void *p) {
      delete [] (static_cast<::TIndexCellIterV*>(p));
   }
   static void destruct_TIndexCellIterV(void *p) {
      typedef ::TIndexCellIterV current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TIndexCellIterV(TBuffer &buf, void *obj) {
      ((::TIndexCellIterV*)obj)->::TIndexCellIterV::Streamer(buf);
   }
} // end of namespace ROOT for class ::TIndexCellIterV

//______________________________________________________________________________
void EdbMath::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbMath.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b.CheckByteCount(R__s, R__c, EdbMath::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbMath::IsA(), kTRUE);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbMath(void *p) {
      return  p ? new(p) ::EdbMath : new ::EdbMath;
   }
   static void *newArray_EdbMath(Long_t nElements, void *p) {
      return p ? new(p) ::EdbMath[nElements] : new ::EdbMath[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbMath(void *p) {
      delete (static_cast<::EdbMath*>(p));
   }
   static void deleteArray_EdbMath(void *p) {
      delete [] (static_cast<::EdbMath*>(p));
   }
   static void destruct_EdbMath(void *p) {
      typedef ::EdbMath current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbMath(TBuffer &buf, void *obj) {
      ((::EdbMath*)obj)->::EdbMath::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbMath

//______________________________________________________________________________
void TIndex2::Streamer(TBuffer &R__b)
{
   // Stream an object of class TIndex2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TArrayD::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, TIndex2::IsA());
   } else {
      R__c = R__b.WriteVersion(TIndex2::IsA(), kTRUE);
      TArrayD::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TIndex2(void *p) {
      return  p ? new(p) ::TIndex2 : new ::TIndex2;
   }
   static void *newArray_TIndex2(Long_t nElements, void *p) {
      return p ? new(p) ::TIndex2[nElements] : new ::TIndex2[nElements];
   }
   // Wrapper around operator delete
   static void delete_TIndex2(void *p) {
      delete (static_cast<::TIndex2*>(p));
   }
   static void deleteArray_TIndex2(void *p) {
      delete [] (static_cast<::TIndex2*>(p));
   }
   static void destruct_TIndex2(void *p) {
      typedef ::TIndex2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TIndex2(TBuffer &buf, void *obj) {
      ((::TIndex2*)obj)->::TIndex2::Streamer(buf);
   }
} // end of namespace ROOT for class ::TIndex2

//______________________________________________________________________________
void EdbFilter2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbFilter2D.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> eKX;
      R__b >> eKY;
      R__b.CheckByteCount(R__s, R__c, EdbFilter2D::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbFilter2D::IsA(), kTRUE);
      R__b << eKX;
      R__b << eKY;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbFilter2D(void *p) {
      return  p ? new(p) ::EdbFilter2D : new ::EdbFilter2D;
   }
   static void *newArray_EdbFilter2D(Long_t nElements, void *p) {
      return p ? new(p) ::EdbFilter2D[nElements] : new ::EdbFilter2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbFilter2D(void *p) {
      delete (static_cast<::EdbFilter2D*>(p));
   }
   static void deleteArray_EdbFilter2D(void *p) {
      delete [] (static_cast<::EdbFilter2D*>(p));
   }
   static void destruct_EdbFilter2D(void *p) {
      typedef ::EdbFilter2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbFilter2D(TBuffer &buf, void *obj) {
      ((::EdbFilter2D*)obj)->::EdbFilter2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbFilter2D

//______________________________________________________________________________
void EdbH1::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbH1.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eN;
      R__b >> eMin;
      R__b >> eMax;
      R__b >> eBin;
      R__b >> eNcell;
      R__b.CheckByteCount(R__s, R__c, EdbH1::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbH1::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eN;
      R__b << eMin;
      R__b << eMax;
      R__b << eBin;
      R__b << eNcell;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbH1(void *p) {
      return  p ? new(p) ::EdbH1 : new ::EdbH1;
   }
   static void *newArray_EdbH1(Long_t nElements, void *p) {
      return p ? new(p) ::EdbH1[nElements] : new ::EdbH1[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbH1(void *p) {
      delete (static_cast<::EdbH1*>(p));
   }
   static void deleteArray_EdbH1(void *p) {
      delete [] (static_cast<::EdbH1*>(p));
   }
   static void destruct_EdbH1(void *p) {
      typedef ::EdbH1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbH1(TBuffer &buf, void *obj) {
      ((::EdbH1*)obj)->::EdbH1::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbH1

//______________________________________________________________________________
void EdbCell1::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbCell1.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbH1::Streamer(R__b);
      R__b >> eCellLim;
      R__b.CheckByteCount(R__s, R__c, EdbCell1::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbCell1::IsA(), kTRUE);
      EdbH1::Streamer(R__b);
      R__b << eCellLim;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCell1(void *p) {
      return  p ? new(p) ::EdbCell1 : new ::EdbCell1;
   }
   static void *newArray_EdbCell1(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCell1[nElements] : new ::EdbCell1[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCell1(void *p) {
      delete (static_cast<::EdbCell1*>(p));
   }
   static void deleteArray_EdbCell1(void *p) {
      delete [] (static_cast<::EdbCell1*>(p));
   }
   static void destruct_EdbCell1(void *p) {
      typedef ::EdbCell1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCell1(TBuffer &buf, void *obj) {
      ((::EdbCell1*)obj)->::EdbCell1::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCell1

//______________________________________________________________________________
void EdbH2::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbH2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((int*)eN);
      R__b.ReadStaticArray((float*)eMin);
      R__b.ReadStaticArray((float*)eMax);
      R__b.ReadStaticArray((float*)eBin);
      R__b >> eNcell;
      delete [] eNC;
      eNC = new Int_t[eNcell];
      R__b.ReadFastArray(eNC,eNcell);
      R__b.CheckByteCount(R__s, R__c, EdbH2::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbH2::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(eN, 2);
      R__b.WriteArray(eMin, 2);
      R__b.WriteArray(eMax, 2);
      R__b.WriteArray(eBin, 2);
      R__b << eNcell;
      R__b.WriteFastArray(eNC,eNcell);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbH2(void *p) {
      return  p ? new(p) ::EdbH2 : new ::EdbH2;
   }
   static void *newArray_EdbH2(Long_t nElements, void *p) {
      return p ? new(p) ::EdbH2[nElements] : new ::EdbH2[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbH2(void *p) {
      delete (static_cast<::EdbH2*>(p));
   }
   static void deleteArray_EdbH2(void *p) {
      delete [] (static_cast<::EdbH2*>(p));
   }
   static void destruct_EdbH2(void *p) {
      typedef ::EdbH2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbH2(TBuffer &buf, void *obj) {
      ((::EdbH2*)obj)->::EdbH2::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbH2

//______________________________________________________________________________
void EdbPeak2::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPeak2.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbH2::Streamer(R__b);
      R__b >> eNpeaks;
      ePeak.Streamer(R__b);
      eMean3.Streamer(R__b);
      eMean.Streamer(R__b);
      R__b >> eNorm;
      R__b.CheckByteCount(R__s, R__c, EdbPeak2::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPeak2::IsA(), kTRUE);
      EdbH2::Streamer(R__b);
      R__b << eNpeaks;
      ePeak.Streamer(R__b);
      eMean3.Streamer(R__b);
      eMean.Streamer(R__b);
      R__b << eNorm;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPeak2(void *p) {
      return  p ? new(p) ::EdbPeak2 : new ::EdbPeak2;
   }
   static void *newArray_EdbPeak2(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPeak2[nElements] : new ::EdbPeak2[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPeak2(void *p) {
      delete (static_cast<::EdbPeak2*>(p));
   }
   static void deleteArray_EdbPeak2(void *p) {
      delete [] (static_cast<::EdbPeak2*>(p));
   }
   static void destruct_EdbPeak2(void *p) {
      typedef ::EdbPeak2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPeak2(TBuffer &buf, void *obj) {
      ((::EdbPeak2*)obj)->::EdbPeak2::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPeak2

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCell2(void *p) {
      return  p ? new(p) ::EdbCell2 : new ::EdbCell2;
   }
   static void *newArray_EdbCell2(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCell2[nElements] : new ::EdbCell2[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCell2(void *p) {
      delete (static_cast<::EdbCell2*>(p));
   }
   static void deleteArray_EdbCell2(void *p) {
      delete [] (static_cast<::EdbCell2*>(p));
   }
   static void destruct_EdbCell2(void *p) {
      typedef ::EdbCell2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCell2(TBuffer &buf, void *obj) {
      ((::EdbCell2*)obj)->::EdbCell2::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCell2

//______________________________________________________________________________
void EdbMask::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbMask.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eBuffer.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbMask::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbMask::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eBuffer.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbMask(void *p) {
      return  p ? new(p) ::EdbMask : new ::EdbMask;
   }
   static void *newArray_EdbMask(Long_t nElements, void *p) {
      return p ? new(p) ::EdbMask[nElements] : new ::EdbMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbMask(void *p) {
      delete (static_cast<::EdbMask*>(p));
   }
   static void deleteArray_EdbMask(void *p) {
      delete [] (static_cast<::EdbMask*>(p));
   }
   static void destruct_EdbMask(void *p) {
      typedef ::EdbMask current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbMask(TBuffer &buf, void *obj) {
      ((::EdbMask*)obj)->::EdbMask::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbMask

//______________________________________________________________________________
void EdbCombGen::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbCombGen.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eElements.Streamer(R__b);
      {
         vector<bool> &R__stl =  eBits;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            bool R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      R__b >> eSize;
      R__b >> eItems;
      R__b >> eNext;
      R__b.CheckByteCount(R__s, R__c, EdbCombGen::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbCombGen::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eElements.Streamer(R__b);
      {
         vector<bool> &R__stl =  eBits;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<bool>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << eSize;
      R__b << eItems;
      R__b << eNext;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCombGen(void *p) {
      return  p ? new(p) ::EdbCombGen : new ::EdbCombGen;
   }
   static void *newArray_EdbCombGen(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCombGen[nElements] : new ::EdbCombGen[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCombGen(void *p) {
      delete (static_cast<::EdbCombGen*>(p));
   }
   static void deleteArray_EdbCombGen(void *p) {
      delete [] (static_cast<::EdbCombGen*>(p));
   }
   static void destruct_EdbCombGen(void *p) {
      typedef ::EdbCombGen current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCombGen(TBuffer &buf, void *obj) {
      ((::EdbCombGen*)obj)->::EdbCombGen::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCombGen

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 690,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bool>","std::vector<bool, std::allocator<bool> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr))->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete (static_cast<vector<bool>*>(p));
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] (static_cast<vector<bool>*>(p));
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace {
  void TriggerDictionaryInitialization_EmathCint_Impl() {
    static const char* headers[] = {
"TIndexCell.h",
"EdbMath.h",
"EdbCell2.h",
"EdbCell1.h",
"EdbMask.h",
"EdbCombGen.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEmath/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EmathCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$TIndexCell.h")))  TIndexCell;
class __attribute__((annotate("$clingAutoload$TIndexCell.h")))  TIndexCellIter;
class __attribute__((annotate("$clingAutoload$TIndexCell.h")))  TIndexCellIterV;
class __attribute__((annotate("$clingAutoload$EdbMath.h")))  EdbMath;
class __attribute__((annotate("$clingAutoload$EdbMath.h")))  TIndex2;
class __attribute__((annotate("$clingAutoload$EdbMath.h")))  EdbFilter2D;
class __attribute__((annotate("$clingAutoload$EdbCell1.h")))  __attribute__((annotate("$clingAutoload$EdbCell2.h")))  EdbH1;
class __attribute__((annotate("$clingAutoload$EdbCell1.h")))  __attribute__((annotate("$clingAutoload$EdbCell2.h")))  EdbCell1;
class __attribute__((annotate("$clingAutoload$EdbCell2.h")))  EdbH2;
class __attribute__((annotate("$clingAutoload$EdbCell2.h")))  EdbPeak2;
class __attribute__((annotate("$clingAutoload$EdbCell2.h")))  EdbCell2;
class __attribute__((annotate("$clingAutoload$EdbMask.h")))  EdbMask;
class __attribute__((annotate("$clingAutoload$EdbCombGen.h")))  EdbCombGen;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EmathCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TIndexCell.h"
#include "EdbMath.h"
#include "EdbCell2.h"
#include "EdbCell1.h"
#include "EdbMask.h"
#include "EdbCombGen.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbCell1", payloadCode, "@",
"EdbCell2", payloadCode, "@",
"EdbCombGen", payloadCode, "@",
"EdbFilter2D", payloadCode, "@",
"EdbH1", payloadCode, "@",
"EdbH2", payloadCode, "@",
"EdbMask", payloadCode, "@",
"EdbMath", payloadCode, "@",
"EdbPeak2", payloadCode, "@",
"TIndex2", payloadCode, "@",
"TIndexCell", payloadCode, "@",
"TIndexCellIter", payloadCode, "@",
"TIndexCellIterV", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EmathCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EmathCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EmathCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EmathCint() {
  TriggerDictionaryInitialization_EmathCint_Impl();
}
