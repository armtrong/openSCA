# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 1861 2011-08-31 16:18:08Z mesnierp $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# C:\ACE_wrappers\bin\mwc.pl -type gnuace
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: OfferSubscriptions_Idl OfferSubscriptions_Client OfferSubscriptions_Consumer OfferSubscriptions_Server

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Client $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Consumer $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Server $(@)

.PHONY: OfferSubscriptions_Idl
OfferSubscriptions_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Idl all

.PHONY: OfferSubscriptions_Client
OfferSubscriptions_Client: OfferSubscriptions_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Client all

.PHONY: OfferSubscriptions_Consumer
OfferSubscriptions_Consumer: OfferSubscriptions_Idl OfferSubscriptions_Client
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Consumer all

.PHONY: OfferSubscriptions_Server
OfferSubscriptions_Server: OfferSubscriptions_Idl OfferSubscriptions_Client OfferSubscriptions_Consumer
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.OfferSubscriptions_Server all

project_name_list:
	@echo OfferSubscriptions_Client
	@echo OfferSubscriptions_Consumer
	@echo OfferSubscriptions_Idl
	@echo OfferSubscriptions_Server
