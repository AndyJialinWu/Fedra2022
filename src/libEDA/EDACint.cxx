// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME EDACint
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
#include "EdbEDA.h"
#include "EdbEDAUtil.h"
#include "EdbEDATrackSet.h"
#include "EdbEDASets.h"
#include "EdbEDAMainTab.h"
#include "EdbEDATabs.h"
#include "EdbEDAPlotTab.h"
#include "EdbEDADecaySearch.h"
#include "EdbEDAShowerTab.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace EdbEDAUtil {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *EdbEDAUtil_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("EdbEDAUtil", 0 /*version*/, "EdbEDAUtil.h", 78,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &EdbEDAUtil_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *EdbEDAUtil_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void delete_EdbIDDialog(void *p);
   static void deleteArray_EdbIDDialog(void *p);
   static void destruct_EdbIDDialog(void *p);
   static void streamer_EdbIDDialog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbIDDialog*)
   {
      ::EdbIDDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbIDDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbIDDialog", ::EdbIDDialog::Class_Version(), "EdbEDAUtil.h", 161,
                  typeid(::EdbIDDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbIDDialog::Dictionary, isa_proxy, 16,
                  sizeof(::EdbIDDialog) );
      instance.SetDelete(&delete_EdbIDDialog);
      instance.SetDeleteArray(&deleteArray_EdbIDDialog);
      instance.SetDestructor(&destruct_EdbIDDialog);
      instance.SetStreamerFunc(&streamer_EdbIDDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbIDDialog*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbIDDialog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbIDDialog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAArea(void *p = nullptr);
   static void *newArray_EdbEDAArea(Long_t size, void *p);
   static void delete_EdbEDAArea(void *p);
   static void deleteArray_EdbEDAArea(void *p);
   static void destruct_EdbEDAArea(void *p);
   static void streamer_EdbEDAArea(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAArea*)
   {
      ::EdbEDAArea *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAArea >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAArea", ::EdbEDAArea::Class_Version(), "EdbEDASets.h", 7,
                  typeid(::EdbEDAArea), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAArea::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAArea) );
      instance.SetNew(&new_EdbEDAArea);
      instance.SetNewArray(&newArray_EdbEDAArea);
      instance.SetDelete(&delete_EdbEDAArea);
      instance.SetDeleteArray(&deleteArray_EdbEDAArea);
      instance.SetDestructor(&destruct_EdbEDAArea);
      instance.SetStreamerFunc(&streamer_EdbEDAArea);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAArea*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAArea*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAArea*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAAreaSet(void *p = nullptr);
   static void *newArray_EdbEDAAreaSet(Long_t size, void *p);
   static void delete_EdbEDAAreaSet(void *p);
   static void deleteArray_EdbEDAAreaSet(void *p);
   static void destruct_EdbEDAAreaSet(void *p);
   static void streamer_EdbEDAAreaSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAAreaSet*)
   {
      ::EdbEDAAreaSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAAreaSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAAreaSet", ::EdbEDAAreaSet::Class_Version(), "EdbEDASets.h", 55,
                  typeid(::EdbEDAAreaSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAAreaSet::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAAreaSet) );
      instance.SetNew(&new_EdbEDAAreaSet);
      instance.SetNewArray(&newArray_EdbEDAAreaSet);
      instance.SetDelete(&delete_EdbEDAAreaSet);
      instance.SetDeleteArray(&deleteArray_EdbEDAAreaSet);
      instance.SetDestructor(&destruct_EdbEDAAreaSet);
      instance.SetStreamerFunc(&streamer_EdbEDAAreaSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAAreaSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAAreaSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAAreaSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAVertexSet(void *p = nullptr);
   static void *newArray_EdbEDAVertexSet(Long_t size, void *p);
   static void delete_EdbEDAVertexSet(void *p);
   static void deleteArray_EdbEDAVertexSet(void *p);
   static void destruct_EdbEDAVertexSet(void *p);
   static void streamer_EdbEDAVertexSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAVertexSet*)
   {
      ::EdbEDAVertexSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAVertexSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAVertexSet", ::EdbEDAVertexSet::Class_Version(), "EdbEDASets.h", 143,
                  typeid(::EdbEDAVertexSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAVertexSet::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAVertexSet) );
      instance.SetNew(&new_EdbEDAVertexSet);
      instance.SetNewArray(&newArray_EdbEDAVertexSet);
      instance.SetDelete(&delete_EdbEDAVertexSet);
      instance.SetDeleteArray(&deleteArray_EdbEDAVertexSet);
      instance.SetDestructor(&destruct_EdbEDAVertexSet);
      instance.SetStreamerFunc(&streamer_EdbEDAVertexSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAVertexSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAVertexSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAVertexSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAExtentionSet(void *p = nullptr);
   static void *newArray_EdbEDAExtentionSet(Long_t size, void *p);
   static void delete_EdbEDAExtentionSet(void *p);
   static void deleteArray_EdbEDAExtentionSet(void *p);
   static void destruct_EdbEDAExtentionSet(void *p);
   static void streamer_EdbEDAExtentionSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAExtentionSet*)
   {
      ::EdbEDAExtentionSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAExtentionSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAExtentionSet", ::EdbEDAExtentionSet::Class_Version(), "EdbEDASets.h", 230,
                  typeid(::EdbEDAExtentionSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAExtentionSet::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAExtentionSet) );
      instance.SetNew(&new_EdbEDAExtentionSet);
      instance.SetNewArray(&newArray_EdbEDAExtentionSet);
      instance.SetDelete(&delete_EdbEDAExtentionSet);
      instance.SetDeleteArray(&deleteArray_EdbEDAExtentionSet);
      instance.SetDestructor(&destruct_EdbEDAExtentionSet);
      instance.SetStreamerFunc(&streamer_EdbEDAExtentionSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAExtentionSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAExtentionSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAExtentionSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDATrackComment(void *p);
   static void deleteArray_EdbEDATrackComment(void *p);
   static void destruct_EdbEDATrackComment(void *p);
   static void streamer_EdbEDATrackComment(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDATrackComment*)
   {
      ::EdbEDATrackComment *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDATrackComment >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDATrackComment", ::EdbEDATrackComment::Class_Version(), "EdbEDATrackSet.h", 9,
                  typeid(::EdbEDATrackComment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDATrackComment::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDATrackComment) );
      instance.SetDelete(&delete_EdbEDATrackComment);
      instance.SetDeleteArray(&deleteArray_EdbEDATrackComment);
      instance.SetDestructor(&destruct_EdbEDATrackComment);
      instance.SetStreamerFunc(&streamer_EdbEDATrackComment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDATrackComment*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDATrackComment*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackComment*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDATrackSelection(void *p = nullptr);
   static void *newArray_EdbEDATrackSelection(Long_t size, void *p);
   static void delete_EdbEDATrackSelection(void *p);
   static void deleteArray_EdbEDATrackSelection(void *p);
   static void destruct_EdbEDATrackSelection(void *p);
   static void streamer_EdbEDATrackSelection(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDATrackSelection*)
   {
      ::EdbEDATrackSelection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDATrackSelection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDATrackSelection", ::EdbEDATrackSelection::Class_Version(), "EdbEDATrackSet.h", 37,
                  typeid(::EdbEDATrackSelection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDATrackSelection::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDATrackSelection) );
      instance.SetNew(&new_EdbEDATrackSelection);
      instance.SetNewArray(&newArray_EdbEDATrackSelection);
      instance.SetDelete(&delete_EdbEDATrackSelection);
      instance.SetDeleteArray(&deleteArray_EdbEDATrackSelection);
      instance.SetDestructor(&destruct_EdbEDATrackSelection);
      instance.SetStreamerFunc(&streamer_EdbEDATrackSelection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDATrackSelection*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDATrackSelection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackSelection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDATrackSet(void *p);
   static void deleteArray_EdbEDATrackSet(void *p);
   static void destruct_EdbEDATrackSet(void *p);
   static void streamer_EdbEDATrackSet(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDATrackSet*)
   {
      ::EdbEDATrackSet *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDATrackSet >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDATrackSet", ::EdbEDATrackSet::Class_Version(), "EdbEDATrackSet.h", 178,
                  typeid(::EdbEDATrackSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDATrackSet::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDATrackSet) );
      instance.SetDelete(&delete_EdbEDATrackSet);
      instance.SetDeleteArray(&deleteArray_EdbEDATrackSet);
      instance.SetDestructor(&destruct_EdbEDATrackSet);
      instance.SetStreamerFunc(&streamer_EdbEDATrackSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDATrackSet*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDATrackSet*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackSet*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDATrackSetTab_Dictionary();
   static void EdbEDATrackSetTab_TClassManip(TClass*);
   static void *new_EdbEDATrackSetTab(void *p = nullptr);
   static void *newArray_EdbEDATrackSetTab(Long_t size, void *p);
   static void delete_EdbEDATrackSetTab(void *p);
   static void deleteArray_EdbEDATrackSetTab(void *p);
   static void destruct_EdbEDATrackSetTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDATrackSetTab*)
   {
      ::EdbEDATrackSetTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDATrackSetTab));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDATrackSetTab", "EdbEDATrackSet.h", 608,
                  typeid(::EdbEDATrackSetTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDATrackSetTab_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDATrackSetTab) );
      instance.SetNew(&new_EdbEDATrackSetTab);
      instance.SetNewArray(&newArray_EdbEDATrackSetTab);
      instance.SetDelete(&delete_EdbEDATrackSetTab);
      instance.SetDeleteArray(&deleteArray_EdbEDATrackSetTab);
      instance.SetDestructor(&destruct_EdbEDATrackSetTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDATrackSetTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDATrackSetTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackSetTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDATrackSetTab_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackSetTab*>(nullptr))->GetClass();
      EdbEDATrackSetTab_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDATrackSetTab_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAMainTab(void *p = nullptr);
   static void *newArray_EdbEDAMainTab(Long_t size, void *p);
   static void delete_EdbEDAMainTab(void *p);
   static void deleteArray_EdbEDAMainTab(void *p);
   static void destruct_EdbEDAMainTab(void *p);
   static void streamer_EdbEDAMainTab(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAMainTab*)
   {
      ::EdbEDAMainTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAMainTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAMainTab", ::EdbEDAMainTab::Class_Version(), "EdbEDAMainTab.h", 9,
                  typeid(::EdbEDAMainTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAMainTab::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAMainTab) );
      instance.SetNew(&new_EdbEDAMainTab);
      instance.SetNewArray(&newArray_EdbEDAMainTab);
      instance.SetDelete(&delete_EdbEDAMainTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAMainTab);
      instance.SetDestructor(&destruct_EdbEDAMainTab);
      instance.SetStreamerFunc(&streamer_EdbEDAMainTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAMainTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAMainTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAMainTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDAListTab_Dictionary();
   static void EdbEDAListTab_TClassManip(TClass*);
   static void *new_EdbEDAListTab(void *p = nullptr);
   static void *newArray_EdbEDAListTab(Long_t size, void *p);
   static void delete_EdbEDAListTab(void *p);
   static void deleteArray_EdbEDAListTab(void *p);
   static void destruct_EdbEDAListTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAListTab*)
   {
      ::EdbEDAListTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDAListTab));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAListTab", "EdbEDATabs.h", 11,
                  typeid(::EdbEDAListTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDAListTab_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDAListTab) );
      instance.SetNew(&new_EdbEDAListTab);
      instance.SetNewArray(&newArray_EdbEDAListTab);
      instance.SetDelete(&delete_EdbEDAListTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAListTab);
      instance.SetDestructor(&destruct_EdbEDAListTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAListTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAListTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAListTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDAListTab_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDAListTab*>(nullptr))->GetClass();
      EdbEDAListTab_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDAListTab_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAVertexTab(void *p = nullptr);
   static void *newArray_EdbEDAVertexTab(Long_t size, void *p);
   static void delete_EdbEDAVertexTab(void *p);
   static void deleteArray_EdbEDAVertexTab(void *p);
   static void destruct_EdbEDAVertexTab(void *p);
   static void streamer_EdbEDAVertexTab(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAVertexTab*)
   {
      ::EdbEDAVertexTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAVertexTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAVertexTab", ::EdbEDAVertexTab::Class_Version(), "EdbEDATabs.h", 32,
                  typeid(::EdbEDAVertexTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAVertexTab::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAVertexTab) );
      instance.SetNew(&new_EdbEDAVertexTab);
      instance.SetNewArray(&newArray_EdbEDAVertexTab);
      instance.SetDelete(&delete_EdbEDAVertexTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAVertexTab);
      instance.SetDestructor(&destruct_EdbEDAVertexTab);
      instance.SetStreamerFunc(&streamer_EdbEDAVertexTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAVertexTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAVertexTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAVertexTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDAMCTab_Dictionary();
   static void EdbEDAMCTab_TClassManip(TClass*);
   static void *new_EdbEDAMCTab(void *p = nullptr);
   static void *newArray_EdbEDAMCTab(Long_t size, void *p);
   static void delete_EdbEDAMCTab(void *p);
   static void deleteArray_EdbEDAMCTab(void *p);
   static void destruct_EdbEDAMCTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAMCTab*)
   {
      ::EdbEDAMCTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDAMCTab));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAMCTab", "EdbEDATabs.h", 86,
                  typeid(::EdbEDAMCTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDAMCTab_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDAMCTab) );
      instance.SetNew(&new_EdbEDAMCTab);
      instance.SetNewArray(&newArray_EdbEDAMCTab);
      instance.SetDelete(&delete_EdbEDAMCTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAMCTab);
      instance.SetDestructor(&destruct_EdbEDAMCTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAMCTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAMCTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAMCTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDAMCTab_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDAMCTab*>(nullptr))->GetClass();
      EdbEDAMCTab_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDAMCTab_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDAPredTab_Dictionary();
   static void EdbEDAPredTab_TClassManip(TClass*);
   static void *new_EdbEDAPredTab(void *p = nullptr);
   static void *newArray_EdbEDAPredTab(Long_t size, void *p);
   static void delete_EdbEDAPredTab(void *p);
   static void deleteArray_EdbEDAPredTab(void *p);
   static void destruct_EdbEDAPredTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAPredTab*)
   {
      ::EdbEDAPredTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDAPredTab));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAPredTab", "EdbEDATabs.h", 109,
                  typeid(::EdbEDAPredTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDAPredTab_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDAPredTab) );
      instance.SetNew(&new_EdbEDAPredTab);
      instance.SetNewArray(&newArray_EdbEDAPredTab);
      instance.SetDelete(&delete_EdbEDAPredTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAPredTab);
      instance.SetDestructor(&destruct_EdbEDAPredTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAPredTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAPredTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAPredTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDAPredTab_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDAPredTab*>(nullptr))->GetClass();
      EdbEDAPredTab_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDAPredTab_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDAOperationTab_Dictionary();
   static void EdbEDAOperationTab_TClassManip(TClass*);
   static void *new_EdbEDAOperationTab(void *p = nullptr);
   static void *newArray_EdbEDAOperationTab(Long_t size, void *p);
   static void delete_EdbEDAOperationTab(void *p);
   static void deleteArray_EdbEDAOperationTab(void *p);
   static void destruct_EdbEDAOperationTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAOperationTab*)
   {
      ::EdbEDAOperationTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDAOperationTab));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAOperationTab", "EdbEDATabs.h", 159,
                  typeid(::EdbEDAOperationTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDAOperationTab_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDAOperationTab) );
      instance.SetNew(&new_EdbEDAOperationTab);
      instance.SetNewArray(&newArray_EdbEDAOperationTab);
      instance.SetDelete(&delete_EdbEDAOperationTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAOperationTab);
      instance.SetDestructor(&destruct_EdbEDAOperationTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAOperationTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAOperationTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAOperationTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDAOperationTab_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDAOperationTab*>(nullptr))->GetClass();
      EdbEDAOperationTab_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDAOperationTab_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDATrackSetList(void *p);
   static void deleteArray_EdbEDATrackSetList(void *p);
   static void destruct_EdbEDATrackSetList(void *p);
   static void streamer_EdbEDATrackSetList(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDATrackSetList*)
   {
      ::EdbEDATrackSetList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDATrackSetList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDATrackSetList", ::EdbEDATrackSetList::Class_Version(), "EdbEDATabs.h", 188,
                  typeid(::EdbEDATrackSetList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDATrackSetList::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDATrackSetList) );
      instance.SetDelete(&delete_EdbEDATrackSetList);
      instance.SetDeleteArray(&deleteArray_EdbEDATrackSetList);
      instance.SetDestructor(&destruct_EdbEDATrackSetList);
      instance.SetStreamerFunc(&streamer_EdbEDATrackSetList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDATrackSetList*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDATrackSetList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackSetList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDAPlotTab_Dictionary();
   static void EdbEDAPlotTab_TClassManip(TClass*);
   static void *new_EdbEDAPlotTab(void *p = nullptr);
   static void *newArray_EdbEDAPlotTab(Long_t size, void *p);
   static void delete_EdbEDAPlotTab(void *p);
   static void deleteArray_EdbEDAPlotTab(void *p);
   static void destruct_EdbEDAPlotTab(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAPlotTab*)
   {
      ::EdbEDAPlotTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDAPlotTab));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAPlotTab", "EdbEDAPlotTab.h", 14,
                  typeid(::EdbEDAPlotTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDAPlotTab_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDAPlotTab) );
      instance.SetNew(&new_EdbEDAPlotTab);
      instance.SetNewArray(&newArray_EdbEDAPlotTab);
      instance.SetDelete(&delete_EdbEDAPlotTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAPlotTab);
      instance.SetDestructor(&destruct_EdbEDAPlotTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAPlotTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAPlotTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAPlotTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDAPlotTab_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDAPlotTab*>(nullptr))->GetClass();
      EdbEDAPlotTab_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDAPlotTab_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDATrackP(void *p = nullptr);
   static void *newArray_EdbEDATrackP(Long_t size, void *p);
   static void delete_EdbEDATrackP(void *p);
   static void deleteArray_EdbEDATrackP(void *p);
   static void destruct_EdbEDATrackP(void *p);
   static void streamer_EdbEDATrackP(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDATrackP*)
   {
      ::EdbEDATrackP *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDATrackP >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDATrackP", ::EdbEDATrackP::Class_Version(), "EdbEDADecaySearch.h", 9,
                  typeid(::EdbEDATrackP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDATrackP::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDATrackP) );
      instance.SetNew(&new_EdbEDATrackP);
      instance.SetNewArray(&newArray_EdbEDATrackP);
      instance.SetDelete(&delete_EdbEDATrackP);
      instance.SetDeleteArray(&deleteArray_EdbEDATrackP);
      instance.SetDestructor(&destruct_EdbEDATrackP);
      instance.SetStreamerFunc(&streamer_EdbEDATrackP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDATrackP*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDATrackP*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDATrackP*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDADecayVertex(void *p = nullptr);
   static void *newArray_EdbEDADecayVertex(Long_t size, void *p);
   static void delete_EdbEDADecayVertex(void *p);
   static void deleteArray_EdbEDADecayVertex(void *p);
   static void destruct_EdbEDADecayVertex(void *p);
   static void streamer_EdbEDADecayVertex(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDADecayVertex*)
   {
      ::EdbEDADecayVertex *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDADecayVertex >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDADecayVertex", ::EdbEDADecayVertex::Class_Version(), "EdbEDADecaySearch.h", 120,
                  typeid(::EdbEDADecayVertex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDADecayVertex::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDADecayVertex) );
      instance.SetNew(&new_EdbEDADecayVertex);
      instance.SetNewArray(&newArray_EdbEDADecayVertex);
      instance.SetDelete(&delete_EdbEDADecayVertex);
      instance.SetDeleteArray(&deleteArray_EdbEDADecayVertex);
      instance.SetDestructor(&destruct_EdbEDADecayVertex);
      instance.SetStreamerFunc(&streamer_EdbEDADecayVertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDADecayVertex*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDADecayVertex*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDADecayVertex*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDASmallKink(void *p);
   static void deleteArray_EdbEDASmallKink(void *p);
   static void destruct_EdbEDASmallKink(void *p);
   static void streamer_EdbEDASmallKink(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDASmallKink*)
   {
      ::EdbEDASmallKink *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDASmallKink >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDASmallKink", ::EdbEDASmallKink::Class_Version(), "EdbEDADecaySearch.h", 161,
                  typeid(::EdbEDASmallKink), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDASmallKink::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDASmallKink) );
      instance.SetDelete(&delete_EdbEDASmallKink);
      instance.SetDeleteArray(&deleteArray_EdbEDASmallKink);
      instance.SetDestructor(&destruct_EdbEDASmallKink);
      instance.SetStreamerFunc(&streamer_EdbEDASmallKink);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDASmallKink*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDASmallKink*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDASmallKink*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDADecaySearch(void *p = nullptr);
   static void *newArray_EdbEDADecaySearch(Long_t size, void *p);
   static void delete_EdbEDADecaySearch(void *p);
   static void deleteArray_EdbEDADecaySearch(void *p);
   static void destruct_EdbEDADecaySearch(void *p);
   static void streamer_EdbEDADecaySearch(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDADecaySearch*)
   {
      ::EdbEDADecaySearch *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDADecaySearch >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDADecaySearch", ::EdbEDADecaySearch::Class_Version(), "EdbEDADecaySearch.h", 210,
                  typeid(::EdbEDADecaySearch), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDADecaySearch::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDADecaySearch) );
      instance.SetNew(&new_EdbEDADecaySearch);
      instance.SetNewArray(&newArray_EdbEDADecaySearch);
      instance.SetDelete(&delete_EdbEDADecaySearch);
      instance.SetDeleteArray(&deleteArray_EdbEDADecaySearch);
      instance.SetDestructor(&destruct_EdbEDADecaySearch);
      instance.SetStreamerFunc(&streamer_EdbEDADecaySearch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDADecaySearch*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDADecaySearch*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDADecaySearch*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDADecaySearchTab(void *p = nullptr);
   static void *newArray_EdbEDADecaySearchTab(Long_t size, void *p);
   static void delete_EdbEDADecaySearchTab(void *p);
   static void deleteArray_EdbEDADecaySearchTab(void *p);
   static void destruct_EdbEDADecaySearchTab(void *p);
   static void streamer_EdbEDADecaySearchTab(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDADecaySearchTab*)
   {
      ::EdbEDADecaySearchTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDADecaySearchTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDADecaySearchTab", ::EdbEDADecaySearchTab::Class_Version(), "EdbEDADecaySearch.h", 426,
                  typeid(::EdbEDADecaySearchTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDADecaySearchTab::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDADecaySearchTab) );
      instance.SetNew(&new_EdbEDADecaySearchTab);
      instance.SetNewArray(&newArray_EdbEDADecaySearchTab);
      instance.SetDelete(&delete_EdbEDADecaySearchTab);
      instance.SetDeleteArray(&deleteArray_EdbEDADecaySearchTab);
      instance.SetDestructor(&destruct_EdbEDADecaySearchTab);
      instance.SetStreamerFunc(&streamer_EdbEDADecaySearchTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDADecaySearchTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDADecaySearchTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDADecaySearchTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDAFeedbackEntryT(void *p);
   static void deleteArray_EdbEDAFeedbackEntryT(void *p);
   static void destruct_EdbEDAFeedbackEntryT(void *p);
   static void streamer_EdbEDAFeedbackEntryT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAFeedbackEntryT*)
   {
      ::EdbEDAFeedbackEntryT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAFeedbackEntryT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAFeedbackEntryT", ::EdbEDAFeedbackEntryT::Class_Version(), "EdbEDADecaySearch.h", 487,
                  typeid(::EdbEDAFeedbackEntryT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAFeedbackEntryT::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAFeedbackEntryT) );
      instance.SetDelete(&delete_EdbEDAFeedbackEntryT);
      instance.SetDeleteArray(&deleteArray_EdbEDAFeedbackEntryT);
      instance.SetDestructor(&destruct_EdbEDAFeedbackEntryT);
      instance.SetStreamerFunc(&streamer_EdbEDAFeedbackEntryT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAFeedbackEntryT*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAFeedbackEntryT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAFeedbackEntryT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDAFeedbackEntryV(void *p);
   static void deleteArray_EdbEDAFeedbackEntryV(void *p);
   static void destruct_EdbEDAFeedbackEntryV(void *p);
   static void streamer_EdbEDAFeedbackEntryV(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAFeedbackEntryV*)
   {
      ::EdbEDAFeedbackEntryV *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAFeedbackEntryV >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAFeedbackEntryV", ::EdbEDAFeedbackEntryV::Class_Version(), "EdbEDADecaySearch.h", 513,
                  typeid(::EdbEDAFeedbackEntryV), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAFeedbackEntryV::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAFeedbackEntryV) );
      instance.SetDelete(&delete_EdbEDAFeedbackEntryV);
      instance.SetDeleteArray(&deleteArray_EdbEDAFeedbackEntryV);
      instance.SetDestructor(&destruct_EdbEDAFeedbackEntryV);
      instance.SetStreamerFunc(&streamer_EdbEDAFeedbackEntryV);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAFeedbackEntryV*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAFeedbackEntryV*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAFeedbackEntryV*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *EdbEDAFeedbackEditor_Dictionary();
   static void EdbEDAFeedbackEditor_TClassManip(TClass*);
   static void *new_EdbEDAFeedbackEditor(void *p = nullptr);
   static void *newArray_EdbEDAFeedbackEditor(Long_t size, void *p);
   static void delete_EdbEDAFeedbackEditor(void *p);
   static void deleteArray_EdbEDAFeedbackEditor(void *p);
   static void destruct_EdbEDAFeedbackEditor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAFeedbackEditor*)
   {
      ::EdbEDAFeedbackEditor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EdbEDAFeedbackEditor));
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAFeedbackEditor", "EdbEDADecaySearch.h", 534,
                  typeid(::EdbEDAFeedbackEditor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EdbEDAFeedbackEditor_Dictionary, isa_proxy, 0,
                  sizeof(::EdbEDAFeedbackEditor) );
      instance.SetNew(&new_EdbEDAFeedbackEditor);
      instance.SetNewArray(&newArray_EdbEDAFeedbackEditor);
      instance.SetDelete(&delete_EdbEDAFeedbackEditor);
      instance.SetDeleteArray(&deleteArray_EdbEDAFeedbackEditor);
      instance.SetDestructor(&destruct_EdbEDAFeedbackEditor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAFeedbackEditor*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAFeedbackEditor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAFeedbackEditor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EdbEDAFeedbackEditor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EdbEDAFeedbackEditor*>(nullptr))->GetClass();
      EdbEDAFeedbackEditor_TClassManip(theClass);
   return theClass;
   }

   static void EdbEDAFeedbackEditor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAShowerTab(void *p = nullptr);
   static void *newArray_EdbEDAShowerTab(Long_t size, void *p);
   static void delete_EdbEDAShowerTab(void *p);
   static void deleteArray_EdbEDAShowerTab(void *p);
   static void destruct_EdbEDAShowerTab(void *p);
   static void streamer_EdbEDAShowerTab(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAShowerTab*)
   {
      ::EdbEDAShowerTab *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAShowerTab >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAShowerTab", ::EdbEDAShowerTab::Class_Version(), "EdbEDAShowerTab.h", 10,
                  typeid(::EdbEDAShowerTab), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAShowerTab::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAShowerTab) );
      instance.SetNew(&new_EdbEDAShowerTab);
      instance.SetNewArray(&newArray_EdbEDAShowerTab);
      instance.SetDelete(&delete_EdbEDAShowerTab);
      instance.SetDeleteArray(&deleteArray_EdbEDAShowerTab);
      instance.SetDestructor(&destruct_EdbEDAShowerTab);
      instance.SetStreamerFunc(&streamer_EdbEDAShowerTab);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAShowerTab*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAShowerTab*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAShowerTab*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAObject(void *p = nullptr);
   static void *newArray_EdbEDAObject(Long_t size, void *p);
   static void delete_EdbEDAObject(void *p);
   static void deleteArray_EdbEDAObject(void *p);
   static void destruct_EdbEDAObject(void *p);
   static void streamer_EdbEDAObject(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAObject*)
   {
      ::EdbEDAObject *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAObject >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAObject", ::EdbEDAObject::Class_Version(), "EdbEDA.h", 34,
                  typeid(::EdbEDAObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAObject::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAObject) );
      instance.SetNew(&new_EdbEDAObject);
      instance.SetNewArray(&newArray_EdbEDAObject);
      instance.SetDelete(&delete_EdbEDAObject);
      instance.SetDeleteArray(&deleteArray_EdbEDAObject);
      instance.SetDestructor(&destruct_EdbEDAObject);
      instance.SetStreamerFunc(&streamer_EdbEDAObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAObject*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAObject*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAObject*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDAText(void *p);
   static void deleteArray_EdbEDAText(void *p);
   static void destruct_EdbEDAText(void *p);
   static void streamer_EdbEDAText(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAText*)
   {
      ::EdbEDAText *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAText >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAText", ::EdbEDAText::Class_Version(), "EdbEDA.h", 50,
                  typeid(::EdbEDAText), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAText::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAText) );
      instance.SetDelete(&delete_EdbEDAText);
      instance.SetDeleteArray(&deleteArray_EdbEDAText);
      instance.SetDestructor(&destruct_EdbEDAText);
      instance.SetStreamerFunc(&streamer_EdbEDAText);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAText*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAText*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAText*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_EdbEDALine(void *p);
   static void deleteArray_EdbEDALine(void *p);
   static void destruct_EdbEDALine(void *p);
   static void streamer_EdbEDALine(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDALine*)
   {
      ::EdbEDALine *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDALine >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDALine", ::EdbEDALine::Class_Version(), "EdbEDA.h", 86,
                  typeid(::EdbEDALine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDALine::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDALine) );
      instance.SetDelete(&delete_EdbEDALine);
      instance.SetDeleteArray(&deleteArray_EdbEDALine);
      instance.SetDestructor(&destruct_EdbEDALine);
      instance.SetStreamerFunc(&streamer_EdbEDALine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDALine*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDALine*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDALine*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAOverlay(void *p = nullptr);
   static void *newArray_EdbEDAOverlay(Long_t size, void *p);
   static void delete_EdbEDAOverlay(void *p);
   static void deleteArray_EdbEDAOverlay(void *p);
   static void destruct_EdbEDAOverlay(void *p);
   static void streamer_EdbEDAOverlay(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAOverlay*)
   {
      ::EdbEDAOverlay *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAOverlay >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAOverlay", ::EdbEDAOverlay::Class_Version(), "EdbEDA.h", 106,
                  typeid(::EdbEDAOverlay), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAOverlay::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAOverlay) );
      instance.SetNew(&new_EdbEDAOverlay);
      instance.SetNewArray(&newArray_EdbEDAOverlay);
      instance.SetDelete(&delete_EdbEDAOverlay);
      instance.SetDeleteArray(&deleteArray_EdbEDAOverlay);
      instance.SetDestructor(&destruct_EdbEDAOverlay);
      instance.SetStreamerFunc(&streamer_EdbEDAOverlay);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAOverlay*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAOverlay*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAOverlay*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDACamera(void *p = nullptr);
   static void *newArray_EdbEDACamera(Long_t size, void *p);
   static void delete_EdbEDACamera(void *p);
   static void deleteArray_EdbEDACamera(void *p);
   static void destruct_EdbEDACamera(void *p);
   static void streamer_EdbEDACamera(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDACamera*)
   {
      ::EdbEDACamera *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDACamera >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDACamera", ::EdbEDACamera::Class_Version(), "EdbEDA.h", 126,
                  typeid(::EdbEDACamera), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDACamera::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDACamera) );
      instance.SetNew(&new_EdbEDACamera);
      instance.SetNewArray(&newArray_EdbEDACamera);
      instance.SetDelete(&delete_EdbEDACamera);
      instance.SetDeleteArray(&deleteArray_EdbEDACamera);
      instance.SetDestructor(&destruct_EdbEDACamera);
      instance.SetStreamerFunc(&streamer_EdbEDACamera);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDACamera*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDACamera*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDACamera*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDAIO(void *p = nullptr);
   static void *newArray_EdbEDAIO(Long_t size, void *p);
   static void delete_EdbEDAIO(void *p);
   static void deleteArray_EdbEDAIO(void *p);
   static void destruct_EdbEDAIO(void *p);
   static void streamer_EdbEDAIO(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDAIO*)
   {
      ::EdbEDAIO *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDAIO >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDAIO", ::EdbEDAIO::Class_Version(), "EdbEDA.h", 162,
                  typeid(::EdbEDAIO), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDAIO::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDAIO) );
      instance.SetNew(&new_EdbEDAIO);
      instance.SetNewArray(&newArray_EdbEDAIO);
      instance.SetDelete(&delete_EdbEDAIO);
      instance.SetDeleteArray(&deleteArray_EdbEDAIO);
      instance.SetDestructor(&destruct_EdbEDAIO);
      instance.SetStreamerFunc(&streamer_EdbEDAIO);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDAIO*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDAIO*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDAIO*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDABrickData(void *p = nullptr);
   static void *newArray_EdbEDABrickData(Long_t size, void *p);
   static void delete_EdbEDABrickData(void *p);
   static void deleteArray_EdbEDABrickData(void *p);
   static void destruct_EdbEDABrickData(void *p);
   static void streamer_EdbEDABrickData(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDABrickData*)
   {
      ::EdbEDABrickData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDABrickData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDABrickData", ::EdbEDABrickData::Class_Version(), "EdbEDA.h", 192,
                  typeid(::EdbEDABrickData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDABrickData::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDABrickData) );
      instance.SetNew(&new_EdbEDABrickData);
      instance.SetNewArray(&newArray_EdbEDABrickData);
      instance.SetDelete(&delete_EdbEDABrickData);
      instance.SetDeleteArray(&deleteArray_EdbEDABrickData);
      instance.SetDestructor(&destruct_EdbEDABrickData);
      instance.SetStreamerFunc(&streamer_EdbEDABrickData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDABrickData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDABrickData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDABrickData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDASelection(void *p = nullptr);
   static void *newArray_EdbEDASelection(Long_t size, void *p);
   static void delete_EdbEDASelection(void *p);
   static void deleteArray_EdbEDASelection(void *p);
   static void destruct_EdbEDASelection(void *p);
   static void streamer_EdbEDASelection(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDASelection*)
   {
      ::EdbEDASelection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDASelection >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDASelection", ::EdbEDASelection::Class_Version(), "EdbEDA.h", 352,
                  typeid(::EdbEDASelection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDASelection::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDASelection) );
      instance.SetNew(&new_EdbEDASelection);
      instance.SetNewArray(&newArray_EdbEDASelection);
      instance.SetDelete(&delete_EdbEDASelection);
      instance.SetDeleteArray(&deleteArray_EdbEDASelection);
      instance.SetDestructor(&destruct_EdbEDASelection);
      instance.SetStreamerFunc(&streamer_EdbEDASelection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDASelection*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDASelection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDASelection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EdbEDA(void *p = nullptr);
   static void *newArray_EdbEDA(Long_t size, void *p);
   static void delete_EdbEDA(void *p);
   static void deleteArray_EdbEDA(void *p);
   static void destruct_EdbEDA(void *p);
   static void streamer_EdbEDA(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EdbEDA*)
   {
      ::EdbEDA *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EdbEDA >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EdbEDA", ::EdbEDA::Class_Version(), "EdbEDA.h", 474,
                  typeid(::EdbEDA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EdbEDA::Dictionary, isa_proxy, 16,
                  sizeof(::EdbEDA) );
      instance.SetNew(&new_EdbEDA);
      instance.SetNewArray(&newArray_EdbEDA);
      instance.SetDelete(&delete_EdbEDA);
      instance.SetDeleteArray(&deleteArray_EdbEDA);
      instance.SetDestructor(&destruct_EdbEDA);
      instance.SetStreamerFunc(&streamer_EdbEDA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EdbEDA*)
   {
      return GenerateInitInstanceLocal(static_cast<::EdbEDA*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EdbEDA*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EdbIDDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbIDDialog::Class_Name()
{
   return "EdbIDDialog";
}

//______________________________________________________________________________
const char *EdbIDDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbIDDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbIDDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbIDDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbIDDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbIDDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbIDDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbIDDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAArea::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAArea::Class_Name()
{
   return "EdbEDAArea";
}

//______________________________________________________________________________
const char *EdbEDAArea::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAArea*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAArea::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAArea*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAArea::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAArea*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAArea::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAArea*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAAreaSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAAreaSet::Class_Name()
{
   return "EdbEDAAreaSet";
}

//______________________________________________________________________________
const char *EdbEDAAreaSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAAreaSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAAreaSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAAreaSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAAreaSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAAreaSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAAreaSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAAreaSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAVertexSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAVertexSet::Class_Name()
{
   return "EdbEDAVertexSet";
}

//______________________________________________________________________________
const char *EdbEDAVertexSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAVertexSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAVertexSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAVertexSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAExtentionSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAExtentionSet::Class_Name()
{
   return "EdbEDAExtentionSet";
}

//______________________________________________________________________________
const char *EdbEDAExtentionSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAExtentionSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAExtentionSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAExtentionSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAExtentionSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAExtentionSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAExtentionSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAExtentionSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDATrackComment::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDATrackComment::Class_Name()
{
   return "EdbEDATrackComment";
}

//______________________________________________________________________________
const char *EdbEDATrackComment::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackComment*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDATrackComment::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackComment*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDATrackComment::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackComment*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDATrackComment::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackComment*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDATrackSelection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDATrackSelection::Class_Name()
{
   return "EdbEDATrackSelection";
}

//______________________________________________________________________________
const char *EdbEDATrackSelection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSelection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDATrackSelection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSelection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDATrackSelection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSelection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDATrackSelection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSelection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDATrackSet::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDATrackSet::Class_Name()
{
   return "EdbEDATrackSet";
}

//______________________________________________________________________________
const char *EdbEDATrackSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSet*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDATrackSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSet*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDATrackSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSet*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDATrackSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSet*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAMainTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAMainTab::Class_Name()
{
   return "EdbEDAMainTab";
}

//______________________________________________________________________________
const char *EdbEDAMainTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAMainTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAMainTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAMainTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAMainTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAMainTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAMainTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAMainTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAVertexTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAVertexTab::Class_Name()
{
   return "EdbEDAVertexTab";
}

//______________________________________________________________________________
const char *EdbEDAVertexTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAVertexTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAVertexTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAVertexTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAVertexTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDATrackSetList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDATrackSetList::Class_Name()
{
   return "EdbEDATrackSetList";
}

//______________________________________________________________________________
const char *EdbEDATrackSetList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSetList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDATrackSetList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSetList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDATrackSetList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSetList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDATrackSetList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackSetList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDATrackP::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDATrackP::Class_Name()
{
   return "EdbEDATrackP";
}

//______________________________________________________________________________
const char *EdbEDATrackP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackP*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDATrackP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackP*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDATrackP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackP*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDATrackP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDATrackP*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDADecayVertex::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDADecayVertex::Class_Name()
{
   return "EdbEDADecayVertex";
}

//______________________________________________________________________________
const char *EdbEDADecayVertex::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecayVertex*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDADecayVertex::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecayVertex*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDADecayVertex::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecayVertex*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDADecayVertex::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecayVertex*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDASmallKink::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDASmallKink::Class_Name()
{
   return "EdbEDASmallKink";
}

//______________________________________________________________________________
const char *EdbEDASmallKink::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASmallKink*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDASmallKink::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASmallKink*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDASmallKink::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASmallKink*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDASmallKink::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASmallKink*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDADecaySearch::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDADecaySearch::Class_Name()
{
   return "EdbEDADecaySearch";
}

//______________________________________________________________________________
const char *EdbEDADecaySearch::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearch*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDADecaySearch::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearch*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDADecaySearch::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearch*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDADecaySearch::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearch*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDADecaySearchTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDADecaySearchTab::Class_Name()
{
   return "EdbEDADecaySearchTab";
}

//______________________________________________________________________________
const char *EdbEDADecaySearchTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearchTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDADecaySearchTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearchTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDADecaySearchTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearchTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDADecaySearchTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDADecaySearchTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAFeedbackEntryT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAFeedbackEntryT::Class_Name()
{
   return "EdbEDAFeedbackEntryT";
}

//______________________________________________________________________________
const char *EdbEDAFeedbackEntryT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAFeedbackEntryT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAFeedbackEntryT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAFeedbackEntryT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAFeedbackEntryV::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAFeedbackEntryV::Class_Name()
{
   return "EdbEDAFeedbackEntryV";
}

//______________________________________________________________________________
const char *EdbEDAFeedbackEntryV::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryV*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAFeedbackEntryV::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryV*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAFeedbackEntryV::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryV*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAFeedbackEntryV::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAFeedbackEntryV*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAShowerTab::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAShowerTab::Class_Name()
{
   return "EdbEDAShowerTab";
}

//______________________________________________________________________________
const char *EdbEDAShowerTab::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAShowerTab*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAShowerTab::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAShowerTab*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAShowerTab::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAShowerTab*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAShowerTab::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAShowerTab*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAObject::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAObject::Class_Name()
{
   return "EdbEDAObject";
}

//______________________________________________________________________________
const char *EdbEDAObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAObject*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAObject*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAObject*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAObject*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAText::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAText::Class_Name()
{
   return "EdbEDAText";
}

//______________________________________________________________________________
const char *EdbEDAText::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAText*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAText::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAText*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAText::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAText*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAText::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAText*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDALine::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDALine::Class_Name()
{
   return "EdbEDALine";
}

//______________________________________________________________________________
const char *EdbEDALine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDALine*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDALine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDALine*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDALine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDALine*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDALine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDALine*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAOverlay::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAOverlay::Class_Name()
{
   return "EdbEDAOverlay";
}

//______________________________________________________________________________
const char *EdbEDAOverlay::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAOverlay*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAOverlay::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAOverlay*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAOverlay::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAOverlay*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAOverlay::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAOverlay*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDACamera::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDACamera::Class_Name()
{
   return "EdbEDACamera";
}

//______________________________________________________________________________
const char *EdbEDACamera::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDACamera*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDACamera::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDACamera*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDACamera::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDACamera*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDACamera::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDACamera*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDAIO::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDAIO::Class_Name()
{
   return "EdbEDAIO";
}

//______________________________________________________________________________
const char *EdbEDAIO::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAIO*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDAIO::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAIO*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDAIO::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAIO*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDAIO::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDAIO*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDABrickData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDABrickData::Class_Name()
{
   return "EdbEDABrickData";
}

//______________________________________________________________________________
const char *EdbEDABrickData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDABrickData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDABrickData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDABrickData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDABrickData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDABrickData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDABrickData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDABrickData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDASelection::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDASelection::Class_Name()
{
   return "EdbEDASelection";
}

//______________________________________________________________________________
const char *EdbEDASelection::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASelection*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDASelection::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASelection*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDASelection::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASelection*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDASelection::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDASelection*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EdbEDA::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EdbEDA::Class_Name()
{
   return "EdbEDA";
}

//______________________________________________________________________________
const char *EdbEDA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDA*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EdbEDA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EdbEDA*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EdbEDA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDA*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EdbEDA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EdbEDA*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EdbIDDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbIDDialog.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbIDDialog(void *p) {
      delete (static_cast<::EdbIDDialog*>(p));
   }
   static void deleteArray_EdbIDDialog(void *p) {
      delete [] (static_cast<::EdbIDDialog*>(p));
   }
   static void destruct_EdbIDDialog(void *p) {
      typedef ::EdbIDDialog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbIDDialog(TBuffer &buf, void *obj) {
      ((::EdbIDDialog*)obj)->::EdbIDDialog::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbIDDialog

//______________________________________________________________________________
void EdbEDAArea::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAArea.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAArea(void *p) {
      return  p ? new(p) ::EdbEDAArea : new ::EdbEDAArea;
   }
   static void *newArray_EdbEDAArea(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAArea[nElements] : new ::EdbEDAArea[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAArea(void *p) {
      delete (static_cast<::EdbEDAArea*>(p));
   }
   static void deleteArray_EdbEDAArea(void *p) {
      delete [] (static_cast<::EdbEDAArea*>(p));
   }
   static void destruct_EdbEDAArea(void *p) {
      typedef ::EdbEDAArea current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAArea(TBuffer &buf, void *obj) {
      ((::EdbEDAArea*)obj)->::EdbEDAArea::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAArea

//______________________________________________________________________________
void EdbEDAAreaSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAAreaSet.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAAreaSet(void *p) {
      return  p ? new(p) ::EdbEDAAreaSet : new ::EdbEDAAreaSet;
   }
   static void *newArray_EdbEDAAreaSet(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAAreaSet[nElements] : new ::EdbEDAAreaSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAAreaSet(void *p) {
      delete (static_cast<::EdbEDAAreaSet*>(p));
   }
   static void deleteArray_EdbEDAAreaSet(void *p) {
      delete [] (static_cast<::EdbEDAAreaSet*>(p));
   }
   static void destruct_EdbEDAAreaSet(void *p) {
      typedef ::EdbEDAAreaSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAAreaSet(TBuffer &buf, void *obj) {
      ((::EdbEDAAreaSet*)obj)->::EdbEDAAreaSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAAreaSet

//______________________________________________________________________________
void EdbEDAVertexSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAVertexSet.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAVertexSet(void *p) {
      return  p ? new(p) ::EdbEDAVertexSet : new ::EdbEDAVertexSet;
   }
   static void *newArray_EdbEDAVertexSet(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAVertexSet[nElements] : new ::EdbEDAVertexSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAVertexSet(void *p) {
      delete (static_cast<::EdbEDAVertexSet*>(p));
   }
   static void deleteArray_EdbEDAVertexSet(void *p) {
      delete [] (static_cast<::EdbEDAVertexSet*>(p));
   }
   static void destruct_EdbEDAVertexSet(void *p) {
      typedef ::EdbEDAVertexSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAVertexSet(TBuffer &buf, void *obj) {
      ((::EdbEDAVertexSet*)obj)->::EdbEDAVertexSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAVertexSet

//______________________________________________________________________________
void EdbEDAExtentionSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAExtentionSet.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAExtentionSet(void *p) {
      return  p ? new(p) ::EdbEDAExtentionSet : new ::EdbEDAExtentionSet;
   }
   static void *newArray_EdbEDAExtentionSet(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAExtentionSet[nElements] : new ::EdbEDAExtentionSet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAExtentionSet(void *p) {
      delete (static_cast<::EdbEDAExtentionSet*>(p));
   }
   static void deleteArray_EdbEDAExtentionSet(void *p) {
      delete [] (static_cast<::EdbEDAExtentionSet*>(p));
   }
   static void destruct_EdbEDAExtentionSet(void *p) {
      typedef ::EdbEDAExtentionSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAExtentionSet(TBuffer &buf, void *obj) {
      ((::EdbEDAExtentionSet*)obj)->::EdbEDAExtentionSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAExtentionSet

//______________________________________________________________________________
void EdbEDATrackComment::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDATrackComment.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDATrackComment(void *p) {
      delete (static_cast<::EdbEDATrackComment*>(p));
   }
   static void deleteArray_EdbEDATrackComment(void *p) {
      delete [] (static_cast<::EdbEDATrackComment*>(p));
   }
   static void destruct_EdbEDATrackComment(void *p) {
      typedef ::EdbEDATrackComment current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDATrackComment(TBuffer &buf, void *obj) {
      ((::EdbEDATrackComment*)obj)->::EdbEDATrackComment::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDATrackComment

//______________________________________________________________________________
void EdbEDATrackSelection::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDATrackSelection.

   ::Error("EdbEDATrackSelection::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDATrackSelection(void *p) {
      return  p ? new(p) ::EdbEDATrackSelection : new ::EdbEDATrackSelection;
   }
   static void *newArray_EdbEDATrackSelection(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDATrackSelection[nElements] : new ::EdbEDATrackSelection[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDATrackSelection(void *p) {
      delete (static_cast<::EdbEDATrackSelection*>(p));
   }
   static void deleteArray_EdbEDATrackSelection(void *p) {
      delete [] (static_cast<::EdbEDATrackSelection*>(p));
   }
   static void destruct_EdbEDATrackSelection(void *p) {
      typedef ::EdbEDATrackSelection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDATrackSelection(TBuffer &buf, void *obj) {
      ((::EdbEDATrackSelection*)obj)->::EdbEDATrackSelection::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDATrackSelection

//______________________________________________________________________________
void EdbEDATrackSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDATrackSet.

   TNamed::Streamer(R__b);
   EdbEDATrackSelection::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDATrackSet(void *p) {
      delete (static_cast<::EdbEDATrackSet*>(p));
   }
   static void deleteArray_EdbEDATrackSet(void *p) {
      delete [] (static_cast<::EdbEDATrackSet*>(p));
   }
   static void destruct_EdbEDATrackSet(void *p) {
      typedef ::EdbEDATrackSet current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDATrackSet(TBuffer &buf, void *obj) {
      ((::EdbEDATrackSet*)obj)->::EdbEDATrackSet::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDATrackSet

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDATrackSetTab(void *p) {
      return  p ? new(p) ::EdbEDATrackSetTab : new ::EdbEDATrackSetTab;
   }
   static void *newArray_EdbEDATrackSetTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDATrackSetTab[nElements] : new ::EdbEDATrackSetTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDATrackSetTab(void *p) {
      delete (static_cast<::EdbEDATrackSetTab*>(p));
   }
   static void deleteArray_EdbEDATrackSetTab(void *p) {
      delete [] (static_cast<::EdbEDATrackSetTab*>(p));
   }
   static void destruct_EdbEDATrackSetTab(void *p) {
      typedef ::EdbEDATrackSetTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDATrackSetTab

//______________________________________________________________________________
void EdbEDAMainTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAMainTab.

   ::Error("EdbEDAMainTab::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAMainTab(void *p) {
      return  p ? new(p) ::EdbEDAMainTab : new ::EdbEDAMainTab;
   }
   static void *newArray_EdbEDAMainTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAMainTab[nElements] : new ::EdbEDAMainTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAMainTab(void *p) {
      delete (static_cast<::EdbEDAMainTab*>(p));
   }
   static void deleteArray_EdbEDAMainTab(void *p) {
      delete [] (static_cast<::EdbEDAMainTab*>(p));
   }
   static void destruct_EdbEDAMainTab(void *p) {
      typedef ::EdbEDAMainTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAMainTab(TBuffer &buf, void *obj) {
      ((::EdbEDAMainTab*)obj)->::EdbEDAMainTab::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAMainTab

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAListTab(void *p) {
      return  p ? new(p) ::EdbEDAListTab : new ::EdbEDAListTab;
   }
   static void *newArray_EdbEDAListTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAListTab[nElements] : new ::EdbEDAListTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAListTab(void *p) {
      delete (static_cast<::EdbEDAListTab*>(p));
   }
   static void deleteArray_EdbEDAListTab(void *p) {
      delete [] (static_cast<::EdbEDAListTab*>(p));
   }
   static void destruct_EdbEDAListTab(void *p) {
      typedef ::EdbEDAListTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDAListTab

//______________________________________________________________________________
void EdbEDAVertexTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAVertexTab.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      EdbVertexRec::Streamer(R__b);
      R__b >> eNtrk;
      R__b >> eVtxTrk;
      R__b >> eGNEImpMax;
      R__b >> eGNEProbMinV;
      R__b >> eGNEDZmax;
      R__b >> eGNEVNtrk;
      R__b >> eGCBUseMom;
      R__b >> eGCBUseSegPar;
      R__b >> eGCBVtxTrk;
      R__b >> eGCBAngularCut;
      R__b >> eAngularCut;
      R__b >> eTX;
      R__b >> eTY;
      R__b >> eDT;
      R__b >> eSet;
      R__b.CheckByteCount(R__s, R__c, EdbEDAVertexTab::IsA());
   } else {
      R__c = R__b.WriteVersion(EdbEDAVertexTab::IsA(), kTRUE);
      EdbVertexRec::Streamer(R__b);
      R__b << eNtrk;
      R__b << eVtxTrk;
      R__b << eGNEImpMax;
      R__b << eGNEProbMinV;
      R__b << eGNEDZmax;
      R__b << eGNEVNtrk;
      R__b << eGCBUseMom;
      R__b << eGCBUseSegPar;
      R__b << eGCBVtxTrk;
      R__b << eGCBAngularCut;
      R__b << eAngularCut;
      R__b << eTX;
      R__b << eTY;
      R__b << eDT;
      R__b << eSet;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAVertexTab(void *p) {
      return  p ? new(p) ::EdbEDAVertexTab : new ::EdbEDAVertexTab;
   }
   static void *newArray_EdbEDAVertexTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAVertexTab[nElements] : new ::EdbEDAVertexTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAVertexTab(void *p) {
      delete (static_cast<::EdbEDAVertexTab*>(p));
   }
   static void deleteArray_EdbEDAVertexTab(void *p) {
      delete [] (static_cast<::EdbEDAVertexTab*>(p));
   }
   static void destruct_EdbEDAVertexTab(void *p) {
      typedef ::EdbEDAVertexTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAVertexTab(TBuffer &buf, void *obj) {
      ((::EdbEDAVertexTab*)obj)->::EdbEDAVertexTab::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAVertexTab

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAMCTab(void *p) {
      return  p ? new(p) ::EdbEDAMCTab : new ::EdbEDAMCTab;
   }
   static void *newArray_EdbEDAMCTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAMCTab[nElements] : new ::EdbEDAMCTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAMCTab(void *p) {
      delete (static_cast<::EdbEDAMCTab*>(p));
   }
   static void deleteArray_EdbEDAMCTab(void *p) {
      delete [] (static_cast<::EdbEDAMCTab*>(p));
   }
   static void destruct_EdbEDAMCTab(void *p) {
      typedef ::EdbEDAMCTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDAMCTab

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAPredTab(void *p) {
      return  p ? new(p) ::EdbEDAPredTab : new ::EdbEDAPredTab;
   }
   static void *newArray_EdbEDAPredTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAPredTab[nElements] : new ::EdbEDAPredTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAPredTab(void *p) {
      delete (static_cast<::EdbEDAPredTab*>(p));
   }
   static void deleteArray_EdbEDAPredTab(void *p) {
      delete [] (static_cast<::EdbEDAPredTab*>(p));
   }
   static void destruct_EdbEDAPredTab(void *p) {
      typedef ::EdbEDAPredTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDAPredTab

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAOperationTab(void *p) {
      return  p ? new(p) ::EdbEDAOperationTab : new ::EdbEDAOperationTab;
   }
   static void *newArray_EdbEDAOperationTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAOperationTab[nElements] : new ::EdbEDAOperationTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAOperationTab(void *p) {
      delete (static_cast<::EdbEDAOperationTab*>(p));
   }
   static void deleteArray_EdbEDAOperationTab(void *p) {
      delete [] (static_cast<::EdbEDAOperationTab*>(p));
   }
   static void destruct_EdbEDAOperationTab(void *p) {
      typedef ::EdbEDAOperationTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDAOperationTab

//______________________________________________________________________________
void EdbEDATrackSetList::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDATrackSetList.

   TGTransientFrame::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDATrackSetList(void *p) {
      delete (static_cast<::EdbEDATrackSetList*>(p));
   }
   static void deleteArray_EdbEDATrackSetList(void *p) {
      delete [] (static_cast<::EdbEDATrackSetList*>(p));
   }
   static void destruct_EdbEDATrackSetList(void *p) {
      typedef ::EdbEDATrackSetList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDATrackSetList(TBuffer &buf, void *obj) {
      ((::EdbEDATrackSetList*)obj)->::EdbEDATrackSetList::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDATrackSetList

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAPlotTab(void *p) {
      return  p ? new(p) ::EdbEDAPlotTab : new ::EdbEDAPlotTab;
   }
   static void *newArray_EdbEDAPlotTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAPlotTab[nElements] : new ::EdbEDAPlotTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAPlotTab(void *p) {
      delete (static_cast<::EdbEDAPlotTab*>(p));
   }
   static void deleteArray_EdbEDAPlotTab(void *p) {
      delete [] (static_cast<::EdbEDAPlotTab*>(p));
   }
   static void destruct_EdbEDAPlotTab(void *p) {
      typedef ::EdbEDAPlotTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDAPlotTab

//______________________________________________________________________________
void EdbEDATrackP::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDATrackP.

   EdbTrackP::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDATrackP(void *p) {
      return  p ? new(p) ::EdbEDATrackP : new ::EdbEDATrackP;
   }
   static void *newArray_EdbEDATrackP(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDATrackP[nElements] : new ::EdbEDATrackP[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDATrackP(void *p) {
      delete (static_cast<::EdbEDATrackP*>(p));
   }
   static void deleteArray_EdbEDATrackP(void *p) {
      delete [] (static_cast<::EdbEDATrackP*>(p));
   }
   static void destruct_EdbEDATrackP(void *p) {
      typedef ::EdbEDATrackP current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDATrackP(TBuffer &buf, void *obj) {
      ((::EdbEDATrackP*)obj)->::EdbEDATrackP::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDATrackP

//______________________________________________________________________________
void EdbEDADecayVertex::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDADecayVertex.

   EdbVertex::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDADecayVertex(void *p) {
      return  p ? new(p) ::EdbEDADecayVertex : new ::EdbEDADecayVertex;
   }
   static void *newArray_EdbEDADecayVertex(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDADecayVertex[nElements] : new ::EdbEDADecayVertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDADecayVertex(void *p) {
      delete (static_cast<::EdbEDADecayVertex*>(p));
   }
   static void deleteArray_EdbEDADecayVertex(void *p) {
      delete [] (static_cast<::EdbEDADecayVertex*>(p));
   }
   static void destruct_EdbEDADecayVertex(void *p) {
      typedef ::EdbEDADecayVertex current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDADecayVertex(TBuffer &buf, void *obj) {
      ((::EdbEDADecayVertex*)obj)->::EdbEDADecayVertex::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDADecayVertex

//______________________________________________________________________________
void EdbEDASmallKink::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDASmallKink.

   EdbVertex::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDASmallKink(void *p) {
      delete (static_cast<::EdbEDASmallKink*>(p));
   }
   static void deleteArray_EdbEDASmallKink(void *p) {
      delete [] (static_cast<::EdbEDASmallKink*>(p));
   }
   static void destruct_EdbEDASmallKink(void *p) {
      typedef ::EdbEDASmallKink current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDASmallKink(TBuffer &buf, void *obj) {
      ((::EdbEDASmallKink*)obj)->::EdbEDASmallKink::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDASmallKink

//______________________________________________________________________________
void EdbEDADecaySearch::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDADecaySearch.

   ::Error("EdbEDADecaySearch::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDADecaySearch(void *p) {
      return  p ? new(p) ::EdbEDADecaySearch : new ::EdbEDADecaySearch;
   }
   static void *newArray_EdbEDADecaySearch(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDADecaySearch[nElements] : new ::EdbEDADecaySearch[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDADecaySearch(void *p) {
      delete (static_cast<::EdbEDADecaySearch*>(p));
   }
   static void deleteArray_EdbEDADecaySearch(void *p) {
      delete [] (static_cast<::EdbEDADecaySearch*>(p));
   }
   static void destruct_EdbEDADecaySearch(void *p) {
      typedef ::EdbEDADecaySearch current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDADecaySearch(TBuffer &buf, void *obj) {
      ((::EdbEDADecaySearch*)obj)->::EdbEDADecaySearch::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDADecaySearch

//______________________________________________________________________________
void EdbEDADecaySearchTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDADecaySearchTab.

   EdbEDADecaySearch::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDADecaySearchTab(void *p) {
      return  p ? new(p) ::EdbEDADecaySearchTab : new ::EdbEDADecaySearchTab;
   }
   static void *newArray_EdbEDADecaySearchTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDADecaySearchTab[nElements] : new ::EdbEDADecaySearchTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDADecaySearchTab(void *p) {
      delete (static_cast<::EdbEDADecaySearchTab*>(p));
   }
   static void deleteArray_EdbEDADecaySearchTab(void *p) {
      delete [] (static_cast<::EdbEDADecaySearchTab*>(p));
   }
   static void destruct_EdbEDADecaySearchTab(void *p) {
      typedef ::EdbEDADecaySearchTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDADecaySearchTab(TBuffer &buf, void *obj) {
      ((::EdbEDADecaySearchTab*)obj)->::EdbEDADecaySearchTab::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDADecaySearchTab

//______________________________________________________________________________
void EdbEDAFeedbackEntryT::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAFeedbackEntryT.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDAFeedbackEntryT(void *p) {
      delete (static_cast<::EdbEDAFeedbackEntryT*>(p));
   }
   static void deleteArray_EdbEDAFeedbackEntryT(void *p) {
      delete [] (static_cast<::EdbEDAFeedbackEntryT*>(p));
   }
   static void destruct_EdbEDAFeedbackEntryT(void *p) {
      typedef ::EdbEDAFeedbackEntryT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAFeedbackEntryT(TBuffer &buf, void *obj) {
      ((::EdbEDAFeedbackEntryT*)obj)->::EdbEDAFeedbackEntryT::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAFeedbackEntryT

//______________________________________________________________________________
void EdbEDAFeedbackEntryV::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAFeedbackEntryV.

   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDAFeedbackEntryV(void *p) {
      delete (static_cast<::EdbEDAFeedbackEntryV*>(p));
   }
   static void deleteArray_EdbEDAFeedbackEntryV(void *p) {
      delete [] (static_cast<::EdbEDAFeedbackEntryV*>(p));
   }
   static void destruct_EdbEDAFeedbackEntryV(void *p) {
      typedef ::EdbEDAFeedbackEntryV current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAFeedbackEntryV(TBuffer &buf, void *obj) {
      ((::EdbEDAFeedbackEntryV*)obj)->::EdbEDAFeedbackEntryV::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAFeedbackEntryV

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAFeedbackEditor(void *p) {
      return  p ? new(p) ::EdbEDAFeedbackEditor : new ::EdbEDAFeedbackEditor;
   }
   static void *newArray_EdbEDAFeedbackEditor(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAFeedbackEditor[nElements] : new ::EdbEDAFeedbackEditor[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAFeedbackEditor(void *p) {
      delete (static_cast<::EdbEDAFeedbackEditor*>(p));
   }
   static void deleteArray_EdbEDAFeedbackEditor(void *p) {
      delete [] (static_cast<::EdbEDAFeedbackEditor*>(p));
   }
   static void destruct_EdbEDAFeedbackEditor(void *p) {
      typedef ::EdbEDAFeedbackEditor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EdbEDAFeedbackEditor

//______________________________________________________________________________
void EdbEDAShowerTab::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAShowerTab.

   ::Error("EdbEDAShowerTab::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAShowerTab(void *p) {
      return  p ? new(p) ::EdbEDAShowerTab : new ::EdbEDAShowerTab;
   }
   static void *newArray_EdbEDAShowerTab(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAShowerTab[nElements] : new ::EdbEDAShowerTab[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAShowerTab(void *p) {
      delete (static_cast<::EdbEDAShowerTab*>(p));
   }
   static void deleteArray_EdbEDAShowerTab(void *p) {
      delete [] (static_cast<::EdbEDAShowerTab*>(p));
   }
   static void destruct_EdbEDAShowerTab(void *p) {
      typedef ::EdbEDAShowerTab current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAShowerTab(TBuffer &buf, void *obj) {
      ((::EdbEDAShowerTab*)obj)->::EdbEDAShowerTab::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAShowerTab

//______________________________________________________________________________
void EdbEDAObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAObject.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAObject(void *p) {
      return  p ? new(p) ::EdbEDAObject : new ::EdbEDAObject;
   }
   static void *newArray_EdbEDAObject(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAObject[nElements] : new ::EdbEDAObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAObject(void *p) {
      delete (static_cast<::EdbEDAObject*>(p));
   }
   static void deleteArray_EdbEDAObject(void *p) {
      delete [] (static_cast<::EdbEDAObject*>(p));
   }
   static void destruct_EdbEDAObject(void *p) {
      typedef ::EdbEDAObject current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAObject(TBuffer &buf, void *obj) {
      ((::EdbEDAObject*)obj)->::EdbEDAObject::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAObject

//______________________________________________________________________________
void EdbEDAText::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAText.

   EdbEDAObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDAText(void *p) {
      delete (static_cast<::EdbEDAText*>(p));
   }
   static void deleteArray_EdbEDAText(void *p) {
      delete [] (static_cast<::EdbEDAText*>(p));
   }
   static void destruct_EdbEDAText(void *p) {
      typedef ::EdbEDAText current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAText(TBuffer &buf, void *obj) {
      ((::EdbEDAText*)obj)->::EdbEDAText::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAText

//______________________________________________________________________________
void EdbEDALine::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDALine.

   EdbEDAObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_EdbEDALine(void *p) {
      delete (static_cast<::EdbEDALine*>(p));
   }
   static void deleteArray_EdbEDALine(void *p) {
      delete [] (static_cast<::EdbEDALine*>(p));
   }
   static void destruct_EdbEDALine(void *p) {
      typedef ::EdbEDALine current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDALine(TBuffer &buf, void *obj) {
      ((::EdbEDALine*)obj)->::EdbEDALine::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDALine

//______________________________________________________________________________
void EdbEDAOverlay::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAOverlay.

   TGLOverlayElement::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAOverlay(void *p) {
      return  p ? new(p) ::EdbEDAOverlay : new ::EdbEDAOverlay;
   }
   static void *newArray_EdbEDAOverlay(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAOverlay[nElements] : new ::EdbEDAOverlay[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAOverlay(void *p) {
      delete (static_cast<::EdbEDAOverlay*>(p));
   }
   static void deleteArray_EdbEDAOverlay(void *p) {
      delete [] (static_cast<::EdbEDAOverlay*>(p));
   }
   static void destruct_EdbEDAOverlay(void *p) {
      typedef ::EdbEDAOverlay current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAOverlay(TBuffer &buf, void *obj) {
      ((::EdbEDAOverlay*)obj)->::EdbEDAOverlay::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAOverlay

//______________________________________________________________________________
void EdbEDACamera::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDACamera.

   ::Error("EdbEDACamera::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDACamera(void *p) {
      return  p ? new(p) ::EdbEDACamera : new ::EdbEDACamera;
   }
   static void *newArray_EdbEDACamera(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDACamera[nElements] : new ::EdbEDACamera[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDACamera(void *p) {
      delete (static_cast<::EdbEDACamera*>(p));
   }
   static void deleteArray_EdbEDACamera(void *p) {
      delete [] (static_cast<::EdbEDACamera*>(p));
   }
   static void destruct_EdbEDACamera(void *p) {
      typedef ::EdbEDACamera current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDACamera(TBuffer &buf, void *obj) {
      ((::EdbEDACamera*)obj)->::EdbEDACamera::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDACamera

//______________________________________________________________________________
void EdbEDAIO::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDAIO.

   ::Error("EdbEDAIO::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDAIO(void *p) {
      return  p ? new(p) ::EdbEDAIO : new ::EdbEDAIO;
   }
   static void *newArray_EdbEDAIO(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDAIO[nElements] : new ::EdbEDAIO[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDAIO(void *p) {
      delete (static_cast<::EdbEDAIO*>(p));
   }
   static void deleteArray_EdbEDAIO(void *p) {
      delete [] (static_cast<::EdbEDAIO*>(p));
   }
   static void destruct_EdbEDAIO(void *p) {
      typedef ::EdbEDAIO current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDAIO(TBuffer &buf, void *obj) {
      ((::EdbEDAIO*)obj)->::EdbEDAIO::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDAIO

//______________________________________________________________________________
void EdbEDABrickData::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDABrickData.

   ::Error("EdbEDABrickData::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDABrickData(void *p) {
      return  p ? new(p) ::EdbEDABrickData : new ::EdbEDABrickData;
   }
   static void *newArray_EdbEDABrickData(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDABrickData[nElements] : new ::EdbEDABrickData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDABrickData(void *p) {
      delete (static_cast<::EdbEDABrickData*>(p));
   }
   static void deleteArray_EdbEDABrickData(void *p) {
      delete [] (static_cast<::EdbEDABrickData*>(p));
   }
   static void destruct_EdbEDABrickData(void *p) {
      typedef ::EdbEDABrickData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDABrickData(TBuffer &buf, void *obj) {
      ((::EdbEDABrickData*)obj)->::EdbEDABrickData::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDABrickData

//______________________________________________________________________________
void EdbEDASelection::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDASelection.

   ::Error("EdbEDASelection::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDASelection(void *p) {
      return  p ? new(p) ::EdbEDASelection : new ::EdbEDASelection;
   }
   static void *newArray_EdbEDASelection(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDASelection[nElements] : new ::EdbEDASelection[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDASelection(void *p) {
      delete (static_cast<::EdbEDASelection*>(p));
   }
   static void deleteArray_EdbEDASelection(void *p) {
      delete [] (static_cast<::EdbEDASelection*>(p));
   }
   static void destruct_EdbEDASelection(void *p) {
      typedef ::EdbEDASelection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDASelection(TBuffer &buf, void *obj) {
      ((::EdbEDASelection*)obj)->::EdbEDASelection::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDASelection

//______________________________________________________________________________
void EdbEDA::Streamer(TBuffer &R__b)
{
   // Stream an object of class EdbEDA.

   EdbEDACamera::Streamer(R__b);
   EdbEDAIO::Streamer(R__b);
   EdbEDABrickData::Streamer(R__b);
   EdbEDASelection::Streamer(R__b);
   TNamed::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EdbEDA(void *p) {
      return  p ? new(p) ::EdbEDA : new ::EdbEDA;
   }
   static void *newArray_EdbEDA(Long_t nElements, void *p) {
      return p ? new(p) ::EdbEDA[nElements] : new ::EdbEDA[nElements];
   }
   // Wrapper around operator delete
   static void delete_EdbEDA(void *p) {
      delete (static_cast<::EdbEDA*>(p));
   }
   static void deleteArray_EdbEDA(void *p) {
      delete [] (static_cast<::EdbEDA*>(p));
   }
   static void destruct_EdbEDA(void *p) {
      typedef ::EdbEDA current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_EdbEDA(TBuffer &buf, void *obj) {
      ((::EdbEDA*)obj)->::EdbEDA::Streamer(buf);
   }
} // end of namespace ROOT for class ::EdbEDA

namespace {
  void TriggerDictionaryInitialization_EDACint_Impl() {
    static const char* headers[] = {
"EdbEDA.h",
"EdbEDAUtil.h",
"EdbEDATrackSet.h",
"EdbEDASets.h",
"EdbEDAMainTab.h",
"EdbEDATabs.h",
"EdbEDAPlotTab.h",
"EdbEDADecaySearch.h",
"EdbEDAShowerTab.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/jialwu/fedra2022/Fedra2022/include",
"/opt/root/root-6-32-04/include/",
"/home/jialwu/fedra2022/Fedra2022/src/libEDA/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "EDACint dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$EdbEDAUtil.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbIDDialog;
class __attribute__((annotate("$clingAutoload$EdbEDASets.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAArea;
class __attribute__((annotate("$clingAutoload$EdbEDASets.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAAreaSet;
class __attribute__((annotate("$clingAutoload$EdbEDASets.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAVertexSet;
class __attribute__((annotate("$clingAutoload$EdbEDASets.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAExtentionSet;
class __attribute__((annotate("$clingAutoload$EdbEDATrackSet.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDATrackComment;
class __attribute__((annotate("$clingAutoload$EdbEDATrackSet.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDATrackSelection;
class __attribute__((annotate("$clingAutoload$EdbEDATrackSet.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDATrackSet;
class __attribute__((annotate("$clingAutoload$EdbEDATrackSet.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDATrackSetTab;
class __attribute__((annotate("$clingAutoload$EdbEDAMainTab.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAMainTab;
class __attribute__((annotate("$clingAutoload$EdbEDATabs.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAListTab;
class __attribute__((annotate("$clingAutoload$EdbEDATabs.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAVertexTab;
class __attribute__((annotate("$clingAutoload$EdbEDATabs.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAMCTab;
class __attribute__((annotate("$clingAutoload$EdbEDATabs.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAPredTab;
class __attribute__((annotate("$clingAutoload$EdbEDATabs.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAOperationTab;
class __attribute__((annotate("$clingAutoload$EdbEDATabs.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDATrackSetList;
class __attribute__((annotate("$clingAutoload$EdbEDAPlotTab.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAPlotTab;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDATrackP;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDADecayVertex;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDASmallKink;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDADecaySearch;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDADecaySearchTab;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAFeedbackEntryT;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAFeedbackEntryV;
class __attribute__((annotate("$clingAutoload$EdbEDADecaySearch.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAFeedbackEditor;
class __attribute__((annotate("$clingAutoload$EdbEDAShowerTab.h")))  __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAShowerTab;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAObject;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAText;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDALine;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAOverlay;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDACamera;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDAIO;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDABrickData;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDASelection;
class __attribute__((annotate("$clingAutoload$EdbEDA.h")))  EdbEDA;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "EDACint dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "EdbEDA.h"
#include "EdbEDAUtil.h"
#include "EdbEDATrackSet.h"
#include "EdbEDASets.h"
#include "EdbEDAMainTab.h"
#include "EdbEDATabs.h"
#include "EdbEDAPlotTab.h"
#include "EdbEDADecaySearch.h"
#include "EdbEDAShowerTab.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EdbEDA", payloadCode, "@",
"EdbEDAArea", payloadCode, "@",
"EdbEDAAreaSet", payloadCode, "@",
"EdbEDABrickData", payloadCode, "@",
"EdbEDACamera", payloadCode, "@",
"EdbEDADecaySearch", payloadCode, "@",
"EdbEDADecaySearchTab", payloadCode, "@",
"EdbEDADecayVertex", payloadCode, "@",
"EdbEDAExtentionSet", payloadCode, "@",
"EdbEDAFeedbackEditor", payloadCode, "@",
"EdbEDAFeedbackEntryT", payloadCode, "@",
"EdbEDAFeedbackEntryV", payloadCode, "@",
"EdbEDAIO", payloadCode, "@",
"EdbEDALine", payloadCode, "@",
"EdbEDAListTab", payloadCode, "@",
"EdbEDAMCTab", payloadCode, "@",
"EdbEDAMainTab", payloadCode, "@",
"EdbEDAObject", payloadCode, "@",
"EdbEDAOperationTab", payloadCode, "@",
"EdbEDAOverlay", payloadCode, "@",
"EdbEDAPlotTab", payloadCode, "@",
"EdbEDAPredTab", payloadCode, "@",
"EdbEDASelection", payloadCode, "@",
"EdbEDAShowerTab", payloadCode, "@",
"EdbEDASmallKink", payloadCode, "@",
"EdbEDAText", payloadCode, "@",
"EdbEDATrackComment", payloadCode, "@",
"EdbEDATrackP", payloadCode, "@",
"EdbEDATrackSelection", payloadCode, "@",
"EdbEDATrackSet", payloadCode, "@",
"EdbEDATrackSetList", payloadCode, "@",
"EdbEDATrackSetTab", payloadCode, "@",
"EdbEDAVertexSet", payloadCode, "@",
"EdbEDAVertexTab", payloadCode, "@",
"EdbIDDialog", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("EDACint",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_EDACint_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_EDACint_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_EDACint() {
  TriggerDictionaryInitialization_EDACint_Impl();
}
