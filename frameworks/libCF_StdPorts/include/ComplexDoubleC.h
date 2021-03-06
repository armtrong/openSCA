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

#ifndef _TAO_IDL_COMPLEXDOUBLEC_BGNBBC_H_
#define _TAO_IDL_COMPLEXDOUBLEC_BGNBBC_H_


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

#if !defined (_STANDARDINTERFACES_COMPLEXDOUBLE__VAR_OUT_CH_)
#define _STANDARDINTERFACES_COMPLEXDOUBLE__VAR_OUT_CH_

  class ComplexDouble;
  typedef ComplexDouble *ComplexDouble_ptr;

  typedef
    TAO_Objref_Var_T<
        ComplexDouble
      >
    ComplexDouble_var;
  
  typedef
    TAO_Objref_Out_T<
        ComplexDouble
      >
    ComplexDouble_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class  ComplexDouble
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<ComplexDouble>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef ComplexDouble_ptr _ptr_type;
    typedef ComplexDouble_var _var_type;
    typedef ComplexDouble_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static ComplexDouble_ptr _duplicate (ComplexDouble_ptr obj);

    static void _tao_release (ComplexDouble_ptr obj);

    static ComplexDouble_ptr _narrow (::CORBA::Object_ptr obj);
    static ComplexDouble_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ComplexDouble_ptr _nil (void);

    virtual void pushPacket (
      const ::PortTypes::DoubleSequence & I,
      const ::PortTypes::DoubleSequence & Q);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_ComplexDouble_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    ComplexDouble (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void StandardInterfaces_ComplexDouble_setup_collocation (void);

    // Concrete non-local interface only.
    ComplexDouble (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    ComplexDouble (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~ComplexDouble (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    ComplexDouble (const ComplexDouble &);

    void operator= (const ComplexDouble &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern  ::CORBA::TypeCode_ptr const _tc_ComplexDouble;

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

#if !defined (_STANDARDINTERFACES_COMPLEXDOUBLE__ARG_TRAITS_)
#define _STANDARDINTERFACES_COMPLEXDOUBLE__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::StandardInterfaces::ComplexDouble>
    : public
        Object_Arg_Traits_T<
            ::StandardInterfaces::ComplexDouble_ptr,
            ::StandardInterfaces::ComplexDouble_var,
            ::StandardInterfaces::ComplexDouble_out,
            TAO::Objref_Traits<StandardInterfaces::ComplexDouble>,
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
(*StandardInterfaces__TAO_ComplexDouble_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_STANDARDINTERFACES_COMPLEXDOUBLE__TRAITS_)
#define _STANDARDINTERFACES_COMPLEXDOUBLE__TRAITS_

  template<>
  struct  Objref_Traits< ::StandardInterfaces::ComplexDouble>
  {
    static ::StandardInterfaces::ComplexDouble_ptr duplicate (
        ::StandardInterfaces::ComplexDouble_ptr p);
    static void release (
        ::StandardInterfaces::ComplexDouble_ptr p);
    static ::StandardInterfaces::ComplexDouble_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::StandardInterfaces::ComplexDouble_ptr p,
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
   void operator<<= ( ::CORBA::Any &, ComplexDouble_ptr); // copying
   void operator<<= ( ::CORBA::Any &, ComplexDouble_ptr *); // non-copying
   ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ComplexDouble_ptr &);
}

#else


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 void operator<<= (::CORBA::Any &, StandardInterfaces::ComplexDouble_ptr); // copying
 void operator<<= (::CORBA::Any &, StandardInterfaces::ComplexDouble_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, StandardInterfaces::ComplexDouble_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const StandardInterfaces::ComplexDouble_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, StandardInterfaces::ComplexDouble_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581
#if defined (__ACE_INLINE__)
#include "ComplexDoubleC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

