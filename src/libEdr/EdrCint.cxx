// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EdrCint
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
#include "EdbPattern.h"
#include "EdbPVRec.h"
#include "EdbVertex.h"
#include "EdbVertexComb.h"
#include "EdbVertexSpace.h"
#include "EdbTrackFitter.h"
#include "EdbMomentumEstimator.h"
#include "EdbPlateTracking.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbSegmentsBox(void *p = nullptr);
   static void *newArray_EdbSegmentsBox(Long_t size, void *p);
   static void delete_EdbSegmentsBox(void *p);
   static void deleteArray_EdbSegmentsBox(void *p);
   static void destruct_EdbSegmentsBox(void *p);
   static void streamer_EdbSegmentsBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegmentsBox*)
   {
      ::EdbSegmentsBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegmentsBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegmentsBox", ::EdbSegmentsBox::Class_Version(), "EdbPattern.h", 27,
                  typeid(::EdbSegmentsBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegmentsBox::Dictionary, isa_proxy, 16,
                  sizeof(::EdbSegmentsBox) );
      instance.SetNew(&new_EdbSegmentsBox);
      instance.SetNewArray(&newArray_EdbSegmentsBox);
      instance.SetDelete(&delete_EdbSegmentsBox);
      instance.SetDeleteArray(&deleteArray_EdbSegmentsBox);
      instance.SetDestructor(&destruct_EdbSegmentsBox);
      instance.SetStreamerFunc(&streamer_EdbSegmentsBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegmentsBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegmentsBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegmentsBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTrackP(void *p = nullptr);
   static void *newArray_EdbTrackP(Long_t size, void *p);
   static void delete_EdbTrackP(void *p);
   static void deleteArray_EdbTrackP(void *p);
   static void destruct_EdbTrackP(void *p);
   static void streamer_EdbTrackP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrackP*)
   {
      ::EdbTrackP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrackP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrackP", ::EdbTrackP::Class_Version(), "EdbPattern.h", 113,
                  typeid(::EdbTrackP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrackP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTrackP) );
      instance.SetNew(&new_EdbTrackP);
      instance.SetNewArray(&newArray_EdbTrackP);
      instance.SetDelete(&delete_EdbTrackP);
      instance.SetDeleteArray(&deleteArray_EdbTrackP);
      instance.SetDestructor(&destruct_EdbTrackP);
      instance.SetStreamerFunc(&streamer_EdbTrackP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrackP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrackP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrackP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPattern(void *p = nullptr);
   static void *newArray_EdbPattern(Long_t size, void *p);
   static void delete_EdbPattern(void *p);
   static void deleteArray_EdbPattern(void *p);
   static void destruct_EdbPattern(void *p);
   static void streamer_EdbPattern(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPattern*)
   {
      ::EdbPattern *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPattern >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPattern", ::EdbPattern::Class_Version(), "EdbPattern.h", 273,
                  typeid(::EdbPattern), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPattern::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPattern) );
      instance.SetNew(&new_EdbPattern);
      instance.SetNewArray(&newArray_EdbPattern);
      instance.SetDelete(&delete_EdbPattern);
      instance.SetDeleteArray(&deleteArray_EdbPattern);
      instance.SetDestructor(&destruct_EdbPattern);
      instance.SetStreamerFunc(&streamer_EdbPattern);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPattern*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPattern*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPattern*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPatternsVolume(void *p = nullptr);
   static void *newArray_EdbPatternsVolume(Long_t size, void *p);
   static void delete_EdbPatternsVolume(void *p);
   static void deleteArray_EdbPatternsVolume(void *p);
   static void destruct_EdbPatternsVolume(void *p);
   static void streamer_EdbPatternsVolume(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPatternsVolume*)
   {
      ::EdbPatternsVolume *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPatternsVolume >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPatternsVolume", ::EdbPatternsVolume::Class_Version(), "EdbPattern.h", 334,
                  typeid(::EdbPatternsVolume), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPatternsVolume::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPatternsVolume) );
      instance.SetNew(&new_EdbPatternsVolume);
      instance.SetNewArray(&newArray_EdbPatternsVolume);
      instance.SetDelete(&delete_EdbPatternsVolume);
      instance.SetDeleteArray(&deleteArray_EdbPatternsVolume);
      instance.SetDestructor(&destruct_EdbPatternsVolume);
      instance.SetStreamerFunc(&streamer_EdbPatternsVolume);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPatternsVolume*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPatternsVolume*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPatternsVolume*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPatCouple(void *p = nullptr);
   static void *newArray_EdbPatCouple(Long_t size, void *p);
   static void delete_EdbPatCouple(void *p);
   static void deleteArray_EdbPatCouple(void *p);
   static void destruct_EdbPatCouple(void *p);
   static void streamer_EdbPatCouple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPatCouple*)
   {
      ::EdbPatCouple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPatCouple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPatCouple", ::EdbPatCouple::Class_Version(), "EdbPVRec.h", 27,
                  typeid(::EdbPatCouple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPatCouple::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPatCouple) );
      instance.SetNew(&new_EdbPatCouple);
      instance.SetNewArray(&newArray_EdbPatCouple);
      instance.SetDelete(&delete_EdbPatCouple);
      instance.SetDeleteArray(&deleteArray_EdbPatCouple);
      instance.SetDestructor(&destruct_EdbPatCouple);
      instance.SetStreamerFunc(&streamer_EdbPatCouple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPatCouple*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPatCouple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPatCouple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPVRec(void *p = nullptr);
   static void *newArray_EdbPVRec(Long_t size, void *p);
   static void delete_EdbPVRec(void *p);
   static void deleteArray_EdbPVRec(void *p);
   static void destruct_EdbPVRec(void *p);
   static void streamer_EdbPVRec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPVRec*)
   {
      ::EdbPVRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPVRec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPVRec", ::EdbPVRec::Class_Version(), "EdbPVRec.h", 148,
                  typeid(::EdbPVRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPVRec::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPVRec) );
      instance.SetNew(&new_EdbPVRec);
      instance.SetNewArray(&newArray_EdbPVRec);
      instance.SetDelete(&delete_EdbPVRec);
      instance.SetDeleteArray(&deleteArray_EdbPVRec);
      instance.SetDestructor(&destruct_EdbPVRec);
      instance.SetStreamerFunc(&streamer_EdbPVRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPVRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPVRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPVRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbVTA(void *p = nullptr);
   static void *newArray_EdbVTA(Long_t size, void *p);
   static void delete_EdbVTA(void *p);
   static void deleteArray_EdbVTA(void *p);
   static void destruct_EdbVTA(void *p);
   static void streamer_EdbVTA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVTA*)
   {
      ::EdbVTA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVTA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVTA", ::EdbVTA::Class_Version(), "EdbVertex.h", 25,
                  typeid(::EdbVTA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVTA::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVTA) );
      instance.SetNew(&new_EdbVTA);
      instance.SetNewArray(&newArray_EdbVTA);
      instance.SetDelete(&delete_EdbVTA);
      instance.SetDeleteArray(&deleteArray_EdbVTA);
      instance.SetDestructor(&destruct_EdbVTA);
      instance.SetStreamerFunc(&streamer_EdbVTA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVTA*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVTA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVTA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbVertex(void *p = nullptr);
   static void *newArray_EdbVertex(Long_t size, void *p);
   static void delete_EdbVertex(void *p);
   static void deleteArray_EdbVertex(void *p);
   static void destruct_EdbVertex(void *p);
   static void streamer_EdbVertex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVertex*)
   {
      ::EdbVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVertex", ::EdbVertex::Class_Version(), "EdbVertex.h", 68,
                  typeid(::EdbVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVertex::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVertex) );
      instance.SetNew(&new_EdbVertex);
      instance.SetNewArray(&newArray_EdbVertex);
      instance.SetDelete(&delete_EdbVertex);
      instance.SetDeleteArray(&deleteArray_EdbVertex);
      instance.SetDestructor(&destruct_EdbVertex);
      instance.SetStreamerFunc(&streamer_EdbVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbVertexPar(void *p = nullptr);
   static void *newArray_EdbVertexPar(Long_t size, void *p);
   static void delete_EdbVertexPar(void *p);
   static void deleteArray_EdbVertexPar(void *p);
   static void destruct_EdbVertexPar(void *p);
   static void streamer_EdbVertexPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVertexPar*)
   {
      ::EdbVertexPar *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVertexPar >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVertexPar", ::EdbVertexPar::Class_Version(), "EdbVertex.h", 171,
                  typeid(::EdbVertexPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVertexPar::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVertexPar) );
      instance.SetNew(&new_EdbVertexPar);
      instance.SetNewArray(&newArray_EdbVertexPar);
      instance.SetDelete(&delete_EdbVertexPar);
      instance.SetDeleteArray(&deleteArray_EdbVertexPar);
      instance.SetDestructor(&destruct_EdbVertexPar);
      instance.SetStreamerFunc(&streamer_EdbVertexPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVertexPar*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVertexPar*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVertexPar*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbVertexRec(void *p = nullptr);
   static void *newArray_EdbVertexRec(Long_t size, void *p);
   static void delete_EdbVertexRec(void *p);
   static void deleteArray_EdbVertexRec(void *p);
   static void destruct_EdbVertexRec(void *p);
   static void streamer_EdbVertexRec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVertexRec*)
   {
      ::EdbVertexRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVertexRec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVertexRec", ::EdbVertexRec::Class_Version(), "EdbVertex.h", 193,
                  typeid(::EdbVertexRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVertexRec::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVertexRec) );
      instance.SetNew(&new_EdbVertexRec);
      instance.SetNewArray(&newArray_EdbVertexRec);
      instance.SetDelete(&delete_EdbVertexRec);
      instance.SetDeleteArray(&deleteArray_EdbVertexRec);
      instance.SetDestructor(&destruct_EdbVertexRec);
      instance.SetStreamerFunc(&streamer_EdbVertexRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVertexRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVertexRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVertexRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTopology(void *p = nullptr);
   static void *newArray_EdbTopology(Long_t size, void *p);
   static void delete_EdbTopology(void *p);
   static void deleteArray_EdbTopology(void *p);
   static void destruct_EdbTopology(void *p);
   static void streamer_EdbTopology(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTopology*)
   {
      ::EdbTopology *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTopology >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTopology", ::EdbTopology::Class_Version(), "EdbVertexComb.h", 7,
                  typeid(::EdbTopology), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTopology::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTopology) );
      instance.SetNew(&new_EdbTopology);
      instance.SetNewArray(&newArray_EdbTopology);
      instance.SetDelete(&delete_EdbTopology);
      instance.SetDeleteArray(&deleteArray_EdbTopology);
      instance.SetDestructor(&destruct_EdbTopology);
      instance.SetStreamerFunc(&streamer_EdbTopology);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTopology*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTopology*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTopology*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbVertexComb(void *p = nullptr);
   static void *newArray_EdbVertexComb(Long_t size, void *p);
   static void delete_EdbVertexComb(void *p);
   static void deleteArray_EdbVertexComb(void *p);
   static void destruct_EdbVertexComb(void *p);
   static void streamer_EdbVertexComb(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVertexComb*)
   {
      ::EdbVertexComb *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVertexComb >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVertexComb", ::EdbVertexComb::Class_Version(), "EdbVertexComb.h", 37,
                  typeid(::EdbVertexComb), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVertexComb::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVertexComb) );
      instance.SetNew(&new_EdbVertexComb);
      instance.SetNewArray(&newArray_EdbVertexComb);
      instance.SetDelete(&delete_EdbVertexComb);
      instance.SetDeleteArray(&deleteArray_EdbVertexComb);
      instance.SetDestructor(&destruct_EdbVertexComb);
      instance.SetStreamerFunc(&streamer_EdbVertexComb);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVertexComb*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVertexComb*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVertexComb*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbVertexSpace(void *p);
   static void deleteArray_EdbVertexSpace(void *p);
   static void destruct_EdbVertexSpace(void *p);
   static void streamer_EdbVertexSpace(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbVertexSpace*)
   {
      ::EdbVertexSpace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbVertexSpace >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbVertexSpace", ::EdbVertexSpace::Class_Version(), "EdbVertexSpace.h", 14,
                  typeid(::EdbVertexSpace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbVertexSpace::Dictionary, isa_proxy, 16,
                  sizeof(::EdbVertexSpace) );
      instance.SetDelete(&delete_EdbVertexSpace);
      instance.SetDeleteArray(&deleteArray_EdbVertexSpace);
      instance.SetDestructor(&destruct_EdbVertexSpace);
      instance.SetStreamerFunc(&streamer_EdbVertexSpace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbVertexSpace*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbVertexSpace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbVertexSpace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTrackFitter(void *p = nullptr);
   static void *newArray_EdbTrackFitter(Long_t size, void *p);
   static void delete_EdbTrackFitter(void *p);
   static void deleteArray_EdbTrackFitter(void *p);
   static void destruct_EdbTrackFitter(void *p);
   static void streamer_EdbTrackFitter(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrackFitter*)
   {
      ::EdbTrackFitter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrackFitter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrackFitter", ::EdbTrackFitter::Class_Version(), "EdbTrackFitter.h", 16,
                  typeid(::EdbTrackFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrackFitter::Dictionary, isa_proxy, 16,
                  sizeof(::EdbTrackFitter) );
      instance.SetNew(&new_EdbTrackFitter);
      instance.SetNewArray(&newArray_EdbTrackFitter);
      instance.SetDelete(&delete_EdbTrackFitter);
      instance.SetDeleteArray(&deleteArray_EdbTrackFitter);
      instance.SetDestructor(&destruct_EdbTrackFitter);
      instance.SetStreamerFunc(&streamer_EdbTrackFitter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrackFitter*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrackFitter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrackFitter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbMomentumEstimator(void *p = nullptr);
   static void *newArray_EdbMomentumEstimator(Long_t size, void *p);
   static void delete_EdbMomentumEstimator(void *p);
   static void deleteArray_EdbMomentumEstimator(void *p);
   static void destruct_EdbMomentumEstimator(void *p);
   static void streamer_EdbMomentumEstimator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbMomentumEstimator*)
   {
      ::EdbMomentumEstimator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbMomentumEstimator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbMomentumEstimator", ::EdbMomentumEstimator::Class_Version(), "EdbMomentumEstimator.h", 21,
                  typeid(::EdbMomentumEstimator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbMomentumEstimator::Dictionary, isa_proxy, 16,
                  sizeof(::EdbMomentumEstimator) );
      instance.SetNew(&new_EdbMomentumEstimator);
      instance.SetNewArray(&newArray_EdbMomentumEstimator);
      instance.SetDelete(&delete_EdbMomentumEstimator);
      instance.SetDeleteArray(&deleteArray_EdbMomentumEstimator);
      instance.SetDestructor(&destruct_EdbMomentumEstimator);
      instance.SetStreamerFunc(&streamer_EdbMomentumEstimator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbMomentumEstimator*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbMomentumEstimator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbMomentumEstimator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPlateTracking(void *p = nullptr);
   static void *newArray_EdbPlateTracking(Long_t size, void *p);
   static void delete_EdbPlateTracking(void *p);
   static void deleteArray_EdbPlateTracking(void *p);
   static void destruct_EdbPlateTracking(void *p);
   static void streamer_EdbPlateTracking(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPlateTracking*)
   {
      ::EdbPlateTracking *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPlateTracking >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPlateTracking", ::EdbPlateTracking::Class_Version(), "EdbPlateTracking.h", 19,
                  typeid(::EdbPlateTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPlateTracking::Dictionary, isa_proxy, 16,
                  sizeof(::EdbPlateTracking) );
      instance.SetNew(&new_EdbPlateTracking);
      instance.SetNewArray(&newArray_EdbPlateTracking);
      instance.SetDelete(&delete_EdbPlateTracking);
      instance.SetDeleteArray(&deleteArray_EdbPlateTracking);
      instance.SetDestructor(&destruct_EdbPlateTracking);
      instance.SetStreamerFunc(&streamer_EdbPlateTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPlateTracking*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPlateTracking*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPlateTracking*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbSegmentsBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegmentsBox::Class_Name()
{
   return "EdbSegmentsBox";
}

//______________________________________________________________________________
const char *EdbSegmentsBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentsBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegmentsBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentsBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegmentsBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentsBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegmentsBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegmentsBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTrackP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrackP::Class_Name()
{
   return "EdbTrackP";
}

//______________________________________________________________________________
const char *EdbTrackP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrackP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrackP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrackP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPattern::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPattern::Class_Name()
{
   return "EdbPattern";
}

//______________________________________________________________________________
const char *EdbPattern::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPattern*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPattern::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPattern*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPattern::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPattern*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPattern::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPattern*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPatternsVolume::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPatternsVolume::Class_Name()
{
   return "EdbPatternsVolume";
}

//______________________________________________________________________________
const char *EdbPatternsVolume::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPatternsVolume*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPatternsVolume::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPatternsVolume*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPatternsVolume::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPatternsVolume*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPatternsVolume::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPatternsVolume*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPatCouple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPatCouple::Class_Name()
{
   return "EdbPatCouple";
}

//______________________________________________________________________________
const char *EdbPatCouple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCouple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPatCouple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCouple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPatCouple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCouple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPatCouple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPatCouple*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPVRec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPVRec::Class_Name()
{
   return "EdbPVRec";
}

//______________________________________________________________________________
const char *EdbPVRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPVRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPVRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPVRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPVRec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVTA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVTA::Class_Name()
{
   return "EdbVTA";
}

//______________________________________________________________________________
const char *EdbVTA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVTA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVTA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVTA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVTA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVTA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVTA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVTA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVertex::Class_Name()
{
   return "EdbVertex";
}

//______________________________________________________________________________
const char *EdbVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVertexPar::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVertexPar::Class_Name()
{
   return "EdbVertexPar";
}

//______________________________________________________________________________
const char *EdbVertexPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexPar*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVertexPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexPar*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVertexPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexPar*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVertexPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexPar*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVertexRec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVertexRec::Class_Name()
{
   return "EdbVertexRec";
}

//______________________________________________________________________________
const char *EdbVertexRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexRec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVertexRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexRec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVertexRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexRec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVertexRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexRec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTopology::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTopology::Class_Name()
{
   return "EdbTopology";
}

//______________________________________________________________________________
const char *EdbTopology::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTopology*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTopology::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTopology*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTopology::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTopology*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTopology::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTopology*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVertexComb::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVertexComb::Class_Name()
{
   return "EdbVertexComb";
}

//______________________________________________________________________________
const char *EdbVertexComb::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexComb*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVertexComb::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexComb*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVertexComb::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexComb*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVertexComb::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexComb*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbVertexSpace::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbVertexSpace::Class_Name()
{
   return "EdbVertexSpace";
}

//______________________________________________________________________________
const char *EdbVertexSpace::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexSpace*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbVertexSpace::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexSpace*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbVertexSpace::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexSpace*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbVertexSpace::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbVertexSpace*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTrackFitter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrackFitter::Class_Name()
{
   return "EdbTrackFitter";
}

//______________________________________________________________________________
const char *EdbTrackFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackFitter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrackFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackFitter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrackFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackFitter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrackFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrackFitter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbMomentumEstimator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbMomentumEstimator::Class_Name()
{
   return "EdbMomentumEstimator";
}

//______________________________________________________________________________
const char *EdbMomentumEstimator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMomentumEstimator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbMomentumEstimator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMomentumEstimator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbMomentumEstimator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMomentumEstimator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbMomentumEstimator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMomentumEstimator*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPlateTracking::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPlateTracking::Class_Name()
{
   return "EdbPlateTracking";
}

//______________________________________________________________________________
const char *EdbPlateTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateTracking*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPlateTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateTracking*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPlateTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateTracking*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPlateTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlateTracking*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbSegmentsBox::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbSegmentsBox.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      EdbPointsBox2D::Streamer(R__b);
      R__b >> eX;
      R__b >> eY;
      R__b >> eZ;
      eSegments->Streamer(R__b);
      R__b >> eDZkeep;
      R__b.CheckByteCount(R__s, R__c, EdbSegmentsBox::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbSegmentsBox::IsA(), kTRUE);
      TObject::Streamer(R__b);
      EdbPointsBox2D::Streamer(R__b);
      R__b << eX;
      R__b << eY;
      R__b << eZ;
      eSegments->Streamer(R__b);
      R__b << eDZkeep;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegmentsBox(void *p) {
      return  p ? new(p) ::EdbSegmentsBox : new ::EdbSegmentsBox;
   }
   static void *newArray_EdbSegmentsBox(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegmentsBox[nElements] : new ::EdbSegmentsBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegmentsBox(void *p) {
      delete (static_cast<::EdbSegmentsBox*>(p));
   }
   static void deleteArray_EdbSegmentsBox(void *p) {
      delete [] (static_cast<::EdbSegmentsBox*>(p));
   }
   static void destruct_EdbSegmentsBox(void *p) {
      typedef ::EdbSegmentsBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegmentsBox(TBuffer &buf, void *obj) {
      ((::EdbSegmentsBox*)obj)->::EdbSegmentsBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSegmentsBox

//______________________________________________________________________________
void EdbTrackP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTrackP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbSegP::Streamer(R__b);
      R__b >> eS;
      R__b >> eSF;
      R__b >> eNpl;
      R__b >> eN0;
      R__b >> eM;
      R__b >> eDE;
      R__b >> ePDG;
      R__b >> ePerrUp;
      R__b >> ePerrDown;
      R__b.CheckByteCount(R__s, R__c, EdbTrackP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTrackP::IsA(), kTRUE);
      EdbSegP::Streamer(R__b);
      R__b << eS;
      R__b << eSF;
      R__b << eNpl;
      R__b << eN0;
      R__b << eM;
      R__b << eDE;
      R__b << ePDG;
      R__b << ePerrUp;
      R__b << ePerrDown;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTrackP(void *p) {
      return  p ? new(p) ::EdbTrackP : new ::EdbTrackP;
   }
   static void *newArray_EdbTrackP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTrackP[nElements] : new ::EdbTrackP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTrackP(void *p) {
      delete (static_cast<::EdbTrackP*>(p));
   }
   static void deleteArray_EdbTrackP(void *p) {
      delete [] (static_cast<::EdbTrackP*>(p));
   }
   static void destruct_EdbTrackP(void *p) {
      typedef ::EdbTrackP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrackP(TBuffer &buf, void *obj) {
      ((::EdbTrackP*)obj)->::EdbTrackP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTrackP

//______________________________________________________________________________
void EdbPattern::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPattern.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbSegmentsBox::Streamer(R__b);
      R__b >> eID;
      R__b >> ePID;
      R__b >> eStepX;
      R__b >> eStepY;
      R__b >> eStepTX;
      R__b >> eStepTY;
      R__b.ReadStaticArray((float*)eSigma);
      R__b >> eFlag;
      R__b >> eNAff;
      R__b.CheckByteCount(R__s, R__c, EdbPattern::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPattern::IsA(), kTRUE);
      EdbSegmentsBox::Streamer(R__b);
      R__b << eID;
      R__b << ePID;
      R__b << eStepX;
      R__b << eStepY;
      R__b << eStepTX;
      R__b << eStepTY;
      R__b.WriteArray(eSigma, 4);
      R__b << eFlag;
      R__b << eNAff;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPattern(void *p) {
      return  p ? new(p) ::EdbPattern : new ::EdbPattern;
   }
   static void *newArray_EdbPattern(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPattern[nElements] : new ::EdbPattern[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPattern(void *p) {
      delete (static_cast<::EdbPattern*>(p));
   }
   static void deleteArray_EdbPattern(void *p) {
      delete [] (static_cast<::EdbPattern*>(p));
   }
   static void destruct_EdbPattern(void *p) {
      typedef ::EdbPattern current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPattern(TBuffer &buf, void *obj) {
      ((::EdbPattern*)obj)->::EdbPattern::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPattern

//______________________________________________________________________________
void EdbPatternsVolume::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPatternsVolume.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eX;
      R__b >> eY;
      R__b >> eZ;
      R__b >> ePatterns;
      R__b >> eDescendingZ;
      R__b.CheckByteCount(R__s, R__c, EdbPatternsVolume::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPatternsVolume::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eX;
      R__b << eY;
      R__b << eZ;
      R__b << ePatterns;
      R__b << eDescendingZ;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPatternsVolume(void *p) {
      return  p ? new(p) ::EdbPatternsVolume : new ::EdbPatternsVolume;
   }
   static void *newArray_EdbPatternsVolume(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPatternsVolume[nElements] : new ::EdbPatternsVolume[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPatternsVolume(void *p) {
      delete (static_cast<::EdbPatternsVolume*>(p));
   }
   static void deleteArray_EdbPatternsVolume(void *p) {
      delete [] (static_cast<::EdbPatternsVolume*>(p));
   }
   static void destruct_EdbPatternsVolume(void *p) {
      typedef ::EdbPatternsVolume current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPatternsVolume(TBuffer &buf, void *obj) {
      ((::EdbPatternsVolume*)obj)->::EdbPatternsVolume::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPatternsVolume

//______________________________________________________________________________
void EdbPatCouple::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPatCouple.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((int*)eID);
      R__b >> eCoupleType;
      R__b >> ePat1;
      R__b >> ePat2;
      R__b.ReadStaticArray((float*)eOffset);
      R__b.ReadStaticArray((float*)eSigma);
      R__b >> eAff;
      R__b >> eSegCouples;
      R__b >> eCond;
      R__b >> eZlink;
      R__b >> eXoffsetMax;
      R__b >> eYoffsetMax;
      R__b >> eChi2Max;
      R__b >> eCHI2mode;
      R__b.CheckByteCount(R__s, R__c, EdbPatCouple::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPatCouple::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(eID, 2);
      R__b << eCoupleType;
      R__b << ePat1;
      R__b << ePat2;
      R__b.WriteArray(eOffset, 4);
      R__b.WriteArray(eSigma, 4);
      R__b << eAff;
      R__b << eSegCouples;
      R__b << eCond;
      R__b << eZlink;
      R__b << eXoffsetMax;
      R__b << eYoffsetMax;
      R__b << eChi2Max;
      R__b << eCHI2mode;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPatCouple(void *p) {
      return  p ? new(p) ::EdbPatCouple : new ::EdbPatCouple;
   }
   static void *newArray_EdbPatCouple(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPatCouple[nElements] : new ::EdbPatCouple[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPatCouple(void *p) {
      delete (static_cast<::EdbPatCouple*>(p));
   }
   static void deleteArray_EdbPatCouple(void *p) {
      delete [] (static_cast<::EdbPatCouple*>(p));
   }
   static void destruct_EdbPatCouple(void *p) {
      typedef ::EdbPatCouple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPatCouple(TBuffer &buf, void *obj) {
      ((::EdbPatCouple*)obj)->::EdbPatCouple::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPatCouple

//______________________________________________________________________________
void EdbPVRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPVRec.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbPatternsVolume::Streamer(R__b);
      R__b >> ePatCouples;
      R__b >> eChi2Max;
      R__b.ReadStaticArray((long*)eVdiff);
      R__b >> eScanCond;
      R__b >> eTracksCell;
      R__b >> eTracks;
      R__b >> eVTX;
      R__b.CheckByteCount(R__s, R__c, EdbPVRec::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPVRec::IsA(), kTRUE);
      EdbPatternsVolume::Streamer(R__b);
      R__b << ePatCouples;
      R__b << eChi2Max;
      R__b.WriteArray(eVdiff, 4);
      R__b << eScanCond;
      R__b << eTracksCell;
      R__b << eTracks;
      R__b << eVTX;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPVRec(void *p) {
      return  p ? new(p) ::EdbPVRec : new ::EdbPVRec;
   }
   static void *newArray_EdbPVRec(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPVRec[nElements] : new ::EdbPVRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPVRec(void *p) {
      delete (static_cast<::EdbPVRec*>(p));
   }
   static void deleteArray_EdbPVRec(void *p) {
      delete [] (static_cast<::EdbPVRec*>(p));
   }
   static void destruct_EdbPVRec(void *p) {
      typedef ::EdbPVRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPVRec(TBuffer &buf, void *obj) {
      ((::EdbPVRec*)obj)->::EdbPVRec::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPVRec

//______________________________________________________________________________
void EdbVTA::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVTA.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eTrack;
      R__b >> eVertex;
      R__b >> eZpos;
      R__b >> eFlag;
      R__b >> eImp;
      R__b >> eDist;
      R__b.CheckByteCount(R__s, R__c, EdbVTA::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVTA::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eTrack;
      R__b << eVertex;
      R__b << eZpos;
      R__b << eFlag;
      R__b << eImp;
      R__b << eDist;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbVTA(void *p) {
      return  p ? new(p) ::EdbVTA : new ::EdbVTA;
   }
   static void *newArray_EdbVTA(Long_t nElements, void *p) {
      return p ? new(p) ::EdbVTA[nElements] : new ::EdbVTA[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbVTA(void *p) {
      delete (static_cast<::EdbVTA*>(p));
   }
   static void deleteArray_EdbVTA(void *p) {
      delete [] (static_cast<::EdbVTA*>(p));
   }
   static void destruct_EdbVTA(void *p) {
      typedef ::EdbVTA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVTA(TBuffer &buf, void *obj) {
      ((::EdbVTA*)obj)->::EdbVTA::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbVTA

//______________________________________________________________________________
void EdbVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVertex.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eVTn.Streamer(R__b);
      eVTa.Streamer(R__b);
      R__b >> eX;
      R__b >> eY;
      R__b >> eZ;
      R__b >> eFlag;
      R__b >> eMCEvt;
      R__b >> eID;
      R__b >> eQuality;
      R__b >> eV;
      R__b.CheckByteCount(R__s, R__c, EdbVertex::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVertex::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eVTn.Streamer(R__b);
      eVTa.Streamer(R__b);
      R__b << eX;
      R__b << eY;
      R__b << eZ;
      R__b << eFlag;
      R__b << eMCEvt;
      R__b << eID;
      R__b << eQuality;
      R__b << eV;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbVertex(void *p) {
      return  p ? new(p) ::EdbVertex : new ::EdbVertex;
   }
   static void *newArray_EdbVertex(Long_t nElements, void *p) {
      return p ? new(p) ::EdbVertex[nElements] : new ::EdbVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbVertex(void *p) {
      delete (static_cast<::EdbVertex*>(p));
   }
   static void deleteArray_EdbVertex(void *p) {
      delete [] (static_cast<::EdbVertex*>(p));
   }
   static void destruct_EdbVertex(void *p) {
      typedef ::EdbVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVertex(TBuffer &buf, void *obj) {
      ((::EdbVertex*)obj)->::EdbVertex::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbVertex

//______________________________________________________________________________
void EdbVertexPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVertexPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eZbin;
      R__b >> eAbin;
      R__b >> eDZmax;
      R__b >> eProbMin;
      R__b >> eImpMax;
      R__b >> eImpMaxV;
      R__b >> eUseMom;
      R__b >> eUseSegPar;
      R__b >> eQualityMode;
      R__b >> eUseKalman;
      R__b >> eUseLimits;
      eVmin.Streamer(R__b);
      eVmax.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbVertexPar::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVertexPar::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eZbin;
      R__b << eAbin;
      R__b << eDZmax;
      R__b << eProbMin;
      R__b << eImpMax;
      R__b << eImpMaxV;
      R__b << eUseMom;
      R__b << eUseSegPar;
      R__b << eQualityMode;
      R__b << eUseKalman;
      R__b << eUseLimits;
      eVmin.Streamer(R__b);
      eVmax.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbVertexPar(void *p) {
      return  p ? new(p) ::EdbVertexPar : new ::EdbVertexPar;
   }
   static void *newArray_EdbVertexPar(Long_t nElements, void *p) {
      return p ? new(p) ::EdbVertexPar[nElements] : new ::EdbVertexPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbVertexPar(void *p) {
      delete (static_cast<::EdbVertexPar*>(p));
   }
   static void deleteArray_EdbVertexPar(void *p) {
      delete [] (static_cast<::EdbVertexPar*>(p));
   }
   static void destruct_EdbVertexPar(void *p) {
      typedef ::EdbVertexPar current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVertexPar(TBuffer &buf, void *obj) {
      ((::EdbVertexPar*)obj)->::EdbVertexPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbVertexPar

//______________________________________________________________________________
void EdbVertexRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVertexRec.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbVertexPar::Streamer(R__b);
      R__b >> eVertex;
      R__b >> eWorking;
      eVTA.Streamer(R__b);
      R__b >> eEdbTracks;
      R__b >> eVTX;
      R__b >> ePVR;
      R__b.CheckByteCount(R__s, R__c, EdbVertexRec::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVertexRec::IsA(), kTRUE);
      EdbVertexPar::Streamer(R__b);
      R__b << eVertex;
      R__b << eWorking;
      eVTA.Streamer(R__b);
      R__b << eEdbTracks;
      R__b << eVTX;
      R__b << ePVR;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbVertexRec(void *p) {
      return  p ? new(p) ::EdbVertexRec : new ::EdbVertexRec;
   }
   static void *newArray_EdbVertexRec(Long_t nElements, void *p) {
      return p ? new(p) ::EdbVertexRec[nElements] : new ::EdbVertexRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbVertexRec(void *p) {
      delete (static_cast<::EdbVertexRec*>(p));
   }
   static void deleteArray_EdbVertexRec(void *p) {
      delete [] (static_cast<::EdbVertexRec*>(p));
   }
   static void destruct_EdbVertexRec(void *p) {
      typedef ::EdbVertexRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVertexRec(TBuffer &buf, void *obj) {
      ((::EdbVertexRec*)obj)->::EdbVertexRec::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbVertexRec

//______________________________________________________________________________
void EdbTopology::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTopology.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eVertices.Streamer(R__b);
      eTracks.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbTopology::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTopology::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eVertices.Streamer(R__b);
      eTracks.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTopology(void *p) {
      return  p ? new(p) ::EdbTopology : new ::EdbTopology;
   }
   static void *newArray_EdbTopology(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTopology[nElements] : new ::EdbTopology[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTopology(void *p) {
      delete (static_cast<::EdbTopology*>(p));
   }
   static void deleteArray_EdbTopology(void *p) {
      delete [] (static_cast<::EdbTopology*>(p));
   }
   static void destruct_EdbTopology(void *p) {
      typedef ::EdbTopology current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTopology(TBuffer &buf, void *obj) {
      ((::EdbTopology*)obj)->::EdbTopology::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTopology

//______________________________________________________________________________
void EdbVertexComb::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVertexComb.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eTracks.Streamer(R__b);
      R__b >> eRecursionMax;
      R__b >> eRecursion;
      eCond.Streamer(R__b);
      eVPar.Streamer(R__b);
      R__b >> eZ0;
      R__b >> eProbMinV;
      R__b >> eNProngMinV;
      R__b >> eProbDetached;
      eVertices.Streamer(R__b);
      eOther.Streamer(R__b);
      eTopologies.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbVertexComb::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVertexComb::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eTracks.Streamer(R__b);
      R__b << eRecursionMax;
      R__b << eRecursion;
      eCond.Streamer(R__b);
      eVPar.Streamer(R__b);
      R__b << eZ0;
      R__b << eProbMinV;
      R__b << eNProngMinV;
      R__b << eProbDetached;
      eVertices.Streamer(R__b);
      eOther.Streamer(R__b);
      eTopologies.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbVertexComb(void *p) {
      return  p ? new(p) ::EdbVertexComb : new ::EdbVertexComb;
   }
   static void *newArray_EdbVertexComb(Long_t nElements, void *p) {
      return p ? new(p) ::EdbVertexComb[nElements] : new ::EdbVertexComb[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbVertexComb(void *p) {
      delete (static_cast<::EdbVertexComb*>(p));
   }
   static void deleteArray_EdbVertexComb(void *p) {
      delete [] (static_cast<::EdbVertexComb*>(p));
   }
   static void destruct_EdbVertexComb(void *p) {
      typedef ::EdbVertexComb current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVertexComb(TBuffer &buf, void *obj) {
      ((::EdbVertexComb*)obj)->::EdbVertexComb::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbVertexComb

//______________________________________________________________________________
void EdbVertexSpace::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbVertexSpace.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b.ReadStaticArray((float*)eVmin);
      R__b.ReadStaticArray((float*)eVmax);
      R__b.ReadStaticArray((float*)eBin);
      R__b.ReadStaticArray((int*)eNcell);
      R__b >> eCells;
      R__b.CheckByteCount(R__s, R__c, EdbVertexSpace::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbVertexSpace::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b.WriteArray(eVmin, 3);
      R__b.WriteArray(eVmax, 3);
      R__b.WriteArray(eBin, 3);
      R__b.WriteArray(eNcell, 3);
      R__b << eCells;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbVertexSpace(void *p) {
      delete (static_cast<::EdbVertexSpace*>(p));
   }
   static void deleteArray_EdbVertexSpace(void *p) {
      delete [] (static_cast<::EdbVertexSpace*>(p));
   }
   static void destruct_EdbVertexSpace(void *p) {
      typedef ::EdbVertexSpace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbVertexSpace(TBuffer &buf, void *obj) {
      ((::EdbVertexSpace*)obj)->::EdbVertexSpace::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbVertexSpace

//______________________________________________________________________________
void EdbTrackFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbTrackFitter.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> eNsegMax;
      R__b >> eX0;
      R__b >> eM;
      R__b >> ePdef;
      R__b >> eTPb;
      R__b >> ePcut;
      R__b >> eDE_correction;
      R__b.CheckByteCount(R__s, R__c, EdbTrackFitter::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbTrackFitter::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << eNsegMax;
      R__b << eX0;
      R__b << eM;
      R__b << ePdef;
      R__b << eTPb;
      R__b << ePcut;
      R__b << eDE_correction;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTrackFitter(void *p) {
      return  p ? new(p) ::EdbTrackFitter : new ::EdbTrackFitter;
   }
   static void *newArray_EdbTrackFitter(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTrackFitter[nElements] : new ::EdbTrackFitter[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTrackFitter(void *p) {
      delete (static_cast<::EdbTrackFitter*>(p));
   }
   static void deleteArray_EdbTrackFitter(void *p) {
      delete [] (static_cast<::EdbTrackFitter*>(p));
   }
   static void destruct_EdbTrackFitter(void *p) {
      typedef ::EdbTrackFitter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrackFitter(TBuffer &buf, void *obj) {
      ((::EdbTrackFitter*)obj)->::EdbTrackFitter::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTrackFitter

//______________________________________________________________________________
void EdbMomentumEstimator::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbMomentumEstimator.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbTrackFitter::Streamer(R__b);
      R__b >> eAlg;
      R__b >> eStatus;
      R__b >> eMinEntr;
      eDTxErrorFun.Streamer(R__b);
      eDTyErrorFun.Streamer(R__b);
      eDTsErrorFun.Streamer(R__b);
      R__b >> ePx;
      R__b >> ePy;
      R__b >> eDPx;
      R__b >> eDPy;
      R__b >> ePXmin;
      R__b >> ePXmax;
      R__b >> ePYmin;
      R__b >> ePYmax;
      R__b >> eP;
      R__b >> eDP;
      R__b >> ePmin;
      R__b >> ePmax;
      eTrack.Streamer(R__b);
      R__b >> eVerbose;
      R__b.CheckByteCount(R__s, R__c, EdbMomentumEstimator::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbMomentumEstimator::IsA(), kTRUE);
      EdbTrackFitter::Streamer(R__b);
      R__b << eAlg;
      R__b << eStatus;
      R__b << eMinEntr;
      eDTxErrorFun.Streamer(R__b);
      eDTyErrorFun.Streamer(R__b);
      eDTsErrorFun.Streamer(R__b);
      R__b << ePx;
      R__b << ePy;
      R__b << eDPx;
      R__b << eDPy;
      R__b << ePXmin;
      R__b << ePXmax;
      R__b << ePYmin;
      R__b << ePYmax;
      R__b << eP;
      R__b << eDP;
      R__b << ePmin;
      R__b << ePmax;
      eTrack.Streamer(R__b);
      R__b << eVerbose;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbMomentumEstimator(void *p) {
      return  p ? new(p) ::EdbMomentumEstimator : new ::EdbMomentumEstimator;
   }
   static void *newArray_EdbMomentumEstimator(Long_t nElements, void *p) {
      return p ? new(p) ::EdbMomentumEstimator[nElements] : new ::EdbMomentumEstimator[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbMomentumEstimator(void *p) {
      delete (static_cast<::EdbMomentumEstimator*>(p));
   }
   static void deleteArray_EdbMomentumEstimator(void *p) {
      delete [] (static_cast<::EdbMomentumEstimator*>(p));
   }
   static void destruct_EdbMomentumEstimator(void *p) {
      typedef ::EdbMomentumEstimator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbMomentumEstimator(TBuffer &buf, void *obj) {
      ((::EdbMomentumEstimator*)obj)->::EdbMomentumEstimator::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbMomentumEstimator

//______________________________________________________________________________
void EdbPlateTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbPlateTracking.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      ePred.Streamer(R__b);
      eSide1.Streamer(R__b);
      eSide2.Streamer(R__b);
      ePlate.Streamer(R__b);
      eS.Streamer(R__b);
      eS1.Streamer(R__b);
      eS2.Streamer(R__b);
      eNext.Streamer(R__b);
      R__b >> eStatus;
      eCondMT.Streamer(R__b);
      eCondBT.Streamer(R__b);
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
      R__b >> eDegradPos;
      R__b >> eDegradSlope;
      R__b.ReadStaticArray((int*)eIdp);
      R__b.ReadStaticArray((int*)eIdf);
      R__b >> ePredictionScan;
      R__b.CheckByteCount(R__s, R__c, EdbPlateTracking::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbPlateTracking::IsA(), kTRUE);
      TObject::Streamer(R__b);
      ePred.Streamer(R__b);
      eSide1.Streamer(R__b);
      eSide2.Streamer(R__b);
      ePlate.Streamer(R__b);
      eS.Streamer(R__b);
      eS1.Streamer(R__b);
      eS2.Streamer(R__b);
      eNext.Streamer(R__b);
      R__b << eStatus;
      eCondMT.Streamer(R__b);
      eCondBT.Streamer(R__b);
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
   static void *new_EdbPlateTracking(void *p) {
      return  p ? new(p) ::EdbPlateTracking : new ::EdbPlateTracking;
   }
   static void *newArray_EdbPlateTracking(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPlateTracking[nElements] : new ::EdbPlateTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPlateTracking(void *p) {
      delete (static_cast<::EdbPlateTracking*>(p));
   }
   static void deleteArray_EdbPlateTracking(void *p) {
      delete [] (static_cast<::EdbPlateTracking*>(p));
   }
   static void destruct_EdbPlateTracking(void *p) {
      typedef ::EdbPlateTracking current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPlateTracking(TBuffer &buf, void *obj) {
      ((::EdbPlateTracking*)obj)->::EdbPlateTracking::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPlateTracking

namespace {
  void TriggerDictionaryInitialization_EdrCint_Impl() {
    static const char* headers[] = {
"EdbPattern.h",
"EdbPVRec.h",
"EdbVertex.h",
"EdbVertexComb.h",
"EdbVertexSpace.h",
"EdbTrackFitter.h",
"EdbMomentumEstimator.h",
"EdbPlateTracking.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEdr/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EdrCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbPattern.h")))  EdbSegmentsBox;
class __attribute__((annotate("$clingAutoload$EdbPattern.h")))  EdbTrackP;
class __attribute__((annotate("$clingAutoload$EdbPattern.h")))  EdbPattern;
class __attribute__((annotate("$clingAutoload$EdbPattern.h")))  EdbPatternsVolume;
class __attribute__((annotate("$clingAutoload$EdbPVRec.h")))  EdbPatCouple;
class __attribute__((annotate("$clingAutoload$EdbPVRec.h")))  EdbPVRec;
class __attribute__((annotate("$clingAutoload$EdbVertex.h")))  EdbVTA;
class __attribute__((annotate("$clingAutoload$EdbVertex.h")))  EdbVertex;
class __attribute__((annotate("$clingAutoload$EdbVertex.h")))  EdbVertexPar;
class __attribute__((annotate("$clingAutoload$EdbVertex.h")))  EdbVertexRec;
class __attribute__((annotate("$clingAutoload$EdbVertexComb.h")))  EdbTopology;
class __attribute__((annotate("$clingAutoload$EdbVertexComb.h")))  EdbVertexComb;
class __attribute__((annotate("$clingAutoload$EdbVertexSpace.h")))  EdbVertexSpace;
class __attribute__((annotate("$clingAutoload$EdbTrackFitter.h")))  EdbTrackFitter;
class __attribute__((annotate("$clingAutoload$EdbMomentumEstimator.h")))  EdbMomentumEstimator;
class __attribute__((annotate("$clingAutoload$EdbPlateTracking.h")))  EdbPlateTracking;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EdrCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbPattern.h"
#include "EdbPVRec.h"
#include "EdbVertex.h"
#include "EdbVertexComb.h"
#include "EdbVertexSpace.h"
#include "EdbTrackFitter.h"
#include "EdbMomentumEstimator.h"
#include "EdbPlateTracking.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbMomentumEstimator", payloadCode, "@",
"EdbPVRec", payloadCode, "@",
"EdbPatCouple", payloadCode, "@",
"EdbPattern", payloadCode, "@",
"EdbPatternsVolume", payloadCode, "@",
"EdbPlateTracking", payloadCode, "@",
"EdbSegmentsBox", payloadCode, "@",
"EdbTopology", payloadCode, "@",
"EdbTrackFitter", payloadCode, "@",
"EdbTrackP", payloadCode, "@",
"EdbVTA", payloadCode, "@",
"EdbVertex", payloadCode, "@",
"EdbVertexComb", payloadCode, "@",
"EdbVertexPar", payloadCode, "@",
"EdbVertexRec", payloadCode, "@",
"EdbVertexSpace", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EdrCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EdrCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EdrCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EdrCint() {
  TriggerDictionaryInitialization_EdrCint_Impl();
}
