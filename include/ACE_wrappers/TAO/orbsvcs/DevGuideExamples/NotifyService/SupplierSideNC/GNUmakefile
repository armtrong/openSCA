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

all: SupplierSideNC_Idl SupplierSideNC_Consumer SupplierSideNC_Client SupplierSideNC_Server

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Idl $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Consumer $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Client $(@)
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Server $(@)

.PHONY: SupplierSideNC_Idl
SupplierSideNC_Idl:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Idl all

.PHONY: SupplierSideNC_Consumer
SupplierSideNC_Consumer: SupplierSideNC_Idl
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Consumer all

.PHONY: SupplierSideNC_Client
SupplierSideNC_Client: SupplierSideNC_Idl SupplierSideNC_Consumer
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Client all

.PHONY: SupplierSideNC_Server
SupplierSideNC_Server: SupplierSideNC_Idl SupplierSideNC_Consumer
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.SupplierSideNC_Server all

project_name_list:
	@echo SupplierSideNC_Client
	@echo SupplierSideNC_Consumer
	@echo SupplierSideNC_Idl
	@echo SupplierSideNC_Server
