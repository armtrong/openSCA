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


#include "CosTradingDynamicC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "CosTradingDynamicC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ctor.cpp:56

CosTradingDynamic::DPEvalFailure::DPEvalFailure (
    const char * _tao_name,
    const ::CORBA::TypeCode_ptr  _tao_returned_type,
    const ::CORBA::Any & _tao_extra_info)
  : ::CORBA::UserException (
        "IDL:omg.org/CosTradingDynamic/DPEvalFailure:1.0",
        "DPEvalFailure"
      )
{
  this->name = ::CORBA::string_dup (_tao_name);
  this->returned_type = CORBA::TypeCode::_duplicate (_tao_returned_type);
  this->extra_info = _tao_extra_info;
}



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:101

CosTradingDynamic::DPEvalFailure::DPEvalFailure (void)
  : ::CORBA::UserException (
        "IDL:omg.org/CosTradingDynamic/DPEvalFailure:1.0",
        "DPEvalFailure"
      )
{
}

CosTradingDynamic::DPEvalFailure::~DPEvalFailure (void)
{
}

CosTradingDynamic::DPEvalFailure::DPEvalFailure (const ::CosTradingDynamic::DPEvalFailure &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
  this->name = ::CORBA::string_dup (_tao_excp.name.in ());
  this->returned_type = CORBA::TypeCode::_duplicate (_tao_excp.returned_type.in ());
  this->extra_info = _tao_excp.extra_info;
}

CosTradingDynamic::DPEvalFailure&
CosTradingDynamic::DPEvalFailure::operator= (const ::CosTradingDynamic::DPEvalFailure &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  this->name = ::CORBA::string_dup (_tao_excp.name.in ());
  this->returned_type = CORBA::TypeCode::_duplicate (_tao_excp.returned_type.in ());
  this->extra_info = _tao_excp.extra_info;
  return *this;
}

void CosTradingDynamic::DPEvalFailure::_tao_any_destructor (void *_tao_void_pointer)
{
  DPEvalFailure *_tao_tmp_pointer =
    static_cast<DPEvalFailure *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

CosTradingDynamic::DPEvalFailure *
CosTradingDynamic::DPEvalFailure::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<DPEvalFailure *> (_tao_excp);
}

const CosTradingDynamic::DPEvalFailure *
CosTradingDynamic::DPEvalFailure::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const DPEvalFailure *> (_tao_excp);
}

::CORBA::Exception *CosTradingDynamic::DPEvalFailure::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CosTradingDynamic::DPEvalFailure, 0);
  return retval;
}

::CORBA::Exception *
CosTradingDynamic::DPEvalFailure::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::CosTradingDynamic::DPEvalFailure (*this),
      0
    );
  return result;
}

void CosTradingDynamic::DPEvalFailure::_raise (void) const
{
  throw *this;
}

void CosTradingDynamic::DPEvalFailure::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void CosTradingDynamic::DPEvalFailure::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr CosTradingDynamic::DPEvalFailure::_tao_type (void) const
{
  return ::CosTradingDynamic::_tc_DPEvalFailure;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_CosTradingDynamic_DPEvalFailure[] =
      {
        { "name", &CosTrading::_tc_PropertyName },
        { "returned_type", &CORBA::_tc_TypeCode },
        { "extra_info", &CORBA::_tc_any }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_CosTradingDynamic_DPEvalFailure (
  ::CORBA::tk_except,
  "IDL:omg.org/CosTradingDynamic/DPEvalFailure:1.0",
  "DPEvalFailure",
  _tao_fields_CosTradingDynamic_DPEvalFailure,
  3);


namespace CosTradingDynamic
{
  ::CORBA::TypeCode_ptr const _tc_DPEvalFailure =
    &_tao_tc_CosTradingDynamic_DPEvalFailure;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for CosTradingDynamic::DynamicPropEval.

CosTradingDynamic::DynamicPropEval_ptr
TAO::Objref_Traits<CosTradingDynamic::DynamicPropEval>::duplicate (
    CosTradingDynamic::DynamicPropEval_ptr p)
{
  return CosTradingDynamic::DynamicPropEval::_duplicate (p);
}

void
TAO::Objref_Traits<CosTradingDynamic::DynamicPropEval>::release (
    CosTradingDynamic::DynamicPropEval_ptr p)
{
  ::CORBA::release (p);
}

CosTradingDynamic::DynamicPropEval_ptr
TAO::Objref_Traits<CosTradingDynamic::DynamicPropEval>::nil (void)
{
  return CosTradingDynamic::DynamicPropEval::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<CosTradingDynamic::DynamicPropEval>::marshal (
    const CosTradingDynamic::DynamicPropEval_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*CosTradingDynamic__TAO_DynamicPropEval_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj) = 0;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

::CORBA::Any *
CosTradingDynamic::DynamicPropEval::evalDP (
  const char * name,
  ::CORBA::TypeCode_ptr returned_type,
  const ::CORBA::Any & extra_info)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_DynamicPropEval_Proxy_Broker_ == 0)
    {
      CosTradingDynamic_DynamicPropEval_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::CORBA::Any>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);
  TAO::Arg_Traits< ::CORBA::TypeCode>::in_arg_val _tao_returned_type (returned_type);
  TAO::Arg_Traits< ::CORBA::Any>::in_arg_val _tao_extra_info (extra_info);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name,
      &_tao_returned_type,
      &_tao_extra_info
    };

  static TAO::Exception_Data
  _tao_CosTradingDynamic_DynamicPropEval_evalDP_exceptiondata [] = 
    {
      {
        "IDL:omg.org/CosTradingDynamic/DPEvalFailure:1.0",
        CosTradingDynamic::DPEvalFailure::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosTradingDynamic::_tc_DPEvalFailure
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      4,
      "evalDP",
      6,
      this->the_TAO_DynamicPropEval_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosTradingDynamic_DynamicPropEval_evalDP_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

CosTradingDynamic::DynamicPropEval::DynamicPropEval (void)
 : the_TAO_DynamicPropEval_Proxy_Broker_ (0)
{
  this->CosTradingDynamic_DynamicPropEval_setup_collocation ();
}

void
CosTradingDynamic::DynamicPropEval::CosTradingDynamic_DynamicPropEval_setup_collocation ()
{
  if (::CosTradingDynamic__TAO_DynamicPropEval_Proxy_Broker_Factory_function_pointer)
    {
      this->the_TAO_DynamicPropEval_Proxy_Broker_ =
        ::CosTradingDynamic__TAO_DynamicPropEval_Proxy_Broker_Factory_function_pointer (this);
    }
}

CosTradingDynamic::DynamicPropEval::~DynamicPropEval (void)
{}

void 
CosTradingDynamic::DynamicPropEval::_tao_any_destructor (void *_tao_void_pointer)
{
  DynamicPropEval *_tao_tmp_pointer =
    static_cast<DynamicPropEval *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

CosTradingDynamic::DynamicPropEval_ptr
CosTradingDynamic::DynamicPropEval::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<DynamicPropEval>::narrow (
        _tao_objref,
        "IDL:omg.org/CosTradingDynamic/DynamicPropEval:1.0",
        CosTradingDynamic__TAO_DynamicPropEval_Proxy_Broker_Factory_function_pointer
      );
}

CosTradingDynamic::DynamicPropEval_ptr
CosTradingDynamic::DynamicPropEval::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<DynamicPropEval>::unchecked_narrow (
        _tao_objref,
        "IDL:omg.org/CosTradingDynamic/DynamicPropEval:1.0",
        CosTradingDynamic__TAO_DynamicPropEval_Proxy_Broker_Factory_function_pointer
      );
}

CosTradingDynamic::DynamicPropEval_ptr
CosTradingDynamic::DynamicPropEval::_nil (void)
{
  return 0;
}

CosTradingDynamic::DynamicPropEval_ptr
CosTradingDynamic::DynamicPropEval::_duplicate (DynamicPropEval_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
CosTradingDynamic::DynamicPropEval::_tao_release (DynamicPropEval_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
CosTradingDynamic::DynamicPropEval::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CosTradingDynamic/DynamicPropEval:1.0"
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

const char* CosTradingDynamic::DynamicPropEval::_interface_repository_id (void) const
{
  return "IDL:omg.org/CosTradingDynamic/DynamicPropEval:1.0";
}

::CORBA::Boolean
CosTradingDynamic::DynamicPropEval::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_CosTradingDynamic_DynamicPropEval (
    ::CORBA::tk_objref,
    "IDL:omg.org/CosTradingDynamic/DynamicPropEval:1.0",
    "DynamicPropEval");
  

namespace CosTradingDynamic
{
  ::CORBA::TypeCode_ptr const _tc_DynamicPropEval =
    &_tao_tc_CosTradingDynamic_DynamicPropEval;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_CosTradingDynamic_DynamicProp[] =
      {
        { "eval_if", &CosTradingDynamic::_tc_DynamicPropEval },
        { "returned_type", &CORBA::_tc_TypeCode },
        { "extra_info", &CORBA::_tc_any }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_CosTradingDynamic_DynamicProp (
  ::CORBA::tk_struct,
  "IDL:omg.org/CosTradingDynamic/DynamicProp:1.0",
  "DynamicProp",
  _tao_fields_CosTradingDynamic_DynamicProp,
  3);


namespace CosTradingDynamic
{
  ::CORBA::TypeCode_ptr const _tc_DynamicProp =
    &_tao_tc_CosTradingDynamic_DynamicProp;
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_cs.cpp:58

void 
CosTradingDynamic::DynamicProp::_tao_any_destructor (
    void *_tao_void_pointer)
{
  DynamicProp *_tao_tmp_pointer =
    static_cast<DynamicProp *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/any_op_cs.cpp:45

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<CosTradingDynamic::DPEvalFailure>::demarshal_value (
      TAO_InputCDR & cdr
    )
  {
    ::CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }
    
    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception &)
      {
        return false;
      }

    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTradingDynamic
{
  

  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CosTradingDynamic::DPEvalFailure &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CosTradingDynamic::DPEvalFailure>::insert_copy (
        _tao_any,
        ::CosTradingDynamic::DPEvalFailure::_tao_any_destructor,
        ::CosTradingDynamic::_tc_DPEvalFailure,
        _tao_elem
      );
  }

  // Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::CosTradingDynamic::DPEvalFailure *_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CosTradingDynamic::DPEvalFailure>::insert (
        _tao_any,
        ::CosTradingDynamic::DPEvalFailure::_tao_any_destructor,
        ::CosTradingDynamic::_tc_DPEvalFailure,
        _tao_elem
      );
  }

  // Extraction to non-const pointer (deprecated).
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::CosTradingDynamic::DPEvalFailure *&_tao_elem
    )
  {
    return _tao_any >>= const_cast<
        const ::CosTradingDynamic::DPEvalFailure *&> (
        _tao_elem
      );
  }

  // Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::CosTradingDynamic::DPEvalFailure *&_tao_elem
    )
  {
    return
      TAO::Any_Dual_Impl_T< ::CosTradingDynamic::DPEvalFailure>::extract (
          _tao_any,
          ::CosTradingDynamic::DPEvalFailure::_tao_any_destructor,
          ::CosTradingDynamic::_tc_DPEvalFailure,
          _tao_elem
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CosTradingDynamic::DPEvalFailure &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CosTradingDynamic::DPEvalFailure>::insert_copy (
      _tao_any,
      CosTradingDynamic::DPEvalFailure::_tao_any_destructor,
      CosTradingDynamic::_tc_DPEvalFailure,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CosTradingDynamic::DPEvalFailure *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CosTradingDynamic::DPEvalFailure>::insert (
      _tao_any,
      CosTradingDynamic::DPEvalFailure::_tao_any_destructor,
      CosTradingDynamic::_tc_DPEvalFailure,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CosTradingDynamic::DPEvalFailure *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CosTradingDynamic::DPEvalFailure *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CosTradingDynamic::DPEvalFailure *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CosTradingDynamic::DPEvalFailure>::extract (
        _tao_any,
        CosTradingDynamic::DPEvalFailure::_tao_any_destructor,
        CosTradingDynamic::_tc_DPEvalFailure,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_cs.cpp:46

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CosTradingDynamic::DynamicPropEval>::to_object (
      ::CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTradingDynamic
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DynamicPropEval_ptr _tao_elem)
  {
    DynamicPropEval_ptr _tao_objptr =
      DynamicPropEval::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      DynamicPropEval_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<DynamicPropEval>::insert (
        _tao_any,
        DynamicPropEval::_tao_any_destructor,
        _tc_DynamicPropEval,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      DynamicPropEval_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<DynamicPropEval>::extract (
          _tao_any,
          DynamicPropEval::_tao_any_destructor,
          _tc_DynamicPropEval,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CosTradingDynamic::DynamicPropEval_ptr _tao_elem)
{
  CosTradingDynamic::DynamicPropEval_ptr _tao_objptr =
    CosTradingDynamic::DynamicPropEval::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CosTradingDynamic::DynamicPropEval_ptr *_tao_elem)
{
  TAO::Any_Impl_T<CosTradingDynamic::DynamicPropEval>::insert (
      _tao_any,
      CosTradingDynamic::DynamicPropEval::_tao_any_destructor,
      CosTradingDynamic::_tc_DynamicPropEval,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    CosTradingDynamic::DynamicPropEval_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<CosTradingDynamic::DynamicPropEval>::extract (
        _tao_any,
        CosTradingDynamic::DynamicPropEval::_tao_any_destructor,
        CosTradingDynamic::_tc_DynamicPropEval,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_cs.cpp:45



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosTradingDynamic
{
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CosTradingDynamic::DynamicProp &_tao_elem
    )
  {
    if (0 == &_tao_elem) // Trying to de-reference NULL object
      _tao_any <<= static_cast< ::CosTradingDynamic::DynamicProp *>( 0 ); // Use non-copying insertion of a NULL
    else
      TAO::Any_Dual_Impl_T< ::CosTradingDynamic::DynamicProp>::insert_copy (
          _tao_any,
          ::CosTradingDynamic::DynamicProp::_tao_any_destructor,
          ::CosTradingDynamic::_tc_DynamicProp,
          _tao_elem
        );
  }

  // Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any, ::
      CosTradingDynamic::DynamicProp *_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CosTradingDynamic::DynamicProp>::insert (
        _tao_any,
        ::CosTradingDynamic::DynamicProp::_tao_any_destructor,
        ::CosTradingDynamic::_tc_DynamicProp,
        _tao_elem
      );
  }

  // Extraction to non-const pointer (deprecated).
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::CosTradingDynamic::DynamicProp *&_tao_elem
    )
  {
    return _tao_any >>= const_cast<
        const ::CosTradingDynamic::DynamicProp *&> (
        _tao_elem
      );
  }

  // Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::CosTradingDynamic::DynamicProp *&_tao_elem
    )
  {
    return
      TAO::Any_Dual_Impl_T< ::CosTradingDynamic::DynamicProp>::extract (
          _tao_any,
          ::CosTradingDynamic::DynamicProp::_tao_any_destructor,
          ::CosTradingDynamic::_tc_DynamicProp,
          _tao_elem
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CosTradingDynamic::DynamicProp &_tao_elem
  )
{
  if (0 == &_tao_elem) // Trying to de-reference NULL object
    _tao_any <<= static_cast<CosTradingDynamic::DynamicProp *>( 0 ); // Use non-copying insertion of a NULL
  else
    TAO::Any_Dual_Impl_T<CosTradingDynamic::DynamicProp>::insert_copy (
        _tao_any,
        CosTradingDynamic::DynamicProp::_tao_any_destructor,
        CosTradingDynamic::_tc_DynamicProp,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CosTradingDynamic::DynamicProp *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CosTradingDynamic::DynamicProp>::insert (
      _tao_any,
      CosTradingDynamic::DynamicProp::_tao_any_destructor,
      CosTradingDynamic::_tc_DynamicProp,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CosTradingDynamic::DynamicProp *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CosTradingDynamic::DynamicProp *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CosTradingDynamic::DynamicProp *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CosTradingDynamic::DynamicProp>::extract (
        _tao_any,
        CosTradingDynamic::DynamicProp::_tao_any_destructor,
        CosTradingDynamic::_tc_DynamicProp,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/cdr_op_cs.cpp:49

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CosTradingDynamic::DPEvalFailure &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      return (
        (strm << _tao_aggregate.name.in ()) &&
        (strm << _tao_aggregate.returned_type.in ()) &&
        (strm << _tao_aggregate.extra_info)
       );
    }
  else
    {
      return false;
    }
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CosTradingDynamic::DPEvalFailure &_tao_aggregate
  )
{
  // Demarshal the members.
  return (
    (strm >> _tao_aggregate.name.out ()) &&
    (strm >> _tao_aggregate.returned_type.out ()) &&
    (strm >> _tao_aggregate.extra_info)
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_cs.cpp:53


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CosTradingDynamic::DynamicPropEval_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CosTradingDynamic::DynamicPropEval_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::CosTradingDynamic::DynamicPropEval RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        CosTradingDynamic__TAO_DynamicPropEval_Proxy_Broker_Factory_function_pointer
      );
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_cs.cpp:52


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CosTradingDynamic::DynamicProp &_tao_aggregate)
{
  return
    ::CORBA::Object::marshal (
        _tao_aggregate.eval_if.in (),
        strm
      ) &&
    (strm << _tao_aggregate.returned_type.in ()) &&
    (strm << _tao_aggregate.extra_info);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CosTradingDynamic::DynamicProp &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.eval_if.out ()) &&
    (strm >> _tao_aggregate.returned_type.out ()) &&
    (strm >> _tao_aggregate.extra_info);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


