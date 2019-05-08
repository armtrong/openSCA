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
// .\be\be_codegen.cpp:838

#ifndef _TAO_IDL_DYNAMICA_T5VYOK_H_
#define _TAO_IDL_DYNAMICA_T5VYOK_H_


#include /**/ "tao/AnyTypeCode/TAO_AnyTypeCode_Export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/AnyTypeCode/Dynamic_ParameterA.h"
#include "tao/AnyTypeCode/Typecode_typesA.h"
#include "tao/AnyTypeCode/StringSeqA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:51

namespace Dynamic
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_ParameterList;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_ContextList;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_ExceptionList;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_RequestContext;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:78

} // module Dynamic


// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Dynamic
{
  TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, const ::Dynamic::ParameterList &); // copying version
  TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, ::Dynamic::ParameterList*); // noncopying version
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Dynamic::ParameterList *&); // deprecated
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Dynamic::ParameterList *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, const Dynamic::ParameterList &); // copying version
TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, Dynamic::ParameterList*); // noncopying version
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Dynamic::ParameterList *&); // deprecated
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Dynamic::ParameterList *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/any_op_ch.cpp:47



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Dynamic
{
  TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, const ::Dynamic::ExceptionList &); // copying version
  TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, ::Dynamic::ExceptionList*); // noncopying version
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Dynamic::ExceptionList *&); // deprecated
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Dynamic::ExceptionList *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, const Dynamic::ExceptionList &); // copying version
TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, Dynamic::ExceptionList*); // noncopying version
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Dynamic::ExceptionList *&); // deprecated
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Dynamic::ExceptionList *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
