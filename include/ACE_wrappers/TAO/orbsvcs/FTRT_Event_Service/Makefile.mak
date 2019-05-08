#----------------------------------------------------------------------------
#       NMAKE Workspace
#
# $Id: NMakeWorkspaceCreator.pm 2035 2011-10-06 15:05:21Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# bin/mwc.pl -type nmake -value_template platforms=Win64 -make_coexistence -recurse -exclude TAO/CIAO -features qos=1,mfc=1
#
#----------------------------------------------------------------------------

!IF "$(CFG)" == ""
CFG=Win64 Debug
!MESSAGE No configuration specified. Defaulting to Win64 Debug.
!ENDIF

!IF "$(CUSTOM_TARGETS)" == ""
CUSTOM_TARGETS=_EMPTY_TARGET_
!ENDIF

all: FTRT_Event_Service FTRTEC_Factory_Service FTRTEC_Gateway_Service

clean depend generated realclean $(CUSTOM_TARGETS):
	@cd Event_Service
	@echo Directory: Event_Service
	@echo Project: Makefile.FTRT_Event_Service.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.FTRT_Event_Service.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Factory_Service
	@echo Directory: Factory_Service
	@echo Project: Makefile.FTRTEC_Factory_Service.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.FTRTEC_Factory_Service.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Gateway_Service
	@echo Directory: Gateway_Service
	@echo Project: Makefile.FTRTEC_Gateway_Service.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.FTRTEC_Gateway_Service.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)

FTRT_Event_Service:
	@cd Event_Service
	@echo Directory: Event_Service
	@echo Project: Makefile.FTRT_Event_Service.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.FTRT_Event_Service.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

FTRTEC_Factory_Service:
	@cd Factory_Service
	@echo Directory: Factory_Service
	@echo Project: Makefile.FTRTEC_Factory_Service.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.FTRTEC_Factory_Service.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

FTRTEC_Gateway_Service:
	@cd Gateway_Service
	@echo Directory: Gateway_Service
	@echo Project: Makefile.FTRTEC_Gateway_Service.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.FTRTEC_Gateway_Service.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

project_name_list:
	@echo FTRT_Event_Service
	@echo FTRTEC_Factory_Service
	@echo FTRTEC_Gateway_Service
