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
// .\be\be_codegen.cpp:598

#ifndef _TAO_IDL_COSTYPEDEVENTCHANNELADMINS_T_HDFQHK_H_
#define _TAO_IDL_COSTYPEDEVENTCHANNELADMINS_T_HDFQHK_H_



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_sth.cpp:70

namespace POA_CosTypedEventChannelAdmin
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  TypedProxyPushConsumer_tie : public TypedProxyPushConsumer
  {
  public:
    /// the T& ctor
    TypedProxyPushConsumer_tie (T &t);
    /// ctor taking a POA
    TypedProxyPushConsumer_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    TypedProxyPushConsumer_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    TypedProxyPushConsumer_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~TypedProxyPushConsumer_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void push (
      const ::CORBA::Any &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void disconnect_push_consumer (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void connect_push_supplier (
      ::CosEventComm::PushSupplier_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Object_ptr get_typed_consumer (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    TypedProxyPushConsumer_tie (const TypedProxyPushConsumer_tie &);
    void operator= (const TypedProxyPushConsumer_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  TypedProxyPullSupplier_tie : public TypedProxyPullSupplier
  {
  public:
    /// the T& ctor
    TypedProxyPullSupplier_tie (T &t);
    /// ctor taking a POA
    TypedProxyPullSupplier_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    TypedProxyPullSupplier_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    TypedProxyPullSupplier_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~TypedProxyPullSupplier_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Any * pull (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Any * try_pull (
      ::CORBA::Boolean_out);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void disconnect_pull_supplier (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void connect_pull_consumer (
      ::CosEventComm::PullConsumer_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Object_ptr get_typed_supplier (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    TypedProxyPullSupplier_tie (const TypedProxyPullSupplier_tie &);
    void operator= (const TypedProxyPullSupplier_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  TypedSupplierAdmin_tie : public TypedSupplierAdmin
  {
  public:
    /// the T& ctor
    TypedSupplierAdmin_tie (T &t);
    /// ctor taking a POA
    TypedSupplierAdmin_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    TypedSupplierAdmin_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    TypedSupplierAdmin_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~TypedSupplierAdmin_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosEventChannelAdmin::ProxyPushConsumer_ptr obtain_push_consumer (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosEventChannelAdmin::ProxyPullConsumer_ptr obtain_pull_consumer (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosTypedEventChannelAdmin::TypedProxyPushConsumer_ptr obtain_typed_push_consumer (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosEventChannelAdmin::ProxyPullConsumer_ptr obtain_typed_pull_consumer (
      const char *);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    TypedSupplierAdmin_tie (const TypedSupplierAdmin_tie &);
    void operator= (const TypedSupplierAdmin_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  TypedConsumerAdmin_tie : public TypedConsumerAdmin
  {
  public:
    /// the T& ctor
    TypedConsumerAdmin_tie (T &t);
    /// ctor taking a POA
    TypedConsumerAdmin_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    TypedConsumerAdmin_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    TypedConsumerAdmin_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~TypedConsumerAdmin_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosEventChannelAdmin::ProxyPushSupplier_ptr obtain_push_supplier (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosEventChannelAdmin::ProxyPullSupplier_ptr obtain_pull_supplier (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosTypedEventChannelAdmin::TypedProxyPullSupplier_ptr obtain_typed_pull_supplier (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosEventChannelAdmin::ProxyPushSupplier_ptr obtain_typed_push_supplier (
      const char *);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    TypedConsumerAdmin_tie (const TypedConsumerAdmin_tie &);
    void operator= (const TypedConsumerAdmin_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  TypedEventChannel_tie : public TypedEventChannel
  {
  public:
    /// the T& ctor
    TypedEventChannel_tie (T &t);
    /// ctor taking a POA
    TypedEventChannel_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    TypedEventChannel_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    TypedEventChannel_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~TypedEventChannel_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosTypedEventChannelAdmin::TypedConsumerAdmin_ptr for_consumers (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CosTypedEventChannelAdmin::TypedSupplierAdmin_ptr for_suppliers (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void destroy (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    TypedEventChannel_tie (const TypedEventChannel_tie &);
    void operator= (const TypedEventChannel_tie &);
  };
} // module CosTypedEventChannelAdmin

// TAO_IDL - Generated from 
// .\be\be_codegen.cpp:1748


#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "CosTypedEventChannelAdminS_T.cpp"
#endif /* defined REQUIRED SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("CosTypedEventChannelAdminS_T.cpp")
#endif /* defined REQUIRED PRAGMA */

#endif /* ifndef */

