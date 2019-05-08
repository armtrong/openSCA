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

all: NamingService_Messenger_Idl NamingService_Messenger_Client NamingService_Messenger_Server Naming_Client_Idl Naming_Client_Client Naming_Client_Server Naming_Context_Ext_Idl Naming_Context_Ext_Client Naming_Context_Ext_Server Naming_Server_Messenger Corbaloc_Messenger_Idl Corbaloc_Messenger_Client Corbaloc_Messenger_Server Corbaname_Messenger_Idl Corbaname_Messenger_Client Corbaname_Messenger_Server

clean depend generated realclean $(CUSTOM_TARGETS):
	@cd Messenger
	@echo Directory: Messenger
	@echo Project: Makefile.NamingService_Messenger_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.NamingService_Messenger_Idl.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Messenger
	@echo Directory: Messenger
	@echo Project: Makefile.NamingService_Messenger_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.NamingService_Messenger_Client.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Messenger
	@echo Directory: Messenger
	@echo Project: Makefile.NamingService_Messenger_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.NamingService_Messenger_Server.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Client
	@echo Directory: Naming_Client
	@echo Project: Makefile.Naming_Client_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Client_Idl.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Client
	@echo Directory: Naming_Client
	@echo Project: Makefile.Naming_Client_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Client_Client.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Client
	@echo Directory: Naming_Client
	@echo Project: Makefile.Naming_Client_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Client_Server.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Context_Ext
	@echo Directory: Naming_Context_Ext
	@echo Project: Makefile.Naming_Context_Ext_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Context_Ext_Idl.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Context_Ext
	@echo Directory: Naming_Context_Ext
	@echo Project: Makefile.Naming_Context_Ext_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Context_Ext_Client.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Context_Ext
	@echo Directory: Naming_Context_Ext
	@echo Project: Makefile.Naming_Context_Ext_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Context_Ext_Server.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd Naming_Server
	@echo Directory: Naming_Server
	@echo Project: Makefile.Naming_Server_Messenger.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Server_Messenger.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd corbaloc_Messenger
	@echo Directory: corbaloc_Messenger
	@echo Project: Makefile.Corbaloc_Messenger_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaloc_Messenger_Idl.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd corbaloc_Messenger
	@echo Directory: corbaloc_Messenger
	@echo Project: Makefile.Corbaloc_Messenger_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaloc_Messenger_Client.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd corbaloc_Messenger
	@echo Directory: corbaloc_Messenger
	@echo Project: Makefile.Corbaloc_Messenger_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaloc_Messenger_Server.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd corbaname_Messenger
	@echo Directory: corbaname_Messenger
	@echo Project: Makefile.Corbaname_Messenger_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaname_Messenger_Idl.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd corbaname_Messenger
	@echo Directory: corbaname_Messenger
	@echo Project: Makefile.Corbaname_Messenger_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaname_Messenger_Client.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)
	@cd corbaname_Messenger
	@echo Directory: corbaname_Messenger
	@echo Project: Makefile.Corbaname_Messenger_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaname_Messenger_Server.mak CFG="$(CFG)" $(@)
	@cd $(MAKEDIR)

NamingService_Messenger_Idl:
	@cd Messenger
	@echo Directory: Messenger
	@echo Project: Makefile.NamingService_Messenger_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.NamingService_Messenger_Idl.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

NamingService_Messenger_Client: NamingService_Messenger_Idl
	@cd Messenger
	@echo Directory: Messenger
	@echo Project: Makefile.NamingService_Messenger_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.NamingService_Messenger_Client.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

NamingService_Messenger_Server: NamingService_Messenger_Idl
	@cd Messenger
	@echo Directory: Messenger
	@echo Project: Makefile.NamingService_Messenger_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.NamingService_Messenger_Server.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Client_Idl:
	@cd Naming_Client
	@echo Directory: Naming_Client
	@echo Project: Makefile.Naming_Client_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Client_Idl.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Client_Client: Naming_Client_Idl
	@cd Naming_Client
	@echo Directory: Naming_Client
	@echo Project: Makefile.Naming_Client_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Client_Client.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Client_Server: Naming_Client_Idl
	@cd Naming_Client
	@echo Directory: Naming_Client
	@echo Project: Makefile.Naming_Client_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Client_Server.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Context_Ext_Idl:
	@cd Naming_Context_Ext
	@echo Directory: Naming_Context_Ext
	@echo Project: Makefile.Naming_Context_Ext_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Context_Ext_Idl.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Context_Ext_Client: Naming_Context_Ext_Idl
	@cd Naming_Context_Ext
	@echo Directory: Naming_Context_Ext
	@echo Project: Makefile.Naming_Context_Ext_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Context_Ext_Client.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Context_Ext_Server: Naming_Context_Ext_Idl
	@cd Naming_Context_Ext
	@echo Directory: Naming_Context_Ext
	@echo Project: Makefile.Naming_Context_Ext_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Context_Ext_Server.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Naming_Server_Messenger:
	@cd Naming_Server
	@echo Directory: Naming_Server
	@echo Project: Makefile.Naming_Server_Messenger.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Naming_Server_Messenger.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Corbaloc_Messenger_Idl:
	@cd corbaloc_Messenger
	@echo Directory: corbaloc_Messenger
	@echo Project: Makefile.Corbaloc_Messenger_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaloc_Messenger_Idl.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Corbaloc_Messenger_Client: Corbaloc_Messenger_Idl
	@cd corbaloc_Messenger
	@echo Directory: corbaloc_Messenger
	@echo Project: Makefile.Corbaloc_Messenger_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaloc_Messenger_Client.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Corbaloc_Messenger_Server: Corbaloc_Messenger_Idl
	@cd corbaloc_Messenger
	@echo Directory: corbaloc_Messenger
	@echo Project: Makefile.Corbaloc_Messenger_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaloc_Messenger_Server.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Corbaname_Messenger_Idl:
	@cd corbaname_Messenger
	@echo Directory: corbaname_Messenger
	@echo Project: Makefile.Corbaname_Messenger_Idl.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaname_Messenger_Idl.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Corbaname_Messenger_Client: Corbaname_Messenger_Idl
	@cd corbaname_Messenger
	@echo Directory: corbaname_Messenger
	@echo Project: Makefile.Corbaname_Messenger_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaname_Messenger_Client.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

Corbaname_Messenger_Server: Corbaname_Messenger_Idl
	@cd corbaname_Messenger
	@echo Directory: corbaname_Messenger
	@echo Project: Makefile.Corbaname_Messenger_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.Corbaname_Messenger_Server.mak CFG="$(CFG)" all
	@cd $(MAKEDIR)

project_name_list:
	@echo NamingService_Messenger_Client
	@echo NamingService_Messenger_Idl
	@echo NamingService_Messenger_Server
	@echo Naming_Client_Client
	@echo Naming_Client_Idl
	@echo Naming_Client_Server
	@echo Naming_Context_Ext_Client
	@echo Naming_Context_Ext_Idl
	@echo Naming_Context_Ext_Server
	@echo Naming_Server_Messenger
	@echo Corbaloc_Messenger_Client
	@echo Corbaloc_Messenger_Idl
	@echo Corbaloc_Messenger_Server
	@echo Corbaname_Messenger_Client
	@echo Corbaname_Messenger_Idl
	@echo Corbaname_Messenger_Server
