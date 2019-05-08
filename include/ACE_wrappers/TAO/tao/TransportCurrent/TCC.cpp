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


#include "TCC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_TAO_CounterT (
    ::CORBA::tk_alias,
    "IDL:TAO/CounterT:1.0",
    "CounterT",
    &CORBA::_tc_ulonglong);
  

namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_CounterT =
    &_tao_tc_TAO_CounterT;
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:101

TAO::Transport::NoContext::NoContext (void)
  : ::CORBA::UserException (
        "IDL:TAO/Transport/NoContext:1.0",
        "NoContext"
      )
{
}

TAO::Transport::NoContext::~NoContext (void)
{
}

TAO::Transport::NoContext::NoContext (const ::TAO::Transport::NoContext &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

TAO::Transport::NoContext&
TAO::Transport::NoContext::operator= (const ::TAO::Transport::NoContext &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

void TAO::Transport::NoContext::_tao_any_destructor (void *_tao_void_pointer)
{
  NoContext *_tao_tmp_pointer =
    static_cast<NoContext *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

TAO::Transport::NoContext *
TAO::Transport::NoContext::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<NoContext *> (_tao_excp);
}

const TAO::Transport::NoContext *
TAO::Transport::NoContext::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const NoContext *> (_tao_excp);
}

::CORBA::Exception *TAO::Transport::NoContext::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO::Transport::NoContext, 0);
  return retval;
}

::CORBA::Exception *
TAO::Transport::NoContext::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::TAO::Transport::NoContext (*this),
      0
    );
  return result;
}

void TAO::Transport::NoContext::_raise (void) const
{
  throw *this;
}

void TAO::Transport::NoContext::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void TAO::Transport::NoContext::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr TAO::Transport::NoContext::_tao_type (void) const
{
  return ::TAO::Transport::_tc_NoContext;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const * const 
    _tao_fields_TAO_Transport_NoContext = 0;
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_TAO_Transport_NoContext (
  ::CORBA::tk_except,
  "IDL:TAO/Transport/NoContext:1.0",
  "NoContext",
  _tao_fields_TAO_Transport_NoContext,
  0);


namespace TAO
{
  
  namespace Transport
  {
    ::CORBA::TypeCode_ptr const _tc_NoContext =
      &_tao_tc_TAO_Transport_NoContext;
  }
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for TAO::Transport::Current.

TAO::Transport::Current_ptr
TAO::Objref_Traits<TAO::Transport::Current>::duplicate (
    TAO::Transport::Current_ptr p)
{
  return TAO::Transport::Current::_duplicate (p);
}

void
TAO::Objref_Traits<TAO::Transport::Current>::release (
    TAO::Transport::Current_ptr p)
{
  ::CORBA::release (p);
}

TAO::Transport::Current_ptr
TAO::Objref_Traits<TAO::Transport::Current>::nil (void)
{
  return TAO::Transport::Current::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<TAO::Transport::Current>::marshal (
    const TAO::Transport::Current_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

TAO::Transport::Current::Current (void)
{}

TAO::Transport::Current::~Current (void)
{}

void 
TAO::Transport::Current::_tao_any_destructor (void *_tao_void_pointer)
{
  Current *_tao_tmp_pointer =
    static_cast<Current *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

TAO::Transport::Current_ptr
TAO::Transport::Current::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Current::_duplicate (
      dynamic_cast<Current_ptr> (_tao_objref)
    );
}

TAO::Transport::Current_ptr
TAO::Transport::Current::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Current::_duplicate (
      dynamic_cast<Current_ptr> (_tao_objref)
    );
}

TAO::Transport::Current_ptr
TAO::Transport::Current::_nil (void)
{
  return 0;
}

TAO::Transport::Current_ptr
TAO::Transport::Current::_duplicate (Current_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
TAO::Transport::Current::_tao_release (Current_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
TAO::Transport::Current::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:TAO/Transport/Current:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
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
      return false;
    }
}

const char* TAO::Transport::Current::_interface_repository_id (void) const
{
  return "IDL:TAO/Transport/Current:1.0";
}

::CORBA::Boolean
TAO::Transport::Current::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_TAO_Transport_Current (
    ::CORBA::tk_local_interface,
    "IDL:TAO/Transport/Current:1.0",
    "Current");
  

namespace TAO
{
  
  namespace Transport
  {
    ::CORBA::TypeCode_ptr const _tc_Current =
      &_tao_tc_TAO_Transport_Current;
  }
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/any_op_cs.cpp:45

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<TAO::Transport::NoContext>::demarshal_value (
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

namespace TAO
{
  
  namespace Transport
  {
    

    // Copying insertion.
    void operator<<= (
        ::CORBA::Any &_tao_any,
        const ::TAO::Transport::NoContext &_tao_elem
      )
    {
      TAO::Any_Dual_Impl_T< ::TAO::Transport::NoContext>::insert_copy (
          _tao_any,
          ::TAO::Transport::NoContext::_tao_any_destructor,
          ::TAO::Transport::_tc_NoContext,
          _tao_elem
        );
    }

    // Non-copying insertion.
    void operator<<= (
        ::CORBA::Any &_tao_any,
        ::TAO::Transport::NoContext *_tao_elem
      )
    {
      TAO::Any_Dual_Impl_T< ::TAO::Transport::NoContext>::insert (
          _tao_any,
          ::TAO::Transport::NoContext::_tao_any_destructor,
          ::TAO::Transport::_tc_NoContext,
          _tao_elem
        );
    }

    // Extraction to non-const pointer (deprecated).
    ::CORBA::Boolean operator>>= (
        const ::CORBA::Any &_tao_any,
        ::TAO::Transport::NoContext *&_tao_elem
      )
    {
      return _tao_any >>= const_cast<
          const ::TAO::Transport::NoContext *&> (
          _tao_elem
        );
    }

    // Extraction to const pointer.
    ::CORBA::Boolean operator>>= (
        const ::CORBA::Any &_tao_any,
        const ::TAO::Transport::NoContext *&_tao_elem
      )
    {
      return
        TAO::Any_Dual_Impl_T< ::TAO::Transport::NoContext>::extract (
            _tao_any,
            ::TAO::Transport::NoContext::_tao_any_destructor,
            ::TAO::Transport::_tc_NoContext,
            _tao_elem
          );
    }
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const TAO::Transport::NoContext &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO::Transport::NoContext>::insert_copy (
      _tao_any,
      TAO::Transport::NoContext::_tao_any_destructor,
      TAO::Transport::_tc_NoContext,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    TAO::Transport::NoContext *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<TAO::Transport::NoContext>::insert (
      _tao_any,
      TAO::Transport::NoContext::_tao_any_destructor,
      TAO::Transport::_tc_NoContext,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    TAO::Transport::NoContext *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const TAO::Transport::NoContext *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const TAO::Transport::NoContext *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<TAO::Transport::NoContext>::extract (
        _tao_any,
        TAO::Transport::NoContext::_tao_any_destructor,
        TAO::Transport::_tc_NoContext,
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
  Any_Impl_T<TAO::Transport::Current>::to_object (
      ::CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<TAO::Transport::Current>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<TAO::Transport::Current>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TAO
{
  
  namespace Transport
  {
    

    /// Copying insertion.
    void
    operator<<= (
        ::CORBA::Any &_tao_any,
        Current_ptr _tao_elem)
    {
      Current_ptr _tao_objptr =
        Current::_duplicate (_tao_elem);
      _tao_any <<= &_tao_objptr;
    }

    /// Non-copying insertion.
    void
    operator<<= (
        ::CORBA::Any &_tao_any,
        Current_ptr *_tao_elem)
    {
      TAO::Any_Impl_T<Current>::insert (
          _tao_any,
          Current::_tao_any_destructor,
          _tc_Current,
          *_tao_elem);
    }

    ::CORBA::Boolean
    operator>>= (
        const ::CORBA::Any &_tao_any,
        Current_ptr &_tao_elem)
    {
      return
        TAO::Any_Impl_T<Current>::extract (
            _tao_any,
            Current::_tao_any_destructor,
            _tc_Current,
            _tao_elem);
    }
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TAO::Transport::Current_ptr _tao_elem)
{
  TAO::Transport::Current_ptr _tao_objptr =
    TAO::Transport::Current::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    TAO::Transport::Current_ptr *_tao_elem)
{
  TAO::Any_Impl_T<TAO::Transport::Current>::insert (
      _tao_any,
      TAO::Transport::Current::_tao_any_destructor,
      TAO::Transport::_tc_Current,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    TAO::Transport::Current_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<TAO::Transport::Current>::extract (
        _tao_any,
        TAO::Transport::Current::_tao_any_destructor,
        TAO::Transport::_tc_Current,
        _tao_elem);
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
    const TAO::Transport::NoContext &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO::Transport::NoContext&
  )
{
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL

