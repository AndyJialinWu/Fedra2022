// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EddCint
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
#include "EdbDisplayBase.h"
#include "EdbDisplay.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Edb3DView(void *p = nullptr);
   static void *newArray_Edb3DView(Long_t size, void *p);
   static void delete_Edb3DView(void *p);
   static void deleteArray_Edb3DView(void *p);
   static void destruct_Edb3DView(void *p);
   static void streamer_Edb3DView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Edb3DView*)
   {
      ::Edb3DView *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Edb3DView >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Edb3DView", ::Edb3DView::Class_Version(), "EdbDisplayBase.h", 43,
                  typeid(::Edb3DView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Edb3DView::Dictionary, isa_proxy, 16,
                  sizeof(::Edb3DView) );
      instance.SetNew(&new_Edb3DView);
      instance.SetNewArray(&newArray_Edb3DView);
      instance.SetDelete(&delete_Edb3DView);
      instance.SetDeleteArray(&deleteArray_Edb3DView);
      instance.SetDestructor(&destruct_Edb3DView);
      instance.SetStreamerFunc(&streamer_Edb3DView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Edb3DView*)
   {
      return GenerateInitInstanceLocal(static_cast<::Edb3DView*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Edb3DView*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDisplayBase(void *p = nullptr);
   static void *newArray_EdbDisplayBase(Long_t size, void *p);
   static void delete_EdbDisplayBase(void *p);
   static void deleteArray_EdbDisplayBase(void *p);
   static void destruct_EdbDisplayBase(void *p);
   static void streamer_EdbDisplayBase(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDisplayBase*)
   {
      ::EdbDisplayBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDisplayBase >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDisplayBase", ::EdbDisplayBase::Class_Version(), "EdbDisplayBase.h", 72,
                  typeid(::EdbDisplayBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDisplayBase::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDisplayBase) );
      instance.SetNew(&new_EdbDisplayBase);
      instance.SetNewArray(&newArray_EdbDisplayBase);
      instance.SetDelete(&delete_EdbDisplayBase);
      instance.SetDeleteArray(&deleteArray_EdbDisplayBase);
      instance.SetDestructor(&destruct_EdbDisplayBase);
      instance.SetStreamerFunc(&streamer_EdbDisplayBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDisplayBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDisplayBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDisplayBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbDisplay(void *p = nullptr);
   static void *newArray_EdbDisplay(Long_t size, void *p);
   static void delete_EdbDisplay(void *p);
   static void deleteArray_EdbDisplay(void *p);
   static void destruct_EdbDisplay(void *p);
   static void streamer_EdbDisplay(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbDisplay*)
   {
      ::EdbDisplay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbDisplay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbDisplay", ::EdbDisplay::Class_Version(), "EdbDisplay.h", 21,
                  typeid(::EdbDisplay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbDisplay::Dictionary, isa_proxy, 16,
                  sizeof(::EdbDisplay) );
      instance.SetNew(&new_EdbDisplay);
      instance.SetNewArray(&newArray_EdbDisplay);
      instance.SetDelete(&delete_EdbDisplay);
      instance.SetDeleteArray(&deleteArray_EdbDisplay);
      instance.SetDestructor(&destruct_EdbDisplay);
      instance.SetStreamerFunc(&streamer_EdbDisplay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbDisplay*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbDisplay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbDisplay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbVertexG(void *p = nullptr);
   static void *newArray_EdbVertexG(Long_t size, void *p);
   static void delete_EdbVertexG(void *p);
   static void deleteArray_EdbVertexG(void *p);
   static void destruct_EdbVertexG(void *p);
   static void streamer_EdbVertexG(TBuffer &buf, void *obj);
   static Long64_t merge_EdbVertexG(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVertexG*)
   {
      ::EdbVertexG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVertexG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVertexG", ::EdbVertexG::Class_Version(), "EdbDisplay.h", 133,
                  typeid(::EdbVertexG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVertexG::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVertexG) );
      instance.SetNew(&new_EdbVertexG);
      instance.SetNewArray(&newArray_EdbVertexG);
      instance.SetDelete(&delete_EdbVertexG);
      instance.SetDeleteArray(&deleteArray_EdbVertexG);
      instance.SetDestructor(&destruct_EdbVertexG);
      instance.SetStreamerFunc(&streamer_EdbVertexG);
      instance.SetMerge(&merge_EdbVertexG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVertexG*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVertexG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVertexG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTrackG(void *p = nullptr);
   static void *newArray_EdbTrackG(Long_t size, void *p);
   static void delete_EdbTrackG(void *p);
   static void deleteArray_EdbTrackG(void *p);
   static void destruct_EdbTrackG(void *p);
   static void streamer_EdbTrackG(TBuffer &buf, void *obj);
   static Long64_t merge_EdbTrackG(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrackG*)
   {
      ::EdbTrackG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrackG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrackG", ::EdbTrackG::Class_Version(), "EdbDisplay.h", 160,
                  typeid(::EdbTrackG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrackG::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTrackG) );
      instance.SetNew(&new_EdbTrackG);
      instance.SetNewArray(&newArray_EdbTrackG);
      instance.SetDelete(&delete_EdbTrackG);
      instance.SetDeleteArray(&deleteArray_EdbTrackG);
      instance.SetDestructor(&destruct_EdbTrackG);
      instance.SetStreamerFunc(&streamer_EdbTrackG);
      instance.SetMerge(&merge_EdbTrackG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrackG*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrackG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrackG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSegG(void *p = nullptr);
   static void *newArray_EdbSegG(Long_t size, void *p);
   static void delete_EdbSegG(void *p);
   static void deleteArray_EdbSegG(void *p);
   static void destruct_EdbSegG(void *p);
   static void streamer_EdbSegG(TBuffer &buf, void *obj);
   static Long64_t merge_EdbSegG(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegG*)
   {
      ::EdbSegG *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegG >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegG", ::EdbSegG::Class_Version(), "EdbDisplay.h", 196,
                  typeid(::EdbSegG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegG::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSegG) );
      instance.SetNew(&new_EdbSegG);
      instance.SetNewArray(&newArray_EdbSegG);
      instance.SetDelete(&delete_EdbSegG);
      instance.SetDeleteArray(&deleteArray_EdbSegG);
      instance.SetDestructor(&destruct_EdbSegG);
      instance.SetStreamerFunc(&streamer_EdbSegG);
      instance.SetMerge(&merge_EdbSegG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegG*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegG*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegG*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Edb3DView::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Edb3DView::Class_Name()
{
   return "Edb3DView";
}

//______________________________________________________________________________
const char *Edb3DView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Edb3DView*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Edb3DView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Edb3DView*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Edb3DView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Edb3DView*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Edb3DView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Edb3DView*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDisplayBase::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDisplayBase::Class_Name()
{
   return "EdbDisplayBase";
}

//______________________________________________________________________________
const char *EdbDisplayBase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplayBase*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDisplayBase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplayBase*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDisplayBase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplayBase*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDisplayBase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplayBase*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbDisplay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbDisplay::Class_Name()
{
   return "EdbDisplay";
}

//______________________________________________________________________________
const char *EdbDisplay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbDisplay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbDisplay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbDisplay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbDisplay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVertexG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVertexG::Class_Name()
{
   return "EdbVertexG";
}

//______________________________________________________________________________
const char *EdbVertexG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVertexG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVertexG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVertexG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTrackG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrackG::Class_Name()
{
   return "EdbTrackG";
}

//______________________________________________________________________________
const char *EdbTrackG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrackG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrackG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrackG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSegG::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegG::Class_Name()
{
   return "EdbSegG";
}

//______________________________________________________________________________
const char *EdbSegG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegG*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegG*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegG*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegG*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Edb3DView::Streamer(TBuffer &R__b)
{
   // Stream an object of class Edb3DView.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TView3D::Streamer(R__b);
      R__b >> fRotateMode;
      R__b.CheckByteCount(R__s, R__c, Edb3DView::IsA());
   } else {
      R__c = R__b.WriteVersion(Edb3DView::IsA(), kTRUE);
      TView3D::Streamer(R__b);
      R__b << fRotateMode;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Edb3DView(void *p) {
      return  p ? new(p) ::Edb3DView : new ::Edb3DView;
   }
   static void *newArray_Edb3DView(Long_t nElements, void *p) {
      return p ? new(p) ::Edb3DView[nElements] : new ::Edb3DView[nElements];
   }
   // Wrapper around operator delete
   static void delete_Edb3DView(void *p) {
      delete (static_cast<::Edb3DView*>(p));
   }
   static void deleteArray_Edb3DView(void *p) {
      delete [] (static_cast<::Edb3DView*>(p));
   }
   static void destruct_Edb3DView(void *p) {
      typedef ::Edb3DView current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_Edb3DView(TBuffer &buf, void *obj) {
      ((::Edb3DView*)obj)->::Edb3DView::Streamer(buf);
   }
} // end of namespace ROOT for class ::Edb3DView

//______________________________________________________________________________
void EdbDisplayBase::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDisplayBase.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fVx0;
      R__b >> fVy0;
      R__b >> fVz0;
      R__b >> fVx1;
      R__b >> fVy1;
      R__b >> fVz1;
      R__b >> fZoomMode;
      R__b >> fDrawAllViews;
      R__b >> fTheta;
      R__b >> fPhi;
      R__b >> fPsi;
      R__b.ReadStaticArray((double*)fZoomX0);
      R__b.ReadStaticArray((double*)fZoomY0);
      R__b.ReadStaticArray((double*)fZoomX1);
      R__b.ReadStaticArray((double*)fZoomY1);
      R__b >> fZooms;
      R__b >> fStyle;
      R__b >> fLineWidth;
      R__b >> fColorBG;
      R__b >> fView;
      R__b.ReadStaticArray((char*)fTitle);
      R__b >> fTrigPad;
      R__b >> fButtons;
      R__b >> fAllButton;
      R__b >> fEnvButton;
      R__b >> fUndButton;
      R__b >> fAccButton;
      R__b >> fCanButton;
      R__b >> fPickButton;
      R__b >> fZoomButton;
      R__b >> fUnZoomButton;
      R__b >> fArcButton;
      R__b >> fMain;
      R__b >> fHdrVTX;
      R__b >> fOldVTX;
      R__b >> fNewVTX;
      R__b >> fPreVTX;
      R__b >> fVTXTracks;
      R__b >> fOldBut;
      R__b >> fNewBut;
      R__b >> fPreBut;
      int R__i;
      for (R__i = 0; R__i < 50; R__i++)
         R__b >> fRemBut[R__i];
      R__b.ReadStaticArray((char*)fCanvasName);
      R__b >> fDrawDet;
      R__b >> fDetector;
      R__b >> fVTXTRKInfo;
      R__b >> fCanvas;
      R__b >> fCanvasVTX;
      R__b >> fCanvasTRK;
      R__b >> fPad;
      R__b.CheckByteCount(R__s, R__c, EdbDisplayBase::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDisplayBase::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fVx0;
      R__b << fVy0;
      R__b << fVz0;
      R__b << fVx1;
      R__b << fVy1;
      R__b << fVz1;
      R__b << fZoomMode;
      R__b << fDrawAllViews;
      R__b << fTheta;
      R__b << fPhi;
      R__b << fPsi;
      R__b.WriteArray(fZoomX0, 30);
      R__b.WriteArray(fZoomY0, 30);
      R__b.WriteArray(fZoomX1, 30);
      R__b.WriteArray(fZoomY1, 30);
      R__b << fZooms;
      R__b << fStyle;
      R__b << fLineWidth;
      R__b << fColorBG;
      R__b << fView;
      R__b.WriteArray(fTitle, 128);
      R__b << fTrigPad;
      R__b << fButtons;
      R__b << fAllButton;
      R__b << fEnvButton;
      R__b << fUndButton;
      R__b << fAccButton;
      R__b << fCanButton;
      R__b << fPickButton;
      R__b << fZoomButton;
      R__b << fUnZoomButton;
      R__b << fArcButton;
      R__b << fMain;
      R__b << fHdrVTX;
      R__b << fOldVTX;
      R__b << fNewVTX;
      R__b << fPreVTX;
      R__b << fVTXTracks;
      R__b << fOldBut;
      R__b << fNewBut;
      R__b << fPreBut;
      int R__i;
      for (R__i = 0; R__i < 50; R__i++)
         R__b << fRemBut[R__i];
      R__b.WriteArray(fCanvasName, 128);
      R__b << fDrawDet;
      R__b << fDetector;
      R__b << fVTXTRKInfo;
      R__b << fCanvas;
      R__b << fCanvasVTX;
      R__b << fCanvasTRK;
      R__b << fPad;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDisplayBase(void *p) {
      return  p ? new(p) ::EdbDisplayBase : new ::EdbDisplayBase;
   }
   static void *newArray_EdbDisplayBase(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDisplayBase[nElements] : new ::EdbDisplayBase[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDisplayBase(void *p) {
      delete (static_cast<::EdbDisplayBase*>(p));
   }
   static void deleteArray_EdbDisplayBase(void *p) {
      delete [] (static_cast<::EdbDisplayBase*>(p));
   }
   static void destruct_EdbDisplayBase(void *p) {
      typedef ::EdbDisplayBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDisplayBase(TBuffer &buf, void *obj) {
      ((::EdbDisplayBase*)obj)->::EdbDisplayBase::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDisplayBase

//______________________________________________________________________________
void EdbDisplay::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbDisplay.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbDisplayBase::Streamer(R__b);
      R__b >> eDrawTracks;
      R__b >> eDrawVertex;
      R__b >> eColors;
      R__b >> eDZs;
      int R__i;
      for (R__i = 0; R__i < 3; R__i++)
         R__b >> fNumericEntries[R__i];
      R__b >> eFromPlate;
      R__b >> eToPlate;
      R__b >> eVerRec;
      R__b >> eArrSegP;
      R__b >> eArrTr;
      R__b >> eArrV;
      R__b >> eArrSegPSave;
      R__b >> eArrTrSave;
      R__b >> eArrVSave;
      R__b >> eWorking;
      R__b >> eVertex;
      R__b >> ePrevious;
      R__b >> eSegment;
      R__b >> eTrack;
      R__b >> eTrack1;
      R__b >> eTrack2;
      R__b >> eSegPM;
      R__b >> eWait_Answer;
      R__b >> eIndVert;
      R__b >> eIndVertSave;
      eCreatedTracks.Streamer(R__b);
      R__b >> eRadMax;
      R__b >> eDpat;
      R__b >> eImpMax;
      R__b >> eP;
      R__b >> eM;
      R__b >> eTImpMax;
      R__b >> eTProbMin;
      R__b >> eSegWmin;
      R__b >> eArrSegG;
      R__b.CheckByteCount(R__s, R__c, EdbDisplay::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbDisplay::IsA(), kTRUE);
      EdbDisplayBase::Streamer(R__b);
      R__b << eDrawTracks;
      R__b << eDrawVertex;
      R__b << eColors;
      R__b << eDZs;
      int R__i;
      for (R__i = 0; R__i < 3; R__i++)
         R__b << fNumericEntries[R__i];
      R__b << eFromPlate;
      R__b << eToPlate;
      R__b << eVerRec;
      R__b << eArrSegP;
      R__b << eArrTr;
      R__b << eArrV;
      R__b << eArrSegPSave;
      R__b << eArrTrSave;
      R__b << eArrVSave;
      R__b << eWorking;
      R__b << eVertex;
      R__b << ePrevious;
      R__b << eSegment;
      R__b << eTrack;
      R__b << eTrack1;
      R__b << eTrack2;
      R__b << eSegPM;
      R__b << eWait_Answer;
      R__b << eIndVert;
      R__b << eIndVertSave;
      eCreatedTracks.Streamer(R__b);
      R__b << eRadMax;
      R__b << eDpat;
      R__b << eImpMax;
      R__b << eP;
      R__b << eM;
      R__b << eTImpMax;
      R__b << eTProbMin;
      R__b << eSegWmin;
      R__b << eArrSegG;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbDisplay(void *p) {
      return  p ? new(p) ::EdbDisplay : new ::EdbDisplay;
   }
   static void *newArray_EdbDisplay(Long_t nElements, void *p) {
      return p ? new(p) ::EdbDisplay[nElements] : new ::EdbDisplay[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbDisplay(void *p) {
      delete (static_cast<::EdbDisplay*>(p));
   }
   static void deleteArray_EdbDisplay(void *p) {
      delete [] (static_cast<::EdbDisplay*>(p));
   }
   static void destruct_EdbDisplay(void *p) {
      typedef ::EdbDisplay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbDisplay(TBuffer &buf, void *obj) {
      ((::EdbDisplay*)obj)->::EdbDisplay::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbDisplay

//______________________________________________________________________________
void EdbVertexG::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVertexG.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TPolyMarker3D::Streamer(R__b);
      R__b >> eV;
      R__b >> eD;
      R__b.CheckByteCount(R__s, R__c, EdbVertexG::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVertexG::IsA(), kTRUE);
      TPolyMarker3D::Streamer(R__b);
      R__b << eV;
      R__b << eD;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbVertexG(void *p) {
      return  p ? new(p) ::EdbVertexG : new ::EdbVertexG;
   }
   static void *newArray_EdbVertexG(Long_t nElements, void *p) {
      return p ? new(p) ::EdbVertexG[nElements] : new ::EdbVertexG[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbVertexG(void *p) {
      delete (static_cast<::EdbVertexG*>(p));
   }
   static void deleteArray_EdbVertexG(void *p) {
      delete [] (static_cast<::EdbVertexG*>(p));
   }
   static void destruct_EdbVertexG(void *p) {
      typedef ::EdbVertexG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVertexG(TBuffer &buf, void *obj) {
      ((::EdbVertexG*)obj)->::EdbVertexG::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_EdbVertexG(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::EdbVertexG*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::EdbVertexG

//______________________________________________________________________________
void EdbTrackG::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTrackG.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TPolyMarker3D::Streamer(R__b);
      R__b >> eTr;
      R__b >> eD;
      R__b.CheckByteCount(R__s, R__c, EdbTrackG::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTrackG::IsA(), kTRUE);
      TPolyMarker3D::Streamer(R__b);
      R__b << eTr;
      R__b << eD;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTrackG(void *p) {
      return  p ? new(p) ::EdbTrackG : new ::EdbTrackG;
   }
   static void *newArray_EdbTrackG(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTrackG[nElements] : new ::EdbTrackG[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTrackG(void *p) {
      delete (static_cast<::EdbTrackG*>(p));
   }
   static void deleteArray_EdbTrackG(void *p) {
      delete [] (static_cast<::EdbTrackG*>(p));
   }
   static void destruct_EdbTrackG(void *p) {
      typedef ::EdbTrackG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrackG(TBuffer &buf, void *obj) {
      ((::EdbTrackG*)obj)->::EdbTrackG::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_EdbTrackG(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::EdbTrackG*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::EdbTrackG

//______________________________________________________________________________
void EdbSegG::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSegG.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TPolyLine3D::Streamer(R__b);
      R__b >> eSeg;
      R__b >> eD;
      R__b.CheckByteCount(R__s, R__c, EdbSegG::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSegG::IsA(), kTRUE);
      TPolyLine3D::Streamer(R__b);
      R__b << eSeg;
      R__b << eD;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegG(void *p) {
      return  p ? new(p) ::EdbSegG : new ::EdbSegG;
   }
   static void *newArray_EdbSegG(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegG[nElements] : new ::EdbSegG[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegG(void *p) {
      delete (static_cast<::EdbSegG*>(p));
   }
   static void deleteArray_EdbSegG(void *p) {
      delete [] (static_cast<::EdbSegG*>(p));
   }
   static void destruct_EdbSegG(void *p) {
      typedef ::EdbSegG current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegG(TBuffer &buf, void *obj) {
      ((::EdbSegG*)obj)->::EdbSegG::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_EdbSegG(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::EdbSegG*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::EdbSegG

namespace {
  void TriggerDictionaryInitialization_EddCint_Impl() {
    static const char* headers[] = {
"EdbDisplayBase.h",
"EdbDisplay.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEdd/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EddCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbDisplayBase.h")))  Edb3DView;
class __attribute__((annotate("$clingAutoload$EdbDisplayBase.h")))  EdbDisplayBase;
class __attribute__((annotate("$clingAutoload$EdbDisplay.h")))  EdbDisplay;
class __attribute__((annotate("$clingAutoload$EdbDisplay.h")))  EdbVertexG;
class __attribute__((annotate("$clingAutoload$EdbDisplay.h")))  EdbTrackG;
class __attribute__((annotate("$clingAutoload$EdbDisplay.h")))  EdbSegG;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EddCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbDisplayBase.h"
#include "EdbDisplay.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Edb3DView", payloadCode, "@",
"EdbDisplay", payloadCode, "@",
"EdbDisplayBase", payloadCode, "@",
"EdbSegG", payloadCode, "@",
"EdbTrackG", payloadCode, "@",
"EdbVertexG", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EddCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EddCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EddCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EddCint() {
  TriggerDictionaryInitialization_EddCint_Impl();
}
