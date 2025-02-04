// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EdbCint
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
#include "EdbLog.h"
#include "EdbCluster.h"
#include "EdbView.h"
#include "EdbRunHeader.h"
#include "EdbRun.h"
#include "EdbImage.h"
#include "EdbFrame.h"
#include "EdbSegment.h"
#include "EdbStage.h"
#include "EdbAffine.h"
#include "EdbFiducial.h"
#include "EdbVirtual.h"
#include "EdbPrediction.h"
#include "EdbOnline.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_EdbPoint(void *p);
   static void deleteArray_EdbPoint(void *p);
   static void destruct_EdbPoint(void *p);
   static void streamer_EdbPoint(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPoint*)
   {
      ::EdbPoint *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPoint >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPoint", ::EdbPoint::Class_Version(), "EdbVirtual.h", 28,
                  typeid(::EdbPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPoint::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPoint) );
      instance.SetDelete(&delete_EdbPoint);
      instance.SetDeleteArray(&deleteArray_EdbPoint);
      instance.SetDestructor(&destruct_EdbPoint);
      instance.SetStreamerFunc(&streamer_EdbPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPoint*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPoint*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPoint*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbAngle2D(void *p);
   static void deleteArray_EdbAngle2D(void *p);
   static void destruct_EdbAngle2D(void *p);
   static void streamer_EdbAngle2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbAngle2D*)
   {
      ::EdbAngle2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbAngle2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbAngle2D", ::EdbAngle2D::Class_Version(), "EdbVirtual.h", 53,
                  typeid(::EdbAngle2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbAngle2D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbAngle2D) );
      instance.SetDelete(&delete_EdbAngle2D);
      instance.SetDeleteArray(&deleteArray_EdbAngle2D);
      instance.SetDestructor(&destruct_EdbAngle2D);
      instance.SetStreamerFunc(&streamer_EdbAngle2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbAngle2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbAngle2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbAngle2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbPoint2D(void *p);
   static void deleteArray_EdbPoint2D(void *p);
   static void destruct_EdbPoint2D(void *p);
   static void streamer_EdbPoint2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPoint2D*)
   {
      ::EdbPoint2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPoint2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPoint2D", ::EdbPoint2D::Class_Version(), "EdbVirtual.h", 76,
                  typeid(::EdbPoint2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPoint2D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPoint2D) );
      instance.SetDelete(&delete_EdbPoint2D);
      instance.SetDeleteArray(&deleteArray_EdbPoint2D);
      instance.SetDestructor(&destruct_EdbPoint2D);
      instance.SetStreamerFunc(&streamer_EdbPoint2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPoint2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPoint2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPoint2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbPoint3D(void *p);
   static void deleteArray_EdbPoint3D(void *p);
   static void destruct_EdbPoint3D(void *p);
   static void streamer_EdbPoint3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPoint3D*)
   {
      ::EdbPoint3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPoint3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPoint3D", ::EdbPoint3D::Class_Version(), "EdbVirtual.h", 101,
                  typeid(::EdbPoint3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPoint3D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPoint3D) );
      instance.SetDelete(&delete_EdbPoint3D);
      instance.SetDeleteArray(&deleteArray_EdbPoint3D);
      instance.SetDestructor(&destruct_EdbPoint3D);
      instance.SetStreamerFunc(&streamer_EdbPoint3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPoint3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPoint3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPoint3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbTrack2D(void *p);
   static void deleteArray_EdbTrack2D(void *p);
   static void destruct_EdbTrack2D(void *p);
   static void streamer_EdbTrack2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrack2D*)
   {
      ::EdbTrack2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrack2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrack2D", ::EdbTrack2D::Class_Version(), "EdbVirtual.h", 123,
                  typeid(::EdbTrack2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrack2D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbTrack2D) );
      instance.SetDelete(&delete_EdbTrack2D);
      instance.SetDeleteArray(&deleteArray_EdbTrack2D);
      instance.SetDestructor(&destruct_EdbTrack2D);
      instance.SetStreamerFunc(&streamer_EdbTrack2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrack2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrack2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrack2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbPointsBox2D(void *p);
   static void deleteArray_EdbPointsBox2D(void *p);
   static void destruct_EdbPointsBox2D(void *p);
   static void streamer_EdbPointsBox2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPointsBox2D*)
   {
      ::EdbPointsBox2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPointsBox2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPointsBox2D", ::EdbPointsBox2D::Class_Version(), "EdbVirtual.h", 142,
                  typeid(::EdbPointsBox2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPointsBox2D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPointsBox2D) );
      instance.SetDelete(&delete_EdbPointsBox2D);
      instance.SetDeleteArray(&deleteArray_EdbPointsBox2D);
      instance.SetDestructor(&destruct_EdbPointsBox2D);
      instance.SetStreamerFunc(&streamer_EdbPointsBox2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPointsBox2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPointsBox2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPointsBox2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbPointsBox3D(void *p);
   static void deleteArray_EdbPointsBox3D(void *p);
   static void destruct_EdbPointsBox3D(void *p);
   static void streamer_EdbPointsBox3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPointsBox3D*)
   {
      ::EdbPointsBox3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPointsBox3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPointsBox3D", ::EdbPointsBox3D::Class_Version(), "EdbVirtual.h", 205,
                  typeid(::EdbPointsBox3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPointsBox3D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPointsBox3D) );
      instance.SetDelete(&delete_EdbPointsBox3D);
      instance.SetDeleteArray(&deleteArray_EdbPointsBox3D);
      instance.SetDestructor(&destruct_EdbPointsBox3D);
      instance.SetStreamerFunc(&streamer_EdbPointsBox3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPointsBox3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPointsBox3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPointsBox3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCluster(void *p = nullptr);
   static void *newArray_EdbCluster(Long_t size, void *p);
   static void delete_EdbCluster(void *p);
   static void deleteArray_EdbCluster(void *p);
   static void destruct_EdbCluster(void *p);
   static void streamer_EdbCluster(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCluster*)
   {
      ::EdbCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCluster", ::EdbCluster::Class_Version(), "EdbCluster.h", 19,
                  typeid(::EdbCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCluster::Dictionary, isa_proxy, 17,
                  sizeof(::EdbCluster) );
      instance.SetNew(&new_EdbCluster);
      instance.SetNewArray(&newArray_EdbCluster);
      instance.SetDelete(&delete_EdbCluster);
      instance.SetDeleteArray(&deleteArray_EdbCluster);
      instance.SetDestructor(&destruct_EdbCluster);
      instance.SetStreamerFunc(&streamer_EdbCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbClustersBox(void *p);
   static void deleteArray_EdbClustersBox(void *p);
   static void destruct_EdbClustersBox(void *p);
   static void streamer_EdbClustersBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbClustersBox*)
   {
      ::EdbClustersBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbClustersBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbClustersBox", ::EdbClustersBox::Class_Version(), "EdbCluster.h", 118,
                  typeid(::EdbClustersBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbClustersBox::Dictionary, isa_proxy, 17,
                  sizeof(::EdbClustersBox) );
      instance.SetDelete(&delete_EdbClustersBox);
      instance.SetDeleteArray(&deleteArray_EdbClustersBox);
      instance.SetDestructor(&destruct_EdbClustersBox);
      instance.SetStreamerFunc(&streamer_EdbClustersBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbClustersBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbClustersBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbClustersBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbAffine2D(void *p = nullptr);
   static void *newArray_EdbAffine2D(Long_t size, void *p);
   static void delete_EdbAffine2D(void *p);
   static void deleteArray_EdbAffine2D(void *p);
   static void destruct_EdbAffine2D(void *p);
   static void streamer_EdbAffine2D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbAffine2D*)
   {
      ::EdbAffine2D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbAffine2D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbAffine2D", ::EdbAffine2D::Class_Version(), "EdbAffine.h", 17,
                  typeid(::EdbAffine2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbAffine2D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbAffine2D) );
      instance.SetNew(&new_EdbAffine2D);
      instance.SetNewArray(&newArray_EdbAffine2D);
      instance.SetDelete(&delete_EdbAffine2D);
      instance.SetDeleteArray(&deleteArray_EdbAffine2D);
      instance.SetDestructor(&destruct_EdbAffine2D);
      instance.SetStreamerFunc(&streamer_EdbAffine2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbAffine2D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbAffine2D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbAffine2D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbAffine3D(void *p = nullptr);
   static void *newArray_EdbAffine3D(Long_t size, void *p);
   static void delete_EdbAffine3D(void *p);
   static void deleteArray_EdbAffine3D(void *p);
   static void destruct_EdbAffine3D(void *p);
   static void streamer_EdbAffine3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbAffine3D*)
   {
      ::EdbAffine3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbAffine3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbAffine3D", ::EdbAffine3D::Class_Version(), "EdbAffine.h", 86,
                  typeid(::EdbAffine3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbAffine3D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbAffine3D) );
      instance.SetNew(&new_EdbAffine3D);
      instance.SetNewArray(&newArray_EdbAffine3D);
      instance.SetDelete(&delete_EdbAffine3D);
      instance.SetDeleteArray(&deleteArray_EdbAffine3D);
      instance.SetDestructor(&destruct_EdbAffine3D);
      instance.SetStreamerFunc(&streamer_EdbAffine3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbAffine3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbAffine3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbAffine3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSeg3D(void *p = nullptr);
   static void *newArray_EdbSeg3D(Long_t size, void *p);
   static void delete_EdbSeg3D(void *p);
   static void deleteArray_EdbSeg3D(void *p);
   static void destruct_EdbSeg3D(void *p);
   static void streamer_EdbSeg3D(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSeg3D*)
   {
      ::EdbSeg3D *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSeg3D >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSeg3D", ::EdbSeg3D::Class_Version(), "EdbSegment.h", 19,
                  typeid(::EdbSeg3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSeg3D::Dictionary, isa_proxy, 17,
                  sizeof(::EdbSeg3D) );
      instance.SetNew(&new_EdbSeg3D);
      instance.SetNewArray(&newArray_EdbSeg3D);
      instance.SetDelete(&delete_EdbSeg3D);
      instance.SetDeleteArray(&deleteArray_EdbSeg3D);
      instance.SetDestructor(&destruct_EdbSeg3D);
      instance.SetStreamerFunc(&streamer_EdbSeg3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSeg3D*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSeg3D*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSeg3D*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbSegment(void *p = nullptr);
   static void *newArray_EdbSegment(Long_t size, void *p);
   static void delete_EdbSegment(void *p);
   static void deleteArray_EdbSegment(void *p);
   static void destruct_EdbSegment(void *p);
   static void streamer_EdbSegment(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbSegment*)
   {
      ::EdbSegment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbSegment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbSegment", ::EdbSegment::Class_Version(), "EdbSegment.h", 61,
                  typeid(::EdbSegment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbSegment::Dictionary, isa_proxy, 17,
                  sizeof(::EdbSegment) );
      instance.SetNew(&new_EdbSegment);
      instance.SetNewArray(&newArray_EdbSegment);
      instance.SetDelete(&delete_EdbSegment);
      instance.SetDeleteArray(&deleteArray_EdbSegment);
      instance.SetDestructor(&destruct_EdbSegment);
      instance.SetStreamerFunc(&streamer_EdbSegment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbSegment*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbSegment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbSegment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbTrack(void *p = nullptr);
   static void *newArray_EdbTrack(Long_t size, void *p);
   static void delete_EdbTrack(void *p);
   static void deleteArray_EdbTrack(void *p);
   static void destruct_EdbTrack(void *p);
   static void streamer_EdbTrack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbTrack*)
   {
      ::EdbTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbTrack", ::EdbTrack::Class_Version(), "EdbSegment.h", 125,
                  typeid(::EdbTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbTrack::Dictionary, isa_proxy, 17,
                  sizeof(::EdbTrack) );
      instance.SetNew(&new_EdbTrack);
      instance.SetNewArray(&newArray_EdbTrack);
      instance.SetDelete(&delete_EdbTrack);
      instance.SetDeleteArray(&deleteArray_EdbTrack);
      instance.SetDestructor(&destruct_EdbTrack);
      instance.SetStreamerFunc(&streamer_EdbTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbViewHeader(void *p = nullptr);
   static void *newArray_EdbViewHeader(Long_t size, void *p);
   static void delete_EdbViewHeader(void *p);
   static void deleteArray_EdbViewHeader(void *p);
   static void destruct_EdbViewHeader(void *p);
   static void streamer_EdbViewHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbViewHeader*)
   {
      ::EdbViewHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbViewHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbViewHeader", ::EdbViewHeader::Class_Version(), "EdbView.h", 26,
                  typeid(::EdbViewHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbViewHeader::Dictionary, isa_proxy, 17,
                  sizeof(::EdbViewHeader) );
      instance.SetNew(&new_EdbViewHeader);
      instance.SetNewArray(&newArray_EdbViewHeader);
      instance.SetDelete(&delete_EdbViewHeader);
      instance.SetDeleteArray(&deleteArray_EdbViewHeader);
      instance.SetDestructor(&destruct_EdbViewHeader);
      instance.SetStreamerFunc(&streamer_EdbViewHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbViewHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbViewHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbViewHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbView(void *p = nullptr);
   static void *newArray_EdbView(Long_t size, void *p);
   static void delete_EdbView(void *p);
   static void deleteArray_EdbView(void *p);
   static void destruct_EdbView(void *p);
   static void streamer_EdbView(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbView*)
   {
      ::EdbView *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbView >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbView", ::EdbView::Class_Version(), "EdbView.h", 134,
                  typeid(::EdbView), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbView::Dictionary, isa_proxy, 17,
                  sizeof(::EdbView) );
      instance.SetNew(&new_EdbView);
      instance.SetNewArray(&newArray_EdbView);
      instance.SetDelete(&delete_EdbView);
      instance.SetDeleteArray(&deleteArray_EdbView);
      instance.SetDestructor(&destruct_EdbView);
      instance.SetStreamerFunc(&streamer_EdbView);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbView*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbView*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbView*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCCD(void *p = nullptr);
   static void *newArray_EdbCCD(Long_t size, void *p);
   static void delete_EdbCCD(void *p);
   static void deleteArray_EdbCCD(void *p);
   static void destruct_EdbCCD(void *p);
   static void streamer_EdbCCD(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCCD*)
   {
      ::EdbCCD *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCCD >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCCD", ::EdbCCD::Class_Version(), "EdbStage.h", 21,
                  typeid(::EdbCCD), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCCD::Dictionary, isa_proxy, 17,
                  sizeof(::EdbCCD) );
      instance.SetNew(&new_EdbCCD);
      instance.SetNewArray(&newArray_EdbCCD);
      instance.SetDelete(&delete_EdbCCD);
      instance.SetDeleteArray(&deleteArray_EdbCCD);
      instance.SetDestructor(&destruct_EdbCCD);
      instance.SetStreamerFunc(&streamer_EdbCCD);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCCD*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCCD*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCCD*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbObjective(void *p = nullptr);
   static void *newArray_EdbObjective(Long_t size, void *p);
   static void delete_EdbObjective(void *p);
   static void deleteArray_EdbObjective(void *p);
   static void destruct_EdbObjective(void *p);
   static void streamer_EdbObjective(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbObjective*)
   {
      ::EdbObjective *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbObjective >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbObjective", ::EdbObjective::Class_Version(), "EdbStage.h", 50,
                  typeid(::EdbObjective), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbObjective::Dictionary, isa_proxy, 17,
                  sizeof(::EdbObjective) );
      instance.SetNew(&new_EdbObjective);
      instance.SetNewArray(&newArray_EdbObjective);
      instance.SetDelete(&delete_EdbObjective);
      instance.SetDeleteArray(&deleteArray_EdbObjective);
      instance.SetDestructor(&destruct_EdbObjective);
      instance.SetStreamerFunc(&streamer_EdbObjective);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbObjective*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbObjective*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbObjective*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbStage(void *p = nullptr);
   static void *newArray_EdbStage(Long_t size, void *p);
   static void delete_EdbStage(void *p);
   static void deleteArray_EdbStage(void *p);
   static void destruct_EdbStage(void *p);
   static void streamer_EdbStage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbStage*)
   {
      ::EdbStage *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbStage >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbStage", ::EdbStage::Class_Version(), "EdbStage.h", 85,
                  typeid(::EdbStage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbStage::Dictionary, isa_proxy, 17,
                  sizeof(::EdbStage) );
      instance.SetNew(&new_EdbStage);
      instance.SetNewArray(&newArray_EdbStage);
      instance.SetDelete(&delete_EdbStage);
      instance.SetDeleteArray(&deleteArray_EdbStage);
      instance.SetDestructor(&destruct_EdbStage);
      instance.SetStreamerFunc(&streamer_EdbStage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbStage*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbStage*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbStage*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbMark(void *p = nullptr);
   static void *newArray_EdbMark(Long_t size, void *p);
   static void delete_EdbMark(void *p);
   static void deleteArray_EdbMark(void *p);
   static void destruct_EdbMark(void *p);
   static void streamer_EdbMark(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbMark*)
   {
      ::EdbMark *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbMark >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbMark", ::EdbMark::Class_Version(), "EdbFiducial.h", 21,
                  typeid(::EdbMark), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbMark::Dictionary, isa_proxy, 17,
                  sizeof(::EdbMark) );
      instance.SetNew(&new_EdbMark);
      instance.SetNewArray(&newArray_EdbMark);
      instance.SetDelete(&delete_EdbMark);
      instance.SetDeleteArray(&deleteArray_EdbMark);
      instance.SetDestructor(&destruct_EdbMark);
      instance.SetStreamerFunc(&streamer_EdbMark);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbMark*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbMark*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbMark*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbMarksBox(void *p = nullptr);
   static void *newArray_EdbMarksBox(Long_t size, void *p);
   static void delete_EdbMarksBox(void *p);
   static void deleteArray_EdbMarksBox(void *p);
   static void destruct_EdbMarksBox(void *p);
   static void streamer_EdbMarksBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbMarksBox*)
   {
      ::EdbMarksBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbMarksBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbMarksBox", ::EdbMarksBox::Class_Version(), "EdbFiducial.h", 55,
                  typeid(::EdbMarksBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbMarksBox::Dictionary, isa_proxy, 17,
                  sizeof(::EdbMarksBox) );
      instance.SetNew(&new_EdbMarksBox);
      instance.SetNewArray(&newArray_EdbMarksBox);
      instance.SetDelete(&delete_EdbMarksBox);
      instance.SetDeleteArray(&deleteArray_EdbMarksBox);
      instance.SetDestructor(&destruct_EdbMarksBox);
      instance.SetStreamerFunc(&streamer_EdbMarksBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbMarksBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbMarksBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbMarksBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbMarksSet(void *p = nullptr);
   static void *newArray_EdbMarksSet(Long_t size, void *p);
   static void delete_EdbMarksSet(void *p);
   static void deleteArray_EdbMarksSet(void *p);
   static void destruct_EdbMarksSet(void *p);
   static void streamer_EdbMarksSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbMarksSet*)
   {
      ::EdbMarksSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbMarksSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbMarksSet", ::EdbMarksSet::Class_Version(), "EdbFiducial.h", 88,
                  typeid(::EdbMarksSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbMarksSet::Dictionary, isa_proxy, 17,
                  sizeof(::EdbMarksSet) );
      instance.SetNew(&new_EdbMarksSet);
      instance.SetNewArray(&newArray_EdbMarksSet);
      instance.SetDelete(&delete_EdbMarksSet);
      instance.SetDeleteArray(&deleteArray_EdbMarksSet);
      instance.SetDestructor(&destruct_EdbMarksSet);
      instance.SetStreamerFunc(&streamer_EdbMarksSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbMarksSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbMarksSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbMarksSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbArea(void *p = nullptr);
   static void *newArray_EdbArea(Long_t size, void *p);
   static void delete_EdbArea(void *p);
   static void deleteArray_EdbArea(void *p);
   static void destruct_EdbArea(void *p);
   static void streamer_EdbArea(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbArea*)
   {
      ::EdbArea *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbArea >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbArea", ::EdbArea::Class_Version(), "EdbFiducial.h", 134,
                  typeid(::EdbArea), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbArea::Dictionary, isa_proxy, 17,
                  sizeof(::EdbArea) );
      instance.SetNew(&new_EdbArea);
      instance.SetNewArray(&newArray_EdbArea);
      instance.SetDelete(&delete_EdbArea);
      instance.SetDeleteArray(&deleteArray_EdbArea);
      instance.SetDestructor(&destruct_EdbArea);
      instance.SetStreamerFunc(&streamer_EdbArea);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbArea*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbArea*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbArea*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPlate(void *p = nullptr);
   static void *newArray_EdbPlate(Long_t size, void *p);
   static void delete_EdbPlate(void *p);
   static void deleteArray_EdbPlate(void *p);
   static void destruct_EdbPlate(void *p);
   static void streamer_EdbPlate(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPlate*)
   {
      ::EdbPlate *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPlate >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPlate", ::EdbPlate::Class_Version(), "EdbRunHeader.h", 25,
                  typeid(::EdbPlate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPlate::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPlate) );
      instance.SetNew(&new_EdbPlate);
      instance.SetNewArray(&newArray_EdbPlate);
      instance.SetDelete(&delete_EdbPlate);
      instance.SetDeleteArray(&deleteArray_EdbPlate);
      instance.SetDestructor(&destruct_EdbPlate);
      instance.SetStreamerFunc(&streamer_EdbPlate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPlate*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPlate*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPlate*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbCamera(void *p = nullptr);
   static void *newArray_EdbCamera(Long_t size, void *p);
   static void delete_EdbCamera(void *p);
   static void deleteArray_EdbCamera(void *p);
   static void destruct_EdbCamera(void *p);
   static void streamer_EdbCamera(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbCamera*)
   {
      ::EdbCamera *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbCamera >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbCamera", ::EdbCamera::Class_Version(), "EdbRunHeader.h", 69,
                  typeid(::EdbCamera), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbCamera::Dictionary, isa_proxy, 17,
                  sizeof(::EdbCamera) );
      instance.SetNew(&new_EdbCamera);
      instance.SetNewArray(&newArray_EdbCamera);
      instance.SetDelete(&delete_EdbCamera);
      instance.SetDeleteArray(&deleteArray_EdbCamera);
      instance.SetDestructor(&destruct_EdbCamera);
      instance.SetStreamerFunc(&streamer_EdbCamera);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbCamera*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbCamera*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbCamera*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbRunHeader(void *p = nullptr);
   static void *newArray_EdbRunHeader(Long_t size, void *p);
   static void delete_EdbRunHeader(void *p);
   static void deleteArray_EdbRunHeader(void *p);
   static void destruct_EdbRunHeader(void *p);
   static void streamer_EdbRunHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbRunHeader*)
   {
      ::EdbRunHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbRunHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbRunHeader", ::EdbRunHeader::Class_Version(), "EdbRunHeader.h", 94,
                  typeid(::EdbRunHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbRunHeader::Dictionary, isa_proxy, 17,
                  sizeof(::EdbRunHeader) );
      instance.SetNew(&new_EdbRunHeader);
      instance.SetNewArray(&newArray_EdbRunHeader);
      instance.SetDelete(&delete_EdbRunHeader);
      instance.SetDeleteArray(&deleteArray_EdbRunHeader);
      instance.SetDestructor(&destruct_EdbRunHeader);
      instance.SetStreamerFunc(&streamer_EdbRunHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbRunHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbRunHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbRunHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPredictionDC(void *p = nullptr);
   static void *newArray_EdbPredictionDC(Long_t size, void *p);
   static void delete_EdbPredictionDC(void *p);
   static void deleteArray_EdbPredictionDC(void *p);
   static void destruct_EdbPredictionDC(void *p);
   static void streamer_EdbPredictionDC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPredictionDC*)
   {
      ::EdbPredictionDC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPredictionDC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPredictionDC", ::EdbPredictionDC::Class_Version(), "EdbPrediction.h", 21,
                  typeid(::EdbPredictionDC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPredictionDC::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPredictionDC) );
      instance.SetNew(&new_EdbPredictionDC);
      instance.SetNewArray(&newArray_EdbPredictionDC);
      instance.SetDelete(&delete_EdbPredictionDC);
      instance.SetDeleteArray(&deleteArray_EdbPredictionDC);
      instance.SetDestructor(&destruct_EdbPredictionDC);
      instance.SetStreamerFunc(&streamer_EdbPredictionDC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPredictionDC*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPredictionDC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPredictionDC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbPredictionsBox(void *p = nullptr);
   static void *newArray_EdbPredictionsBox(Long_t size, void *p);
   static void delete_EdbPredictionsBox(void *p);
   static void deleteArray_EdbPredictionsBox(void *p);
   static void destruct_EdbPredictionsBox(void *p);
   static void streamer_EdbPredictionsBox(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbPredictionsBox*)
   {
      ::EdbPredictionsBox *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbPredictionsBox >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbPredictionsBox", ::EdbPredictionsBox::Class_Version(), "EdbPrediction.h", 71,
                  typeid(::EdbPredictionsBox), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbPredictionsBox::Dictionary, isa_proxy, 17,
                  sizeof(::EdbPredictionsBox) );
      instance.SetNew(&new_EdbPredictionsBox);
      instance.SetNewArray(&newArray_EdbPredictionsBox);
      instance.SetDelete(&delete_EdbPredictionsBox);
      instance.SetDeleteArray(&deleteArray_EdbPredictionsBox);
      instance.SetDestructor(&destruct_EdbPredictionsBox);
      instance.SetStreamerFunc(&streamer_EdbPredictionsBox);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbPredictionsBox*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbPredictionsBox*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbPredictionsBox*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbRun(void *p = nullptr);
   static void *newArray_EdbRun(Long_t size, void *p);
   static void delete_EdbRun(void *p);
   static void deleteArray_EdbRun(void *p);
   static void destruct_EdbRun(void *p);
   static void streamer_EdbRun(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbRun*)
   {
      ::EdbRun *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbRun >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbRun", ::EdbRun::Class_Version(), "EdbRun.h", 74,
                  typeid(::EdbRun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbRun::Dictionary, isa_proxy, 17,
                  sizeof(::EdbRun) );
      instance.SetNew(&new_EdbRun);
      instance.SetNewArray(&newArray_EdbRun);
      instance.SetDelete(&delete_EdbRun);
      instance.SetDeleteArray(&deleteArray_EdbRun);
      instance.SetDestructor(&destruct_EdbRun);
      instance.SetStreamerFunc(&streamer_EdbRun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbRun*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbRun*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbRun*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbImage(void *p = nullptr);
   static void *newArray_EdbImage(Long_t size, void *p);
   static void delete_EdbImage(void *p);
   static void deleteArray_EdbImage(void *p);
   static void destruct_EdbImage(void *p);
   static void streamer_EdbImage(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbImage*)
   {
      ::EdbImage *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbImage >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbImage", ::EdbImage::Class_Version(), "EdbImage.h", 23,
                  typeid(::EdbImage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbImage::Dictionary, isa_proxy, 17,
                  sizeof(::EdbImage) );
      instance.SetNew(&new_EdbImage);
      instance.SetNewArray(&newArray_EdbImage);
      instance.SetDelete(&delete_EdbImage);
      instance.SetDeleteArray(&deleteArray_EdbImage);
      instance.SetDestructor(&destruct_EdbImage);
      instance.SetStreamerFunc(&streamer_EdbImage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbImage*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbImage*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbImage*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbFrame(void *p = nullptr);
   static void *newArray_EdbFrame(Long_t size, void *p);
   static void delete_EdbFrame(void *p);
   static void deleteArray_EdbFrame(void *p);
   static void destruct_EdbFrame(void *p);
   static void streamer_EdbFrame(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbFrame*)
   {
      ::EdbFrame *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbFrame >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbFrame", ::EdbFrame::Class_Version(), "EdbFrame.h", 20,
                  typeid(::EdbFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbFrame::Dictionary, isa_proxy, 17,
                  sizeof(::EdbFrame) );
      instance.SetNew(&new_EdbFrame);
      instance.SetNewArray(&newArray_EdbFrame);
      instance.SetDelete(&delete_EdbFrame);
      instance.SetDeleteArray(&deleteArray_EdbFrame);
      instance.SetDestructor(&destruct_EdbFrame);
      instance.SetStreamerFunc(&streamer_EdbFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbFrame*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbFrame*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbFrame*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbPoint::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPoint::Class_Name()
{
   return "EdbPoint";
}

//______________________________________________________________________________
const char *EdbPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbAngle2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbAngle2D::Class_Name()
{
   return "EdbAngle2D";
}

//______________________________________________________________________________
const char *EdbAngle2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAngle2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbAngle2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAngle2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbAngle2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAngle2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbAngle2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAngle2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPoint2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPoint2D::Class_Name()
{
   return "EdbPoint2D";
}

//______________________________________________________________________________
const char *EdbPoint2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPoint2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPoint2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPoint2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPoint3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPoint3D::Class_Name()
{
   return "EdbPoint3D";
}

//______________________________________________________________________________
const char *EdbPoint3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPoint3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPoint3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPoint3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPoint3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTrack2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrack2D::Class_Name()
{
   return "EdbTrack2D";
}

//______________________________________________________________________________
const char *EdbTrack2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrack2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrack2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrack2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPointsBox2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPointsBox2D::Class_Name()
{
   return "EdbPointsBox2D";
}

//______________________________________________________________________________
const char *EdbPointsBox2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPointsBox2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPointsBox2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPointsBox2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPointsBox3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPointsBox3D::Class_Name()
{
   return "EdbPointsBox3D";
}

//______________________________________________________________________________
const char *EdbPointsBox3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPointsBox3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPointsBox3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPointsBox3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPointsBox3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCluster::Class_Name()
{
   return "EdbCluster";
}

//______________________________________________________________________________
const char *EdbCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbClustersBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbClustersBox::Class_Name()
{
   return "EdbClustersBox";
}

//______________________________________________________________________________
const char *EdbClustersBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbClustersBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbClustersBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbClustersBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbClustersBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbClustersBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbClustersBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbClustersBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbAffine2D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbAffine2D::Class_Name()
{
   return "EdbAffine2D";
}

//______________________________________________________________________________
const char *EdbAffine2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine2D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbAffine2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine2D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbAffine2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine2D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbAffine2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine2D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbAffine3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbAffine3D::Class_Name()
{
   return "EdbAffine3D";
}

//______________________________________________________________________________
const char *EdbAffine3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbAffine3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbAffine3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbAffine3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbAffine3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSeg3D::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSeg3D::Class_Name()
{
   return "EdbSeg3D";
}

//______________________________________________________________________________
const char *EdbSeg3D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSeg3D*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSeg3D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSeg3D*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSeg3D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSeg3D*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSeg3D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSeg3D*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbSegment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbSegment::Class_Name()
{
   return "EdbSegment";
}

//______________________________________________________________________________
const char *EdbSegment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbSegment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbSegment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbSegment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbSegment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbSegment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbTrack::Class_Name()
{
   return "EdbTrack";
}

//______________________________________________________________________________
const char *EdbTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbViewHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbViewHeader::Class_Name()
{
   return "EdbViewHeader";
}

//______________________________________________________________________________
const char *EdbViewHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbViewHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbViewHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbViewHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbViewHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbViewHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbView::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbView::Class_Name()
{
   return "EdbView";
}

//______________________________________________________________________________
const char *EdbView::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbView*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbView::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbView*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbView::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbView*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbView::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbView*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCCD::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCCD::Class_Name()
{
   return "EdbCCD";
}

//______________________________________________________________________________
const char *EdbCCD::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCCD*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCCD::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCCD*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCCD::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCCD*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCCD::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCCD*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbObjective::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbObjective::Class_Name()
{
   return "EdbObjective";
}

//______________________________________________________________________________
const char *EdbObjective::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbObjective*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbObjective::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbObjective*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbObjective::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbObjective*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbObjective::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbObjective*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbStage::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbStage::Class_Name()
{
   return "EdbStage";
}

//______________________________________________________________________________
const char *EdbStage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbStage*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbStage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbStage*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbStage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbStage*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbStage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbStage*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbMark::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbMark::Class_Name()
{
   return "EdbMark";
}

//______________________________________________________________________________
const char *EdbMark::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMark*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbMark::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMark*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbMark::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMark*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbMark::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMark*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbMarksBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbMarksBox::Class_Name()
{
   return "EdbMarksBox";
}

//______________________________________________________________________________
const char *EdbMarksBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbMarksBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbMarksBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbMarksBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbMarksSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbMarksSet::Class_Name()
{
   return "EdbMarksSet";
}

//______________________________________________________________________________
const char *EdbMarksSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbMarksSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbMarksSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbMarksSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbMarksSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbArea::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbArea::Class_Name()
{
   return "EdbArea";
}

//______________________________________________________________________________
const char *EdbArea::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbArea*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbArea::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbArea*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbArea::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbArea*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbArea::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbArea*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPlate::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPlate::Class_Name()
{
   return "EdbPlate";
}

//______________________________________________________________________________
const char *EdbPlate::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlate*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPlate::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPlate*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPlate::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlate*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPlate::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPlate*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbCamera::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbCamera::Class_Name()
{
   return "EdbCamera";
}

//______________________________________________________________________________
const char *EdbCamera::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCamera*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbCamera::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbCamera*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbCamera::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCamera*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbCamera::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbCamera*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbRunHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbRunHeader::Class_Name()
{
   return "EdbRunHeader";
}

//______________________________________________________________________________
const char *EdbRunHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbRunHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRunHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbRunHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbRunHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRunHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPredictionDC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPredictionDC::Class_Name()
{
   return "EdbPredictionDC";
}

//______________________________________________________________________________
const char *EdbPredictionDC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionDC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPredictionDC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionDC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPredictionDC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionDC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPredictionDC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionDC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbPredictionsBox::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbPredictionsBox::Class_Name()
{
   return "EdbPredictionsBox";
}

//______________________________________________________________________________
const char *EdbPredictionsBox::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionsBox*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbPredictionsBox::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionsBox*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbPredictionsBox::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionsBox*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbPredictionsBox::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbPredictionsBox*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbRun::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbRun::Class_Name()
{
   return "EdbRun";
}

//______________________________________________________________________________
const char *EdbRun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRun*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbRun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbRun*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbRun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRun*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbRun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbRun*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbImage::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbImage::Class_Name()
{
   return "EdbImage";
}

//______________________________________________________________________________
const char *EdbImage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbImage*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbImage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbImage*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbImage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbImage*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbImage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbImage*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbFrame::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbFrame::Class_Name()
{
   return "EdbFrame";
}

//______________________________________________________________________________
const char *EdbFrame::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbFrame*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbFrame::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbFrame*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbFrame::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbFrame*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbFrame::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbFrame*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbPoint(void *p) {
      delete (static_cast<::EdbPoint*>(p));
   }
   static void deleteArray_EdbPoint(void *p) {
      delete [] (static_cast<::EdbPoint*>(p));
   }
   static void destruct_EdbPoint(void *p) {
      typedef ::EdbPoint current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPoint(TBuffer &buf, void *obj) {
      ((::EdbPoint*)obj)->::EdbPoint::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPoint

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbAngle2D(void *p) {
      delete (static_cast<::EdbAngle2D*>(p));
   }
   static void deleteArray_EdbAngle2D(void *p) {
      delete [] (static_cast<::EdbAngle2D*>(p));
   }
   static void destruct_EdbAngle2D(void *p) {
      typedef ::EdbAngle2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbAngle2D(TBuffer &buf, void *obj) {
      ((::EdbAngle2D*)obj)->::EdbAngle2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbAngle2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbPoint2D(void *p) {
      delete (static_cast<::EdbPoint2D*>(p));
   }
   static void deleteArray_EdbPoint2D(void *p) {
      delete [] (static_cast<::EdbPoint2D*>(p));
   }
   static void destruct_EdbPoint2D(void *p) {
      typedef ::EdbPoint2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPoint2D(TBuffer &buf, void *obj) {
      ((::EdbPoint2D*)obj)->::EdbPoint2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPoint2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbPoint3D(void *p) {
      delete (static_cast<::EdbPoint3D*>(p));
   }
   static void deleteArray_EdbPoint3D(void *p) {
      delete [] (static_cast<::EdbPoint3D*>(p));
   }
   static void destruct_EdbPoint3D(void *p) {
      typedef ::EdbPoint3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPoint3D(TBuffer &buf, void *obj) {
      ((::EdbPoint3D*)obj)->::EdbPoint3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPoint3D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbTrack2D(void *p) {
      delete (static_cast<::EdbTrack2D*>(p));
   }
   static void deleteArray_EdbTrack2D(void *p) {
      delete [] (static_cast<::EdbTrack2D*>(p));
   }
   static void destruct_EdbTrack2D(void *p) {
      typedef ::EdbTrack2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrack2D(TBuffer &buf, void *obj) {
      ((::EdbTrack2D*)obj)->::EdbTrack2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTrack2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbPointsBox2D(void *p) {
      delete (static_cast<::EdbPointsBox2D*>(p));
   }
   static void deleteArray_EdbPointsBox2D(void *p) {
      delete [] (static_cast<::EdbPointsBox2D*>(p));
   }
   static void destruct_EdbPointsBox2D(void *p) {
      typedef ::EdbPointsBox2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPointsBox2D(TBuffer &buf, void *obj) {
      ((::EdbPointsBox2D*)obj)->::EdbPointsBox2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPointsBox2D

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbPointsBox3D(void *p) {
      delete (static_cast<::EdbPointsBox3D*>(p));
   }
   static void deleteArray_EdbPointsBox3D(void *p) {
      delete [] (static_cast<::EdbPointsBox3D*>(p));
   }
   static void destruct_EdbPointsBox3D(void *p) {
      typedef ::EdbPointsBox3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPointsBox3D(TBuffer &buf, void *obj) {
      ((::EdbPointsBox3D*)obj)->::EdbPointsBox3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPointsBox3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCluster(void *p) {
      return  p ? new(p) ::EdbCluster : new ::EdbCluster;
   }
   static void *newArray_EdbCluster(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCluster[nElements] : new ::EdbCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCluster(void *p) {
      delete (static_cast<::EdbCluster*>(p));
   }
   static void deleteArray_EdbCluster(void *p) {
      delete [] (static_cast<::EdbCluster*>(p));
   }
   static void destruct_EdbCluster(void *p) {
      typedef ::EdbCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCluster(TBuffer &buf, void *obj) {
      ((::EdbCluster*)obj)->::EdbCluster::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCluster

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbClustersBox(void *p) {
      delete (static_cast<::EdbClustersBox*>(p));
   }
   static void deleteArray_EdbClustersBox(void *p) {
      delete [] (static_cast<::EdbClustersBox*>(p));
   }
   static void destruct_EdbClustersBox(void *p) {
      typedef ::EdbClustersBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbClustersBox(TBuffer &buf, void *obj) {
      ((::EdbClustersBox*)obj)->::EdbClustersBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbClustersBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbAffine2D(void *p) {
      return  p ? new(p) ::EdbAffine2D : new ::EdbAffine2D;
   }
   static void *newArray_EdbAffine2D(Long_t nElements, void *p) {
      return p ? new(p) ::EdbAffine2D[nElements] : new ::EdbAffine2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbAffine2D(void *p) {
      delete (static_cast<::EdbAffine2D*>(p));
   }
   static void deleteArray_EdbAffine2D(void *p) {
      delete [] (static_cast<::EdbAffine2D*>(p));
   }
   static void destruct_EdbAffine2D(void *p) {
      typedef ::EdbAffine2D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbAffine2D(TBuffer &buf, void *obj) {
      ((::EdbAffine2D*)obj)->::EdbAffine2D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbAffine2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbAffine3D(void *p) {
      return  p ? new(p) ::EdbAffine3D : new ::EdbAffine3D;
   }
   static void *newArray_EdbAffine3D(Long_t nElements, void *p) {
      return p ? new(p) ::EdbAffine3D[nElements] : new ::EdbAffine3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbAffine3D(void *p) {
      delete (static_cast<::EdbAffine3D*>(p));
   }
   static void deleteArray_EdbAffine3D(void *p) {
      delete [] (static_cast<::EdbAffine3D*>(p));
   }
   static void destruct_EdbAffine3D(void *p) {
      typedef ::EdbAffine3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbAffine3D(TBuffer &buf, void *obj) {
      ((::EdbAffine3D*)obj)->::EdbAffine3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbAffine3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSeg3D(void *p) {
      return  p ? new(p) ::EdbSeg3D : new ::EdbSeg3D;
   }
   static void *newArray_EdbSeg3D(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSeg3D[nElements] : new ::EdbSeg3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSeg3D(void *p) {
      delete (static_cast<::EdbSeg3D*>(p));
   }
   static void deleteArray_EdbSeg3D(void *p) {
      delete [] (static_cast<::EdbSeg3D*>(p));
   }
   static void destruct_EdbSeg3D(void *p) {
      typedef ::EdbSeg3D current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSeg3D(TBuffer &buf, void *obj) {
      ((::EdbSeg3D*)obj)->::EdbSeg3D::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSeg3D

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbSegment(void *p) {
      return  p ? new(p) ::EdbSegment : new ::EdbSegment;
   }
   static void *newArray_EdbSegment(Long_t nElements, void *p) {
      return p ? new(p) ::EdbSegment[nElements] : new ::EdbSegment[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbSegment(void *p) {
      delete (static_cast<::EdbSegment*>(p));
   }
   static void deleteArray_EdbSegment(void *p) {
      delete [] (static_cast<::EdbSegment*>(p));
   }
   static void destruct_EdbSegment(void *p) {
      typedef ::EdbSegment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbSegment(TBuffer &buf, void *obj) {
      ((::EdbSegment*)obj)->::EdbSegment::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbSegment

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbTrack(void *p) {
      return  p ? new(p) ::EdbTrack : new ::EdbTrack;
   }
   static void *newArray_EdbTrack(Long_t nElements, void *p) {
      return p ? new(p) ::EdbTrack[nElements] : new ::EdbTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbTrack(void *p) {
      delete (static_cast<::EdbTrack*>(p));
   }
   static void deleteArray_EdbTrack(void *p) {
      delete [] (static_cast<::EdbTrack*>(p));
   }
   static void destruct_EdbTrack(void *p) {
      typedef ::EdbTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbTrack(TBuffer &buf, void *obj) {
      ((::EdbTrack*)obj)->::EdbTrack::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbViewHeader(void *p) {
      return  p ? new(p) ::EdbViewHeader : new ::EdbViewHeader;
   }
   static void *newArray_EdbViewHeader(Long_t nElements, void *p) {
      return p ? new(p) ::EdbViewHeader[nElements] : new ::EdbViewHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbViewHeader(void *p) {
      delete (static_cast<::EdbViewHeader*>(p));
   }
   static void deleteArray_EdbViewHeader(void *p) {
      delete [] (static_cast<::EdbViewHeader*>(p));
   }
   static void destruct_EdbViewHeader(void *p) {
      typedef ::EdbViewHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbViewHeader(TBuffer &buf, void *obj) {
      ((::EdbViewHeader*)obj)->::EdbViewHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbViewHeader

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbView(void *p) {
      return  p ? new(p) ::EdbView : new ::EdbView;
   }
   static void *newArray_EdbView(Long_t nElements, void *p) {
      return p ? new(p) ::EdbView[nElements] : new ::EdbView[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbView(void *p) {
      delete (static_cast<::EdbView*>(p));
   }
   static void deleteArray_EdbView(void *p) {
      delete [] (static_cast<::EdbView*>(p));
   }
   static void destruct_EdbView(void *p) {
      typedef ::EdbView current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbView(TBuffer &buf, void *obj) {
      ((::EdbView*)obj)->::EdbView::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbView

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCCD(void *p) {
      return  p ? new(p) ::EdbCCD : new ::EdbCCD;
   }
   static void *newArray_EdbCCD(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCCD[nElements] : new ::EdbCCD[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCCD(void *p) {
      delete (static_cast<::EdbCCD*>(p));
   }
   static void deleteArray_EdbCCD(void *p) {
      delete [] (static_cast<::EdbCCD*>(p));
   }
   static void destruct_EdbCCD(void *p) {
      typedef ::EdbCCD current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCCD(TBuffer &buf, void *obj) {
      ((::EdbCCD*)obj)->::EdbCCD::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCCD

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbObjective(void *p) {
      return  p ? new(p) ::EdbObjective : new ::EdbObjective;
   }
   static void *newArray_EdbObjective(Long_t nElements, void *p) {
      return p ? new(p) ::EdbObjective[nElements] : new ::EdbObjective[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbObjective(void *p) {
      delete (static_cast<::EdbObjective*>(p));
   }
   static void deleteArray_EdbObjective(void *p) {
      delete [] (static_cast<::EdbObjective*>(p));
   }
   static void destruct_EdbObjective(void *p) {
      typedef ::EdbObjective current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbObjective(TBuffer &buf, void *obj) {
      ((::EdbObjective*)obj)->::EdbObjective::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbObjective

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbStage(void *p) {
      return  p ? new(p) ::EdbStage : new ::EdbStage;
   }
   static void *newArray_EdbStage(Long_t nElements, void *p) {
      return p ? new(p) ::EdbStage[nElements] : new ::EdbStage[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbStage(void *p) {
      delete (static_cast<::EdbStage*>(p));
   }
   static void deleteArray_EdbStage(void *p) {
      delete [] (static_cast<::EdbStage*>(p));
   }
   static void destruct_EdbStage(void *p) {
      typedef ::EdbStage current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbStage(TBuffer &buf, void *obj) {
      ((::EdbStage*)obj)->::EdbStage::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbStage

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbMark(void *p) {
      return  p ? new(p) ::EdbMark : new ::EdbMark;
   }
   static void *newArray_EdbMark(Long_t nElements, void *p) {
      return p ? new(p) ::EdbMark[nElements] : new ::EdbMark[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbMark(void *p) {
      delete (static_cast<::EdbMark*>(p));
   }
   static void deleteArray_EdbMark(void *p) {
      delete [] (static_cast<::EdbMark*>(p));
   }
   static void destruct_EdbMark(void *p) {
      typedef ::EdbMark current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbMark(TBuffer &buf, void *obj) {
      ((::EdbMark*)obj)->::EdbMark::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbMark

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbMarksBox(void *p) {
      return  p ? new(p) ::EdbMarksBox : new ::EdbMarksBox;
   }
   static void *newArray_EdbMarksBox(Long_t nElements, void *p) {
      return p ? new(p) ::EdbMarksBox[nElements] : new ::EdbMarksBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbMarksBox(void *p) {
      delete (static_cast<::EdbMarksBox*>(p));
   }
   static void deleteArray_EdbMarksBox(void *p) {
      delete [] (static_cast<::EdbMarksBox*>(p));
   }
   static void destruct_EdbMarksBox(void *p) {
      typedef ::EdbMarksBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbMarksBox(TBuffer &buf, void *obj) {
      ((::EdbMarksBox*)obj)->::EdbMarksBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbMarksBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbMarksSet(void *p) {
      return  p ? new(p) ::EdbMarksSet : new ::EdbMarksSet;
   }
   static void *newArray_EdbMarksSet(Long_t nElements, void *p) {
      return p ? new(p) ::EdbMarksSet[nElements] : new ::EdbMarksSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbMarksSet(void *p) {
      delete (static_cast<::EdbMarksSet*>(p));
   }
   static void deleteArray_EdbMarksSet(void *p) {
      delete [] (static_cast<::EdbMarksSet*>(p));
   }
   static void destruct_EdbMarksSet(void *p) {
      typedef ::EdbMarksSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbMarksSet(TBuffer &buf, void *obj) {
      ((::EdbMarksSet*)obj)->::EdbMarksSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbMarksSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbArea(void *p) {
      return  p ? new(p) ::EdbArea : new ::EdbArea;
   }
   static void *newArray_EdbArea(Long_t nElements, void *p) {
      return p ? new(p) ::EdbArea[nElements] : new ::EdbArea[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbArea(void *p) {
      delete (static_cast<::EdbArea*>(p));
   }
   static void deleteArray_EdbArea(void *p) {
      delete [] (static_cast<::EdbArea*>(p));
   }
   static void destruct_EdbArea(void *p) {
      typedef ::EdbArea current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbArea(TBuffer &buf, void *obj) {
      ((::EdbArea*)obj)->::EdbArea::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbArea

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPlate(void *p) {
      return  p ? new(p) ::EdbPlate : new ::EdbPlate;
   }
   static void *newArray_EdbPlate(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPlate[nElements] : new ::EdbPlate[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPlate(void *p) {
      delete (static_cast<::EdbPlate*>(p));
   }
   static void deleteArray_EdbPlate(void *p) {
      delete [] (static_cast<::EdbPlate*>(p));
   }
   static void destruct_EdbPlate(void *p) {
      typedef ::EdbPlate current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPlate(TBuffer &buf, void *obj) {
      ((::EdbPlate*)obj)->::EdbPlate::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPlate

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbCamera(void *p) {
      return  p ? new(p) ::EdbCamera : new ::EdbCamera;
   }
   static void *newArray_EdbCamera(Long_t nElements, void *p) {
      return p ? new(p) ::EdbCamera[nElements] : new ::EdbCamera[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbCamera(void *p) {
      delete (static_cast<::EdbCamera*>(p));
   }
   static void deleteArray_EdbCamera(void *p) {
      delete [] (static_cast<::EdbCamera*>(p));
   }
   static void destruct_EdbCamera(void *p) {
      typedef ::EdbCamera current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbCamera(TBuffer &buf, void *obj) {
      ((::EdbCamera*)obj)->::EdbCamera::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbCamera

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbRunHeader(void *p) {
      return  p ? new(p) ::EdbRunHeader : new ::EdbRunHeader;
   }
   static void *newArray_EdbRunHeader(Long_t nElements, void *p) {
      return p ? new(p) ::EdbRunHeader[nElements] : new ::EdbRunHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbRunHeader(void *p) {
      delete (static_cast<::EdbRunHeader*>(p));
   }
   static void deleteArray_EdbRunHeader(void *p) {
      delete [] (static_cast<::EdbRunHeader*>(p));
   }
   static void destruct_EdbRunHeader(void *p) {
      typedef ::EdbRunHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbRunHeader(TBuffer &buf, void *obj) {
      ((::EdbRunHeader*)obj)->::EdbRunHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbRunHeader

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPredictionDC(void *p) {
      return  p ? new(p) ::EdbPredictionDC : new ::EdbPredictionDC;
   }
   static void *newArray_EdbPredictionDC(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPredictionDC[nElements] : new ::EdbPredictionDC[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPredictionDC(void *p) {
      delete (static_cast<::EdbPredictionDC*>(p));
   }
   static void deleteArray_EdbPredictionDC(void *p) {
      delete [] (static_cast<::EdbPredictionDC*>(p));
   }
   static void destruct_EdbPredictionDC(void *p) {
      typedef ::EdbPredictionDC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPredictionDC(TBuffer &buf, void *obj) {
      ((::EdbPredictionDC*)obj)->::EdbPredictionDC::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPredictionDC

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbPredictionsBox(void *p) {
      return  p ? new(p) ::EdbPredictionsBox : new ::EdbPredictionsBox;
   }
   static void *newArray_EdbPredictionsBox(Long_t nElements, void *p) {
      return p ? new(p) ::EdbPredictionsBox[nElements] : new ::EdbPredictionsBox[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbPredictionsBox(void *p) {
      delete (static_cast<::EdbPredictionsBox*>(p));
   }
   static void deleteArray_EdbPredictionsBox(void *p) {
      delete [] (static_cast<::EdbPredictionsBox*>(p));
   }
   static void destruct_EdbPredictionsBox(void *p) {
      typedef ::EdbPredictionsBox current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbPredictionsBox(TBuffer &buf, void *obj) {
      ((::EdbPredictionsBox*)obj)->::EdbPredictionsBox::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbPredictionsBox

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbRun(void *p) {
      return  p ? new(p) ::EdbRun : new ::EdbRun;
   }
   static void *newArray_EdbRun(Long_t nElements, void *p) {
      return p ? new(p) ::EdbRun[nElements] : new ::EdbRun[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbRun(void *p) {
      delete (static_cast<::EdbRun*>(p));
   }
   static void deleteArray_EdbRun(void *p) {
      delete [] (static_cast<::EdbRun*>(p));
   }
   static void destruct_EdbRun(void *p) {
      typedef ::EdbRun current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbRun(TBuffer &buf, void *obj) {
      ((::EdbRun*)obj)->::EdbRun::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbRun

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbImage(void *p) {
      return  p ? new(p) ::EdbImage : new ::EdbImage;
   }
   static void *newArray_EdbImage(Long_t nElements, void *p) {
      return p ? new(p) ::EdbImage[nElements] : new ::EdbImage[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbImage(void *p) {
      delete (static_cast<::EdbImage*>(p));
   }
   static void deleteArray_EdbImage(void *p) {
      delete [] (static_cast<::EdbImage*>(p));
   }
   static void destruct_EdbImage(void *p) {
      typedef ::EdbImage current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbImage(TBuffer &buf, void *obj) {
      ((::EdbImage*)obj)->::EdbImage::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbImage

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbFrame(void *p) {
      return  p ? new(p) ::EdbFrame : new ::EdbFrame;
   }
   static void *newArray_EdbFrame(Long_t nElements, void *p) {
      return p ? new(p) ::EdbFrame[nElements] : new ::EdbFrame[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbFrame(void *p) {
      delete (static_cast<::EdbFrame*>(p));
   }
   static void deleteArray_EdbFrame(void *p) {
      delete [] (static_cast<::EdbFrame*>(p));
   }
   static void destruct_EdbFrame(void *p) {
      typedef ::EdbFrame current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbFrame(TBuffer &buf, void *obj) {
      ((::EdbFrame*)obj)->::EdbFrame::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbFrame

namespace {
  void TriggerDictionaryInitialization_EdbCint_Impl() {
    static const char* headers[] = {
"EdbLog.h",
"EdbCluster.h",
"EdbView.h",
"EdbRunHeader.h",
"EdbRun.h",
"EdbImage.h",
"EdbFrame.h",
"EdbSegment.h",
"EdbStage.h",
"EdbAffine.h",
"EdbFiducial.h",
"EdbVirtual.h",
"EdbPrediction.h",
"EdbOnline.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEdb/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EdbCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbPoint;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbAngle2D;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbPoint2D;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbPoint3D;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbTrack2D;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbPointsBox2D;
class __attribute__((annotate("$clingAutoload$EdbVirtual.h")))  __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbPointsBox3D;
class __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbCluster;
class __attribute__((annotate("$clingAutoload$EdbCluster.h")))  EdbClustersBox;
class __attribute__((annotate("$clingAutoload$EdbAffine.h")))  __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbAffine2D;
class __attribute__((annotate("$clingAutoload$EdbAffine.h")))  __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbAffine3D;
class __attribute__((annotate("$clingAutoload$EdbSegment.h")))  __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbSeg3D;
class __attribute__((annotate("$clingAutoload$EdbSegment.h")))  __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbSegment;
class __attribute__((annotate("$clingAutoload$EdbSegment.h")))  __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbTrack;
class __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbViewHeader;
class __attribute__((annotate("$clingAutoload$EdbView.h")))  EdbView;
class __attribute__((annotate("$clingAutoload$EdbStage.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbCCD;
class __attribute__((annotate("$clingAutoload$EdbStage.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbObjective;
class __attribute__((annotate("$clingAutoload$EdbStage.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbStage;
class __attribute__((annotate("$clingAutoload$EdbFiducial.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbMark;
class __attribute__((annotate("$clingAutoload$EdbFiducial.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbMarksBox;
class __attribute__((annotate("$clingAutoload$EdbFiducial.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbMarksSet;
class __attribute__((annotate("$clingAutoload$EdbFiducial.h")))  __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbArea;
class __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbPlate;
class __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbCamera;
class __attribute__((annotate("$clingAutoload$EdbRunHeader.h")))  EdbRunHeader;
class __attribute__((annotate("$clingAutoload$EdbPrediction.h")))  __attribute__((annotate("$clingAutoload$EdbRun.h")))  EdbPredictionDC;
class __attribute__((annotate("$clingAutoload$EdbPrediction.h")))  __attribute__((annotate("$clingAutoload$EdbRun.h")))  EdbPredictionsBox;
class __attribute__((annotate("$clingAutoload$EdbRun.h")))  EdbRun;
class __attribute__((annotate("$clingAutoload$EdbImage.h")))  EdbImage;
class __attribute__((annotate("$clingAutoload$EdbFrame.h")))  EdbFrame;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EdbCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbLog.h"
#include "EdbCluster.h"
#include "EdbView.h"
#include "EdbRunHeader.h"
#include "EdbRun.h"
#include "EdbImage.h"
#include "EdbFrame.h"
#include "EdbSegment.h"
#include "EdbStage.h"
#include "EdbAffine.h"
#include "EdbFiducial.h"
#include "EdbVirtual.h"
#include "EdbPrediction.h"
#include "EdbOnline.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbAffine2D", payloadCode, "@",
"EdbAffine3D", payloadCode, "@",
"EdbAngle2D", payloadCode, "@",
"EdbArea", payloadCode, "@",
"EdbCCD", payloadCode, "@",
"EdbCamera", payloadCode, "@",
"EdbCluster", payloadCode, "@",
"EdbClustersBox", payloadCode, "@",
"EdbFrame", payloadCode, "@",
"EdbImage", payloadCode, "@",
"EdbMark", payloadCode, "@",
"EdbMarksBox", payloadCode, "@",
"EdbMarksSet", payloadCode, "@",
"EdbObjective", payloadCode, "@",
"EdbPlate", payloadCode, "@",
"EdbPoint", payloadCode, "@",
"EdbPoint2D", payloadCode, "@",
"EdbPoint3D", payloadCode, "@",
"EdbPointsBox2D", payloadCode, "@",
"EdbPointsBox3D", payloadCode, "@",
"EdbPredictionDC", payloadCode, "@",
"EdbPredictionsBox", payloadCode, "@",
"EdbRun", payloadCode, "@",
"EdbRunHeader", payloadCode, "@",
"EdbSeg3D", payloadCode, "@",
"EdbSegment", payloadCode, "@",
"EdbStage", payloadCode, "@",
"EdbTrack", payloadCode, "@",
"EdbTrack2D", payloadCode, "@",
"EdbView", payloadCode, "@",
"EdbViewHeader", payloadCode, "@",
"Log", payloadCode, "@",
"Log0", payloadCode, "@",
"gDIFF", payloadCode, "@",
"gEDBDEBUGLEVEL", payloadCode, "@",
"gEDBLOGFILE", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EdbCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EdbCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EdbCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EdbCint() {
  TriggerDictionaryInitialization_EdbCint_Impl();
}
