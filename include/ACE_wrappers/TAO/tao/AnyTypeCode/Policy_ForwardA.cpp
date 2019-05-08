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

#include "Policy_ForwardA.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Enum_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_PolicyType (
    ::CORBA::tk_alias,
    "IDL:omg.org/CORBA/PolicyType:1.0",
    "PolicyType",
    &CORBA::_tc_ulong);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_PolicyType =
    &_tao_tc_CORBA_PolicyType;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:460


namespace CORBA
{
  extern ::CORBA::TypeCode_ptr const _tc_Policy;
}

#ifndef _TAO_TYPECODE_CORBA_PolicyList_GUARD
#define _TAO_TYPECODE_CORBA_PolicyList_GUARD


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
        CORBA_PolicyList_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_Policy,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_CORBA_PolicyList_0 =
        &CORBA_PolicyList_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_CORBA_PolicyList_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_PolicyList (
    ::CORBA::tk_alias,
    "IDL:omg.org/CORBA/PolicyList:1.0",
    "PolicyList",
    &TAO::TypeCode::tc_CORBA_PolicyList_0);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_PolicyList =
    &_tao_tc_CORBA_PolicyList;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:460


#ifndef _TAO_TYPECODE_CORBA_PolicyTypeSeq_GUARD
#define _TAO_TYPECODE_CORBA_PolicyTypeSeq_GUARD


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
        CORBA_PolicyTypeSeq_0 (
          ::CORBA::tk_sequence,
          &CORBA::_tc_PolicyType,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_CORBA_PolicyTypeSeq_0 =
        &CORBA_PolicyTypeSeq_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_CORBA_PolicyTypeSeq_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_PolicyTypeSeq (
    ::CORBA::tk_alias,
    "IDL:omg.org/CORBA/PolicyTypeSeq:1.0",
    "PolicyTypeSeq",
    &TAO::TypeCode::tc_CORBA_PolicyTypeSeq_0);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_PolicyTypeSeq =
    &_tao_tc_CORBA_PolicyTypeSeq;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/enum_typecode.cpp:31
static char const * const _tao_enumerators_CORBA_SetOverrideType[] =
  {
    "SET_OVERRIDE",
    "ADD_OVERRIDE"
    
  };

static TAO::TypeCode::Enum<char const *,
                           char const * const *,
                           TAO::Null_RefCount_Policy>
  _tao_tc_CORBA_SetOverrideType (
    "IDL:omg.org/CORBA/SetOverrideType:1.0",
    "SetOverrideType",
    _tao_enumerators_CORBA_SetOverrideType,
    2);
  

namespace CORBA
{
  ::CORBA::TypeCode_ptr const _tc_SetOverrideType =
    &_tao_tc_CORBA_SetOverrideType;
}

TAO_END_VERSIONED_NAMESPACE_DECL


