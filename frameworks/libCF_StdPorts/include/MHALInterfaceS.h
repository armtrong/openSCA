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

#ifndef _TAO_IDL_MHALINTERFACES_JKBAWG_H_
#define _TAO_IDL_MHALINTERFACES_JKBAWG_H_


#include "MHALInterfaceC.h"
#include "JTRSCorbaTypesS.h"
#include "PacketS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_MHAL_MHALPACKETCONSUMER__SARG_TRAITS_)
#define _MHAL_MHALPACKETCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::MHAL::MHALPacketConsumer>
    : public
        Object_SArg_Traits_T<
            ::MHAL::MHALPacketConsumer_ptr,
            ::MHAL::MHALPacketConsumer_var,
            ::MHAL::MHALPacketConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_MHAL_PF_MHALPACKETCONSUMER__SARG_TRAITS_)
#define _MHAL_PF_MHALPACKETCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::MHAL::PF_MHALPacketConsumer>
    : public
        Object_SArg_Traits_T<
            ::MHAL::PF_MHALPacketConsumer_ptr,
            ::MHAL::PF_MHALPacketConsumer_var,
            ::MHAL::PF_MHALPacketConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_MHAL_WF_MHALPACKETCONSUMER__SARG_TRAITS_)
#define _MHAL_WF_MHALPACKETCONSUMER__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::MHAL::WF_MHALPacketConsumer>
    : public
        Object_SArg_Traits_T<
            ::MHAL::WF_MHALPacketConsumer_ptr,
            ::MHAL::WF_MHALPacketConsumer_var,
            ::MHAL::WF_MHALPacketConsumer_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::MHAL::WF_MHALPacketConsumer::RxRouteSequence>
    : public
        Var_Size_SArg_Traits_T<
            ::MHAL::WF_MHALPacketConsumer::RxRouteSequence,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:41

namespace POA_MHAL
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class MHALPacketConsumer;
  typedef MHALPacketConsumer *MHALPacketConsumer_ptr;

  class  MHALPacketConsumer
    : public virtual POA_Packet::PayloadStatus
  {
  protected:
    MHALPacketConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::MHAL::MHALPacketConsumer _stub_type;
    typedef ::MHAL::MHALPacketConsumer_ptr _stub_ptr_type;
    typedef ::MHAL::MHALPacketConsumer_var _stub_var_type;

    MHALPacketConsumer (const MHALPacketConsumer& rhs);
    virtual ~MHALPacketConsumer (void);

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
    
    ::MHAL::MHALPacketConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void pushPacket (
      ::CORBA::UShort logicalDest,
      const ::JTRS::OctetSequence & payload) = 0;

    static void pushPacket_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMaxPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMinPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getDesiredPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMinOverrideTimeout_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PF_MHALPacketConsumer;
  typedef PF_MHALPacketConsumer *PF_MHALPacketConsumer_ptr;

  class  PF_MHALPacketConsumer
    : public virtual POA_MHAL::MHALPacketConsumer
  {
  protected:
    PF_MHALPacketConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::MHAL::PF_MHALPacketConsumer _stub_type;
    typedef ::MHAL::PF_MHALPacketConsumer_ptr _stub_ptr_type;
    typedef ::MHAL::PF_MHALPacketConsumer_var _stub_var_type;

    PF_MHALPacketConsumer (const PF_MHALPacketConsumer& rhs);
    virtual ~PF_MHALPacketConsumer (void);

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
    
    ::MHAL::PF_MHALPacketConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void addTxRoute (
      ::CORBA::UShort logicalDest,
      ::MHAL::PF_MHALPacketConsumer::MHALPhysicalDestination physicalDest) = 0;

    static void addTxRoute_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMaxPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMinPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getDesiredPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMinOverrideTimeout_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    pushPacket_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class WF_MHALPacketConsumer;
  typedef WF_MHALPacketConsumer *WF_MHALPacketConsumer_ptr;

  class  WF_MHALPacketConsumer
    : public virtual POA_MHAL::MHALPacketConsumer
  {
  protected:
    WF_MHALPacketConsumer (void);
  
  public:
    /// Useful for template programming.
    typedef ::MHAL::WF_MHALPacketConsumer _stub_type;
    typedef ::MHAL::WF_MHALPacketConsumer_ptr _stub_ptr_type;
    typedef ::MHAL::WF_MHALPacketConsumer_var _stub_var_type;

    WF_MHALPacketConsumer (const WF_MHALPacketConsumer& rhs);
    virtual ~WF_MHALPacketConsumer (void);

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
    
    ::MHAL::WF_MHALPacketConsumer *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::MHAL::WF_MHALPacketConsumer::RxRouteSequence * getRxRoutes (
      void) = 0;

    static void getRxRoutes_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMaxPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMinPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getDesiredPayloadSize_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    getMinOverrideTimeout_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    pushPacket_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module MHAL
#if defined (__ACE_INLINE__)
#include "MHALInterfaceS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

