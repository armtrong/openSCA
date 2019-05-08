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

#include "EndpointPolicyA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_EndpointPolicy_EndpointValueBase (
    ::CORBA::tk_local_interface,
    "IDL:EndpointPolicy/EndpointValueBase:1.0",
    "EndpointValueBase");
  

namespace EndpointPolicy
{
  ::CORBA::TypeCode_ptr const _tc_EndpointValueBase =
    &_tao_tc_EndpointPolicy_EndpointValueBase;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:460


#ifndef _TAO_TYPECODE_EndpointPolicy_EndpointList_GUARD
#define _TAO_TYPECODE_EndpointPolicy_EndpointList_GUARD


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace TypeCode
  {
    namespace
    {
      TAO::TypeCode::Sequence< ::CORBA::TypeCode_ptr const *,
                              TAO::Null_RefCount_Policy>
        EndpointPolicy_EndpointList_0 (
          ::CORBA::tk_sequence,
          &EndpointPolicy::_tc_EndpointValueBase,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_EndpointPolicy_EndpointList_0 =
        &EndpointPolicy_EndpointList_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_EndpointPolicy_EndpointList_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_EndpointPolicy_EndpointList (
    ::CORBA::tk_alias,
    "IDL:EndpointPolicy/EndpointList:1.0",
    "EndpointList",
    &TAO::TypeCode::tc_EndpointPolicy_EndpointList_0);
  

namespace EndpointPolicy
{
  ::CORBA::TypeCode_ptr const _tc_EndpointList =
    &_tao_tc_EndpointPolicy_EndpointList;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_EndpointPolicy_Policy (
    ::CORBA::tk_local_interface,
    "IDL:EndpointPolicy/Policy:1.0",
    "Policy");
  

namespace EndpointPolicy
{
  ::CORBA::TypeCode_ptr const _tc_Policy =
    &_tao_tc_EndpointPolicy_Policy;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_cs.cpp:46

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<EndpointPolicy::EndpointValueBase>::to_object (
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
  Any_Impl_T<EndpointPolicy::EndpointValueBase>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<EndpointPolicy::EndpointValueBase>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace EndpointPolicy
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      EndpointValueBase_ptr _tao_elem)
  {
    EndpointValueBase_ptr _tao_objptr =
      EndpointValueBase::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      EndpointValueBase_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<EndpointValueBase>::insert (
        _tao_any,
        EndpointValueBase::_tao_any_destructor,
        _tc_EndpointValueBase,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      EndpointValueBase_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<EndpointValueBase>::extract (
          _tao_any,
          EndpointValueBase::_tao_any_destructor,
          _tc_EndpointValueBase,
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
    EndpointPolicy::EndpointValueBase_ptr _tao_elem)
{
  EndpointPolicy::EndpointValueBase_ptr _tao_objptr =
    EndpointPolicy::EndpointValueBase::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    EndpointPolicy::EndpointValueBase_ptr *_tao_elem)
{
  TAO::Any_Impl_T<EndpointPolicy::EndpointValueBase>::insert (
      _tao_any,
      EndpointPolicy::EndpointValueBase::_tao_any_destructor,
      EndpointPolicy::_tc_EndpointValueBase,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    EndpointPolicy::EndpointValueBase_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<EndpointPolicy::EndpointValueBase>::extract (
        _tao_any,
        EndpointPolicy::EndpointValueBase::_tao_any_destructor,
        EndpointPolicy::_tc_EndpointValueBase,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/any_op_cs.cpp:46



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<EndpointPolicy::EndpointList>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<EndpointPolicy::EndpointList>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace EndpointPolicy
{
  
  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::EndpointPolicy::EndpointList &_tao_elem
    )
  {
    if (0 == &_tao_elem) // Trying to de-reference NULL object
      _tao_any <<= static_cast< ::EndpointPolicy::EndpointList *>( 0 ); // Use non-copying insertion of a NULL
    else
      TAO::Any_Dual_Impl_T< ::EndpointPolicy::EndpointList>::insert_copy (
          _tao_any,
          ::EndpointPolicy::EndpointList::_tao_any_destructor,
          ::EndpointPolicy::_tc_EndpointList,
          _tao_elem
        );
  }

  // Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::EndpointPolicy::EndpointList *_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::EndpointPolicy::EndpointList>::insert (
        _tao_any,
        ::EndpointPolicy::EndpointList::_tao_any_destructor,
        ::EndpointPolicy::_tc_EndpointList,
        _tao_elem
      );
  }

  // Extraction to non-const pointer (deprecated).
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::EndpointPolicy::EndpointList *&_tao_elem
    )
  {
    return _tao_any >>= const_cast<
        const ::EndpointPolicy::EndpointList *&> (
        _tao_elem
      );
  }

  // Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::EndpointPolicy::EndpointList *&_tao_elem
    )
  {
    return
      TAO::Any_Dual_Impl_T< ::EndpointPolicy::EndpointList>::extract (
          _tao_any,
          ::EndpointPolicy::EndpointList::_tao_any_destructor,
          ::EndpointPolicy::_tc_EndpointList,
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
    const EndpointPolicy::EndpointList &_tao_elem
  )
{
  if (0 == &_tao_elem) // Trying to de-reference NULL object
    _tao_any <<= static_cast<EndpointPolicy::EndpointList *>( 0 ); // Use non-copying insertion of a NULL
  else
    TAO::Any_Dual_Impl_T<EndpointPolicy::EndpointList>::insert_copy (
        _tao_any,
        EndpointPolicy::EndpointList::_tao_any_destructor,
        EndpointPolicy::_tc_EndpointList,
        _tao_elem
      );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    EndpointPolicy::EndpointList *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<EndpointPolicy::EndpointList>::insert (
      _tao_any,
      EndpointPolicy::EndpointList::_tao_any_destructor,
      EndpointPolicy::_tc_EndpointList,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    EndpointPolicy::EndpointList *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const EndpointPolicy::EndpointList *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const EndpointPolicy::EndpointList *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<EndpointPolicy::EndpointList>::extract (
        _tao_any,
        EndpointPolicy::EndpointList::_tao_any_destructor,
        EndpointPolicy::_tc_EndpointList,
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
  Any_Impl_T<EndpointPolicy::Policy>::to_object (
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
  Any_Impl_T<EndpointPolicy::Policy>::marshal_value (TAO_OutputCDR &)
  {
    return false;
  }

  template<>
  ::CORBA::Boolean
  Any_Impl_T<EndpointPolicy::Policy>::demarshal_value (TAO_InputCDR &)
  {
    return false;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace EndpointPolicy
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Policy_ptr _tao_elem)
  {
    Policy_ptr _tao_objptr =
      Policy::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      Policy_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<Policy>::insert (
        _tao_any,
        Policy::_tao_any_destructor,
        _tc_Policy,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      Policy_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<Policy>::extract (
          _tao_any,
          Policy::_tao_any_destructor,
          _tc_Policy,
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
    EndpointPolicy::Policy_ptr _tao_elem)
{
  EndpointPolicy::Policy_ptr _tao_objptr =
    EndpointPolicy::Policy::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    EndpointPolicy::Policy_ptr *_tao_elem)
{
  TAO::Any_Impl_T<EndpointPolicy::Policy>::insert (
      _tao_any,
      EndpointPolicy::Policy::_tao_any_destructor,
      EndpointPolicy::_tc_Policy,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    EndpointPolicy::Policy_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<EndpointPolicy::Policy>::extract (
        _tao_any,
        EndpointPolicy::Policy::_tao_any_destructor,
        EndpointPolicy::_tc_Policy,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL


