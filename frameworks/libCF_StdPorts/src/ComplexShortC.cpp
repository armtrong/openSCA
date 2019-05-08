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
// .\be\be_codegen.cpp:375


#include "../include/ComplexShortC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "../include/ComplexShortC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for StandardInterfaces::ComplexShort.

StandardInterfaces::ComplexShort_ptr
TAO::Objref_Traits<StandardInterfaces::ComplexShort>::duplicate (
    StandardInterfaces::ComplexShort_ptr p)
{
  return StandardInterfaces::ComplexShort::_duplicate (p);
}

void
TAO::Objref_Traits<StandardInterfaces::ComplexShort>::release (
    StandardInterfaces::ComplexShort_ptr p)
{
  ::CORBA::release (p);
}

StandardInterfaces::ComplexShort_ptr
TAO::Objref_Traits<StandardInterfaces::ComplexShort>::nil (void)
{
  return StandardInterfaces::ComplexShort::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<StandardInterfaces::ComplexShort>::marshal (
    const StandardInterfaces::ComplexShort_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*StandardInterfaces__TAO_ComplexShort_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj) = 0;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
StandardInterfaces::ComplexShort::pushPacket (
  const ::JTRS::ShortSequence & I,
  const ::JTRS::ShortSequence & Q)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_ComplexShort_Proxy_Broker_ == 0)
    {
      StandardInterfaces_ComplexShort_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::JTRS::ShortSequence>::in_arg_val _tao_I (I);
  TAO::Arg_Traits< ::JTRS::ShortSequence>::in_arg_val _tao_Q (Q);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_I,
      &_tao_Q
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      3,
      "pushPacket",
      10,
      this->the_TAO_ComplexShort_Proxy_Broker_
    );

  _tao_call.invoke (0, 0);
}

StandardInterfaces::ComplexShort::ComplexShort (void)
 : the_TAO_ComplexShort_Proxy_Broker_ (0)
{
  this->StandardInterfaces_ComplexShort_setup_collocation ();
}

void
StandardInterfaces::ComplexShort::StandardInterfaces_ComplexShort_setup_collocation ()
{
  if (::StandardInterfaces__TAO_ComplexShort_Proxy_Broker_Factory_function_pointer)
    {
      this->the_TAO_ComplexShort_Proxy_Broker_ =
        ::StandardInterfaces__TAO_ComplexShort_Proxy_Broker_Factory_function_pointer (this);
    }
}

StandardInterfaces::ComplexShort::~ComplexShort (void)
{}

void 
StandardInterfaces::ComplexShort::_tao_any_destructor (void *_tao_void_pointer)
{
  ComplexShort *_tao_tmp_pointer =
    static_cast<ComplexShort *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

StandardInterfaces::ComplexShort_ptr
StandardInterfaces::ComplexShort::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ComplexShort>::narrow (
        _tao_objref,
        "IDL:StandardInterfaces/ComplexShort:1.0",
        StandardInterfaces__TAO_ComplexShort_Proxy_Broker_Factory_function_pointer
      );
}

StandardInterfaces::ComplexShort_ptr
StandardInterfaces::ComplexShort::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<ComplexShort>::unchecked_narrow (
        _tao_objref,
        "IDL:StandardInterfaces/ComplexShort:1.0",
        StandardInterfaces__TAO_ComplexShort_Proxy_Broker_Factory_function_pointer
      );
}

StandardInterfaces::ComplexShort_ptr
StandardInterfaces::ComplexShort::_nil (void)
{
  return 0;
}

StandardInterfaces::ComplexShort_ptr
StandardInterfaces::ComplexShort::_duplicate (ComplexShort_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
StandardInterfaces::ComplexShort::_tao_release (ComplexShort_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
StandardInterfaces::ComplexShort::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:StandardInterfaces/ComplexShort:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* StandardInterfaces::ComplexShort::_interface_repository_id (void) const
{
  return "IDL:StandardInterfaces/ComplexShort:1.0";
}

::CORBA::Boolean
StandardInterfaces::ComplexShort::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_StandardInterfaces_ComplexShort (
    ::CORBA::tk_objref,
    "IDL:StandardInterfaces/ComplexShort:1.0",
    "ComplexShort");
  

namespace StandardInterfaces
{
  ::CORBA::TypeCode_ptr const _tc_ComplexShort =
    &_tao_tc_StandardInterfaces_ComplexShort;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_cs.cpp:46
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<StandardInterfaces::ComplexShort>::to_object (
      ::CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace StandardInterfaces
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ComplexShort_ptr _tao_elem)
  {
    ComplexShort_ptr _tao_objptr =
      ComplexShort::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      ComplexShort_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<ComplexShort>::insert (
        _tao_any,
        ComplexShort::_tao_any_destructor,
        _tc_ComplexShort,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      ComplexShort_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<ComplexShort>::extract (
          _tao_any,
          ComplexShort::_tao_any_destructor,
          _tc_ComplexShort,
          _tao_elem);
  }
}

#else

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    StandardInterfaces::ComplexShort_ptr _tao_elem)
{
  StandardInterfaces::ComplexShort_ptr _tao_objptr =
    StandardInterfaces::ComplexShort::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    StandardInterfaces::ComplexShort_ptr *_tao_elem)
{
  TAO::Any_Impl_T<StandardInterfaces::ComplexShort>::insert (
      _tao_any,
      StandardInterfaces::ComplexShort::_tao_any_destructor,
      StandardInterfaces::_tc_ComplexShort,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    StandardInterfaces::ComplexShort_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<StandardInterfaces::ComplexShort>::extract (
        _tao_any,
        StandardInterfaces::ComplexShort::_tao_any_destructor,
        StandardInterfaces::_tc_ComplexShort,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL



#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_cs.cpp:53

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const StandardInterfaces::ComplexShort_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    StandardInterfaces::ComplexShort_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::StandardInterfaces::ComplexShort RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        StandardInterfaces__TAO_ComplexShort_Proxy_Broker_Factory_function_pointer
      );
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL



