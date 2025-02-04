// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ShowRecCint
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
#include "EdbShowRec.h"
#include "EdbShowerP.h"
#include "EdbShowAlg.h"
#include "EdbShowAlgE.h"
#include "EdbShowAlg_NN.h"
#include "EdbShowAlgE_Simple.h"
#include "EdbShowAlg_GS.h"
#include "EdbShowAlgClean.h"
#include "EdbShowAlgID_E_G_Simple.h"
#include "EdbShowPVRQuality.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_EdbShowerP(void *p = nullptr);
   static void *newArray_EdbShowerP(Long_t size, void *p);
   static void delete_EdbShowerP(void *p);
   static void deleteArray_EdbShowerP(void *p);
   static void destruct_EdbShowerP(void *p);
   static void streamer_EdbShowerP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP*)
   {
      ::EdbShowerP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP", ::EdbShowerP::Class_Version(), "EdbShowerP.h", 28,
                  typeid(::EdbShowerP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP) );
      instance.SetNew(&new_EdbShowerP);
      instance.SetNewArray(&newArray_EdbShowerP);
      instance.SetDelete(&delete_EdbShowerP);
      instance.SetDeleteArray(&deleteArray_EdbShowerP);
      instance.SetDestructor(&destruct_EdbShowerP);
      instance.SetStreamerFunc(&streamer_EdbShowerP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_FJ(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_FJ(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_FJ(void *p);
   static void deleteArray_EdbShowerPcLcLPara_FJ(void *p);
   static void destruct_EdbShowerPcLcLPara_FJ(void *p);
   static void streamer_EdbShowerPcLcLPara_FJ(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_FJ*)
   {
      ::EdbShowerP::Para_FJ *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_FJ >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_FJ", ::EdbShowerP::Para_FJ::Class_Version(), "EdbShowerP.h", 143,
                  typeid(::EdbShowerP::Para_FJ), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_FJ::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_FJ) );
      instance.SetNew(&new_EdbShowerPcLcLPara_FJ);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_FJ);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_FJ);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_FJ);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_FJ);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_FJ);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_FJ*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_FJ*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_FJ*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_LT(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_LT(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_LT(void *p);
   static void deleteArray_EdbShowerPcLcLPara_LT(void *p);
   static void destruct_EdbShowerPcLcLPara_LT(void *p);
   static void streamer_EdbShowerPcLcLPara_LT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_LT*)
   {
      ::EdbShowerP::Para_LT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_LT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_LT", ::EdbShowerP::Para_LT::Class_Version(), "EdbShowerP.h", 155,
                  typeid(::EdbShowerP::Para_LT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_LT::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_LT) );
      instance.SetNew(&new_EdbShowerPcLcLPara_LT);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_LT);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_LT);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_LT);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_LT);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_LT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_LT*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_LT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_LT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_YC(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_YC(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_YC(void *p);
   static void deleteArray_EdbShowerPcLcLPara_YC(void *p);
   static void destruct_EdbShowerPcLcLPara_YC(void *p);
   static void streamer_EdbShowerPcLcLPara_YC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_YC*)
   {
      ::EdbShowerP::Para_YC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_YC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_YC", ::EdbShowerP::Para_YC::Class_Version(), "EdbShowerP.h", 169,
                  typeid(::EdbShowerP::Para_YC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_YC::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_YC) );
      instance.SetNew(&new_EdbShowerPcLcLPara_YC);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_YC);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_YC);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_YC);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_YC);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_YC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_YC*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_YC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_YC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_JC(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_JC(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_JC(void *p);
   static void deleteArray_EdbShowerPcLcLPara_JC(void *p);
   static void destruct_EdbShowerPcLcLPara_JC(void *p);
   static void streamer_EdbShowerPcLcLPara_JC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_JC*)
   {
      ::EdbShowerP::Para_JC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_JC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_JC", ::EdbShowerP::Para_JC::Class_Version(), "EdbShowerP.h", 180,
                  typeid(::EdbShowerP::Para_JC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_JC::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_JC) );
      instance.SetNew(&new_EdbShowerPcLcLPara_JC);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_JC);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_JC);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_JC);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_JC);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_JC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_JC*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_JC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_JC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_XX(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_XX(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_XX(void *p);
   static void deleteArray_EdbShowerPcLcLPara_XX(void *p);
   static void destruct_EdbShowerPcLcLPara_XX(void *p);
   static void streamer_EdbShowerPcLcLPara_XX(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_XX*)
   {
      ::EdbShowerP::Para_XX *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_XX >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_XX", ::EdbShowerP::Para_XX::Class_Version(), "EdbShowerP.h", 200,
                  typeid(::EdbShowerP::Para_XX), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_XX::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_XX) );
      instance.SetNew(&new_EdbShowerPcLcLPara_XX);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_XX);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_XX);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_XX);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_XX);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_XX);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_XX*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_XX*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_XX*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_YY(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_YY(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_YY(void *p);
   static void deleteArray_EdbShowerPcLcLPara_YY(void *p);
   static void destruct_EdbShowerPcLcLPara_YY(void *p);
   static void streamer_EdbShowerPcLcLPara_YY(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_YY*)
   {
      ::EdbShowerP::Para_YY *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_YY >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_YY", ::EdbShowerP::Para_YY::Class_Version(), "EdbShowerP.h", 215,
                  typeid(::EdbShowerP::Para_YY), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_YY::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_YY) );
      instance.SetNew(&new_EdbShowerPcLcLPara_YY);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_YY);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_YY);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_YY);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_YY);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_YY);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_YY*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_YY*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_YY*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_PP(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_PP(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_PP(void *p);
   static void deleteArray_EdbShowerPcLcLPara_PP(void *p);
   static void destruct_EdbShowerPcLcLPara_PP(void *p);
   static void streamer_EdbShowerPcLcLPara_PP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_PP*)
   {
      ::EdbShowerP::Para_PP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_PP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_PP", ::EdbShowerP::Para_PP::Class_Version(), "EdbShowerP.h", 224,
                  typeid(::EdbShowerP::Para_PP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_PP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_PP) );
      instance.SetNew(&new_EdbShowerPcLcLPara_PP);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_PP);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_PP);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_PP);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_PP);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_PP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_PP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_PP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_PP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_AS(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_AS(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_AS(void *p);
   static void deleteArray_EdbShowerPcLcLPara_AS(void *p);
   static void destruct_EdbShowerPcLcLPara_AS(void *p);
   static void streamer_EdbShowerPcLcLPara_AS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_AS*)
   {
      ::EdbShowerP::Para_AS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_AS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_AS", ::EdbShowerP::Para_AS::Class_Version(), "EdbShowerP.h", 235,
                  typeid(::EdbShowerP::Para_AS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_AS::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_AS) );
      instance.SetNew(&new_EdbShowerPcLcLPara_AS);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_AS);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_AS);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_AS);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_AS);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_AS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_AS*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_AS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_AS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_SE(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_SE(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_SE(void *p);
   static void deleteArray_EdbShowerPcLcLPara_SE(void *p);
   static void destruct_EdbShowerPcLcLPara_SE(void *p);
   static void streamer_EdbShowerPcLcLPara_SE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_SE*)
   {
      ::EdbShowerP::Para_SE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_SE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_SE", ::EdbShowerP::Para_SE::Class_Version(), "EdbShowerP.h", 248,
                  typeid(::EdbShowerP::Para_SE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_SE::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_SE) );
      instance.SetNew(&new_EdbShowerPcLcLPara_SE);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_SE);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_SE);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_SE);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_SE);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_SE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_SE*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_SE*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_SE*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLPara_ExtraInfo(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLPara_ExtraInfo(Long_t size, void *p);
   static void delete_EdbShowerPcLcLPara_ExtraInfo(void *p);
   static void deleteArray_EdbShowerPcLcLPara_ExtraInfo(void *p);
   static void destruct_EdbShowerPcLcLPara_ExtraInfo(void *p);
   static void streamer_EdbShowerPcLcLPara_ExtraInfo(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Para_ExtraInfo*)
   {
      ::EdbShowerP::Para_ExtraInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Para_ExtraInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Para_ExtraInfo", ::EdbShowerP::Para_ExtraInfo::Class_Version(), "EdbShowerP.h", 257,
                  typeid(::EdbShowerP::Para_ExtraInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Para_ExtraInfo::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Para_ExtraInfo) );
      instance.SetNew(&new_EdbShowerPcLcLPara_ExtraInfo);
      instance.SetNewArray(&newArray_EdbShowerPcLcLPara_ExtraInfo);
      instance.SetDelete(&delete_EdbShowerPcLcLPara_ExtraInfo);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLPara_ExtraInfo);
      instance.SetDestructor(&destruct_EdbShowerPcLcLPara_ExtraInfo);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLPara_ExtraInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Para_ExtraInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Para_ExtraInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Para_ExtraInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLMCInfo_PGun(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLMCInfo_PGun(Long_t size, void *p);
   static void delete_EdbShowerPcLcLMCInfo_PGun(void *p);
   static void deleteArray_EdbShowerPcLcLMCInfo_PGun(void *p);
   static void destruct_EdbShowerPcLcLMCInfo_PGun(void *p);
   static void streamer_EdbShowerPcLcLMCInfo_PGun(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::MCInfo_PGun*)
   {
      ::EdbShowerP::MCInfo_PGun *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::MCInfo_PGun >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::MCInfo_PGun", ::EdbShowerP::MCInfo_PGun::Class_Version(), "EdbShowerP.h", 269,
                  typeid(::EdbShowerP::MCInfo_PGun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::MCInfo_PGun::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::MCInfo_PGun) );
      instance.SetNew(&new_EdbShowerPcLcLMCInfo_PGun);
      instance.SetNewArray(&newArray_EdbShowerPcLcLMCInfo_PGun);
      instance.SetDelete(&delete_EdbShowerPcLcLMCInfo_PGun);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLMCInfo_PGun);
      instance.SetDestructor(&destruct_EdbShowerPcLcLMCInfo_PGun);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLMCInfo_PGun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::MCInfo_PGun*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::MCInfo_PGun*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::MCInfo_PGun*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLMCInfo_Event(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLMCInfo_Event(Long_t size, void *p);
   static void delete_EdbShowerPcLcLMCInfo_Event(void *p);
   static void deleteArray_EdbShowerPcLcLMCInfo_Event(void *p);
   static void destruct_EdbShowerPcLcLMCInfo_Event(void *p);
   static void streamer_EdbShowerPcLcLMCInfo_Event(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::MCInfo_Event*)
   {
      ::EdbShowerP::MCInfo_Event *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::MCInfo_Event >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::MCInfo_Event", ::EdbShowerP::MCInfo_Event::Class_Version(), "EdbShowerP.h", 295,
                  typeid(::EdbShowerP::MCInfo_Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::MCInfo_Event::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::MCInfo_Event) );
      instance.SetNew(&new_EdbShowerPcLcLMCInfo_Event);
      instance.SetNewArray(&newArray_EdbShowerPcLcLMCInfo_Event);
      instance.SetDelete(&delete_EdbShowerPcLcLMCInfo_Event);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLMCInfo_Event);
      instance.SetDestructor(&destruct_EdbShowerPcLcLMCInfo_Event);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLMCInfo_Event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::MCInfo_Event*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::MCInfo_Event*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::MCInfo_Event*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLReco_ID(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLReco_ID(Long_t size, void *p);
   static void delete_EdbShowerPcLcLReco_ID(void *p);
   static void deleteArray_EdbShowerPcLcLReco_ID(void *p);
   static void destruct_EdbShowerPcLcLReco_ID(void *p);
   static void streamer_EdbShowerPcLcLReco_ID(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Reco_ID*)
   {
      ::EdbShowerP::Reco_ID *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Reco_ID >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Reco_ID", ::EdbShowerP::Reco_ID::Class_Version(), "EdbShowerP.h", 309,
                  typeid(::EdbShowerP::Reco_ID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Reco_ID::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Reco_ID) );
      instance.SetNew(&new_EdbShowerPcLcLReco_ID);
      instance.SetNewArray(&newArray_EdbShowerPcLcLReco_ID);
      instance.SetDelete(&delete_EdbShowerPcLcLReco_ID);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLReco_ID);
      instance.SetDestructor(&destruct_EdbShowerPcLcLReco_ID);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLReco_ID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Reco_ID*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Reco_ID*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Reco_ID*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLReco_E(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLReco_E(Long_t size, void *p);
   static void delete_EdbShowerPcLcLReco_E(void *p);
   static void deleteArray_EdbShowerPcLcLReco_E(void *p);
   static void destruct_EdbShowerPcLcLReco_E(void *p);
   static void streamer_EdbShowerPcLcLReco_E(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Reco_E*)
   {
      ::EdbShowerP::Reco_E *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Reco_E >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Reco_E", ::EdbShowerP::Reco_E::Class_Version(), "EdbShowerP.h", 327,
                  typeid(::EdbShowerP::Reco_E), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Reco_E::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Reco_E) );
      instance.SetNew(&new_EdbShowerPcLcLReco_E);
      instance.SetNewArray(&newArray_EdbShowerPcLcLReco_E);
      instance.SetDelete(&delete_EdbShowerPcLcLReco_E);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLReco_E);
      instance.SetDestructor(&destruct_EdbShowerPcLcLReco_E);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLReco_E);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Reco_E*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Reco_E*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Reco_E*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowerPcLcLReco_Vtx(void *p = nullptr);
   static void *newArray_EdbShowerPcLcLReco_Vtx(Long_t size, void *p);
   static void delete_EdbShowerPcLcLReco_Vtx(void *p);
   static void deleteArray_EdbShowerPcLcLReco_Vtx(void *p);
   static void destruct_EdbShowerPcLcLReco_Vtx(void *p);
   static void streamer_EdbShowerPcLcLReco_Vtx(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowerP::Reco_Vtx*)
   {
      ::EdbShowerP::Reco_Vtx *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowerP::Reco_Vtx >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowerP::Reco_Vtx", ::EdbShowerP::Reco_Vtx::Class_Version(), "EdbShowerP.h", 340,
                  typeid(::EdbShowerP::Reco_Vtx), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowerP::Reco_Vtx::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowerP::Reco_Vtx) );
      instance.SetNew(&new_EdbShowerPcLcLReco_Vtx);
      instance.SetNewArray(&newArray_EdbShowerPcLcLReco_Vtx);
      instance.SetDelete(&delete_EdbShowerPcLcLReco_Vtx);
      instance.SetDeleteArray(&deleteArray_EdbShowerPcLcLReco_Vtx);
      instance.SetDestructor(&destruct_EdbShowerPcLcLReco_Vtx);
      instance.SetStreamerFunc(&streamer_EdbShowerPcLcLReco_Vtx);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowerP::Reco_Vtx*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowerP::Reco_Vtx*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowerP::Reco_Vtx*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg(void *p = nullptr);
   static void *newArray_EdbShowAlg(Long_t size, void *p);
   static void delete_EdbShowAlg(void *p);
   static void deleteArray_EdbShowAlg(void *p);
   static void destruct_EdbShowAlg(void *p);
   static void streamer_EdbShowAlg(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg*)
   {
      ::EdbShowAlg *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg", ::EdbShowAlg::Class_Version(), "EdbShowAlg.h", 40,
                  typeid(::EdbShowAlg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg) );
      instance.SetNew(&new_EdbShowAlg);
      instance.SetNewArray(&newArray_EdbShowAlg);
      instance.SetDelete(&delete_EdbShowAlg);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg);
      instance.SetDestructor(&destruct_EdbShowAlg);
      instance.SetStreamerFunc(&streamer_EdbShowAlg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_SA(void *p = nullptr);
   static void *newArray_EdbShowAlg_SA(Long_t size, void *p);
   static void delete_EdbShowAlg_SA(void *p);
   static void deleteArray_EdbShowAlg_SA(void *p);
   static void destruct_EdbShowAlg_SA(void *p);
   static void streamer_EdbShowAlg_SA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_SA*)
   {
      ::EdbShowAlg_SA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_SA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_SA", ::EdbShowAlg_SA::Class_Version(), "EdbShowAlg.h", 197,
                  typeid(::EdbShowAlg_SA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_SA::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_SA) );
      instance.SetNew(&new_EdbShowAlg_SA);
      instance.SetNewArray(&newArray_EdbShowAlg_SA);
      instance.SetDelete(&delete_EdbShowAlg_SA);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_SA);
      instance.SetDestructor(&destruct_EdbShowAlg_SA);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_SA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_SA*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_SA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_SA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_CA(void *p = nullptr);
   static void *newArray_EdbShowAlg_CA(Long_t size, void *p);
   static void delete_EdbShowAlg_CA(void *p);
   static void deleteArray_EdbShowAlg_CA(void *p);
   static void destruct_EdbShowAlg_CA(void *p);
   static void streamer_EdbShowAlg_CA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_CA*)
   {
      ::EdbShowAlg_CA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_CA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_CA", ::EdbShowAlg_CA::Class_Version(), "EdbShowAlg.h", 223,
                  typeid(::EdbShowAlg_CA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_CA::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_CA) );
      instance.SetNew(&new_EdbShowAlg_CA);
      instance.SetNewArray(&newArray_EdbShowAlg_CA);
      instance.SetDelete(&delete_EdbShowAlg_CA);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_CA);
      instance.SetDestructor(&destruct_EdbShowAlg_CA);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_CA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_CA*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_CA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_CA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_OI(void *p = nullptr);
   static void *newArray_EdbShowAlg_OI(Long_t size, void *p);
   static void delete_EdbShowAlg_OI(void *p);
   static void deleteArray_EdbShowAlg_OI(void *p);
   static void destruct_EdbShowAlg_OI(void *p);
   static void streamer_EdbShowAlg_OI(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_OI*)
   {
      ::EdbShowAlg_OI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_OI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_OI", ::EdbShowAlg_OI::Class_Version(), "EdbShowAlg.h", 252,
                  typeid(::EdbShowAlg_OI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_OI::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_OI) );
      instance.SetNew(&new_EdbShowAlg_OI);
      instance.SetNewArray(&newArray_EdbShowAlg_OI);
      instance.SetDelete(&delete_EdbShowAlg_OI);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_OI);
      instance.SetDestructor(&destruct_EdbShowAlg_OI);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_OI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_OI*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_OI*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_OI*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_RC(void *p = nullptr);
   static void *newArray_EdbShowAlg_RC(Long_t size, void *p);
   static void delete_EdbShowAlg_RC(void *p);
   static void deleteArray_EdbShowAlg_RC(void *p);
   static void destruct_EdbShowAlg_RC(void *p);
   static void streamer_EdbShowAlg_RC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_RC*)
   {
      ::EdbShowAlg_RC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_RC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_RC", ::EdbShowAlg_RC::Class_Version(), "EdbShowAlg.h", 278,
                  typeid(::EdbShowAlg_RC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_RC::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_RC) );
      instance.SetNew(&new_EdbShowAlg_RC);
      instance.SetNewArray(&newArray_EdbShowAlg_RC);
      instance.SetDelete(&delete_EdbShowAlg_RC);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_RC);
      instance.SetDestructor(&destruct_EdbShowAlg_RC);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_RC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_RC*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_RC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_RC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_BW(void *p = nullptr);
   static void *newArray_EdbShowAlg_BW(Long_t size, void *p);
   static void delete_EdbShowAlg_BW(void *p);
   static void deleteArray_EdbShowAlg_BW(void *p);
   static void destruct_EdbShowAlg_BW(void *p);
   static void streamer_EdbShowAlg_BW(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_BW*)
   {
      ::EdbShowAlg_BW *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_BW >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_BW", ::EdbShowAlg_BW::Class_Version(), "EdbShowAlg.h", 301,
                  typeid(::EdbShowAlg_BW), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_BW::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_BW) );
      instance.SetNew(&new_EdbShowAlg_BW);
      instance.SetNewArray(&newArray_EdbShowAlg_BW);
      instance.SetDelete(&delete_EdbShowAlg_BW);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_BW);
      instance.SetDestructor(&destruct_EdbShowAlg_BW);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_BW);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_BW*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_BW*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_BW*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_GS(void *p = nullptr);
   static void *newArray_EdbShowAlg_GS(Long_t size, void *p);
   static void delete_EdbShowAlg_GS(void *p);
   static void deleteArray_EdbShowAlg_GS(void *p);
   static void destruct_EdbShowAlg_GS(void *p);
   static void streamer_EdbShowAlg_GS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_GS*)
   {
      ::EdbShowAlg_GS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_GS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_GS", ::EdbShowAlg_GS::Class_Version(), "EdbShowAlg_GS.h", 38,
                  typeid(::EdbShowAlg_GS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_GS::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_GS) );
      instance.SetNew(&new_EdbShowAlg_GS);
      instance.SetNewArray(&newArray_EdbShowAlg_GS);
      instance.SetDelete(&delete_EdbShowAlg_GS);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_GS);
      instance.SetDestructor(&destruct_EdbShowAlg_GS);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_GS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_GS*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_GS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_GS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlg_NN(void *p = nullptr);
   static void *newArray_EdbShowAlg_NN(Long_t size, void *p);
   static void delete_EdbShowAlg_NN(void *p);
   static void deleteArray_EdbShowAlg_NN(void *p);
   static void destruct_EdbShowAlg_NN(void *p);
   static void streamer_EdbShowAlg_NN(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_NN*)
   {
      ::EdbShowAlg_NN *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_NN >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_NN", ::EdbShowAlg_NN::Class_Version(), "EdbShowAlg_NN.h", 42,
                  typeid(::EdbShowAlg_NN), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_NN::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_NN) );
      instance.SetNew(&new_EdbShowAlg_NN);
      instance.SetNewArray(&newArray_EdbShowAlg_NN);
      instance.SetDelete(&delete_EdbShowAlg_NN);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_NN);
      instance.SetDestructor(&destruct_EdbShowAlg_NN);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_NN);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_NN*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_NN*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_NN*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbShowAlg_N3(void *p);
   static void deleteArray_EdbShowAlg_N3(void *p);
   static void destruct_EdbShowAlg_N3(void *p);
   static void streamer_EdbShowAlg_N3(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlg_N3*)
   {
      ::EdbShowAlg_N3 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlg_N3 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlg_N3", ::EdbShowAlg_N3::Class_Version(), "EdbShowAlg_NN.h", 142,
                  typeid(::EdbShowAlg_N3), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlg_N3::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlg_N3) );
      instance.SetDelete(&delete_EdbShowAlg_N3);
      instance.SetDeleteArray(&deleteArray_EdbShowAlg_N3);
      instance.SetDestructor(&destruct_EdbShowAlg_N3);
      instance.SetStreamerFunc(&streamer_EdbShowAlg_N3);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlg_N3*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlg_N3*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlg_N3*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlgE(void *p = nullptr);
   static void *newArray_EdbShowAlgE(Long_t size, void *p);
   static void delete_EdbShowAlgE(void *p);
   static void deleteArray_EdbShowAlgE(void *p);
   static void destruct_EdbShowAlgE(void *p);
   static void streamer_EdbShowAlgE(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlgE*)
   {
      ::EdbShowAlgE *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlgE >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlgE", ::EdbShowAlgE::Class_Version(), "EdbShowAlgE.h", 42,
                  typeid(::EdbShowAlgE), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlgE::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlgE) );
      instance.SetNew(&new_EdbShowAlgE);
      instance.SetNewArray(&newArray_EdbShowAlgE);
      instance.SetDelete(&delete_EdbShowAlgE);
      instance.SetDeleteArray(&deleteArray_EdbShowAlgE);
      instance.SetDestructor(&destruct_EdbShowAlgE);
      instance.SetStreamerFunc(&streamer_EdbShowAlgE);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlgE*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlgE*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlgE*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowRec(void *p = nullptr);
   static void *newArray_EdbShowRec(Long_t size, void *p);
   static void delete_EdbShowRec(void *p);
   static void deleteArray_EdbShowRec(void *p);
   static void destruct_EdbShowRec(void *p);
   static void streamer_EdbShowRec(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowRec*)
   {
      ::EdbShowRec *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowRec >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowRec", ::EdbShowRec::Class_Version(), "EdbShowRec.h", 40,
                  typeid(::EdbShowRec), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowRec::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowRec) );
      instance.SetNew(&new_EdbShowRec);
      instance.SetNewArray(&newArray_EdbShowRec);
      instance.SetDelete(&delete_EdbShowRec);
      instance.SetDeleteArray(&deleteArray_EdbShowRec);
      instance.SetDestructor(&destruct_EdbShowRec);
      instance.SetStreamerFunc(&streamer_EdbShowRec);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowRec*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowRec*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowRec*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlgE_Simple(void *p = nullptr);
   static void *newArray_EdbShowAlgE_Simple(Long_t size, void *p);
   static void delete_EdbShowAlgE_Simple(void *p);
   static void deleteArray_EdbShowAlgE_Simple(void *p);
   static void destruct_EdbShowAlgE_Simple(void *p);
   static void streamer_EdbShowAlgE_Simple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlgE_Simple*)
   {
      ::EdbShowAlgE_Simple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlgE_Simple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlgE_Simple", ::EdbShowAlgE_Simple::Class_Version(), "EdbShowAlgE_Simple.h", 32,
                  typeid(::EdbShowAlgE_Simple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlgE_Simple::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlgE_Simple) );
      instance.SetNew(&new_EdbShowAlgE_Simple);
      instance.SetNewArray(&newArray_EdbShowAlgE_Simple);
      instance.SetDelete(&delete_EdbShowAlgE_Simple);
      instance.SetDeleteArray(&deleteArray_EdbShowAlgE_Simple);
      instance.SetDestructor(&destruct_EdbShowAlgE_Simple);
      instance.SetStreamerFunc(&streamer_EdbShowAlgE_Simple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlgE_Simple*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlgE_Simple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlgE_Simple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlgClean(void *p = nullptr);
   static void *newArray_EdbShowAlgClean(Long_t size, void *p);
   static void delete_EdbShowAlgClean(void *p);
   static void deleteArray_EdbShowAlgClean(void *p);
   static void destruct_EdbShowAlgClean(void *p);
   static void streamer_EdbShowAlgClean(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlgClean*)
   {
      ::EdbShowAlgClean *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlgClean >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlgClean", ::EdbShowAlgClean::Class_Version(), "EdbShowAlgClean.h", 31,
                  typeid(::EdbShowAlgClean), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlgClean::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlgClean) );
      instance.SetNew(&new_EdbShowAlgClean);
      instance.SetNewArray(&newArray_EdbShowAlgClean);
      instance.SetDelete(&delete_EdbShowAlgClean);
      instance.SetDeleteArray(&deleteArray_EdbShowAlgClean);
      instance.SetDestructor(&destruct_EdbShowAlgClean);
      instance.SetStreamerFunc(&streamer_EdbShowAlgClean);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlgClean*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlgClean*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlgClean*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowAlgID_E_G_Simple(void *p = nullptr);
   static void *newArray_EdbShowAlgID_E_G_Simple(Long_t size, void *p);
   static void delete_EdbShowAlgID_E_G_Simple(void *p);
   static void deleteArray_EdbShowAlgID_E_G_Simple(void *p);
   static void destruct_EdbShowAlgID_E_G_Simple(void *p);
   static void streamer_EdbShowAlgID_E_G_Simple(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowAlgID_E_G_Simple*)
   {
      ::EdbShowAlgID_E_G_Simple *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowAlgID_E_G_Simple >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowAlgID_E_G_Simple", ::EdbShowAlgID_E_G_Simple::Class_Version(), "EdbShowAlgID_E_G_Simple.h", 32,
                  typeid(::EdbShowAlgID_E_G_Simple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowAlgID_E_G_Simple::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowAlgID_E_G_Simple) );
      instance.SetNew(&new_EdbShowAlgID_E_G_Simple);
      instance.SetNewArray(&newArray_EdbShowAlgID_E_G_Simple);
      instance.SetDelete(&delete_EdbShowAlgID_E_G_Simple);
      instance.SetDeleteArray(&deleteArray_EdbShowAlgID_E_G_Simple);
      instance.SetDestructor(&destruct_EdbShowAlgID_E_G_Simple);
      instance.SetStreamerFunc(&streamer_EdbShowAlgID_E_G_Simple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowAlgID_E_G_Simple*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowAlgID_E_G_Simple*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowAlgID_E_G_Simple*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbShowPVRQuality(void *p = nullptr);
   static void *newArray_EdbShowPVRQuality(Long_t size, void *p);
   static void delete_EdbShowPVRQuality(void *p);
   static void deleteArray_EdbShowPVRQuality(void *p);
   static void destruct_EdbShowPVRQuality(void *p);
   static void streamer_EdbShowPVRQuality(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbShowPVRQuality*)
   {
      ::EdbShowPVRQuality *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbShowPVRQuality >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbShowPVRQuality", ::EdbShowPVRQuality::Class_Version(), "EdbShowPVRQuality.h", 32,
                  typeid(::EdbShowPVRQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbShowPVRQuality::Dictionary, isa_proxy, 16,
                  sizeof(::EdbShowPVRQuality) );
      instance.SetNew(&new_EdbShowPVRQuality);
      instance.SetNewArray(&newArray_EdbShowPVRQuality);
      instance.SetDelete(&delete_EdbShowPVRQuality);
      instance.SetDeleteArray(&deleteArray_EdbShowPVRQuality);
      instance.SetDestructor(&destruct_EdbShowPVRQuality);
      instance.SetStreamerFunc(&streamer_EdbShowPVRQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbShowPVRQuality*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbShowPVRQuality*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbShowPVRQuality*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Class_Name()
{
   return "EdbShowerP";
}

//______________________________________________________________________________
const char *EdbShowerP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_FJ::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_FJ::Class_Name()
{
   return "EdbShowerP::Para_FJ";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_FJ::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_FJ*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_FJ::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_FJ*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_FJ::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_FJ*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_FJ::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_FJ*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_LT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_LT::Class_Name()
{
   return "EdbShowerP::Para_LT";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_LT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_LT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_LT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_LT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_LT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_LT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_LT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_LT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_YC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_YC::Class_Name()
{
   return "EdbShowerP::Para_YC";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_YC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_YC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_YC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_YC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_JC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_JC::Class_Name()
{
   return "EdbShowerP::Para_JC";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_JC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_JC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_JC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_JC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_JC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_JC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_JC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_JC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_XX::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_XX::Class_Name()
{
   return "EdbShowerP::Para_XX";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_XX::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_XX*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_XX::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_XX*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_XX::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_XX*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_XX::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_XX*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_YY::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_YY::Class_Name()
{
   return "EdbShowerP::Para_YY";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_YY::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YY*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_YY::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YY*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_YY::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YY*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_YY::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_YY*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_PP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_PP::Class_Name()
{
   return "EdbShowerP::Para_PP";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_PP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_PP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_PP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_PP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_PP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_PP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_PP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_PP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_AS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_AS::Class_Name()
{
   return "EdbShowerP::Para_AS";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_AS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_AS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_AS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_AS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_AS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_AS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_AS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_AS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_SE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_SE::Class_Name()
{
   return "EdbShowerP::Para_SE";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_SE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_SE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_SE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_SE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_SE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_SE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_SE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_SE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Para_ExtraInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Para_ExtraInfo::Class_Name()
{
   return "EdbShowerP::Para_ExtraInfo";
}

//______________________________________________________________________________
const char *EdbShowerP::Para_ExtraInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_ExtraInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Para_ExtraInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_ExtraInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_ExtraInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_ExtraInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Para_ExtraInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Para_ExtraInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::MCInfo_PGun::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::MCInfo_PGun::Class_Name()
{
   return "EdbShowerP::MCInfo_PGun";
}

//______________________________________________________________________________
const char *EdbShowerP::MCInfo_PGun::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_PGun*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::MCInfo_PGun::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_PGun*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::MCInfo_PGun::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_PGun*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::MCInfo_PGun::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_PGun*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::MCInfo_Event::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::MCInfo_Event::Class_Name()
{
   return "EdbShowerP::MCInfo_Event";
}

//______________________________________________________________________________
const char *EdbShowerP::MCInfo_Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_Event*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::MCInfo_Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_Event*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::MCInfo_Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_Event*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::MCInfo_Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::MCInfo_Event*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Reco_ID::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Reco_ID::Class_Name()
{
   return "EdbShowerP::Reco_ID";
}

//______________________________________________________________________________
const char *EdbShowerP::Reco_ID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_ID*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Reco_ID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_ID*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Reco_ID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_ID*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Reco_ID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_ID*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Reco_E::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Reco_E::Class_Name()
{
   return "EdbShowerP::Reco_E";
}

//______________________________________________________________________________
const char *EdbShowerP::Reco_E::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_E*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Reco_E::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_E*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Reco_E::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_E*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Reco_E::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_E*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowerP::Reco_Vtx::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowerP::Reco_Vtx::Class_Name()
{
   return "EdbShowerP::Reco_Vtx";
}

//______________________________________________________________________________
const char *EdbShowerP::Reco_Vtx::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_Vtx*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowerP::Reco_Vtx::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_Vtx*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowerP::Reco_Vtx::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_Vtx*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowerP::Reco_Vtx::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowerP::Reco_Vtx*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg::Class_Name()
{
   return "EdbShowAlg";
}

//______________________________________________________________________________
const char *EdbShowAlg::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_SA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_SA::Class_Name()
{
   return "EdbShowAlg_SA";
}

//______________________________________________________________________________
const char *EdbShowAlg_SA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_SA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_SA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_SA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_SA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_SA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_SA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_SA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_CA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_CA::Class_Name()
{
   return "EdbShowAlg_CA";
}

//______________________________________________________________________________
const char *EdbShowAlg_CA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_CA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_CA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_CA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_CA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_CA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_CA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_CA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_OI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_OI::Class_Name()
{
   return "EdbShowAlg_OI";
}

//______________________________________________________________________________
const char *EdbShowAlg_OI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_OI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_OI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_OI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_OI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_OI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_OI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_OI*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_RC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_RC::Class_Name()
{
   return "EdbShowAlg_RC";
}

//______________________________________________________________________________
const char *EdbShowAlg_RC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_RC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_RC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_RC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_RC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_RC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_RC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_RC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_BW::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_BW::Class_Name()
{
   return "EdbShowAlg_BW";
}

//______________________________________________________________________________
const char *EdbShowAlg_BW::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_BW*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_BW::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_BW*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_BW::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_BW*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_BW::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_BW*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_GS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_GS::Class_Name()
{
   return "EdbShowAlg_GS";
}

//______________________________________________________________________________
const char *EdbShowAlg_GS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_GS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_GS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_GS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_GS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_GS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_GS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_GS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_NN::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_NN::Class_Name()
{
   return "EdbShowAlg_NN";
}

//______________________________________________________________________________
const char *EdbShowAlg_NN::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_NN*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_NN::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_NN*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_NN::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_NN*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_NN::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_NN*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlg_N3::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlg_N3::Class_Name()
{
   return "EdbShowAlg_N3";
}

//______________________________________________________________________________
const char *EdbShowAlg_N3::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_N3*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlg_N3::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_N3*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlg_N3::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_N3*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlg_N3::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlg_N3*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlgE::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlgE::Class_Name()
{
   return "EdbShowAlgE";
}

//______________________________________________________________________________
const char *EdbShowAlgE::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlgE::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlgE::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlgE::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowRec::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowRec::Class_Name()
{
   return "EdbShowRec";
}

//______________________________________________________________________________
const char *EdbShowRec::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowRec*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowRec::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowRec*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowRec::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowRec*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowRec::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowRec*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlgE_Simple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlgE_Simple::Class_Name()
{
   return "EdbShowAlgE_Simple";
}

//______________________________________________________________________________
const char *EdbShowAlgE_Simple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE_Simple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlgE_Simple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE_Simple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlgE_Simple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE_Simple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlgE_Simple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgE_Simple*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlgClean::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlgClean::Class_Name()
{
   return "EdbShowAlgClean";
}

//______________________________________________________________________________
const char *EdbShowAlgClean::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgClean*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlgClean::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgClean*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlgClean::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgClean*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlgClean::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgClean*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowAlgID_E_G_Simple::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowAlgID_E_G_Simple::Class_Name()
{
   return "EdbShowAlgID_E_G_Simple";
}

//______________________________________________________________________________
const char *EdbShowAlgID_E_G_Simple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgID_E_G_Simple*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowAlgID_E_G_Simple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgID_E_G_Simple*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowAlgID_E_G_Simple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgID_E_G_Simple*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowAlgID_E_G_Simple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowAlgID_E_G_Simple*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbShowPVRQuality::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbShowPVRQuality::Class_Name()
{
   return "EdbShowPVRQuality";
}

//______________________________________________________________________________
const char *EdbShowPVRQuality::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowPVRQuality*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbShowPVRQuality::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbShowPVRQuality*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbShowPVRQuality::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowPVRQuality*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbShowPVRQuality::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbShowPVRQuality*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbShowerP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbSegP::Streamer(R__b);
      eLongitudinalProfileName.Streamer(R__b);
      eTransversalProfileName.Streamer(R__b);
      eAlgName.Streamer(R__b);
      R__b >> eAlgValue;
      R__b.ReadStaticArray((float*)eParaValue);
      int R__i;
      for (R__i = 0; R__i < 10; R__i++)
         eParaString[R__i].Streamer(R__b);
      R__b.ReadStaticArray((bool*)eParametrisationIsDone);
      R__b.ReadStaticArray((bool*)eExtraInfoIsDone);
      R__b.ReadStaticArray((bool*)eMCInfoIsDone);
      R__b >> eFirstPlate;
      R__b >> eLastPlate;
      R__b >> eFirstPlatePID;
      R__b >> eLastPlatePID;
      R__b >> eFirstPlateZ;
      R__b >> eLastPlateZ;
      R__b >> eFirstZ;
      R__b >> eLastZ;
      R__b >> eS;
      R__b >> eNpl;
      R__b >> eN0;
      R__b >> eM;
      R__b >> ePDG;
      R__b >> eNBT;
      R__b >> eNBTMC;
      R__b.ReadStaticArray((int*)eNBTMCFlag);
      R__b.ReadStaticArray((int*)eNBTPlate);
      R__b.ReadStaticArray((int*)eNBTMCPlate);
      R__b.ReadStaticArray((int*)eNBTMCFlagPlate);
      R__b >> eN00;
      R__b >> ePurity;
      R__b >> eEnergyMC;
      R__b >> eMC;
      R__b >> eSphericity;
      R__b >> eProfileLongitudinal;
      R__b >> eProfileTransversal;
      R__b >> eShowerAxisAngle;
      R__b >> eShowerAxisCenterGravityBT;
      R__b >> eShowerAngularDeviationTXDistribution_mean;
      R__b >> eShowerAngularDeviationTXDistribution_sigma;
      R__b >> eShowerAngularDeviationTYDistribution_mean;
      R__b >> eShowerAngularDeviationTYDistribution_sigma;
      R__b >> eId;
      R__b >> ePDGId;
      R__b >> eEnergy;
      R__b >> eEnergyUncorrected;
      R__b >> eEnergyCorrected;
      ePara_FJ.Streamer(R__b);
      ePara_LT.Streamer(R__b);
      ePara_YC.Streamer(R__b);
      ePara_JC.Streamer(R__b);
      ePara_XX.Streamer(R__b);
      ePara_YY.Streamer(R__b);
      ePara_PP.Streamer(R__b);
      ePara_AS.Streamer(R__b);
      ePara_SE.Streamer(R__b);
      R__b >> ePara_N;
      ePara_ExtraInfo.Streamer(R__b);
      eMCInfo_PGun.Streamer(R__b);
      eMCInfo_Event.Streamer(R__b);
      eReco_E.Streamer(R__b);
      eReco_Vtx.Streamer(R__b);
      R__b >> eReco_ID_Array;
      R__b >> eReco_E_Array;
      R__b >> eReco_Vtx_Array;
      R__b.CheckByteCount(R__s, R__c, EdbShowerP::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowerP::IsA(), kTRUE);
      EdbSegP::Streamer(R__b);
      eLongitudinalProfileName.Streamer(R__b);
      eTransversalProfileName.Streamer(R__b);
      eAlgName.Streamer(R__b);
      R__b << eAlgValue;
      R__b.WriteArray(eParaValue, 10);
      int R__i;
      for (R__i = 0; R__i < 10; R__i++)
         eParaString[R__i].Streamer(R__b);
      R__b.WriteArray(eParametrisationIsDone, 10);
      R__b.WriteArray(eExtraInfoIsDone, 2);
      R__b.WriteArray(eMCInfoIsDone, 2);
      R__b << eFirstPlate;
      R__b << eLastPlate;
      R__b << eFirstPlatePID;
      R__b << eLastPlatePID;
      R__b << eFirstPlateZ;
      R__b << eLastPlateZ;
      R__b << eFirstZ;
      R__b << eLastZ;
      R__b << eS;
      R__b << eNpl;
      R__b << eN0;
      R__b << eM;
      R__b << ePDG;
      R__b << eNBT;
      R__b << eNBTMC;
      R__b.WriteArray(eNBTMCFlag, 99);
      R__b.WriteArray(eNBTPlate, 57);
      R__b.WriteArray(eNBTMCPlate, 57);
      R__b.WriteArray((int*)eNBTMCFlagPlate, 5643);
      R__b << eN00;
      R__b << ePurity;
      R__b << eEnergyMC;
      R__b << eMC;
      R__b << eSphericity;
      R__b << (TObject*)eProfileLongitudinal;
      R__b << (TObject*)eProfileTransversal;
      R__b << eShowerAxisAngle;
      R__b << eShowerAxisCenterGravityBT;
      R__b << eShowerAngularDeviationTXDistribution_mean;
      R__b << eShowerAngularDeviationTXDistribution_sigma;
      R__b << eShowerAngularDeviationTYDistribution_mean;
      R__b << eShowerAngularDeviationTYDistribution_sigma;
      R__b << eId;
      R__b << ePDGId;
      R__b << eEnergy;
      R__b << eEnergyUncorrected;
      R__b << eEnergyCorrected;
      ePara_FJ.Streamer(R__b);
      ePara_LT.Streamer(R__b);
      ePara_YC.Streamer(R__b);
      ePara_JC.Streamer(R__b);
      ePara_XX.Streamer(R__b);
      ePara_YY.Streamer(R__b);
      ePara_PP.Streamer(R__b);
      ePara_AS.Streamer(R__b);
      ePara_SE.Streamer(R__b);
      R__b << ePara_N;
      ePara_ExtraInfo.Streamer(R__b);
      eMCInfo_PGun.Streamer(R__b);
      eMCInfo_Event.Streamer(R__b);
      eReco_E.Streamer(R__b);
      eReco_Vtx.Streamer(R__b);
      R__b << eReco_ID_Array;
      R__b << eReco_E_Array;
      R__b << eReco_Vtx_Array;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerP(void *p) {
      return  p ? new(p) ::EdbShowerP : new ::EdbShowerP;
   }
   static void *newArray_EdbShowerP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP[nElements] : new ::EdbShowerP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerP(void *p) {
      delete (static_cast<::EdbShowerP*>(p));
   }
   static void deleteArray_EdbShowerP(void *p) {
      delete [] (static_cast<::EdbShowerP*>(p));
   }
   static void destruct_EdbShowerP(void *p) {
      typedef ::EdbShowerP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerP(TBuffer &buf, void *obj) {
      ((::EdbShowerP*)obj)->::EdbShowerP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP

//______________________________________________________________________________
void EdbShowerP::Para_FJ::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_FJ.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_FJ thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> BT_deltaR_mean;
      R__b >> BT_deltaR_rms;
      R__b >> BT_deltaT_mean;
      R__b >> BT_deltaT_rms;
      R__b.ReadStaticArray((int*)longprofile);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << BT_deltaR_mean;
      R__b << BT_deltaR_rms;
      R__b << BT_deltaT_mean;
      R__b << BT_deltaT_rms;
      R__b.WriteArray(longprofile, 57);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_FJ(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_FJ : new ::EdbShowerP::Para_FJ;
   }
   static void *newArray_EdbShowerPcLcLPara_FJ(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_FJ[nElements] : new ::EdbShowerP::Para_FJ[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_FJ(void *p) {
      delete (static_cast<::EdbShowerP::Para_FJ*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_FJ(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_FJ*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_FJ(void *p) {
      typedef ::EdbShowerP::Para_FJ current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_FJ(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_FJ*)obj)->::EdbShowerP::Para_FJ::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_FJ

//______________________________________________________________________________
void EdbShowerP::Para_LT::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_LT.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_LT thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> BT_deltaR_mean;
      R__b >> BT_deltaR_rms;
      R__b >> BT_deltaT_mean;
      R__b >> BT_deltaT_rms;
      R__b.ReadStaticArray((int*)transprofile);
      R__b.ReadStaticArray((int*)longprofile);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << BT_deltaR_mean;
      R__b << BT_deltaR_rms;
      R__b << BT_deltaT_mean;
      R__b << BT_deltaT_rms;
      R__b.WriteArray(transprofile, 8);
      R__b.WriteArray(longprofile, 57);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_LT(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_LT : new ::EdbShowerP::Para_LT;
   }
   static void *newArray_EdbShowerPcLcLPara_LT(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_LT[nElements] : new ::EdbShowerP::Para_LT[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_LT(void *p) {
      delete (static_cast<::EdbShowerP::Para_LT*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_LT(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_LT*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_LT(void *p) {
      typedef ::EdbShowerP::Para_LT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_LT(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_LT*)obj)->::EdbShowerP::Para_LT::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_LT

//______________________________________________________________________________
void EdbShowerP::Para_YC::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_YC.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_YC thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> C1;
      R__b >> a1;
      R__b >> alpha;
      R__b >> nmax;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << C1;
      R__b << a1;
      R__b << alpha;
      R__b << nmax;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_YC(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_YC : new ::EdbShowerP::Para_YC;
   }
   static void *newArray_EdbShowerPcLcLPara_YC(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_YC[nElements] : new ::EdbShowerP::Para_YC[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_YC(void *p) {
      delete (static_cast<::EdbShowerP::Para_YC*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_YC(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_YC*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_YC(void *p) {
      typedef ::EdbShowerP::Para_YC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_YC(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_YC*)obj)->::EdbShowerP::Para_YC::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_YC

//______________________________________________________________________________
void EdbShowerP::Para_JC::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_JC.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_JC thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> C1;
      R__b >> a1;
      R__b >> alpha;
      R__b >> nmax;
      R__b >> BT_deltaR_mean;
      R__b >> BT_deltaR_rms;
      R__b >> BT_deltaT_mean;
      R__b >> BT_deltaT_rms;
      R__b.ReadStaticArray((int*)longprofile);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << C1;
      R__b << a1;
      R__b << alpha;
      R__b << nmax;
      R__b << BT_deltaR_mean;
      R__b << BT_deltaR_rms;
      R__b << BT_deltaT_mean;
      R__b << BT_deltaT_rms;
      R__b.WriteArray(longprofile, 57);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_JC(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_JC : new ::EdbShowerP::Para_JC;
   }
   static void *newArray_EdbShowerPcLcLPara_JC(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_JC[nElements] : new ::EdbShowerP::Para_JC[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_JC(void *p) {
      delete (static_cast<::EdbShowerP::Para_JC*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_JC(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_JC*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_JC(void *p) {
      typedef ::EdbShowerP::Para_JC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_JC(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_JC*)obj)->::EdbShowerP::Para_JC::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_JC

//______________________________________________________________________________
void EdbShowerP::Para_XX::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_XX.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_XX thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> Mean_ProfileLongitudinal;
      R__b >> RMS_ProfileLongitudinal;
      R__b >> Max_ProfileLongitudinal;
      R__b >> Mean_ProfileTransversal;
      R__b >> RMS_ProfileTransversal;
      R__b >> Max_ProfileTransversal;
      R__b >> Last_ProfileLongitudinal;
      R__b >> Last_ProfileTransversal;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << Mean_ProfileLongitudinal;
      R__b << RMS_ProfileLongitudinal;
      R__b << Max_ProfileLongitudinal;
      R__b << Mean_ProfileTransversal;
      R__b << RMS_ProfileTransversal;
      R__b << Max_ProfileTransversal;
      R__b << Last_ProfileLongitudinal;
      R__b << Last_ProfileTransversal;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_XX(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_XX : new ::EdbShowerP::Para_XX;
   }
   static void *newArray_EdbShowerPcLcLPara_XX(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_XX[nElements] : new ::EdbShowerP::Para_XX[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_XX(void *p) {
      delete (static_cast<::EdbShowerP::Para_XX*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_XX(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_XX*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_XX(void *p) {
      typedef ::EdbShowerP::Para_XX current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_XX(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_XX*)obj)->::EdbShowerP::Para_XX::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_XX

//______________________________________________________________________________
void EdbShowerP::Para_YY::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_YY.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_YY thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b.ReadStaticArray((int*)ProfileLongitudinalBincontent);
      R__b.ReadStaticArray((int*)ProfileTransversalBincontent);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b.WriteArray(ProfileLongitudinalBincontent, 57);
      R__b.WriteArray(ProfileTransversalBincontent, 8);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_YY(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_YY : new ::EdbShowerP::Para_YY;
   }
   static void *newArray_EdbShowerPcLcLPara_YY(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_YY[nElements] : new ::EdbShowerP::Para_YY[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_YY(void *p) {
      delete (static_cast<::EdbShowerP::Para_YY*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_YY(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_YY*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_YY(void *p) {
      typedef ::EdbShowerP::Para_YY current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_YY(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_YY*)obj)->::EdbShowerP::Para_YY::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_YY

//______________________________________________________________________________
void EdbShowerP::Para_PP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_PP.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_PP thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> ePairOpeningAngle;
      R__b >> ePairOpeningDist_dMin;
      R__b >> ePairOpeningDist_dR;
      R__b >> ePairChi2;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << ePairOpeningAngle;
      R__b << ePairOpeningDist_dMin;
      R__b << ePairOpeningDist_dR;
      R__b << ePairChi2;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_PP(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_PP : new ::EdbShowerP::Para_PP;
   }
   static void *newArray_EdbShowerPcLcLPara_PP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_PP[nElements] : new ::EdbShowerP::Para_PP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_PP(void *p) {
      delete (static_cast<::EdbShowerP::Para_PP*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_PP(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_PP*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_PP(void *p) {
      typedef ::EdbShowerP::Para_PP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_PP(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_PP*)obj)->::EdbShowerP::Para_PP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_PP

//______________________________________________________________________________
void EdbShowerP::Para_AS::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_AS.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_AS thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> nseg;
      R__b.ReadStaticArray((double*)edIP);
      R__b.ReadStaticArray((double*)edMin);
      R__b.ReadStaticArray((double*)edRLong);
      R__b.ReadStaticArray((double*)edRTrans);
      R__b.ReadStaticArray((double*)edeltarb);
      R__b.ReadStaticArray((double*)edeltathetab);
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << nseg;
      R__b.WriteArray(edIP, 50);
      R__b.WriteArray(edMin, 50);
      R__b.WriteArray(edRLong, 50);
      R__b.WriteArray(edRTrans, 50);
      R__b.WriteArray(edeltarb, 50);
      R__b.WriteArray(edeltathetab, 50);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_AS(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_AS : new ::EdbShowerP::Para_AS;
   }
   static void *newArray_EdbShowerPcLcLPara_AS(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_AS[nElements] : new ::EdbShowerP::Para_AS[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_AS(void *p) {
      delete (static_cast<::EdbShowerP::Para_AS*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_AS(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_AS*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_AS(void *p) {
      typedef ::EdbShowerP::Para_AS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_AS(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_AS*)obj)->::EdbShowerP::Para_AS::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_AS

//______________________________________________________________________________
void EdbShowerP::Para_SE::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_SE.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_SE thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> ShowerAxisAngle;
      R__b >> nseg;
      R__b >> npl;
      R__b >> efficiencyAtShowerAxisAngle;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << ShowerAxisAngle;
      R__b << nseg;
      R__b << npl;
      R__b << efficiencyAtShowerAxisAngle;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_SE(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_SE : new ::EdbShowerP::Para_SE;
   }
   static void *newArray_EdbShowerPcLcLPara_SE(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_SE[nElements] : new ::EdbShowerP::Para_SE[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_SE(void *p) {
      delete (static_cast<::EdbShowerP::Para_SE*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_SE(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_SE*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_SE(void *p) {
      typedef ::EdbShowerP::Para_SE current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_SE(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_SE*)obj)->::EdbShowerP::Para_SE::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_SE

//______________________________________________________________________________
void EdbShowerP::Para_ExtraInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Para_ExtraInfo.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Para_ExtraInfo thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> InBT_E;
      R__b >> InBT_Flag;
      R__b >> InPairBT_E;
      R__b >> ShowerLength;
      R__b >> InBT_IPToVtx;
      R__b >> InBT_DeltaZToVtx;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << InBT_E;
      R__b << InBT_Flag;
      R__b << InPairBT_E;
      R__b << ShowerLength;
      R__b << InBT_IPToVtx;
      R__b << InBT_DeltaZToVtx;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLPara_ExtraInfo(void *p) {
      return  p ? new(p) ::EdbShowerP::Para_ExtraInfo : new ::EdbShowerP::Para_ExtraInfo;
   }
   static void *newArray_EdbShowerPcLcLPara_ExtraInfo(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Para_ExtraInfo[nElements] : new ::EdbShowerP::Para_ExtraInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLPara_ExtraInfo(void *p) {
      delete (static_cast<::EdbShowerP::Para_ExtraInfo*>(p));
   }
   static void deleteArray_EdbShowerPcLcLPara_ExtraInfo(void *p) {
      delete [] (static_cast<::EdbShowerP::Para_ExtraInfo*>(p));
   }
   static void destruct_EdbShowerPcLcLPara_ExtraInfo(void *p) {
      typedef ::EdbShowerP::Para_ExtraInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLPara_ExtraInfo(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Para_ExtraInfo*)obj)->::EdbShowerP::Para_ExtraInfo::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Para_ExtraInfo

//______________________________________________________________________________
void EdbShowerP::MCInfo_PGun::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::MCInfo_PGun.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::MCInfo_PGun thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> MCEvt;
      R__b >> PDGId;
      R__b >> energy;
      R__b >> tantheta;
      R__b >> dirx;
      R__b >> diry;
      R__b >> dirz;
      R__b >> vtxposx;
      R__b >> vtxposy;
      R__b >> vtxposz;
      R__b >> TX;
      R__b >> TY;
      R__b >> Y;
      R__b >> X;
      R__b >> Z;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << MCEvt;
      R__b << PDGId;
      R__b << energy;
      R__b << tantheta;
      R__b << dirx;
      R__b << diry;
      R__b << dirz;
      R__b << vtxposx;
      R__b << vtxposy;
      R__b << vtxposz;
      R__b << TX;
      R__b << TY;
      R__b << Y;
      R__b << X;
      R__b << Z;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLMCInfo_PGun(void *p) {
      return  p ? new(p) ::EdbShowerP::MCInfo_PGun : new ::EdbShowerP::MCInfo_PGun;
   }
   static void *newArray_EdbShowerPcLcLMCInfo_PGun(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::MCInfo_PGun[nElements] : new ::EdbShowerP::MCInfo_PGun[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLMCInfo_PGun(void *p) {
      delete (static_cast<::EdbShowerP::MCInfo_PGun*>(p));
   }
   static void deleteArray_EdbShowerPcLcLMCInfo_PGun(void *p) {
      delete [] (static_cast<::EdbShowerP::MCInfo_PGun*>(p));
   }
   static void destruct_EdbShowerPcLcLMCInfo_PGun(void *p) {
      typedef ::EdbShowerP::MCInfo_PGun current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLMCInfo_PGun(TBuffer &buf, void *obj) {
      ((::EdbShowerP::MCInfo_PGun*)obj)->::EdbShowerP::MCInfo_PGun::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::MCInfo_PGun

//______________________________________________________________________________
void EdbShowerP::MCInfo_Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::MCInfo_Event.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::MCInfo_Event thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> eDUMMYVARIABLE;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << eDUMMYVARIABLE;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLMCInfo_Event(void *p) {
      return  p ? new(p) ::EdbShowerP::MCInfo_Event : new ::EdbShowerP::MCInfo_Event;
   }
   static void *newArray_EdbShowerPcLcLMCInfo_Event(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::MCInfo_Event[nElements] : new ::EdbShowerP::MCInfo_Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLMCInfo_Event(void *p) {
      delete (static_cast<::EdbShowerP::MCInfo_Event*>(p));
   }
   static void deleteArray_EdbShowerPcLcLMCInfo_Event(void *p) {
      delete [] (static_cast<::EdbShowerP::MCInfo_Event*>(p));
   }
   static void destruct_EdbShowerPcLcLMCInfo_Event(void *p) {
      typedef ::EdbShowerP::MCInfo_Event current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLMCInfo_Event(TBuffer &buf, void *obj) {
      ((::EdbShowerP::MCInfo_Event*)obj)->::EdbShowerP::MCInfo_Event::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::MCInfo_Event

//______________________________________________________________________________
void EdbShowerP::Reco_ID::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Reco_ID.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Reco_ID thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> eProb90;
      R__b >> eProb5;
      eReco_ID_Name.Streamer(R__b);
      R__b >> eReco_ID_Nr;
      R__b >> eParaNr;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << eProb90;
      R__b << eProb5;
      eReco_ID_Name.Streamer(R__b);
      R__b << eReco_ID_Nr;
      R__b << eParaNr;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLReco_ID(void *p) {
      return  p ? new(p) ::EdbShowerP::Reco_ID : new ::EdbShowerP::Reco_ID;
   }
   static void *newArray_EdbShowerPcLcLReco_ID(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Reco_ID[nElements] : new ::EdbShowerP::Reco_ID[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLReco_ID(void *p) {
      delete (static_cast<::EdbShowerP::Reco_ID*>(p));
   }
   static void deleteArray_EdbShowerPcLcLReco_ID(void *p) {
      delete [] (static_cast<::EdbShowerP::Reco_ID*>(p));
   }
   static void destruct_EdbShowerPcLcLReco_ID(void *p) {
      typedef ::EdbShowerP::Reco_ID current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLReco_ID(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Reco_ID*)obj)->::EdbShowerP::Reco_ID::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Reco_ID

//______________________________________________________________________________
void EdbShowerP::Reco_E::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Reco_E.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Reco_E thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> eId;
      R__b >> ePDGId;
      R__b >> eEnergy;
      R__b >> eEnergyUncorrected;
      R__b >> eEnergyCorrected;
      R__b >> eParaNr;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << eId;
      R__b << ePDGId;
      R__b << eEnergy;
      R__b << eEnergyUncorrected;
      R__b << eEnergyCorrected;
      R__b << eParaNr;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLReco_E(void *p) {
      return  p ? new(p) ::EdbShowerP::Reco_E : new ::EdbShowerP::Reco_E;
   }
   static void *newArray_EdbShowerPcLcLReco_E(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Reco_E[nElements] : new ::EdbShowerP::Reco_E[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLReco_E(void *p) {
      delete (static_cast<::EdbShowerP::Reco_E*>(p));
   }
   static void deleteArray_EdbShowerPcLcLReco_E(void *p) {
      delete [] (static_cast<::EdbShowerP::Reco_E*>(p));
   }
   static void destruct_EdbShowerPcLcLReco_E(void *p) {
      typedef ::EdbShowerP::Reco_E current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLReco_E(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Reco_E*)obj)->::EdbShowerP::Reco_E::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Reco_E

//______________________________________________________________________________
void EdbShowerP::Reco_Vtx::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowerP::Reco_Vtx.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::EdbShowerP::Reco_Vtx thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      R__b >> eDUMMYVARIABLE;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      R__b << eDUMMYVARIABLE;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowerPcLcLReco_Vtx(void *p) {
      return  p ? new(p) ::EdbShowerP::Reco_Vtx : new ::EdbShowerP::Reco_Vtx;
   }
   static void *newArray_EdbShowerPcLcLReco_Vtx(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowerP::Reco_Vtx[nElements] : new ::EdbShowerP::Reco_Vtx[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowerPcLcLReco_Vtx(void *p) {
      delete (static_cast<::EdbShowerP::Reco_Vtx*>(p));
   }
   static void deleteArray_EdbShowerPcLcLReco_Vtx(void *p) {
      delete [] (static_cast<::EdbShowerP::Reco_Vtx*>(p));
   }
   static void destruct_EdbShowerPcLcLReco_Vtx(void *p) {
      typedef ::EdbShowerP::Reco_Vtx current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowerPcLcLReco_Vtx(TBuffer &buf, void *obj) {
      ((::EdbShowerP::Reco_Vtx*)obj)->::EdbShowerP::Reco_Vtx::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowerP::Reco_Vtx

//______________________________________________________________________________
void EdbShowAlg::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eAlgName.Streamer(R__b);
      R__b >> eAlgValue;
      R__b >> eParaN;
      R__b.ReadStaticArray((float*)eParaValue);
      int R__i;
      for (R__i = 0; R__i < 10; R__i++)
         eParaString[R__i].Streamer(R__b);
      R__b >> eActualAlgParametersetNr;
      R__b >> eAli;
      R__b >> eAliNpat;
      R__b >> eInBTArray;
      R__b >> eInBTArrayN;
      R__b >> eFirstPlate_eAliPID;
      R__b >> eLastPlate_eAliPID;
      R__b >> eMiddlePlate_eAliPID;
      R__b >> eNumberPlate_eAliPID;
      R__b >> eRecoShowerArray;
      R__b >> eRecoShowerArrayN;
      R__b >> eAli_Sub;
      R__b >> eAli_SubNpat;
      R__b >> eUseAliSub;
      R__b >> eRecoShower;
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eAlgName.Streamer(R__b);
      R__b << eAlgValue;
      R__b << eParaN;
      R__b.WriteArray(eParaValue, 10);
      int R__i;
      for (R__i = 0; R__i < 10; R__i++)
         eParaString[R__i].Streamer(R__b);
      R__b << eActualAlgParametersetNr;
      R__b << eAli;
      R__b << eAliNpat;
      R__b << eInBTArray;
      R__b << eInBTArrayN;
      R__b << eFirstPlate_eAliPID;
      R__b << eLastPlate_eAliPID;
      R__b << eMiddlePlate_eAliPID;
      R__b << eNumberPlate_eAliPID;
      R__b << eRecoShowerArray;
      R__b << eRecoShowerArrayN;
      R__b << eAli_Sub;
      R__b << eAli_SubNpat;
      R__b << eUseAliSub;
      R__b << eRecoShower;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg(void *p) {
      return  p ? new(p) ::EdbShowAlg : new ::EdbShowAlg;
   }
   static void *newArray_EdbShowAlg(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg[nElements] : new ::EdbShowAlg[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg(void *p) {
      delete (static_cast<::EdbShowAlg*>(p));
   }
   static void deleteArray_EdbShowAlg(void *p) {
      delete [] (static_cast<::EdbShowAlg*>(p));
   }
   static void destruct_EdbShowAlg(void *p) {
      typedef ::EdbShowAlg current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg(TBuffer &buf, void *obj) {
      ((::EdbShowAlg*)obj)->::EdbShowAlg::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg

//______________________________________________________________________________
void EdbShowAlg_SA::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_SA.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_SA::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_SA::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_SA(void *p) {
      return  p ? new(p) ::EdbShowAlg_SA : new ::EdbShowAlg_SA;
   }
   static void *newArray_EdbShowAlg_SA(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_SA[nElements] : new ::EdbShowAlg_SA[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_SA(void *p) {
      delete (static_cast<::EdbShowAlg_SA*>(p));
   }
   static void deleteArray_EdbShowAlg_SA(void *p) {
      delete [] (static_cast<::EdbShowAlg_SA*>(p));
   }
   static void destruct_EdbShowAlg_SA(void *p) {
      typedef ::EdbShowAlg_SA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_SA(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_SA*)obj)->::EdbShowAlg_SA::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_SA

//______________________________________________________________________________
void EdbShowAlg_CA::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_CA.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_CA::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_CA::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_CA(void *p) {
      return  p ? new(p) ::EdbShowAlg_CA : new ::EdbShowAlg_CA;
   }
   static void *newArray_EdbShowAlg_CA(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_CA[nElements] : new ::EdbShowAlg_CA[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_CA(void *p) {
      delete (static_cast<::EdbShowAlg_CA*>(p));
   }
   static void deleteArray_EdbShowAlg_CA(void *p) {
      delete [] (static_cast<::EdbShowAlg_CA*>(p));
   }
   static void destruct_EdbShowAlg_CA(void *p) {
      typedef ::EdbShowAlg_CA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_CA(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_CA*)obj)->::EdbShowAlg_CA::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_CA

//______________________________________________________________________________
void EdbShowAlg_OI::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_OI.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_OI::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_OI::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_OI(void *p) {
      return  p ? new(p) ::EdbShowAlg_OI : new ::EdbShowAlg_OI;
   }
   static void *newArray_EdbShowAlg_OI(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_OI[nElements] : new ::EdbShowAlg_OI[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_OI(void *p) {
      delete (static_cast<::EdbShowAlg_OI*>(p));
   }
   static void deleteArray_EdbShowAlg_OI(void *p) {
      delete [] (static_cast<::EdbShowAlg_OI*>(p));
   }
   static void destruct_EdbShowAlg_OI(void *p) {
      typedef ::EdbShowAlg_OI current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_OI(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_OI*)obj)->::EdbShowAlg_OI::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_OI

//______________________________________________________________________________
void EdbShowAlg_RC::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_RC.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_RC::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_RC::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_RC(void *p) {
      return  p ? new(p) ::EdbShowAlg_RC : new ::EdbShowAlg_RC;
   }
   static void *newArray_EdbShowAlg_RC(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_RC[nElements] : new ::EdbShowAlg_RC[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_RC(void *p) {
      delete (static_cast<::EdbShowAlg_RC*>(p));
   }
   static void deleteArray_EdbShowAlg_RC(void *p) {
      delete [] (static_cast<::EdbShowAlg_RC*>(p));
   }
   static void destruct_EdbShowAlg_RC(void *p) {
      typedef ::EdbShowAlg_RC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_RC(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_RC*)obj)->::EdbShowAlg_RC::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_RC

//______________________________________________________________________________
void EdbShowAlg_BW::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_BW.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_BW::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_BW::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_BW(void *p) {
      return  p ? new(p) ::EdbShowAlg_BW : new ::EdbShowAlg_BW;
   }
   static void *newArray_EdbShowAlg_BW(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_BW[nElements] : new ::EdbShowAlg_BW[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_BW(void *p) {
      delete (static_cast<::EdbShowAlg_BW*>(p));
   }
   static void deleteArray_EdbShowAlg_BW(void *p) {
      delete [] (static_cast<::EdbShowAlg_BW*>(p));
   }
   static void destruct_EdbShowAlg_BW(void *p) {
      typedef ::EdbShowAlg_BW current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_BW(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_BW*)obj)->::EdbShowAlg_BW::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_BW

//______________________________________________________________________________
void EdbShowAlg_GS::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_GS.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      R__b >> eInVtxArray;
      R__b >> eInVtxArrayN;
      R__b >> h_GammaChi2;
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_GS::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_GS::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      R__b << eInVtxArray;
      R__b << eInVtxArrayN;
      R__b << (TObject*)h_GammaChi2;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_GS(void *p) {
      return  p ? new(p) ::EdbShowAlg_GS : new ::EdbShowAlg_GS;
   }
   static void *newArray_EdbShowAlg_GS(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_GS[nElements] : new ::EdbShowAlg_GS[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_GS(void *p) {
      delete (static_cast<::EdbShowAlg_GS*>(p));
   }
   static void deleteArray_EdbShowAlg_GS(void *p) {
      delete [] (static_cast<::EdbShowAlg_GS*>(p));
   }
   static void destruct_EdbShowAlg_GS(void *p) {
      typedef ::EdbShowAlg_GS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_GS(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_GS*)obj)->::EdbShowAlg_GS::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_GS

//______________________________________________________________________________
void EdbShowAlg_NN::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_NN.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      eWeightFileString.Streamer(R__b);
      eWeightFileLayoutString.Streamer(R__b);
      R__b >> eANNTree;
      R__b >> eTMlpANN;
      R__b >> eANN_var_InBT_To_TestBT;
      R__b >> eANN_var_dT_InBT_To_TestBT;
      R__b >> eANN_var_dR_InBT_To_TestBT;
      R__b >> eANN_var_dR_TestBT_To_InBT;
      R__b >> eANN_var_zDist_TestBT_To_InBT;
      R__b >> eANN_var_SpatialDist_TestBT_To_InBT;
      R__b >> eANN_var_zDiff_TestBT_To_InBT;
      R__b >> eANN_var_dT_NextBT_To_TestBT;
      R__b >> eANN_var_dR_NextBT_To_TestBT;
      R__b >> eANN_var_mean_dT_2before;
      R__b >> eANN_var_mean_dR_2before;
      R__b >> eANN_var_mean_dT_before;
      R__b >> eANN_var_mean_dR_before;
      R__b >> eANN_var_mean_dT_same;
      R__b >> eANN_var_mean_dR_same;
      R__b >> eANN_var_mean_dT_after;
      R__b >> eANN_var_mean_dR_after;
      R__b >> eANN_var_mean_dT_2after;
      R__b >> eANN_var_mean_dR_2after;
      R__b >> eANN_var_min_dT_2before;
      R__b >> eANN_var_min_dR_2before;
      R__b >> eANN_var_min_dT_before;
      R__b >> eANN_var_min_dR_before;
      R__b >> eANN_var_min_dT_same;
      R__b >> eANN_var_min_dR_same;
      R__b >> eANN_var_min_dT_after;
      R__b >> eANN_var_min_dR_after;
      R__b >> eANN_var_min_dT_2after;
      R__b >> eANN_var_min_dR_2after;
      R__b >> eANN_var_nseg_1before;
      R__b >> eANN_var_nseg_2before;
      R__b >> eANN_var_nseg_3before;
      R__b >> eANN_var_nseg_1after;
      R__b >> eANN_var_nseg_2after;
      R__b >> eANN_var_nseg_3after;
      R__b >> eANN_var_nseg_same;
      R__b >> eANN_Inputtype;
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_NN::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_NN::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      eWeightFileString.Streamer(R__b);
      eWeightFileLayoutString.Streamer(R__b);
      R__b << eANNTree;
      R__b << eTMlpANN;
      R__b << eANN_var_InBT_To_TestBT;
      R__b << eANN_var_dT_InBT_To_TestBT;
      R__b << eANN_var_dR_InBT_To_TestBT;
      R__b << eANN_var_dR_TestBT_To_InBT;
      R__b << eANN_var_zDist_TestBT_To_InBT;
      R__b << eANN_var_SpatialDist_TestBT_To_InBT;
      R__b << eANN_var_zDiff_TestBT_To_InBT;
      R__b << eANN_var_dT_NextBT_To_TestBT;
      R__b << eANN_var_dR_NextBT_To_TestBT;
      R__b << eANN_var_mean_dT_2before;
      R__b << eANN_var_mean_dR_2before;
      R__b << eANN_var_mean_dT_before;
      R__b << eANN_var_mean_dR_before;
      R__b << eANN_var_mean_dT_same;
      R__b << eANN_var_mean_dR_same;
      R__b << eANN_var_mean_dT_after;
      R__b << eANN_var_mean_dR_after;
      R__b << eANN_var_mean_dT_2after;
      R__b << eANN_var_mean_dR_2after;
      R__b << eANN_var_min_dT_2before;
      R__b << eANN_var_min_dR_2before;
      R__b << eANN_var_min_dT_before;
      R__b << eANN_var_min_dR_before;
      R__b << eANN_var_min_dT_same;
      R__b << eANN_var_min_dR_same;
      R__b << eANN_var_min_dT_after;
      R__b << eANN_var_min_dR_after;
      R__b << eANN_var_min_dT_2after;
      R__b << eANN_var_min_dR_2after;
      R__b << eANN_var_nseg_1before;
      R__b << eANN_var_nseg_2before;
      R__b << eANN_var_nseg_3before;
      R__b << eANN_var_nseg_1after;
      R__b << eANN_var_nseg_2after;
      R__b << eANN_var_nseg_3after;
      R__b << eANN_var_nseg_same;
      R__b << eANN_Inputtype;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlg_NN(void *p) {
      return  p ? new(p) ::EdbShowAlg_NN : new ::EdbShowAlg_NN;
   }
   static void *newArray_EdbShowAlg_NN(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlg_NN[nElements] : new ::EdbShowAlg_NN[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlg_NN(void *p) {
      delete (static_cast<::EdbShowAlg_NN*>(p));
   }
   static void deleteArray_EdbShowAlg_NN(void *p) {
      delete [] (static_cast<::EdbShowAlg_NN*>(p));
   }
   static void destruct_EdbShowAlg_NN(void *p) {
      typedef ::EdbShowAlg_NN current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_NN(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_NN*)obj)->::EdbShowAlg_NN::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_NN

//______________________________________________________________________________
void EdbShowAlg_N3::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlg_N3.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbShowAlg::Streamer(R__b);
      eWeightFileString.Streamer(R__b);
      eWeightFileLayoutString.Streamer(R__b);
      R__b >> eANNTree;
      R__b >> eTMlpANN;
      R__b >> eANNTrainingsTreeFile;
      R__b >> eANN_DoTrain;
      R__b.ReadStaticArray((double*)eANN_Inputvar);
      R__b >> eANN_Inputtype;
      R__b >> eANN_OutputValue;
      R__b >> eANN_PLATE_DELTANMAX;
      R__b >> eANN_NTRAINEPOCHS;
      R__b >> eANN_NHIDDENLAYER;
      R__b >> eANN_OUTPUTTHRESHOLD;
      R__b >> eANN_EQUALIZESGBG;
      R__b >> eANN_INPUTNEURONS;
      eLayout.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlg_N3::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlg_N3::IsA(), kTRUE);
      EdbShowAlg::Streamer(R__b);
      eWeightFileString.Streamer(R__b);
      eWeightFileLayoutString.Streamer(R__b);
      R__b << eANNTree;
      R__b << eTMlpANN;
      R__b << eANNTrainingsTreeFile;
      R__b << eANN_DoTrain;
      R__b.WriteArray(eANN_Inputvar, 24);
      R__b << eANN_Inputtype;
      R__b << eANN_OutputValue;
      R__b << eANN_PLATE_DELTANMAX;
      R__b << eANN_NTRAINEPOCHS;
      R__b << eANN_NHIDDENLAYER;
      R__b << eANN_OUTPUTTHRESHOLD;
      R__b << eANN_EQUALIZESGBG;
      R__b << eANN_INPUTNEURONS;
      eLayout.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbShowAlg_N3(void *p) {
      delete (static_cast<::EdbShowAlg_N3*>(p));
   }
   static void deleteArray_EdbShowAlg_N3(void *p) {
      delete [] (static_cast<::EdbShowAlg_N3*>(p));
   }
   static void destruct_EdbShowAlg_N3(void *p) {
      typedef ::EdbShowAlg_N3 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlg_N3(TBuffer &buf, void *obj) {
      ((::EdbShowAlg_N3*)obj)->::EdbShowAlg_N3::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlg_N3

//______________________________________________________________________________
void EdbShowAlgE::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlgE.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      eShowAlgEParaName.Streamer(R__b);
      R__b >> eShowAlgEParaNr;
      R__b >> eShowAlgEPlatesN;
      R__b >> eShowAlgEPlateBinning;
      R__b >> eRecoShowerArray;
      R__b >> eRecoShowerArrayN;
      R__b >> eMLPArray;
      R__b >> eMLPArrayN;
      R__b >> eDoANNTrain;
      R__b >> eDoANNRun;
      R__b >> eOutANN;
      int R__i;
      for (R__i = 0; R__i < 70; R__i++)
         R__b >> eInANN_Hist[R__i];
      R__b >> eMLP_Simple;
      R__b >> eMLP_SimpleIsDone;
      R__b >> eMLP_SimpleTree;
      eMLP_Layout.Streamer(R__b);
      R__b >> eMLP_LayoutArray;
      R__b >> eMLP_LayoutArrayIsDone;
      R__b >> eMLP_WriteWeightFile;
      eMLP_WeightFileName.Streamer(R__b);
      for (R__i = 0; R__i < 10; R__i++)
         eMLP_WeightFileNameArray[R__i].Streamer(R__b);
      R__b >> eMLP_TrainEpochs;
      R__b >> eMLP_InputNeurons;
      R__b >> eMLP_InputNeuronsArray;
      R__b >> eMLP_InputNeuronsArrayN;
      eMLP_InputFileName.Streamer(R__b);
      R__b >> eMLP_WriteMLPInputFile;
      R__b >> eMLP_ReadMLPInputFile;
      R__b.CheckByteCount(R__s, R__c, EdbShowAlgE::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlgE::IsA(), kTRUE);
      TObject::Streamer(R__b);
      eShowAlgEParaName.Streamer(R__b);
      R__b << eShowAlgEParaNr;
      R__b << eShowAlgEPlatesN;
      R__b << eShowAlgEPlateBinning;
      R__b << eRecoShowerArray;
      R__b << eRecoShowerArrayN;
      R__b << eMLPArray;
      R__b << eMLPArrayN;
      R__b << eDoANNTrain;
      R__b << eDoANNRun;
      R__b << eOutANN;
      int R__i;
      for (R__i = 0; R__i < 70; R__i++)
         R__b << (TObject*)eInANN_Hist[R__i];
      R__b << eMLP_Simple;
      R__b << eMLP_SimpleIsDone;
      R__b << eMLP_SimpleTree;
      eMLP_Layout.Streamer(R__b);
      R__b << eMLP_LayoutArray;
      R__b << eMLP_LayoutArrayIsDone;
      R__b << eMLP_WriteWeightFile;
      eMLP_WeightFileName.Streamer(R__b);
      for (R__i = 0; R__i < 10; R__i++)
         eMLP_WeightFileNameArray[R__i].Streamer(R__b);
      R__b << eMLP_TrainEpochs;
      R__b << eMLP_InputNeurons;
      R__b << eMLP_InputNeuronsArray;
      R__b << eMLP_InputNeuronsArrayN;
      eMLP_InputFileName.Streamer(R__b);
      R__b << eMLP_WriteMLPInputFile;
      R__b << eMLP_ReadMLPInputFile;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlgE(void *p) {
      return  p ? new(p) ::EdbShowAlgE : new ::EdbShowAlgE;
   }
   static void *newArray_EdbShowAlgE(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlgE[nElements] : new ::EdbShowAlgE[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlgE(void *p) {
      delete (static_cast<::EdbShowAlgE*>(p));
   }
   static void deleteArray_EdbShowAlgE(void *p) {
      delete [] (static_cast<::EdbShowAlgE*>(p));
   }
   static void destruct_EdbShowAlgE(void *p) {
      typedef ::EdbShowAlgE current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlgE(TBuffer &buf, void *obj) {
      ((::EdbShowAlgE*)obj)->::EdbShowAlgE::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlgE

//______________________________________________________________________________
void EdbShowRec::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowRec.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eDoReconstruction;
      R__b >> eDoParametrization;
      R__b >> eDoId;
      R__b >> eDoEnergy;
      R__b >> eDoVtxAttach;
      R__b >> eAli;
      R__b >> eAliNpat;
      R__b >> eAliLoaded;
      R__b >> eInBTArray;
      R__b >> eInBTArrayN;
      R__b >> eInBTArrayLoaded;
      R__b >> eInBTArrayMaxSize;
      R__b >> eShowAlgArray;
      R__b >> eShowAlgArrayN;
      R__b.ReadStaticArray((int*)eShowAlgArraySingleN);
      R__b >> eShowAlgArrayLoaded;
      R__b >> eShowAlgArrayMaxSize;
      R__b >> eRecoShowerArray;
      R__b >> eRecoShowerArrayN;
      R__b >> eRecoShowerTreetreebranch;
      R__b >> eFirstPlate;
      R__b >> eLastPlate;
      R__b >> eMiddlePlate;
      R__b >> eNumberPlate;
      R__b >> eFirstPlate_eAliPID;
      R__b >> eLastPlate_eAliPID;
      R__b >> eMiddlePlate_eAliPID;
      R__b >> eNumberPlate_eAliPID;
      R__b >> eProposedFirstPlate;
      R__b >> eProposedLastPlate;
      R__b >> eProposedMiddlePlate;
      R__b >> eProposedNumberPlate;
      R__b >> eAliZMax;
      R__b >> eAliZMin;
      R__b >> eAliZMaxPID;
      R__b >> eAliZMinPID;
      eAliStreamType.Streamer(R__b);
      R__b >> eAliStreamTypeStep;
      R__b >> IsPlateValuesLabel;
      R__b >> eActualAlg;
      R__b.ReadStaticArray((int*)eActualAlgParameterset);
      R__b.ReadStaticArray((int*)eParaTypes);
      int R__i;
      for (R__i = 0; R__i < 8; R__i++)
         eParaNames[R__i].Streamer(R__b);
      eFilename_LnkDef.Streamer(R__b);
      eFilename_LinkedTracks.Streamer(R__b);
      eFilename_EdbPVRecObject.Streamer(R__b);
      eFilename_In_shower.Streamer(R__b);
      eFilename_In_treebranch.Streamer(R__b);
      R__b >> eReadFileShower;
      R__b >> eReadFileTreebranch;
      R__b >> eFile_In_shower;
      R__b >> eFile_In_treebranch;
      eFilename_Out_shower.Streamer(R__b);
      eFilename_Out_treebranch.Streamer(R__b);
      R__b >> eWriteFileShower;
      R__b >> eWriteFileTreebranch;
      R__b >> eFile_Out_shower;
      R__b >> eFile_Out_treebranch;
      eName_Out_shower.Streamer(R__b);
      eName_Out_treebranch.Streamer(R__b);
      R__b >> eUse_LT;
      R__b >> eUse_PVREC;
      R__b >> eUse_AliBT;
      R__b >> eUse_AliLT;
      R__b >> eUse_ROOTInBT;
      R__b >> eUse_InBTelse;
      R__b >> eUseNr;
      R__b >> eInBTTree;
      R__b >> eInBTArrayFraction;
      R__b >> eUseAliSub;
      R__b.CheckByteCount(R__s, R__c, EdbShowRec::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowRec::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eDoReconstruction;
      R__b << eDoParametrization;
      R__b << eDoId;
      R__b << eDoEnergy;
      R__b << eDoVtxAttach;
      R__b << eAli;
      R__b << eAliNpat;
      R__b << eAliLoaded;
      R__b << eInBTArray;
      R__b << eInBTArrayN;
      R__b << eInBTArrayLoaded;
      R__b << eInBTArrayMaxSize;
      R__b << eShowAlgArray;
      R__b << eShowAlgArrayN;
      R__b.WriteArray(eShowAlgArraySingleN, 10);
      R__b << eShowAlgArrayLoaded;
      R__b << eShowAlgArrayMaxSize;
      R__b << eRecoShowerArray;
      R__b << eRecoShowerArrayN;
      R__b << eRecoShowerTreetreebranch;
      R__b << eFirstPlate;
      R__b << eLastPlate;
      R__b << eMiddlePlate;
      R__b << eNumberPlate;
      R__b << eFirstPlate_eAliPID;
      R__b << eLastPlate_eAliPID;
      R__b << eMiddlePlate_eAliPID;
      R__b << eNumberPlate_eAliPID;
      R__b << eProposedFirstPlate;
      R__b << eProposedLastPlate;
      R__b << eProposedMiddlePlate;
      R__b << eProposedNumberPlate;
      R__b << eAliZMax;
      R__b << eAliZMin;
      R__b << eAliZMaxPID;
      R__b << eAliZMinPID;
      eAliStreamType.Streamer(R__b);
      R__b << eAliStreamTypeStep;
      R__b << IsPlateValuesLabel;
      R__b << eActualAlg;
      R__b.WriteArray(eActualAlgParameterset, 10);
      R__b.WriteArray(eParaTypes, 8);
      int R__i;
      for (R__i = 0; R__i < 8; R__i++)
         eParaNames[R__i].Streamer(R__b);
      eFilename_LnkDef.Streamer(R__b);
      eFilename_LinkedTracks.Streamer(R__b);
      eFilename_EdbPVRecObject.Streamer(R__b);
      eFilename_In_shower.Streamer(R__b);
      eFilename_In_treebranch.Streamer(R__b);
      R__b << eReadFileShower;
      R__b << eReadFileTreebranch;
      R__b << eFile_In_shower;
      R__b << eFile_In_treebranch;
      eFilename_Out_shower.Streamer(R__b);
      eFilename_Out_treebranch.Streamer(R__b);
      R__b << eWriteFileShower;
      R__b << eWriteFileTreebranch;
      R__b << eFile_Out_shower;
      R__b << eFile_Out_treebranch;
      eName_Out_shower.Streamer(R__b);
      eName_Out_treebranch.Streamer(R__b);
      R__b << eUse_LT;
      R__b << eUse_PVREC;
      R__b << eUse_AliBT;
      R__b << eUse_AliLT;
      R__b << eUse_ROOTInBT;
      R__b << eUse_InBTelse;
      R__b << eUseNr;
      R__b << eInBTTree;
      R__b << eInBTArrayFraction;
      R__b << eUseAliSub;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowRec(void *p) {
      return  p ? new(p) ::EdbShowRec : new ::EdbShowRec;
   }
   static void *newArray_EdbShowRec(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowRec[nElements] : new ::EdbShowRec[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowRec(void *p) {
      delete (static_cast<::EdbShowRec*>(p));
   }
   static void deleteArray_EdbShowRec(void *p) {
      delete [] (static_cast<::EdbShowRec*>(p));
   }
   static void destruct_EdbShowRec(void *p) {
      typedef ::EdbShowRec current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowRec(TBuffer &buf, void *obj) {
      ((::EdbShowRec*)obj)->::EdbShowRec::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowRec

//______________________________________________________________________________
void EdbShowAlgE_Simple::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlgE_Simple.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eRecoShowerArray;
      R__b >> eRecoShowerArrayN;
      R__b >> eParaName;
      R__b >> eCalibrationOffset;
      R__b >> eCalibrationSlope;
      R__b >> ePlateNumberType;
      R__b >> ePlateNumber;
      eWeightFileString.Streamer(R__b);
      R__b.ReadStaticArray((int*)eSpecificationType);
      int R__i;
      for (R__i = 0; R__i < 6; R__i++)
         eSpecificationTypeString[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 36; R__i++)
         eSpecificationTypeStringArray[0][R__i].Streamer(R__b);
      R__b >> eSpecificationIsChanged;
      R__b.ReadStaticArray((int*)ePlateBinning);
      R__b >> ANN_MLP;
      for (R__i = 0; R__i < 15; R__i++)
         R__b >> ANN_MLP_ARRAY[R__i];
      R__b >> ANNTree;
      R__b.ReadStaticArray((double*)inANN);
      R__b >> outANN;
      R__b.ReadStaticArray((int*)ANN_nPlates_ARRAY);
      R__b.ReadStaticArray((int*)ANN_n_InputNeurons_ARRAY);
      R__b >> ANN_n_InputNeurons;
      ANN_Layout.Streamer(R__b);
      for (R__i = 0; R__i < 15; R__i++)
         ANN_WeightFile_ARRAY[R__i].Streamer(R__b);
      R__b.ReadStaticArray((float*)eANN_MLP_CORR_0);
      R__b.ReadStaticArray((float*)eANN_MLP_CORR_1);
      R__b >> eParaShowerAxisAngle;
      R__b >> eParanseg;
      R__b >> eParaBT_deltaR_mean;
      R__b >> eParaBT_deltaR_rms;
      R__b >> eParaBT_deltaT_mean;
      R__b >> eParaBT_deltaT_rms;
      R__b.ReadStaticArray((int*)eParalongprofile);
      R__b >> eHisto_nbtk_av;
      R__b >> eHisto_longprofile_av;
      R__b >> eHisto_transprofile_av;
      R__b >> eHisto_deltaR_mean;
      R__b >> eHisto_deltaT_mean;
      R__b >> eHisto_deltaR_rms;
      R__b >> eHisto_deltaT_rms;
      R__b >> eHisto_nbtk;
      R__b >> eHisto_longprofile;
      R__b >> eHisto_transprofile;
      R__b >> eHisto_deltaR;
      R__b >> eHisto_deltaT;
      R__b >> EffFunc_all;
      R__b >> EffFunc_edefault;
      R__b >> EffFunc_elletroni;
      R__b >> EffFunc_neuchmicro;
      R__b >> EffFunc_MiddleFix;
      R__b >> EffFunc_LowEff;
      R__b >> EffFunc_UserEfficiency;
      R__b >> eEfficiencyParametrisation;
      R__b >> eEnergyArray;
      R__b >> eEnergyArrayUnCorrected;
      R__b >> eEnergyArraySigmaCorrected;
      R__b >> eEnergy;
      R__b >> eEnergyCorr;
      R__b >> eEnergyUnCorr;
      R__b >> eEnergySigmaCorr;
      R__b >> eEnergyArrayCount;
      R__b >> eSplineArray_Energy_Stat_Electron;
      R__b >> eSplineArray_Energy_Stat_Gamma;
      R__b >> eSplineArray_Energy_Sys_Electron;
      R__b >> eSplineArray_Energy_Sys_Gamma;
      R__b >> eSplineCurrent;
      R__b.CheckByteCount(R__s, R__c, EdbShowAlgE_Simple::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlgE_Simple::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eRecoShowerArray;
      R__b << eRecoShowerArrayN;
      R__b << eParaName;
      R__b << eCalibrationOffset;
      R__b << eCalibrationSlope;
      R__b << ePlateNumberType;
      R__b << ePlateNumber;
      eWeightFileString.Streamer(R__b);
      R__b.WriteArray(eSpecificationType, 6);
      int R__i;
      for (R__i = 0; R__i < 6; R__i++)
         eSpecificationTypeString[R__i].Streamer(R__b);
      for (R__i = 0; R__i < 36; R__i++)
         eSpecificationTypeStringArray[0][R__i].Streamer(R__b);
      R__b << eSpecificationIsChanged;
      R__b.WriteArray(ePlateBinning, 15);
      R__b << ANN_MLP;
      for (R__i = 0; R__i < 15; R__i++)
         R__b << ANN_MLP_ARRAY[R__i];
      R__b << ANNTree;
      R__b.WriteArray(inANN, 70);
      R__b << outANN;
      R__b.WriteArray(ANN_nPlates_ARRAY, 15);
      R__b.WriteArray(ANN_n_InputNeurons_ARRAY, 15);
      R__b << ANN_n_InputNeurons;
      ANN_Layout.Streamer(R__b);
      for (R__i = 0; R__i < 15; R__i++)
         ANN_WeightFile_ARRAY[R__i].Streamer(R__b);
      R__b.WriteArray(eANN_MLP_CORR_0, 15);
      R__b.WriteArray(eANN_MLP_CORR_1, 15);
      R__b << eParaShowerAxisAngle;
      R__b << eParanseg;
      R__b << eParaBT_deltaR_mean;
      R__b << eParaBT_deltaR_rms;
      R__b << eParaBT_deltaT_mean;
      R__b << eParaBT_deltaT_rms;
      R__b.WriteArray(eParalongprofile, 57);
      R__b << (TObject*)eHisto_nbtk_av;
      R__b << (TObject*)eHisto_longprofile_av;
      R__b << (TObject*)eHisto_transprofile_av;
      R__b << (TObject*)eHisto_deltaR_mean;
      R__b << (TObject*)eHisto_deltaT_mean;
      R__b << (TObject*)eHisto_deltaR_rms;
      R__b << (TObject*)eHisto_deltaT_rms;
      R__b << (TObject*)eHisto_nbtk;
      R__b << (TObject*)eHisto_longprofile;
      R__b << (TObject*)eHisto_transprofile;
      R__b << (TObject*)eHisto_deltaR;
      R__b << (TObject*)eHisto_deltaT;
      R__b << EffFunc_all;
      R__b << EffFunc_edefault;
      R__b << EffFunc_elletroni;
      R__b << EffFunc_neuchmicro;
      R__b << EffFunc_MiddleFix;
      R__b << EffFunc_LowEff;
      R__b << EffFunc_UserEfficiency;
      R__b << eEfficiencyParametrisation;
      R__b << eEnergyArray;
      R__b << eEnergyArrayUnCorrected;
      R__b << eEnergyArraySigmaCorrected;
      R__b << eEnergy;
      R__b << eEnergyCorr;
      R__b << eEnergyUnCorr;
      R__b << eEnergySigmaCorr;
      R__b << eEnergyArrayCount;
      R__b << eSplineArray_Energy_Stat_Electron;
      R__b << eSplineArray_Energy_Stat_Gamma;
      R__b << eSplineArray_Energy_Sys_Electron;
      R__b << eSplineArray_Energy_Sys_Gamma;
      R__b << eSplineCurrent;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlgE_Simple(void *p) {
      return  p ? new(p) ::EdbShowAlgE_Simple : new ::EdbShowAlgE_Simple;
   }
   static void *newArray_EdbShowAlgE_Simple(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlgE_Simple[nElements] : new ::EdbShowAlgE_Simple[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlgE_Simple(void *p) {
      delete (static_cast<::EdbShowAlgE_Simple*>(p));
   }
   static void deleteArray_EdbShowAlgE_Simple(void *p) {
      delete [] (static_cast<::EdbShowAlgE_Simple*>(p));
   }
   static void destruct_EdbShowAlgE_Simple(void *p) {
      typedef ::EdbShowAlgE_Simple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlgE_Simple(TBuffer &buf, void *obj) {
      ((::EdbShowAlgE_Simple*)obj)->::EdbShowAlgE_Simple::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlgE_Simple

//______________________________________________________________________________
void EdbShowAlgClean::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlgClean.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eSource;
      R__b >> eSourceClassType;
      R__b >> eDirt;
      R__b >> eDirtClassType;
      R__b >> eTarget;
      R__b >> eTargetClassType;
      R__b >> eCleaningType;
      R__b.ReadStaticArray((bool*)eIsSet);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlgClean::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlgClean::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eSource;
      R__b << eSourceClassType;
      R__b << eDirt;
      R__b << eDirtClassType;
      R__b << eTarget;
      R__b << eTargetClassType;
      R__b << eCleaningType;
      R__b.WriteArray(eIsSet, 3);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlgClean(void *p) {
      return  p ? new(p) ::EdbShowAlgClean : new ::EdbShowAlgClean;
   }
   static void *newArray_EdbShowAlgClean(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlgClean[nElements] : new ::EdbShowAlgClean[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlgClean(void *p) {
      delete (static_cast<::EdbShowAlgClean*>(p));
   }
   static void deleteArray_EdbShowAlgClean(void *p) {
      delete [] (static_cast<::EdbShowAlgClean*>(p));
   }
   static void destruct_EdbShowAlgClean(void *p) {
      typedef ::EdbShowAlgClean current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlgClean(TBuffer &buf, void *obj) {
      ((::EdbShowAlgClean*)obj)->::EdbShowAlgClean::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlgClean

//______________________________________________________________________________
void EdbShowAlgID_E_G_Simple::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowAlgID_E_G_Simple.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eRecoShowerArray;
      R__b >> eRecoShowerArrayN;
      R__b >> eParaName;
      R__b >> eCalibrationOffset;
      R__b >> eCalibrationSlope;
      eWeightFileString.Streamer(R__b);
      R__b.CheckByteCount(R__s, R__c, EdbShowAlgID_E_G_Simple::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowAlgID_E_G_Simple::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eRecoShowerArray;
      R__b << eRecoShowerArrayN;
      R__b << eParaName;
      R__b << eCalibrationOffset;
      R__b << eCalibrationSlope;
      eWeightFileString.Streamer(R__b);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowAlgID_E_G_Simple(void *p) {
      return  p ? new(p) ::EdbShowAlgID_E_G_Simple : new ::EdbShowAlgID_E_G_Simple;
   }
   static void *newArray_EdbShowAlgID_E_G_Simple(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowAlgID_E_G_Simple[nElements] : new ::EdbShowAlgID_E_G_Simple[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowAlgID_E_G_Simple(void *p) {
      delete (static_cast<::EdbShowAlgID_E_G_Simple*>(p));
   }
   static void deleteArray_EdbShowAlgID_E_G_Simple(void *p) {
      delete [] (static_cast<::EdbShowAlgID_E_G_Simple*>(p));
   }
   static void destruct_EdbShowAlgID_E_G_Simple(void *p) {
      typedef ::EdbShowAlgID_E_G_Simple current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowAlgID_E_G_Simple(TBuffer &buf, void *obj) {
      ((::EdbShowAlgID_E_G_Simple*)obj)->::EdbShowAlgID_E_G_Simple::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowAlgID_E_G_Simple

//______________________________________________________________________________
void EdbShowPVRQuality::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbShowPVRQuality.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> eAli_orig;
      R__b >> eAli_modified;
      R__b >> eNeedModified;
      R__b >> eIsSource;
      R__b >> eIsTarget;
      R__b >> eHistGeometry;
      R__b >> eAli_maxNpatterns;
      R__b >> eCutMethod;
      R__b >> eBTDensityLevel;
      R__b.ReadStaticArray((bool*)eCutMethodIsDone);
      R__b >> eBTDensityLevelCalcMethodMC;
      R__b >> eBTDensityLevelCalcMethodMCConfirmationNumber;
      R__b.ReadStaticArray((float*)ePatternBTDensity_orig);
      R__b.ReadStaticArray((float*)ePatternBTDensity_modified);
      R__b >> eHistChi2W;
      R__b >> eHistYX;
      R__b >> NbinsX;
      R__b >> NbinsY;
      R__b >> minX;
      R__b >> maxX;
      R__b >> minY;
      R__b >> maxY;
      R__b >> eProfileBTdens_vs_PID_source;
      R__b >> eProfileBTdens_vs_PID_source_meanX;
      R__b >> eProfileBTdens_vs_PID_source_meanY;
      R__b >> eProfileBTdens_vs_PID_source_rmsX;
      R__b >> eProfileBTdens_vs_PID_source_rmsY;
      R__b >> eProfileBTdens_vs_PID_target;
      R__b >> eProfileBTdens_vs_PID_target_meanX;
      R__b >> eProfileBTdens_vs_PID_target_meanY;
      R__b >> eProfileBTdens_vs_PID_target_rmsX;
      R__b >> eProfileBTdens_vs_PID_target_rmsY;
      R__b.ReadStaticArray((float*)eCutp0);
      R__b.ReadStaticArray((float*)eCutp1);
      R__b.ReadStaticArray((float*)eCutDistChi2);
      R__b.ReadStaticArray((float*)eCutDistW);
      R__b.ReadStaticArray((float*)eAgreementChi2WDistCut);
      R__b >> eAgreementChi2CutMeanChi2;
      R__b >> eAgreementChi2CutRMSChi2;
      R__b >> eAgreementChi2CutMeanW;
      R__b >> eAgreementChi2CutRMSW;
      R__b.CheckByteCount(R__s, R__c, EdbShowPVRQuality::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbShowPVRQuality::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << eAli_orig;
      R__b << eAli_modified;
      R__b << eNeedModified;
      R__b << eIsSource;
      R__b << eIsTarget;
      R__b << eHistGeometry;
      R__b << eAli_maxNpatterns;
      R__b << eCutMethod;
      R__b << eBTDensityLevel;
      R__b.WriteArray(eCutMethodIsDone, 2);
      R__b << eBTDensityLevelCalcMethodMC;
      R__b << eBTDensityLevelCalcMethodMCConfirmationNumber;
      R__b.WriteArray(ePatternBTDensity_orig, 114);
      R__b.WriteArray(ePatternBTDensity_modified, 114);
      R__b << (TObject*)eHistChi2W;
      R__b << (TObject*)eHistYX;
      R__b << NbinsX;
      R__b << NbinsY;
      R__b << minX;
      R__b << maxX;
      R__b << minY;
      R__b << maxY;
      R__b << (TObject*)eProfileBTdens_vs_PID_source;
      R__b << eProfileBTdens_vs_PID_source_meanX;
      R__b << eProfileBTdens_vs_PID_source_meanY;
      R__b << eProfileBTdens_vs_PID_source_rmsX;
      R__b << eProfileBTdens_vs_PID_source_rmsY;
      R__b << (TObject*)eProfileBTdens_vs_PID_target;
      R__b << eProfileBTdens_vs_PID_target_meanX;
      R__b << eProfileBTdens_vs_PID_target_meanY;
      R__b << eProfileBTdens_vs_PID_target_rmsX;
      R__b << eProfileBTdens_vs_PID_target_rmsY;
      R__b.WriteArray(eCutp0, 114);
      R__b.WriteArray(eCutp1, 114);
      R__b.WriteArray(eCutDistChi2, 114);
      R__b.WriteArray(eCutDistW, 114);
      R__b.WriteArray(eAgreementChi2WDistCut, 114);
      R__b << eAgreementChi2CutMeanChi2;
      R__b << eAgreementChi2CutRMSChi2;
      R__b << eAgreementChi2CutMeanW;
      R__b << eAgreementChi2CutRMSW;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbShowPVRQuality(void *p) {
      return  p ? new(p) ::EdbShowPVRQuality : new ::EdbShowPVRQuality;
   }
   static void *newArray_EdbShowPVRQuality(Long_t nElements, void *p) {
      return p ? new(p) ::EdbShowPVRQuality[nElements] : new ::EdbShowPVRQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbShowPVRQuality(void *p) {
      delete (static_cast<::EdbShowPVRQuality*>(p));
   }
   static void deleteArray_EdbShowPVRQuality(void *p) {
      delete [] (static_cast<::EdbShowPVRQuality*>(p));
   }
   static void destruct_EdbShowPVRQuality(void *p) {
      typedef ::EdbShowPVRQuality current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbShowPVRQuality(TBuffer &buf, void *obj) {
      ((::EdbShowPVRQuality*)obj)->::EdbShowPVRQuality::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbShowPVRQuality

namespace {
  void TriggerDictionaryInitialization_ShowRecCint_Impl() {
    static const char* headers[] = {
"EdbShowRec.h",
"EdbShowerP.h",
"EdbShowAlg.h",
"EdbShowAlgE.h",
"EdbShowAlg_NN.h",
"EdbShowAlgE_Simple.h",
"EdbShowAlg_GS.h",
"EdbShowAlgClean.h",
"EdbShowAlgID_E_G_Simple.h",
"EdbShowPVRQuality.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libShowRec/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "ShowRecCint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbShowerP.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowerP;
class __attribute__((annotate("$clingAutoload$EdbShowAlg.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg;
class __attribute__((annotate("$clingAutoload$EdbShowAlg.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_SA;
class __attribute__((annotate("$clingAutoload$EdbShowAlg.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_CA;
class __attribute__((annotate("$clingAutoload$EdbShowAlg.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_OI;
class __attribute__((annotate("$clingAutoload$EdbShowAlg.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_RC;
class __attribute__((annotate("$clingAutoload$EdbShowAlg.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_BW;
class __attribute__((annotate("$clingAutoload$EdbShowAlg_GS.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_GS;
class __attribute__((annotate("$clingAutoload$EdbShowAlg_NN.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_NN;
class __attribute__((annotate("$clingAutoload$EdbShowAlg_NN.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlg_N3;
class __attribute__((annotate("$clingAutoload$EdbShowAlgE.h")))  __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowAlgE;
class __attribute__((annotate("$clingAutoload$EdbShowRec.h")))  EdbShowRec;
class __attribute__((annotate("$clingAutoload$EdbShowAlgE_Simple.h")))  EdbShowAlgE_Simple;
class __attribute__((annotate("$clingAutoload$EdbShowAlgClean.h")))  EdbShowAlgClean;
class __attribute__((annotate("$clingAutoload$EdbShowAlgID_E_G_Simple.h")))  EdbShowAlgID_E_G_Simple;
class __attribute__((annotate("$clingAutoload$EdbShowPVRQuality.h")))  EdbShowPVRQuality;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "ShowRecCint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbShowRec.h"
#include "EdbShowerP.h"
#include "EdbShowAlg.h"
#include "EdbShowAlgE.h"
#include "EdbShowAlg_NN.h"
#include "EdbShowAlgE_Simple.h"
#include "EdbShowAlg_GS.h"
#include "EdbShowAlgClean.h"
#include "EdbShowAlgID_E_G_Simple.h"
#include "EdbShowPVRQuality.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbShowAlg", payloadCode, "@",
"EdbShowAlgClean", payloadCode, "@",
"EdbShowAlgE", payloadCode, "@",
"EdbShowAlgE_Simple", payloadCode, "@",
"EdbShowAlgID_E_G_Simple", payloadCode, "@",
"EdbShowAlg_BW", payloadCode, "@",
"EdbShowAlg_CA", payloadCode, "@",
"EdbShowAlg_GS", payloadCode, "@",
"EdbShowAlg_N3", payloadCode, "@",
"EdbShowAlg_NN", payloadCode, "@",
"EdbShowAlg_OI", payloadCode, "@",
"EdbShowAlg_RC", payloadCode, "@",
"EdbShowAlg_SA", payloadCode, "@",
"EdbShowPVRQuality", payloadCode, "@",
"EdbShowRec", payloadCode, "@",
"EdbShowerP", payloadCode, "@",
"EdbShowerP::MCInfo_Event", payloadCode, "@",
"EdbShowerP::MCInfo_PGun", payloadCode, "@",
"EdbShowerP::Para_AS", payloadCode, "@",
"EdbShowerP::Para_ExtraInfo", payloadCode, "@",
"EdbShowerP::Para_FJ", payloadCode, "@",
"EdbShowerP::Para_JC", payloadCode, "@",
"EdbShowerP::Para_LT", payloadCode, "@",
"EdbShowerP::Para_PP", payloadCode, "@",
"EdbShowerP::Para_SE", payloadCode, "@",
"EdbShowerP::Para_XX", payloadCode, "@",
"EdbShowerP::Para_YC", payloadCode, "@",
"EdbShowerP::Para_YY", payloadCode, "@",
"EdbShowerP::Reco_E", payloadCode, "@",
"EdbShowerP::Reco_ID", payloadCode, "@",
"EdbShowerP::Reco_Vtx", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("ShowRecCint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_ShowRecCint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_ShowRecCint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_ShowRecCint() {
  TriggerDictionaryInitialization_ShowRecCint_Impl();
}
