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

all: LoadBalancing_Performance_IDL LoadBalancing_Performance_Client LoadBalancing_Performance_Server

clean depend generated realclean $(CUSTOM_TARGETS):
	@cd RPS
	@echo Directory: RPS
	@echo Project: Makefile.LoadBalancing_Performance_IDL.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.LoadBalancing_Performance_IDL.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd RPS
	@echo Directory: RPS
	@echo Project: Makefile.LoadBalancing_Performance_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.LoadBalancing_Performance_Client.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd RPS
	@echo Directory: RPS
	@echo Project: Makefile.LoadBalancing_Performance_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.LoadBalancing_Performance_Server.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)

LoadBalancing_Performance_IDL:
	@cd RPS
	@echo Directory: RPS
	@echo Project: Makefile.LoadBalancing_Performance_IDL.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.LoadBalancing_Performance_IDL.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

LoadBalancing_Performance_Client: LoadBalancing_Performance_IDL
	@cd RPS
	@echo Directory: RPS
	@echo Project: Makefile.LoadBalancing_Performance_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.LoadBalancing_Performance_Client.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

LoadBalancing_Performance_Server: LoadBalancing_Performance_IDL
	@cd RPS
	@echo Directory: RPS
	@echo Project: Makefile.LoadBalancing_Performance_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.LoadBalancing_Performance_Server.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

project_name_list:
	@echo LoadBalancing_Performance_Client
	@echo LoadBalancing_Performance_IDL
	@echo LoadBalancing_Performance_Server
