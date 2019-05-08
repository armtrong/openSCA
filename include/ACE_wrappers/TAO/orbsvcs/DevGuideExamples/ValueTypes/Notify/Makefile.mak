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

all: Notify_Consumer Notify_Supplier

clean depend generated realclean $(CUSTOM_TARGETS):
	@echo Project: Makefile.Notify_Consumer.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Notify_Consumer.mak CFG="$(CFG)" $(@)
	@echo Project: Makefile.Notify_Supplier.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Notify_Supplier.mak CFG="$(CFG)" $(@)

Notify_Consumer:
	@echo Project: Makefile.Notify_Consumer.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Notify_Consumer.mak CFG="$(CFG)" all

Notify_Supplier:
	@echo Project: Makefile.Notify_Supplier.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Notify_Supplier.mak CFG="$(CFG)" all

project_name_list:
	@echo Notify_Consumer
	@echo Notify_Supplier
