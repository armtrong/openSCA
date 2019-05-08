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


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_array/array_ci.cpp:153

ACE_INLINE
void
TAO::Array_Traits<flowProtocol::cmagic_nr_forany>::free (
    flowProtocol::cmagic_nr_slice * _tao_slice
  )
{
  flowProtocol::cmagic_nr_free (_tao_slice);
}

ACE_INLINE
flowProtocol::cmagic_nr_slice *
TAO::Array_Traits<flowProtocol::cmagic_nr_forany>::dup (
    const flowProtocol::cmagic_nr_slice * _tao_slice
  )
{
  return flowProtocol::cmagic_nr_dup (_tao_slice);
}

ACE_INLINE
void
TAO::Array_Traits<flowProtocol::cmagic_nr_forany>::copy (
    flowProtocol::cmagic_nr_slice * _tao_to,
    const flowProtocol::cmagic_nr_slice * _tao_from
  )
{
  flowProtocol::cmagic_nr_copy (_tao_to, _tao_from);
}

ACE_INLINE
void
TAO::Array_Traits<flowProtocol::cmagic_nr_forany>::zero (
    flowProtocol::cmagic_nr_slice * _tao_slice
  )
{
  // Zero each individual element.
  for ( ::CORBA::ULong i0 = 0; i0 < 4; ++i0)
    {
      _tao_slice[i0] = ::CORBA::Char ();
    }
}

ACE_INLINE
flowProtocol::cmagic_nr_slice *
TAO::Array_Traits<flowProtocol::cmagic_nr_forany>::alloc (void)
{
  return flowProtocol::cmagic_nr_alloc ();
}



TAO_END_VERSIONED_NAMESPACE_DECL

