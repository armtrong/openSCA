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

#ifndef _TAO_IDL_MESSAGING_NO_IMPLA_KLXVWV_H_
#define _TAO_IDL_MESSAGING_NO_IMPLA_KLXVWV_H_


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/Messaging/Messaging.h"
#include "tao/AnyTypeCode/TimeBaseA.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/Messaging/Messaging_TypesA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:51

namespace Messaging
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_Priority;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RebindMode;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RoutingType;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_Ordering;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RebindPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_PriorityRange;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RequestPriorityPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_ReplyPriorityPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RequestStartTimePolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RequestEndTimePolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_ReplyStartTimePolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_ReplyEndTimePolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RelativeRequestTimeoutPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RoutingTypeRange;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_RoutingPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_MaxHopsPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_QueueOrderPolicy;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:78

} // module Messaging


// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Messaging
{
  TAO_Messaging_Export void operator<<= (::CORBA::Any &, const ::Messaging::PriorityRange &); // copying version
  TAO_Messaging_Export void operator<<= (::CORBA::Any &, ::Messaging::PriorityRange*); // noncopying version
  TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Messaging::PriorityRange *&); // deprecated
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Messaging::PriorityRange *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Messaging_Export void operator<<= (::CORBA::Any &, const Messaging::PriorityRange &); // copying version
TAO_Messaging_Export void operator<<= (::CORBA::Any &, Messaging::PriorityRange*); // noncopying version
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Messaging::PriorityRange *&); // deprecated
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Messaging::PriorityRange *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace Messaging
{
  TAO_Messaging_Export void operator<<= (::CORBA::Any &, const ::Messaging::RoutingTypeRange &); // copying version
  TAO_Messaging_Export void operator<<= (::CORBA::Any &, ::Messaging::RoutingTypeRange*); // noncopying version
  TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::Messaging::RoutingTypeRange *&); // deprecated
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::Messaging::RoutingTypeRange *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Messaging_Export void operator<<= (::CORBA::Any &, const Messaging::RoutingTypeRange &); // copying version
TAO_Messaging_Export void operator<<= (::CORBA::Any &, Messaging::RoutingTypeRange*); // noncopying version
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, Messaging::RoutingTypeRange *&); // deprecated
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const Messaging::RoutingTypeRange *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
