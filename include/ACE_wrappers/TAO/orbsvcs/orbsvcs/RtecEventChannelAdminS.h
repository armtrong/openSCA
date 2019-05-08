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

#ifndef _TAO_IDL_RTECEVENTCHANNELADMINS_PQLBES_H_
#define _TAO_IDL_RTECEVENTCHANNELADMINS_PQLBES_H_


#include "RtecEventChannelAdminC.h"
#include "RtecEventCommS.h"
#include "RtecBaseS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/Event/event_skel_export.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_RTEvent_Skel_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::RtecEventChannelAdmin::Dependency>
    : public
        Var_Size_SArg_Traits_T<
            ::RtecEventChannelAdmin::Dependency,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::RtecEventChannelAdmin::DependencySet>
    : public
        Var_Size_SArg_Traits_T<
            ::RtecEventChannelAdmin::DependencySet,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::RtecEventChannelAdmin::ConsumerQOS>
    : public
        Var_Size_SArg_Traits_T<
            ::RtecEventChannelAdmin::ConsumerQOS,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::RtecEventChannelAdmin::Publication>
    : public
        Var_Size_SArg_Traits_T<
            ::RtecEventChannelAdmin::Publication,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::RtecEventChannelAdmin::PublicationSet>
    : public
        Var_Size_SArg_Traits_T<
            ::RtecEventChannelAdmin::PublicationSet,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::RtecEventChannelAdmin::SupplierQOS>
    : public
        Var_Size_SArg_Traits_T<
            ::RtecEventChannelAdmin::SupplierQOS,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER__SARG_TRAITS_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHSUPPLIER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::RtecEventChannelAdmin::ProxyPushSupplier>
    : public
        Object_SArg_Traits_T<
            ::RtecEventChannelAdmin::ProxyPushSupplier_ptr,
            ::RtecEventChannelAdmin::ProxyPushSupplier_var,
            ::RtecEventChannelAdmin::ProxyPushSupplier_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER__SARG_TRAITS_)
#define _RTECEVENTCHANNELADMIN_PROXYPUSHCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::RtecEventChannelAdmin::ProxyPushConsumer>
    : public
        Object_SArg_Traits_T<
            ::RtecEventChannelAdmin::ProxyPushConsumer_ptr,
            ::RtecEventChannelAdmin::ProxyPushConsumer_var,
            ::RtecEventChannelAdmin::ProxyPushConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_RTECEVENTCHANNELADMIN_CONSUMERADMIN__SARG_TRAITS_)
#define _RTECEVENTCHANNELADMIN_CONSUMERADMIN__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::RtecEventChannelAdmin::ConsumerAdmin>
    : public
        Object_SArg_Traits_T<
            ::RtecEventChannelAdmin::ConsumerAdmin_ptr,
            ::RtecEventChannelAdmin::ConsumerAdmin_var,
            ::RtecEventChannelAdmin::ConsumerAdmin_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_RTECEVENTCHANNELADMIN_SUPPLIERADMIN__SARG_TRAITS_)
#define _RTECEVENTCHANNELADMIN_SUPPLIERADMIN__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::RtecEventChannelAdmin::SupplierAdmin>
    : public
        Object_SArg_Traits_T<
            ::RtecEventChannelAdmin::SupplierAdmin_ptr,
            ::RtecEventChannelAdmin::SupplierAdmin_var,
            ::RtecEventChannelAdmin::SupplierAdmin_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_RTECEVENTCHANNELADMIN_OBSERVER__SARG_TRAITS_)
#define _RTECEVENTCHANNELADMIN_OBSERVER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::RtecEventChannelAdmin::Observer>
    : public
        Object_SArg_Traits_T<
            ::RtecEventChannelAdmin::Observer_ptr,
            ::RtecEventChannelAdmin::Observer_var,
            ::RtecEventChannelAdmin::Observer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_RTECEVENTCHANNELADMIN_EVENTCHANNEL__SARG_TRAITS_)
#define _RTECEVENTCHANNELADMIN_EVENTCHANNEL__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::RtecEventChannelAdmin::EventChannel>
    : public
        Object_SArg_Traits_T<
            ::RtecEventChannelAdmin::EventChannel_ptr,
            ::RtecEventChannelAdmin::EventChannel_var,
            ::RtecEventChannelAdmin::EventChannel_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:41

namespace POA_RtecEventChannelAdmin
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ProxyPushSupplier;
  typedef ProxyPushSupplier *ProxyPushSupplier_ptr;

  class TAO_RTEvent_Skel_Export ProxyPushSupplier
    : public virtual POA_RtecEventComm::PushSupplier
  {
  protected:
    ProxyPushSupplier (void);
  
  public:
    /// Useful for template programming.
    typedef ::RtecEventChannelAdmin::ProxyPushSupplier _stub_type;
    typedef ::RtecEventChannelAdmin::ProxyPushSupplier_ptr _stub_ptr_type;
    typedef ::RtecEventChannelAdmin::ProxyPushSupplier_var _stub_var_type;

    ProxyPushSupplier (const ProxyPushSupplier& rhs);
    virtual ~ProxyPushSupplier (void);

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
    
    ::RtecEventChannelAdmin::ProxyPushSupplier *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void connect_push_consumer (
      ::RtecEventComm::PushConsumer_ptr push_consumer,
      const ::RtecEventChannelAdmin::ConsumerQOS & qos) = 0;

    static void connect_push_consumer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void suspend_connection (
      void) = 0;

    static void suspend_connection_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void resume_connection (
      void) = 0;

    static void resume_connection_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    disconnect_push_supplier_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ProxyPushConsumer;
  typedef ProxyPushConsumer *ProxyPushConsumer_ptr;

  class TAO_RTEvent_Skel_Export ProxyPushConsumer
    : public virtual POA_RtecEventComm::PushConsumer
  {
  protected:
    ProxyPushConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::RtecEventChannelAdmin::ProxyPushConsumer _stub_type;
    typedef ::RtecEventChannelAdmin::ProxyPushConsumer_ptr _stub_ptr_type;
    typedef ::RtecEventChannelAdmin::ProxyPushConsumer_var _stub_var_type;

    ProxyPushConsumer (const ProxyPushConsumer& rhs);
    virtual ~ProxyPushConsumer (void);

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
    
    ::RtecEventChannelAdmin::ProxyPushConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void connect_push_supplier (
      ::RtecEventComm::PushSupplier_ptr push_supplier,
      const ::RtecEventChannelAdmin::SupplierQOS & qos) = 0;

    static void connect_push_supplier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    push_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    disconnect_push_consumer_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ConsumerAdmin;
  typedef ConsumerAdmin *ConsumerAdmin_ptr;

  class TAO_RTEvent_Skel_Export ConsumerAdmin
    : public virtual PortableServer::ServantBase
  {
  protected:
    ConsumerAdmin (void);
  
  public:
    /// Useful for template programming.
    typedef ::RtecEventChannelAdmin::ConsumerAdmin _stub_type;
    typedef ::RtecEventChannelAdmin::ConsumerAdmin_ptr _stub_ptr_type;
    typedef ::RtecEventChannelAdmin::ConsumerAdmin_var _stub_var_type;

    ConsumerAdmin (const ConsumerAdmin& rhs);
    virtual ~ConsumerAdmin (void);

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
    
    ::RtecEventChannelAdmin::ConsumerAdmin *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::RtecEventChannelAdmin::ProxyPushSupplier_ptr obtain_push_supplier (
      void) = 0;

    static void obtain_push_supplier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class SupplierAdmin;
  typedef SupplierAdmin *SupplierAdmin_ptr;

  class TAO_RTEvent_Skel_Export SupplierAdmin
    : public virtual PortableServer::ServantBase
  {
  protected:
    SupplierAdmin (void);
  
  public:
    /// Useful for template programming.
    typedef ::RtecEventChannelAdmin::SupplierAdmin _stub_type;
    typedef ::RtecEventChannelAdmin::SupplierAdmin_ptr _stub_ptr_type;
    typedef ::RtecEventChannelAdmin::SupplierAdmin_var _stub_var_type;

    SupplierAdmin (const SupplierAdmin& rhs);
    virtual ~SupplierAdmin (void);

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
    
    ::RtecEventChannelAdmin::SupplierAdmin *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::RtecEventChannelAdmin::ProxyPushConsumer_ptr obtain_push_consumer (
      void) = 0;

    static void obtain_push_consumer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class Observer;
  typedef Observer *Observer_ptr;

  class TAO_RTEvent_Skel_Export Observer
    : public virtual PortableServer::ServantBase
  {
  protected:
    Observer (void);
  
  public:
    /// Useful for template programming.
    typedef ::RtecEventChannelAdmin::Observer _stub_type;
    typedef ::RtecEventChannelAdmin::Observer_ptr _stub_ptr_type;
    typedef ::RtecEventChannelAdmin::Observer_var _stub_var_type;

    Observer (const Observer& rhs);
    virtual ~Observer (void);

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
    
    ::RtecEventChannelAdmin::Observer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void update_consumer (
      const ::RtecEventChannelAdmin::ConsumerQOS & sub) = 0;

    static void update_consumer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void update_supplier (
      const ::RtecEventChannelAdmin::SupplierQOS & pub) = 0;

    static void update_supplier_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class EventChannel;
  typedef EventChannel *EventChannel_ptr;

  class TAO_RTEvent_Skel_Export EventChannel
    : public virtual PortableServer::ServantBase
  {
  protected:
    EventChannel (void);
  
  public:
    /// Useful for template programming.
    typedef ::RtecEventChannelAdmin::EventChannel _stub_type;
    typedef ::RtecEventChannelAdmin::EventChannel_ptr _stub_ptr_type;
    typedef ::RtecEventChannelAdmin::EventChannel_var _stub_var_type;

    EventChannel (const EventChannel& rhs);
    virtual ~EventChannel (void);

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
    
    ::RtecEventChannelAdmin::EventChannel *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::RtecEventChannelAdmin::ConsumerAdmin_ptr for_consumers (
      void) = 0;

    static void for_consumers_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::RtecEventChannelAdmin::SupplierAdmin_ptr for_suppliers (
      void) = 0;

    static void for_suppliers_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void destroy (
      void) = 0;

    static void destroy_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::RtecEventChannelAdmin::Observer_Handle append_observer (
      ::RtecEventChannelAdmin::Observer_ptr gw) = 0;

    static void append_observer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void remove_observer (
      ::RtecEventChannelAdmin::Observer_Handle gw) = 0;

    static void remove_observer_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module RtecEventChannelAdmin

TAO_END_VERSIONED_NAMESPACE_DECL



#include "RtecEventChannelAdminS_T.h"

#if defined (__ACE_INLINE__)
#include "RtecEventChannelAdminS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

