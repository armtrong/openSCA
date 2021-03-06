// -*- C++ -*-
//
// $Id: Parser_Registry.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE TAO_Parser_Registry::Parser_Iterator
TAO_Parser_Registry::begin (void) const
{
  return this->parsers_;
}

ACE_INLINE TAO_Parser_Registry::Parser_Iterator
TAO_Parser_Registry::end (void) const
{
  return this->parsers_ + this->size_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
