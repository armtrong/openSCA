// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0a
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:150

#ifndef _TAO_PIDL_POLLABLEC_2DCYXK_H_
#define _TAO_PIDL_POLLABLEC_2DCYXK_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/SystemException.h"
#include "tao/UserException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Messaging_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace CORBA
{

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_CORBA_POLLABLESET__VAR_OUT_CH_)
#define _CORBA_POLLABLESET__VAR_OUT_CH_

  class PollableSet;
  typedef PollableSet *PollableSet_ptr;

  typedef
    TAO_Objref_Var_T<
        PollableSet
      >
    PollableSet_var;
  
  typedef
    TAO_Objref_Out_T<
        PollableSet
      >
    PollableSet_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_CORBA_POLLABLE__VAR_OUT_CH_)
#define _CORBA_POLLABLE__VAR_OUT_CH_

  class Pollable;
  typedef Pollable *Pollable_ptr;

  typedef
    TAO_Objref_Var_T<
        Pollable
      >
    Pollable_var;
  
  typedef
    TAO_Objref_Out_T<
        Pollable
      >
    Pollable_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_Messaging_Export Pollable
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef Pollable_ptr _ptr_type;
    typedef Pollable_var _var_type;
    typedef Pollable_out _out_type;

    // The static operations.
    static Pollable_ptr _duplicate (Pollable_ptr obj);

    static void _tao_release (Pollable_ptr obj);

    static Pollable_ptr _narrow (::CORBA::Object_ptr obj);
    static Pollable_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Pollable_ptr _nil (void);

    virtual ::CORBA::Boolean is_ready (
      ::CORBA::ULong timeout) = 0;

    virtual ::CORBA::PollableSet_ptr create_pollable_set (
      void) = 0;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Pollable (void);

    

    virtual ~Pollable (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Pollable (const Pollable &);

    void operator= (const Pollable &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_Pollable;

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_CORBA_DIIPOLLABLE__VAR_OUT_CH_)
#define _CORBA_DIIPOLLABLE__VAR_OUT_CH_

  class DIIPollable;
  typedef DIIPollable *DIIPollable_ptr;

  typedef
    TAO_Objref_Var_T<
        DIIPollable
      >
    DIIPollable_var;
  
  typedef
    TAO_Objref_Out_T<
        DIIPollable
      >
    DIIPollable_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_Messaging_Export DIIPollable
    : public virtual ::CORBA::Pollable
  
  {
  public:

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef DIIPollable_ptr _ptr_type;
    typedef DIIPollable_var _var_type;
    typedef DIIPollable_out _out_type;

    // The static operations.
    static DIIPollable_ptr _duplicate (DIIPollable_ptr obj);

    static void _tao_release (DIIPollable_ptr obj);

    static DIIPollable_ptr _narrow (::CORBA::Object_ptr obj);
    static DIIPollable_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static DIIPollable_ptr _nil (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    DIIPollable (void);

    

    virtual ~DIIPollable (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    DIIPollable (const DIIPollable &);

    void operator= (const DIIPollable &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_DIIPollable;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_Messaging_Export PollableSet
    : public virtual ::CORBA::Object
  {
  public:

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef PollableSet_ptr _ptr_type;
    typedef PollableSet_var _var_type;
    typedef PollableSet_out _out_type;

    // The static operations.
    static PollableSet_ptr _duplicate (PollableSet_ptr obj);

    static void _tao_release (PollableSet_ptr obj);

    static PollableSet_ptr _narrow (::CORBA::Object_ptr obj);
    static PollableSet_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static PollableSet_ptr _nil (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ch.cpp:43

    class TAO_Messaging_Export NoPossiblePollable : public ::CORBA::UserException
    {
    public:
      
      NoPossiblePollable (void);
      NoPossiblePollable (const NoPossiblePollable &);
      ~NoPossiblePollable (void);

      NoPossiblePollable &operator= (const NoPossiblePollable &);

      static void _tao_any_destructor (void *);

      static NoPossiblePollable *_downcast ( ::CORBA::Exception *);
      static const NoPossiblePollable *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
      

      virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
    };

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

    static ::CORBA::TypeCode_ptr const _tc_NoPossiblePollable;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ch.cpp:43

    class TAO_Messaging_Export UnknownPollable : public ::CORBA::UserException
    {
    public:
      
      UnknownPollable (void);
      UnknownPollable (const UnknownPollable &);
      ~UnknownPollable (void);

      UnknownPollable &operator= (const UnknownPollable &);

      static void _tao_any_destructor (void *);

      static UnknownPollable *_downcast ( ::CORBA::Exception *);
      static const UnknownPollable *_downcast ( ::CORBA::Exception const *);

      static ::CORBA::Exception *_alloc (void);

      virtual ::CORBA::Exception *_tao_duplicate (void) const;

      virtual void _raise (void) const;

      virtual void _tao_encode (TAO_OutputCDR &cdr) const;
      virtual void _tao_decode (TAO_InputCDR &cdr);
      

      virtual ::CORBA::TypeCode_ptr _tao_type (void) const;
    };

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

    static ::CORBA::TypeCode_ptr const _tc_UnknownPollable;

    virtual ::CORBA::DIIPollable_ptr create_dii_pollable (
      void) = 0;

    virtual void add_pollable (
      ::CORBA::Pollable_ptr potential) = 0;

    virtual ::CORBA::Pollable_ptr get_ready_pollable (
      ::CORBA::ULong timeout) = 0;

    virtual void remove (
      ::CORBA::Pollable_ptr potential) = 0;

    virtual ::CORBA::UShort number_left (
      void) = 0;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    PollableSet (void);

    

    virtual ~PollableSet (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    PollableSet (const PollableSet &);

    void operator= (const PollableSet &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_PollableSet;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module CORBA

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_CORBA_POLLABLE__TRAITS_)
#define _CORBA_POLLABLE__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::CORBA::Pollable>
  {
    static ::CORBA::Pollable_ptr duplicate (
        ::CORBA::Pollable_ptr p);
    static void release (
        ::CORBA::Pollable_ptr p);
    static ::CORBA::Pollable_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CORBA::Pollable_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CORBA_DIIPOLLABLE__TRAITS_)
#define _CORBA_DIIPOLLABLE__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::CORBA::DIIPollable>
  {
    static ::CORBA::DIIPollable_ptr duplicate (
        ::CORBA::DIIPollable_ptr p);
    static void release (
        ::CORBA::DIIPollable_ptr p);
    static ::CORBA::DIIPollable_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CORBA::DIIPollable_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_CORBA_POLLABLESET__TRAITS_)
#define _CORBA_POLLABLESET__TRAITS_

  template<>
  struct TAO_Messaging_Export Objref_Traits< ::CORBA::PollableSet>
  {
    static ::CORBA::PollableSet_ptr duplicate (
        ::CORBA::PollableSet_ptr p);
    static void release (
        ::CORBA::PollableSet_ptr p);
    static ::CORBA::PollableSet_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::CORBA::PollableSet_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* ifndef */

