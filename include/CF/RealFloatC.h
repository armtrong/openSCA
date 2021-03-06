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

#ifndef _TAO_IDL_REALFLOATC_USQNXW_H_
#define _TAO_IDL_REALFLOATC_USQNXW_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "PortTypesC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:162
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace StandardInterfaces
{

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_STANDARDINTERFACES_REALFLOAT__VAR_OUT_CH_)
#define _STANDARDINTERFACES_REALFLOAT__VAR_OUT_CH_

  class RealFloat;
  typedef RealFloat *RealFloat_ptr;

  typedef
    TAO_Objref_Var_T<
        RealFloat
      >
    RealFloat_var;
  
  typedef
    TAO_Objref_Out_T<
        RealFloat
      >
    RealFloat_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class  RealFloat
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<RealFloat>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef RealFloat_ptr _ptr_type;
    typedef RealFloat_var _var_type;
    typedef RealFloat_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static RealFloat_ptr _duplicate (RealFloat_ptr obj);

    static void _tao_release (RealFloat_ptr obj);

    static RealFloat_ptr _narrow (::CORBA::Object_ptr obj);
    static RealFloat_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static RealFloat_ptr _nil (void);

    virtual void pushPacket (
      const ::PortTypes::FloatSequence & I);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_RealFloat_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    RealFloat (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void StandardInterfaces_RealFloat_setup_collocation (void);

    // Concrete non-local interface only.
    RealFloat (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    RealFloat (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~RealFloat (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    RealFloat (const RealFloat &);

    void operator= (const RealFloat &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern  ::CORBA::TypeCode_ptr const _tc_RealFloat;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module StandardInterfaces

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_STANDARDINTERFACES_REALFLOAT__ARG_TRAITS_)
#define _STANDARDINTERFACES_REALFLOAT__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::StandardInterfaces::RealFloat>
    : public
        Object_Arg_Traits_T<
            ::StandardInterfaces::RealFloat_ptr,
            ::StandardInterfaces::RealFloat_var,
            ::StandardInterfaces::RealFloat_out,
            TAO::Objref_Traits<StandardInterfaces::RealFloat>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:204

extern 
TAO::Collocation_Proxy_Broker *
(*StandardInterfaces__TAO_RealFloat_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_STANDARDINTERFACES_REALFLOAT__TRAITS_)
#define _STANDARDINTERFACES_REALFLOAT__TRAITS_

  template<>
  struct  Objref_Traits< ::StandardInterfaces::RealFloat>
  {
    static ::StandardInterfaces::RealFloat_ptr duplicate (
        ::StandardInterfaces::RealFloat_ptr p);
    static void release (
        ::StandardInterfaces::RealFloat_ptr p);
    static ::StandardInterfaces::RealFloat_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::StandardInterfaces::RealFloat_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace StandardInterfaces
{
   void operator<<= ( ::CORBA::Any &, RealFloat_ptr); // copying
   void operator<<= ( ::CORBA::Any &, RealFloat_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, RealFloat_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, StandardInterfaces::RealFloat_ptr); // copying
 void operator<<= (::CORBA::Any &, StandardInterfaces::RealFloat_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, StandardInterfaces::RealFloat_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const StandardInterfaces::RealFloat_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, StandardInterfaces::RealFloat_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581
#if defined (__ACE_INLINE__)
#include "RealFloatC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

