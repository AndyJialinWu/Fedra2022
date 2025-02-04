// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EbaseCint
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
#include "EdbSegCorr.h"
#include "EdbLayer.h"
#include "EdbScanCond.h"
#include "EdbBrick.h"
#include "EdbScanSet.h"
#include "EdbID.h"
#include "EdbSegP.h"
#include "EdbSigma.h"
#include "EdbSEQ.h"
#include "EdbCouplesTree.h"
#include "EdbSegCouple.h"
#include "EdbSegmentCut.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbID(void *p = nullptr);
   static void *newArray_EdbID(Long_t size, void *p);
   static void delete_EdbID(void *p);
   static void deleteArray_EdbID(void *p);
   static void destruct_EdbID(void *p);
   static void streamer_EdbID(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbID*)
   {
      ::EdbID *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbID >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbID", ::EdbID::Class_Version(), "EdbID.h", 6,
                  typeid(::EdbID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbID::Dictionary, isa_proxy, 16,
                  sizeof(::EdbID) );
      instance.SetNew(&new_EdbID);
      instance.SetNewArray(&newArray_EdbID);
      instance.SetDelete(&delete_EdbID);
      instance.SetDeleteArray(&deleteArray_EdbID);
      instance.SetDestructor(&destruct_EdbID);
      instance.SetStreamerFunc(&streamer_EdbID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbID*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbID*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbID*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSegP(void *p = nullptr);
   static void *newArray_EdbSegP(Long_t size, void *p);
   static void delete_EdbSegP(void *p);
   static void deleteArray_EdbSegP(void *p);
   static void destruct_EdbSegP(void *p);
   static void streamer_EdbSegP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegP*)
   {
      ::EdbSegP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegP", ::EdbSegP::Class_Version(), "EdbSegP.h", 18,
                  typeid(::EdbSegP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSegP) );
      instance.SetNew(&new_EdbSegP);
      instance.SetNewArray(&newArray_EdbSegP);
      instance.SetDelete(&delete_EdbSegP);
      instance.SetDeleteArray(&deleteArray_EdbSegP);
      instance.SetDestructor(&destruct_EdbSegP);
      instance.SetStreamerFunc(&streamer_EdbSegP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSegCorr(void *p = nullptr);
   static void *newArray_EdbSegCorr(Long_t size, void *p);
   static void delete_EdbSegCorr(void *p);
   static void deleteArray_EdbSegCorr(void *p);
   static void destruct_EdbSegCorr(void *p);
   static void streamer_EdbSegCorr(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegCorr*)
   {
      ::EdbSegCorr *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegCorr >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegCorr", ::EdbSegCorr::Class_Version(), "EdbSegCorr.h", 7,
                  typeid(::EdbSegCorr), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegCorr::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSegCorr) );
      instance.SetNew(&new_EdbSegCorr);
      instance.SetNewArray(&newArray_EdbSegCorr);
      instance.SetDelete(&delete_EdbSegCorr);
      instance.SetDeleteArray(&deleteArray_EdbSegCorr);
      instance.SetDestructor(&destruct_EdbSegCorr);
      instance.SetStreamerFunc(&streamer_EdbSegCorr);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegCorr*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegCorr*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegCorr*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCorrectionMap(void *p = nullptr);
   static void *newArray_EdbCorrectionMap(Long_t size, void *p);
   static void delete_EdbCorrectionMap(void *p);
   static void deleteArray_EdbCorrectionMap(void *p);
   static void destruct_EdbCorrectionMap(void *p);
   static void streamer_EdbCorrectionMap(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCorrectionMap*)
   {
      ::EdbCorrectionMap *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCorrectionMap >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCorrectionMap", ::EdbCorrectionMap::Class_Version(), "EdbLayer.h", 12,
                  typeid(::EdbCorrectionMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCorrectionMap::Dictionary, isa_proxy, 16,
                  sizeof(::EdbCorrectionMap) );
      instance.SetNew(&new_EdbCorrectionMap);
      instance.SetNewArray(&newArray_EdbCorrectionMap);
      instance.SetDelete(&delete_EdbCorrectionMap);
      instance.SetDeleteArray(&deleteArray_EdbCorrectionMap);
      instance.SetDestructor(&destruct_EdbCorrectionMap);
      instance.SetStreamerFunc(&streamer_EdbCorrectionMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCorrectionMap*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCorrectionMap*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCorrectionMap*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbLayer(void *p = nullptr);
   static void *newArray_EdbLayer(Long_t size, void *p);
   static void delete_EdbLayer(void *p);
   static void deleteArray_EdbLayer(void *p);
   static void destruct_EdbLayer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbLayer*)
   {
      ::EdbLayer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbLayer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbLayer", ::EdbLayer::Class_Version(), "EdbLayer.h", 39,
                  typeid(::EdbLayer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbLayer::Dictionary, isa_proxy, 4,
                  sizeof(::EdbLayer) );
      instance.SetNew(&new_EdbLayer);
      instance.SetNewArray(&newArray_EdbLayer);
      instance.SetDelete(&delete_EdbLayer);
      instance.SetDeleteArray(&deleteArray_EdbLayer);
      instance.SetDestructor(&destruct_EdbLayer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbLayer*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbLayer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbLayer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanCond(void *p = nullptr);
   static void *newArray_EdbScanCond(Long_t size, void *p);
   static void delete_EdbScanCond(void *p);
   static void deleteArray_EdbScanCond(void *p);
   static void destruct_EdbScanCond(void *p);
   static void streamer_EdbScanCond(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanCond*)
   {
      ::EdbScanCond *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanCond >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanCond", ::EdbScanCond::Class_Version(), "EdbScanCond.h", 10,
                  typeid(::EdbScanCond), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanCond::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanCond) );
      instance.SetNew(&new_EdbScanCond);
      instance.SetNewArray(&newArray_EdbScanCond);
      instance.SetDelete(&delete_EdbScanCond);
      instance.SetDeleteArray(&deleteArray_EdbScanCond);
      instance.SetDestructor(&destruct_EdbScanCond);
      instance.SetStreamerFunc(&streamer_EdbScanCond);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanCond*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanCond*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanCond*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPlateP(void *p = nullptr);
   static void *newArray_EdbPlateP(Long_t size, void *p);
   static void delete_EdbPlateP(void *p);
   static void deleteArray_EdbPlateP(void *p);
   static void destruct_EdbPlateP(void *p);
   static void streamer_EdbPlateP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPlateP*)
   {
      ::EdbPlateP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPlateP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPlateP", ::EdbPlateP::Class_Version(), "EdbBrick.h", 13,
                  typeid(::EdbPlateP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPlateP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPlateP) );
      instance.SetNew(&new_EdbPlateP);
      instance.SetNewArray(&newArray_EdbPlateP);
      instance.SetDelete(&delete_EdbPlateP);
      instance.SetDeleteArray(&deleteArray_EdbPlateP);
      instance.SetDestructor(&destruct_EdbPlateP);
      instance.SetStreamerFunc(&streamer_EdbPlateP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPlateP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPlateP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPlateP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbBrickP(void *p = nullptr);
   static void *newArray_EdbBrickP(Long_t size, void *p);
   static void delete_EdbBrickP(void *p);
   static void deleteArray_EdbBrickP(void *p);
   static void destruct_EdbBrickP(void *p);
   static void streamer_EdbBrickP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbBrickP*)
   {
      ::EdbBrickP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbBrickP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbBrickP", ::EdbBrickP::Class_Version(), "EdbBrick.h", 37,
                  typeid(::EdbBrickP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbBrickP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbBrickP) );
      instance.SetNew(&new_EdbBrickP);
      instance.SetNewArray(&newArray_EdbBrickP);
      instance.SetDelete(&delete_EdbBrickP);
      instance.SetDeleteArray(&deleteArray_EdbBrickP);
      instance.SetDestructor(&destruct_EdbBrickP);
      instance.SetStreamerFunc(&streamer_EdbBrickP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbBrickP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbBrickP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbBrickP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbScanSet(void *p = nullptr);
   static void *newArray_EdbScanSet(Long_t size, void *p);
   static void delete_EdbScanSet(void *p);
   static void deleteArray_EdbScanSet(void *p);
   static void destruct_EdbScanSet(void *p);
   static void streamer_EdbScanSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbScanSet*)
   {
      ::EdbScanSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbScanSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbScanSet", ::EdbScanSet::Class_Version(), "EdbScanSet.h", 10,
                  typeid(::EdbScanSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbScanSet::Dictionary, isa_proxy, 16,
                  sizeof(::EdbScanSet) );
      instance.SetNew(&new_EdbScanSet);
      instance.SetNewArray(&newArray_EdbScanSet);
      instance.SetDelete(&delete_EdbScanSet);
      instance.SetDeleteArray(&deleteArray_EdbScanSet);
      instance.SetDestructor(&destruct_EdbScanSet);
      instance.SetStreamerFunc(&streamer_EdbScanSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbScanSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbScanSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbScanSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSigma(void *p = nullptr);
   static void *newArray_EdbSigma(Long_t size, void *p);
   static void delete_EdbSigma(void *p);
   static void deleteArray_EdbSigma(void *p);
   static void destruct_EdbSigma(void *p);
   static void streamer_EdbSigma(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSigma*)
   {
      ::EdbSigma *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSigma >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSigma", ::EdbSigma::Class_Version(), "EdbSigma.h", 7,
                  typeid(::EdbSigma), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSigma::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSigma) );
      instance.SetNew(&new_EdbSigma);
      instance.SetNewArray(&newArray_EdbSigma);
      instance.SetDelete(&delete_EdbSigma);
      instance.SetDeleteArray(&deleteArray_EdbSigma);
      instance.SetDestructor(&destruct_EdbSigma);
      instance.SetStreamerFunc(&streamer_EdbSigma);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSigma*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSigma*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSigma*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSEQ(void *p = nullptr);
   static void *newArray_EdbSEQ(Long_t size, void *p);
   static void delete_EdbSEQ(void *p);
   static void deleteArray_EdbSEQ(void *p);
   static void destruct_EdbSEQ(void *p);
   static void streamer_EdbSEQ(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSEQ*)
   {
      ::EdbSEQ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSEQ >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSEQ", ::EdbSEQ::Class_Version(), "EdbSEQ.h", 11,
                  typeid(::EdbSEQ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSEQ::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSEQ) );
      instance.SetNew(&new_EdbSEQ);
      instance.SetNewArray(&newArray_EdbSEQ);
      instance.SetDelete(&delete_EdbSEQ);
      instance.SetDeleteArray(&deleteArray_EdbSEQ);
      instance.SetDestructor(&destruct_EdbSEQ);
      instance.SetStreamerFunc(&streamer_EdbSEQ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSEQ*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSEQ*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSEQ*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSegCouple(void *p = nullptr);
   static void *newArray_EdbSegCouple(Long_t size, void *p);
   static void delete_EdbSegCouple(void *p);
   static void deleteArray_EdbSegCouple(void *p);
   static void destruct_EdbSegCouple(void *p);
   static void streamer_EdbSegCouple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegCouple*)
   {
      ::EdbSegCouple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegCouple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegCouple", ::EdbSegCouple::Class_Version(), "EdbSegCouple.h", 14,
                  typeid(::EdbSegCouple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegCouple::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSegCouple) );
      instance.SetNew(&new_EdbSegCouple);
      instance.SetNewArray(&newArray_EdbSegCouple);
      instance.SetDelete(&delete_EdbSegCouple);
      instance.SetDeleteArray(&deleteArray_EdbSegCouple);
      instance.SetDestructor(&destruct_EdbSegCouple);
      instance.SetStreamerFunc(&streamer_EdbSegCouple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegCouple*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegCouple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegCouple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCouplesTree(void *p = nullptr);
   static void *newArray_EdbCouplesTree(Long_t size, void *p);
   static void delete_EdbCouplesTree(void *p);
   static void deleteArray_EdbCouplesTree(void *p);
   static void destruct_EdbCouplesTree(void *p);
   static void streamer_EdbCouplesTree(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCouplesTree*)
   {
      ::EdbCouplesTree *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCouplesTree >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCouplesTree", ::EdbCouplesTree::Class_Version(), "EdbCouplesTree.h", 16,
                  typeid(::EdbCouplesTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCouplesTree::Dictionary, isa_proxy, 16,
                  sizeof(::EdbCouplesTree) );
      instance.SetNew(&new_EdbCouplesTree);
      instance.SetNewArray(&newArray_EdbCouplesTree);
      instance.SetDelete(&delete_EdbCouplesTree);
      instance.SetDeleteArray(&deleteArray_EdbCouplesTree);
      instance.SetDestructor(&destruct_EdbCouplesTree);
      instance.SetStreamerFunc(&streamer_EdbCouplesTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCouplesTree*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCouplesTree*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCouplesTree*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSegmentCut(void *p = nullptr);
   static void *newArray_EdbSegmentCut(Long_t size, void *p);
   static void delete_EdbSegmentCut(void *p);
   static void deleteArray_EdbSegmentCut(void *p);
   static void destruct_EdbSegmentCut(void *p);
   static void streamer_EdbSegmentCut(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegmentCut*)
   {
      ::EdbSegmentCut *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegmentCut >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegmentCut", ::EdbSegmentCut::Class_Version(), "EdbSegmentCut.h", 6,
                  typeid(::EdbSegmentCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegmentCut::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSegmentCut) );
      instance.SetNew(&new_EdbSegmentCut);
      instance.SetNewArray(&newArray_EdbSegmentCut);
      instance.SetDelete(&delete_EdbSegmentCut);
      instance.SetDeleteArray(&deleteArray_EdbSegmentCut);
      instance.SetDestructor(&destruct_EdbSegmentCut);
      instance.SetStreamerFunc(&streamer_EdbSegmentCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegmentCut*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegmentCut*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegmentCut*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbID::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbID::Class_Name()
{
   return "EdbID";
}

//______________________________________________________________________________
const char *EdbID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbID*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbID*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbID*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbID*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSegP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegP::Class_Name()
{
   return "EdbSegP";
}

//______________________________________________________________________________
const char *EdbSegP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSegCorr::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegCorr::Class_Name()
{
   return "EdbSegCorr";
}

//______________________________________________________________________________
const char *EdbSegCorr::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCorr*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegCorr::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCorr*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegCorr::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCorr*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegCorr::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCorr*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCorrectionMap::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCorrectionMap::Class_Name()
{
   return "EdbCorrectionMap";
}

//______________________________________________________________________________
const char *EdbCorrectionMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMap*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCorrectionMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMap*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCorrectionMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMap*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCorrectionMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCorrectionMap*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbLayer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbLayer::Class_Name()
{
   return "EdbLayer";
}

//______________________________________________________________________________
const char *EdbLayer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbLayer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbLayer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbLayer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbLayer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbLayer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbLayer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbLayer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanCond::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanCond::Class_Name()
{
   return "EdbScanCond";
}

//______________________________________________________________________________
const char *EdbScanCond::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanCond*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanCond::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanCond*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanCond::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanCond*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanCond::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanCond*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPlateP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPlateP::Class_Name()
{
   return "EdbPlateP";
}

//______________________________________________________________________________
const char *EdbPlateP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPlateP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPlateP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPlateP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbBrickP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbBrickP::Class_Name()
{
   return "EdbBrickP";
}

//______________________________________________________________________________
const char *EdbBrickP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbBrickP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbBrickP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbBrickP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbBrickP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbScanSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbScanSet::Class_Name()
{
   return "EdbScanSet";
}

//______________________________________________________________________________
const char *EdbScanSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbScanSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbScanSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbScanSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbScanSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbScanSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSigma::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSigma::Class_Name()
{
   return "EdbSigma";
}

//______________________________________________________________________________
const char *EdbSigma::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSigma*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSigma::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSigma*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSigma::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSigma*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSigma::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSigma*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSEQ::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSEQ::Class_Name()
{
   return "EdbSEQ";
}

//______________________________________________________________________________
const char *EdbSEQ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSEQ*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSEQ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSEQ*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSEQ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSEQ*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSEQ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSEQ*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSegCouple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegCouple::Class_Name()
{
   return "EdbSegCouple";
}

//______________________________________________________________________________
const char *EdbSegCouple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCouple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegCouple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCouple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegCouple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCouple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegCouple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegCouple*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCouplesTree::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCouplesTree::Class_Name()
{
   return "EdbCouplesTree";
}

//______________________________________________________________________________
const char *EdbCouplesTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCouplesTree*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCouplesTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCouplesTree*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCouplesTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCouplesTree*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCouplesTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCouplesTree*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSegmentCut::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegmentCut::Class_Name()
{
   return "EdbSegmentCut";
}

//______________________________________________________________________________
const char *EdbSegmentCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentCut*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegmentCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentCut*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegmentCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentCut*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegmentCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentCut*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbID::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbID.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eBrick;
      R__b >> ePlate;
      R__b >> eMajor;
      R__b >> eMinor;
      R__b.CheckByteCount(R__s, R__c, EdbID::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbID::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eBrick;
      R__b << ePlate;
      R__b << eMajor;
      R__b << eMinor;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbID(void *p) {
      return  p ? new(p) ::EdbID : new ::EdbID;
   }
   static void *newArray_EdbID(Long_t nElements, void *p) {
      return p ? new(p) ::EdbID[nElements] : new ::EdbID[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbID(void *p) {
      delete (static_cast<::EdbID*>(p));
   }
   static void deleteArray_EdbID(void *p) {
      delete [] (static_cast<::EdbID*>(p));
   }
   static void destruct_EdbID(void *p) {
      typedef ::EdbID current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbID(TBuffer &buf, void *obj) {
      ((::EdbID*)obj)->::EdbID::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbID

//______________________________________________________________________________
void EdbSegP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSegP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      EdbTrack2D::Streamer(R__b);
      R__b >> ePID;
      R__b >> eID;
      R__b.ReadStaticArray((int*)eVid);
      R__b.ReadStaticArray((int*)eAid);
      R__b >> eFlag;
      R__b >> eTrack;
      R__b >> eX;
      R__b >> eY;
      R__b >> eZ;
      R__b >> eTX;
      R__b >> eTY;
      R__b >> eSZ;
      R__b >> eChi2;
      R__b >> eProb;
      R__b >> eW;
      R__b >> eVolume;
      R__b >> eDZ;
      R__b >> eDZem;
      R__b >> eP;
      R__b >> eMCTrack;
      R__b >> eMCEvt;
      eScanID.Streamer(R__b);
      R__b >> eCOV;
      R__b.CheckByteCount(R__s, R__c, EdbSegP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSegP::IsA(), kTRUE);
      TObject::Streamer(R__b);
      EdbTrack2D::Streamer(R__b);
      R__b << ePID;
      R__b << eID;
      R__b.WriteArray(eVid, 2);
      R__b.WriteArray(eAid, 2);
      R__b << eFlag;
      R__b << eTrack;
      R__b << eX;
      R__b << eY;
      R__b << eZ;
      R__b << eTX;
      R__b << eTY;
      R__b << eSZ;
      R__b << eChi2;
      R__b << eProb;
      R__b << eW;
      R__b << eVolume;
      R__b << eDZ;
      R__b << eDZem;
      R__b << eP;
      R__b << eMCTrack;
      R__b << eMCEvt;
      eScanID.Streamer(R__b);
      R__b << eCOV;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegP(void *p) {
      return  p ? new(p) ::EdbSegP : new ::EdbSegP;
   }
   static void *newArray_EdbSegP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegP[nElements] : new ::EdbSegP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegP(void *p) {
      delete (static_cast<::EdbSegP*>(p));
   }
   static void deleteArray_EdbSegP(void *p) {
      delete [] (static_cast<::EdbSegP*>(p));
   }
   static void destruct_EdbSegP(void *p) {
      typedef ::EdbSegP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegP(TBuffer &buf, void *obj) {
      ((::EdbSegP*)obj)->::EdbSegP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSegP

//______________________________________________________________________________
void EdbSegCorr::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSegCorr.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eV.Streamer(R__b);
      R__b >> eApplyCorr;
      R__b.CheckByteCount(R__s, R__c, EdbSegCorr::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSegCorr::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eV.Streamer(R__b);
      R__b << eApplyCorr;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegCorr(void *p) {
      return  p ? new(p) ::EdbSegCorr : new ::EdbSegCorr;
   }
   static void *newArray_EdbSegCorr(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegCorr[nElements] : new ::EdbSegCorr[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegCorr(void *p) {
      delete (static_cast<::EdbSegCorr*>(p));
   }
   static void deleteArray_EdbSegCorr(void *p) {
      delete [] (static_cast<::EdbSegCorr*>(p));
   }
   static void destruct_EdbSegCorr(void *p) {
      typedef ::EdbSegCorr current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegCorr(TBuffer &buf, void *obj) {
      ((::EdbSegCorr*)obj)->::EdbSegCorr::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSegCorr

//______________________________________________________________________________
void EdbCorrectionMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbCorrectionMap.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbCell2::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbCorrectionMap::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbCorrectionMap::IsA(), kTRUE);
      EdbCell2::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCorrectionMap(void *p) {
      return  p ? new(p) ::EdbCorrectionMap : new ::EdbCorrectionMap;
   }
   static void *newArray_EdbCorrectionMap(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCorrectionMap[nElements] : new ::EdbCorrectionMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCorrectionMap(void *p) {
      delete (static_cast<::EdbCorrectionMap*>(p));
   }
   static void deleteArray_EdbCorrectionMap(void *p) {
      delete [] (static_cast<::EdbCorrectionMap*>(p));
   }
   static void destruct_EdbCorrectionMap(void *p) {
      typedef ::EdbCorrectionMap current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCorrectionMap(TBuffer &buf, void *obj) {
      ((::EdbCorrectionMap*)obj)->::EdbCorrectionMap::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCorrectionMap

//______________________________________________________________________________
void EdbLayer::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbLayer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EdbLayer::Class(),this);
   } else {
      R__b.WriteClassBuffer(EdbLayer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbLayer(void *p) {
      return  p ? new(p) ::EdbLayer : new ::EdbLayer;
   }
   static void *newArray_EdbLayer(Long_t nElements, void *p) {
      return p ? new(p) ::EdbLayer[nElements] : new ::EdbLayer[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbLayer(void *p) {
      delete (static_cast<::EdbLayer*>(p));
   }
   static void deleteArray_EdbLayer(void *p) {
      delete [] (static_cast<::EdbLayer*>(p));
   }
   static void destruct_EdbLayer(void *p) {
      typedef ::EdbLayer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbLayer

//______________________________________________________________________________
void EdbScanCond::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanCond.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> eSigmaXgr;
      R__b >> eSigmaYgr;
      R__b >> eSigmaZgr;
      R__b >> eDegrad;
      R__b >> eSigmaX0;
      R__b >> eSigmaY0;
      R__b >> eSigmaZ0;
      R__b >> eSigmaTX0;
      R__b >> eSigmaTY0;
      R__b.ReadStaticArray((float*)ePuls0);
      R__b.ReadStaticArray((float*)ePuls04);
      R__b >> eBinX;
      R__b >> eBinY;
      R__b >> eBinTX;
      R__b >> eBinTY;
      R__b >> eChi2Max;
      R__b >> eChi2PMax;
      R__b >> eChi2Mode;
      R__b >> eOffX;
      R__b >> eOffY;
      R__b >> eRadX0;
      R__b >> eLikelihoodMT;
      R__b.CheckByteCount(R__s, R__c, EdbScanCond::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanCond::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << eSigmaXgr;
      R__b << eSigmaYgr;
      R__b << eSigmaZgr;
      R__b << eDegrad;
      R__b << eSigmaX0;
      R__b << eSigmaY0;
      R__b << eSigmaZ0;
      R__b << eSigmaTX0;
      R__b << eSigmaTY0;
      R__b.WriteArray(ePuls0, 2);
      R__b.WriteArray(ePuls04, 2);
      R__b << eBinX;
      R__b << eBinY;
      R__b << eBinTX;
      R__b << eBinTY;
      R__b << eChi2Max;
      R__b << eChi2PMax;
      R__b << eChi2Mode;
      R__b << eOffX;
      R__b << eOffY;
      R__b << eRadX0;
      R__b << eLikelihoodMT;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanCond(void *p) {
      return  p ? new(p) ::EdbScanCond : new ::EdbScanCond;
   }
   static void *newArray_EdbScanCond(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanCond[nElements] : new ::EdbScanCond[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanCond(void *p) {
      delete (static_cast<::EdbScanCond*>(p));
   }
   static void deleteArray_EdbScanCond(void *p) {
      delete [] (static_cast<::EdbScanCond*>(p));
   }
   static void destruct_EdbScanCond(void *p) {
      typedef ::EdbScanCond current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanCond(TBuffer &buf, void *obj) {
      ((::EdbScanCond*)obj)->::EdbScanCond::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanCond

//______________________________________________________________________________
void EdbPlateP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPlateP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbLayer::Streamer(R__b);
      eLayers.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbPlateP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPlateP::IsA(), kTRUE);
      EdbLayer::Streamer(R__b);
      eLayers.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPlateP(void *p) {
      return  p ? new(p) ::EdbPlateP : new ::EdbPlateP;
   }
   static void *newArray_EdbPlateP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPlateP[nElements] : new ::EdbPlateP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPlateP(void *p) {
      delete (static_cast<::EdbPlateP*>(p));
   }
   static void deleteArray_EdbPlateP(void *p) {
      delete [] (static_cast<::EdbPlateP*>(p));
   }
   static void destruct_EdbPlateP(void *p) {
      typedef ::EdbPlateP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPlateP(TBuffer &buf, void *obj) {
      ((::EdbPlateP*)obj)->::EdbPlateP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPlateP

//______________________________________________________________________________
void EdbBrickP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbBrickP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbLayer::Streamer(R__b);
      ePlates.Streamer(R__b);
      eSpacers.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbBrickP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbBrickP::IsA(), kTRUE);
      EdbLayer::Streamer(R__b);
      ePlates.Streamer(R__b);
      eSpacers.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbBrickP(void *p) {
      return  p ? new(p) ::EdbBrickP : new ::EdbBrickP;
   }
   static void *newArray_EdbBrickP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbBrickP[nElements] : new ::EdbBrickP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbBrickP(void *p) {
      delete (static_cast<::EdbBrickP*>(p));
   }
   static void deleteArray_EdbBrickP(void *p) {
      delete [] (static_cast<::EdbBrickP*>(p));
   }
   static void destruct_EdbBrickP(void *p) {
      typedef ::EdbBrickP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbBrickP(TBuffer &buf, void *obj) {
      ((::EdbBrickP*)obj)->::EdbBrickP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbBrickP

//______________________________________________________________________________
void EdbScanSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbScanSet.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      eB.Streamer(R__b);
      ePID.Streamer(R__b);
      ePC.Streamer(R__b);
      eIDS.Streamer(R__b);
      R__b >> eReferencePlate;
      eID.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbScanSet::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbScanSet::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      eB.Streamer(R__b);
      ePID.Streamer(R__b);
      ePC.Streamer(R__b);
      eIDS.Streamer(R__b);
      R__b << eReferencePlate;
      eID.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbScanSet(void *p) {
      return  p ? new(p) ::EdbScanSet : new ::EdbScanSet;
   }
   static void *newArray_EdbScanSet(Long_t nElements, void *p) {
      return p ? new(p) ::EdbScanSet[nElements] : new ::EdbScanSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbScanSet(void *p) {
      delete (static_cast<::EdbScanSet*>(p));
   }
   static void deleteArray_EdbScanSet(void *p) {
      delete [] (static_cast<::EdbScanSet*>(p));
   }
   static void destruct_EdbScanSet(void *p) {
      typedef ::EdbScanSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbScanSet(TBuffer &buf, void *obj) {
      ((::EdbScanSet*)obj)->::EdbScanSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbScanSet

//______________________________________________________________________________
void EdbSigma::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSigma.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eSxy;
      R__b >> eSz;
      R__b >> eDZem;
      R__b >> eDZbase;
      R__b >> eDZcell;
      R__b >> eSxyZone;
      R__b >> eSaZone;
      R__b >> eSxyPlate;
      R__b >> eSaPlate;
      R__b.CheckByteCount(R__s, R__c, EdbSigma::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSigma::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eSxy;
      R__b << eSz;
      R__b << eDZem;
      R__b << eDZbase;
      R__b << eDZcell;
      R__b << eSxyZone;
      R__b << eSaZone;
      R__b << eSxyPlate;
      R__b << eSaPlate;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSigma(void *p) {
      return  p ? new(p) ::EdbSigma : new ::EdbSigma;
   }
   static void *newArray_EdbSigma(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSigma[nElements] : new ::EdbSigma[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSigma(void *p) {
      delete (static_cast<::EdbSigma*>(p));
   }
   static void deleteArray_EdbSigma(void *p) {
      delete [] (static_cast<::EdbSigma*>(p));
   }
   static void destruct_EdbSigma(void *p) {
      typedef ::EdbSigma current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSigma(TBuffer &buf, void *obj) {
      ((::EdbSigma*)obj)->::EdbSigma::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSigma

//______________________________________________________________________________
void EdbSEQ::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSEQ.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbSigma::Streamer(R__b);
      R__b >> eS0mt;
      R__b >> eNsigma;
      R__b >> eArea;
      R__b >> eNP;
      eExcludeThetaRange.Streamer(R__b);
      eHEq.Streamer(R__b);
      R__b >> eXLimits;
      R__b >> eYLimits;
      R__b >> eThetaLimits;
      R__b >> eWLimits;
      R__b >> eChiLimits;
      R__b.CheckByteCount(R__s, R__c, EdbSEQ::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSEQ::IsA(), kTRUE);
      EdbSigma::Streamer(R__b);
      R__b << eS0mt;
      R__b << eNsigma;
      R__b << eArea;
      R__b << eNP;
      eExcludeThetaRange.Streamer(R__b);
      eHEq.Streamer(R__b);
      R__b << eXLimits;
      R__b << eYLimits;
      R__b << eThetaLimits;
      R__b << eWLimits;
      R__b << eChiLimits;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSEQ(void *p) {
      return  p ? new(p) ::EdbSEQ : new ::EdbSEQ;
   }
   static void *newArray_EdbSEQ(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSEQ[nElements] : new ::EdbSEQ[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSEQ(void *p) {
      delete (static_cast<::EdbSEQ*>(p));
   }
   static void deleteArray_EdbSEQ(void *p) {
      delete [] (static_cast<::EdbSEQ*>(p));
   }
   static void destruct_EdbSEQ(void *p) {
      typedef ::EdbSEQ current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSEQ(TBuffer &buf, void *obj) {
      ((::EdbSEQ*)obj)->::EdbSEQ::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSEQ

//______________________________________________________________________________
void EdbSegCouple::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSegCouple.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eID1;
      R__b >> eID2;
      R__b >> eCHI2;
      R__b >> eCHI2P;
      R__b >> eN1;
      R__b >> eN2;
      R__b >> eN1tot;
      R__b >> eN2tot;
      R__b.CheckByteCount(R__s, R__c, EdbSegCouple::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSegCouple::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eID1;
      R__b << eID2;
      R__b << eCHI2;
      R__b << eCHI2P;
      R__b << eN1;
      R__b << eN2;
      R__b << eN1tot;
      R__b << eN2tot;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegCouple(void *p) {
      return  p ? new(p) ::EdbSegCouple : new ::EdbSegCouple;
   }
   static void *newArray_EdbSegCouple(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegCouple[nElements] : new ::EdbSegCouple[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegCouple(void *p) {
      delete (static_cast<::EdbSegCouple*>(p));
   }
   static void deleteArray_EdbSegCouple(void *p) {
      delete [] (static_cast<::EdbSegCouple*>(p));
   }
   static void destruct_EdbSegCouple(void *p) {
      typedef ::EdbSegCouple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegCouple(TBuffer &buf, void *obj) {
      ((::EdbSegCouple*)obj)->::EdbSegCouple::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSegCouple

//______________________________________________________________________________
void EdbCouplesTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbCouplesTree.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eS1;
      R__b >> eS2;
      R__b >> eS;
      R__b >> eCP;
      R__b >> eXv;
      R__b >> eYv;
      R__b >> ePid1;
      R__b >> ePid2;
      R__b >> eTree;
      R__b >> eEraseMask;
      R__b >> eAcceptMask;
      eCut.Streamer(R__b);
      R__b >> eApplyCorrections;
      ePlate.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbCouplesTree::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbCouplesTree::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eS1;
      R__b << eS2;
      R__b << eS;
      R__b << eCP;
      R__b << eXv;
      R__b << eYv;
      R__b << ePid1;
      R__b << ePid2;
      R__b << eTree;
      R__b << eEraseMask;
      R__b << eAcceptMask;
      eCut.Streamer(R__b);
      R__b << eApplyCorrections;
      ePlate.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCouplesTree(void *p) {
      return  p ? new(p) ::EdbCouplesTree : new ::EdbCouplesTree;
   }
   static void *newArray_EdbCouplesTree(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCouplesTree[nElements] : new ::EdbCouplesTree[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCouplesTree(void *p) {
      delete (static_cast<::EdbCouplesTree*>(p));
   }
   static void deleteArray_EdbCouplesTree(void *p) {
      delete [] (static_cast<::EdbCouplesTree*>(p));
   }
   static void destruct_EdbCouplesTree(void *p) {
      typedef ::EdbCouplesTree current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCouplesTree(TBuffer &buf, void *obj) {
      ((::EdbCouplesTree*)obj)->::EdbCouplesTree::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCouplesTree

//______________________________________________________________________________
void EdbSegmentCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSegmentCut.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eXI;
      R__b.ReadStaticArray((float*)eMin);
      R__b.ReadStaticArray((float*)eMax);
      R__b.CheckByteCount(R__s, R__c, EdbSegmentCut::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSegmentCut::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eXI;
      R__b.WriteArray(eMin, 5);
      R__b.WriteArray(eMax, 5);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegmentCut(void *p) {
      return  p ? new(p) ::EdbSegmentCut : new ::EdbSegmentCut;
   }
   static void *newArray_EdbSegmentCut(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegmentCut[nElements] : new ::EdbSegmentCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegmentCut(void *p) {
      delete (static_cast<::EdbSegmentCut*>(p));
   }
   static void deleteArray_EdbSegmentCut(void *p) {
      delete [] (static_cast<::EdbSegmentCut*>(p));
   }
   static void destruct_EdbSegmentCut(void *p) {
      typedef ::EdbSegmentCut current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegmentCut(TBuffer &buf, void *obj) {
      ((::EdbSegmentCut*)obj)->::EdbSegmentCut::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSegmentCut

namespace {
  void TriggerDictionaryInitialization_EbaseCint_Impl() {
    static const char* headers[] = {
"EdbSegCorr.h",
"EdbLayer.h",
"EdbScanCond.h",
"EdbBrick.h",
"EdbScanSet.h",
"EdbID.h",
"EdbSegP.h",
"EdbSigma.h",
"EdbSEQ.h",
"EdbCouplesTree.h",
"EdbSegCouple.h",
"EdbSegmentCut.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEbase/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EbaseCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbID.h")))  __attribute__((annotate("$clingAutoload$EdbSegCorr.h")))  EdbID;
class __attribute__((annotate("$clingAutoload$EdbSegP.h")))  __attribute__((annotate("$clingAutoload$EdbSegCorr.h")))  EdbSegP;
class __attribute__((annotate("$clingAutoload$EdbSegCorr.h")))  EdbSegCorr;
class __attribute__((annotate("$clingAutoload$EdbLayer.h")))  EdbCorrectionMap;
class __attribute__((annotate("$clingAutoload$EdbLayer.h")))  EdbLayer;
class __attribute__((annotate("$clingAutoload$EdbScanCond.h")))  EdbScanCond;
class __attribute__((annotate("$clingAutoload$EdbBrick.h")))  EdbPlateP;
class __attribute__((annotate("$clingAutoload$EdbBrick.h")))  EdbBrickP;
class __attribute__((annotate("$clingAutoload$EdbScanSet.h")))  EdbScanSet;
class __attribute__((annotate("$clingAutoload$EdbSigma.h")))  EdbSigma;
class __attribute__((annotate("$clingAutoload$EdbSEQ.h")))  EdbSEQ;
class __attribute__((annotate("$clingAutoload$EdbSegCouple.h")))  __attribute__((annotate("$clingAutoload$EdbCouplesTree.h")))  EdbSegCouple;
class __attribute__((annotate("$clingAutoload$EdbCouplesTree.h")))  EdbCouplesTree;
class __attribute__((annotate("$clingAutoload$EdbSegmentCut.h")))  EdbSegmentCut;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EbaseCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbSegCorr.h"
#include "EdbLayer.h"
#include "EdbScanCond.h"
#include "EdbBrick.h"
#include "EdbScanSet.h"
#include "EdbID.h"
#include "EdbSegP.h"
#include "EdbSigma.h"
#include "EdbSEQ.h"
#include "EdbCouplesTree.h"
#include "EdbSegCouple.h"
#include "EdbSegmentCut.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbBrickP", payloadCode, "@",
"EdbCorrectionMap", payloadCode, "@",
"EdbCouplesTree", payloadCode, "@",
"EdbID", payloadCode, "@",
"EdbLayer", payloadCode, "@",
"EdbPlateP", payloadCode, "@",
"EdbSEQ", payloadCode, "@",
"EdbScanCond", payloadCode, "@",
"EdbScanSet", payloadCode, "@",
"EdbSegCorr", payloadCode, "@",
"EdbSegCouple", payloadCode, "@",
"EdbSegP", payloadCode, "@",
"EdbSegmentCut", payloadCode, "@",
"EdbSigma", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EbaseCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EbaseCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EbaseCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EbaseCint() {
  TriggerDictionaryInitialization_EbaseCint_Impl();
}
