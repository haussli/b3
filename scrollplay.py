# -*- coding: utf-8 -*-

###########################################################################
## Python code generated with wxFormBuilder (version 3.10.1)
## http://www.wxformbuilder.org/
##
## PLEASE DO *NOT* EDIT THIS FILE!
###########################################################################

import wx
import wx.xrc

import gettext
_ = gettext.gettext

###########################################################################
## Class mframe
###########################################################################

class mframe ( wx.Frame ):

	def __init__( self, parent ):
		wx.Frame.__init__ ( self, parent, id = wx.ID_ANY, title = _(u"scrollplay"), pos = wx.DefaultPosition, size = wx.Size( 886,681 ), style = wx.DEFAULT_FRAME_STYLE|wx.ICONIZE|wx.BORDER_DEFAULT|wx.FULL_REPAINT_ON_RESIZE|wx.TAB_TRAVERSAL )

		self.SetSizeHints( wx.Size( -1,-1 ), wx.DefaultSize )

		self.m_menubar1 = wx.MenuBar( 0 )
		self.mMenuB3 = wx.Menu()
		self.mMenuB3About = wx.MenuItem( self.mMenuB3, wx.ID_ANY, _(u"About"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuB3.Append( self.mMenuB3About )

		self.mMenuB3.AppendSeparator()

		self.mMenuB3Prefs = wx.MenuItem( self.mMenuB3, wx.ID_ANY, _(u"Preferences")+ u"\t" + u"CTRL-,", wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuB3.Append( self.mMenuB3Prefs )

		self.mMenuB3Login = wx.MenuItem( self.mMenuB3, wx.ID_ANY, _(u"Login"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuB3.Append( self.mMenuB3Login )

		self.mMenuB3.AppendSeparator()

		self.mMenuB3Quit = wx.MenuItem( self.mMenuB3, wx.ID_ANY, _(u"Quit")+ u"\t" + u"CTRL-Q", wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuB3.Append( self.mMenuB3Quit )

		self.m_menubar1.Append( self.mMenuB3, _(u"B3") )

		self.mMenuFile = wx.Menu()
		self.mMenuFileNew = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"New")+ u"\t" + u"CTRL-n", wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileNew )

		self.mMenuFileOpen = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Open")+ u"\t" + u"CTRL-o", wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileOpen )

		self.mMenuFileSave = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Save")+ u"\t" + u"CTRL-s", wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileSave )

		self.mMenuFileSaveAs = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Save As ..."), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileSaveAs )

		self.mMenuFileDupl = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Duplicate"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileDupl )

		self.mMenuFile.AppendSeparator()

		self.mMenuFileExport = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Export"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileExport )

		self.mMenuFileImport = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Import"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFileImport )

		self.mMenuFile.AppendSeparator()

		self.mMenuFilePrint = wx.MenuItem( self.mMenuFile, wx.ID_ANY, _(u"Print")+ u"\t" + u"CTRL-P", wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuFile.Append( self.mMenuFilePrint )

		self.m_menubar1.Append( self.mMenuFile, _(u"File") )

		self.mMenuHelp = wx.Menu()
		self.mMenuHelpHelp = wx.MenuItem( self.mMenuHelp, wx.ID_ANY, _(u"Help"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuHelp.Append( self.mMenuHelpHelp )

		self.mMenuHelp.AppendSeparator()

		self.mMenuHelpSupport = wx.MenuItem( self.mMenuHelp, wx.ID_ANY, _(u"Support"), wx.EmptyString, wx.ITEM_NORMAL )
		self.mMenuHelp.Append( self.mMenuHelpSupport )

		self.m_menubar1.Append( self.mMenuHelp, _(u"Help") )

		self.SetMenuBar( self.m_menubar1 )

		bSizer1 = wx.BoxSizer( wx.VERTICAL )

		self.m_notebook4 = wx.Notebook( self, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_panel3 = wx.Panel( self.m_notebook4, wx.ID_ANY, wx.DefaultPosition, wx.DefaultSize, wx.FULL_REPAINT_ON_RESIZE|wx.HSCROLL|wx.TAB_TRAVERSAL|wx.VSCROLL )
		gbSizer1 = wx.GridBagSizer( 0, 0 )
		gbSizer1.SetFlexibleDirection( wx.BOTH )
		gbSizer1.SetNonFlexibleGrowMode( wx.FLEX_GROWMODE_SPECIFIED )

		self.m_staticText1 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText1.Wrap( -1 )

		gbSizer1.Add( self.m_staticText1, wx.GBPosition( 0, 0 ), wx.GBSpan( 1, 2 ), wx.ALL, 5 )

		self.m_staticText2 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText2.Wrap( -1 )

		gbSizer1.Add( self.m_staticText2, wx.GBPosition( 1, 0 ), wx.GBSpan( 1, 2 ), wx.ALL, 5 )

		self.m_staticText5 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText5.Wrap( -1 )

		gbSizer1.Add( self.m_staticText5, wx.GBPosition( 2, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_textCtrl1 = wx.TextCtrl( self.m_panel3, wx.ID_ANY, _(u"n"), wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl1, wx.GBPosition( 2, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_staticText6 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText6.Wrap( -1 )

		gbSizer1.Add( self.m_staticText6, wx.GBPosition( 3, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_textCtrl2 = wx.TextCtrl( self.m_panel3, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl2, wx.GBPosition( 3, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_staticText7 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText7.Wrap( -1 )

		gbSizer1.Add( self.m_staticText7, wx.GBPosition( 4, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_textCtrl3 = wx.TextCtrl( self.m_panel3, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl3, wx.GBPosition( 4, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_staticText8 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText8.Wrap( -1 )

		gbSizer1.Add( self.m_staticText8, wx.GBPosition( 6, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_textCtrl4 = wx.TextCtrl( self.m_panel3, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		gbSizer1.Add( self.m_textCtrl4, wx.GBPosition( 6, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_staticText9 = wx.StaticText( self.m_panel3, wx.ID_ANY, _(u"MyLabel"), wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_staticText9.Wrap( -1 )

		self.m_staticText9.Enable( False )

		gbSizer1.Add( self.m_staticText9, wx.GBPosition( 7, 0 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )

		self.m_textCtrl5 = wx.TextCtrl( self.m_panel3, wx.ID_ANY, wx.EmptyString, wx.DefaultPosition, wx.DefaultSize, 0 )
		self.m_textCtrl5.Enable( False )

		gbSizer1.Add( self.m_textCtrl5, wx.GBPosition( 7, 1 ), wx.GBSpan( 1, 1 ), wx.ALL, 5 )


		self.m_panel3.SetSizer( gbSizer1 )
		self.m_panel3.Layout()
		gbSizer1.Fit( self.m_panel3 )
		self.m_notebook4.AddPage( self.m_panel3, _(u"a page"), False )

		bSizer1.Add( self.m_notebook4, 1, wx.EXPAND |wx.ALL, 5 )


		self.SetSizer( bSizer1 )
		self.Layout()
		self.wStatusBar = self.CreateStatusBar( 1, 0|wx.ALWAYS_SHOW_SB|wx.HSCROLL|wx.VSCROLL, wx.ID_ANY )

		self.Centre( wx.BOTH )

		# Connect Events
		self.Bind( wx.EVT_MENU, self.OnQuit, id = self.mMenuB3Quit.GetId() )

	def __del__( self ):
		pass


	# Virtual event handlers, override them in your derived class
	def OnQuit( self, event ):
		event.Skip()


