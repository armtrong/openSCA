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
// .\be\be_codegen.cpp:460

#ifndef _TAO_IDL_FT_REPLICATIONMANAGERS_KIEOW6_H_
#define _TAO_IDL_FT_REPLICATIONMANAGERS_KIEOW6_H_


#include "FT_ReplicationManagerC.h"
#include "orbsvcs/PortableGroupS.h"
#include "orbsvcs/FT_CORBAS.h"
#include "orbsvcs/FT_ReplicaS.h"
#include "orbsvcs/FT_NotifierS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "tao/PortableServer/PolicyS.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_FT_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_FT_REPLICATIONMANAGER__SARG_TRAITS_)
#define _FT_REPLICATIONMANAGER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::FT::ReplicationManager>
    : public
        Object_SArg_Traits_T<
            ::FT::ReplicationManager_ptr,
            ::FT::ReplicationManager_var,
            ::FT::ReplicationManager_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:41

namespace POA_FT
{
  

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ReplicationManager;
  typedef ReplicationManager *ReplicationManager_ptr;

  class TAO_FT_Export ReplicationManager
    : public virtual POA_PortableGroup::PropertyManager,
      public virtual POA_FT::FTObjectGroupManager,
      public virtual POA_PortableGroup::GenericFactory
  {
  protected:
    ReplicationManager (void);
  
  public:
    /// Useful for template programming.
    typedef ::FT::ReplicationManager _stub_type;
    typedef ::FT::ReplicationManager_ptr _stub_ptr_type;
    typedef ::FT::ReplicationManager_var _stub_var_type;

    ReplicationManager (const ReplicationManager& rhs);
    virtual ~ReplicationManager (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::FT::ReplicationManager *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void register_fault_notifier (
      ::FT::FaultNotifier_ptr fault_notifier) = 0;

    static void register_fault_notifier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::FT::FaultNotifier_ptr get_fault_notifier (
      void) = 0;

    static void get_fault_notifier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::PortableGroup::FactoryRegistry_ptr get_factory_registry (
      const ::PortableGroup::Criteria & selection_criteria) = 0;

    static void get_factory_registry_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void shutdown (
      void) = 0;

    static void shutdown_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_default_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_default_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_default_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_type_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_type_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_type_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_properties_dynamically_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    create_member_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    add_member_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_member_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    locations_of_members_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    groups_at_location_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_object_group_id_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_object_group_ref_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_member_ref_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_object_group_ref_from_id_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_primary_member_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    create_object_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    delete_object_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module FT

TAO_END_VERSIONED_NAMESPACE_DECL


#if defined (__ACE_INLINE__)
#include "FT_ReplicationManagerS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

