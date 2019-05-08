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


#include "COIOP_EndpointsC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Sequence_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/struct_typecode.cpp:86

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_TAO_COIOP_Endpoint_Info[] =
      {
        { "uuid", &CORBA::_tc_string },
        { "priority", &CORBA::_tc_short }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_TAO_COIOP_Endpoint_Info (
  ::CORBA::tk_struct,
  "IDL:TAO/COIOP_Endpoint_Info:1.0",
  "COIOP_Endpoint_Info",
  _tao_fields_TAO_COIOP_Endpoint_Info,
  2);


namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_COIOP_Endpoint_Info =
    &_tao_tc_TAO_COIOP_Endpoint_Info;
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_TAO_COIOPENDPOINTSEQUENCE_CS_)
#define _TAO_COIOPENDPOINTSEQUENCE_CS_

TAO::COIOPEndpointSequence::COIOPEndpointSequence (void)
{}

TAO::COIOPEndpointSequence::COIOPEndpointSequence (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        COIOP_Endpoint_Info
      > (max)
{}

TAO::COIOPEndpointSequence::COIOPEndpointSequence (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    TAO::COIOP_Endpoint_Info * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        COIOP_Endpoint_Info
      >
    (max, length, buffer, release)
{}

TAO::COIOPEndpointSequence::COIOPEndpointSequence (
    const COIOPEndpointSequence &seq)
  : ::TAO::unbounded_value_sequence<
        COIOP_Endpoint_Info
      > (seq)
{}

TAO::COIOPEndpointSequence::~COIOPEndpointSequence (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/alias_typecode.cpp:50



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:460


#ifndef _TAO_TYPECODE_TAO_COIOPEndpointSequence_GUARD
#define _TAO_TYPECODE_TAO_COIOPEndpointSequence_GUARD


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
        TAO_COIOPEndpointSequence_0 (
          ::CORBA::tk_sequence,
          &TAO::_tc_COIOP_Endpoint_Info,
          0U);
        
      ::CORBA::TypeCode_ptr const tc_TAO_COIOPEndpointSequence_0 =
        &TAO_COIOPEndpointSequence_0;
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_TYPECODE_TAO_COIOPEndpointSequence_GUARD */

static TAO::TypeCode::Alias<char const *,
                            ::CORBA::TypeCode_ptr const *,
                            TAO::Null_RefCount_Policy>
  _tao_tc_TAO_COIOPEndpointSequence (
    ::CORBA::tk_alias,
    "IDL:TAO/COIOPEndpointSequence:1.0",
    "COIOPEndpointSequence",
    &TAO::TypeCode::tc_TAO_COIOPEndpointSequence_0);
  

namespace TAO
{
  ::CORBA::TypeCode_ptr const _tc_COIOPEndpointSequence =
    &_tao_tc_TAO_COIOPEndpointSequence;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_cs.cpp:52


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::COIOP_Endpoint_Info &_tao_aggregate)
{
  return
    (strm << _tao_aggregate.uuid.in ()) &&
    (strm << _tao_aggregate.priority);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::COIOP_Endpoint_Info &_tao_aggregate)
{
  return
    (strm >> _tao_aggregate.uuid.out ()) &&
    (strm >> _tao_aggregate.priority);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/cdr_op_cs.cpp:90
#if !defined _TAO_CDR_OP_TAO_COIOPEndpointSequence_CPP_
#define _TAO_CDR_OP_TAO_COIOPEndpointSequence_CPP_


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO::COIOPEndpointSequence &_tao_sequence)
{
  return TAO::marshal_sequence(strm, _tao_sequence);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    TAO::COIOPEndpointSequence &_tao_sequence)
{
  return TAO::demarshal_sequence(strm, _tao_sequence);
}


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


#endif /* _TAO_CDR_OP_TAO_COIOPEndpointSequence_CPP_ */


TAO_END_VERSIONED_NAMESPACE_DECL


