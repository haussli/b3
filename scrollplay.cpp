///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "scrollplay.h"

///////////////////////////////////////////////////////////////////////////

mframe::mframe( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	m_menubar1 = new wxMenuBar( 0 );
	mMenuB3 = new wxMenu();
	wxMenuItem* mMenuB3About;
	mMenuB3About = new wxMenuItem( mMenuB3, wxID_ANY, wxString( _("About") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuB3->Append( mMenuB3About );

	mMenuB3->AppendSeparator();

	wxMenuItem* mMenuB3Prefs;
	mMenuB3Prefs = new wxMenuItem( mMenuB3, wxID_ANY, wxString( _("Preferences") ) + wxT('\t') + wxT("CTRL-,"), wxEmptyString, wxITEM_NORMAL );
	mMenuB3->Append( mMenuB3Prefs );

	wxMenuItem* mMenuB3Login;
	mMenuB3Login = new wxMenuItem( mMenuB3, wxID_ANY, wxString( _("Login") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuB3->Append( mMenuB3Login );

	mMenuB3->AppendSeparator();

	wxMenuItem* mMenuB3Quit;
	mMenuB3Quit = new wxMenuItem( mMenuB3, wxID_ANY, wxString( _("Quit") ) + wxT('\t') + wxT("CTRL-Q"), wxEmptyString, wxITEM_NORMAL );
	mMenuB3->Append( mMenuB3Quit );

	m_menubar1->Append( mMenuB3, _("B3") );

	mMenuFile = new wxMenu();
	wxMenuItem* mMenuFileNew;
	mMenuFileNew = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("New") ) + wxT('\t') + wxT("CTRL-n"), wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileNew );

	wxMenuItem* mMenuFileOpen;
	mMenuFileOpen = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Open") ) + wxT('\t') + wxT("CTRL-o"), wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileOpen );

	wxMenuItem* mMenuFileSave;
	mMenuFileSave = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Save") ) + wxT('\t') + wxT("CTRL-s"), wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileSave );

	wxMenuItem* mMenuFileSaveAs;
	mMenuFileSaveAs = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Save As ...") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileSaveAs );

	wxMenuItem* mMenuFileDupl;
	mMenuFileDupl = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Duplicate") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileDupl );

	mMenuFile->AppendSeparator();

	wxMenuItem* mMenuFileExport;
	mMenuFileExport = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Export") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileExport );

	wxMenuItem* mMenuFileImport;
	mMenuFileImport = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Import") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFileImport );

	mMenuFile->AppendSeparator();

	wxMenuItem* mMenuFilePrint;
	mMenuFilePrint = new wxMenuItem( mMenuFile, wxID_ANY, wxString( _("Print") ) + wxT('\t') + wxT("CTRL-P"), wxEmptyString, wxITEM_NORMAL );
	mMenuFile->Append( mMenuFilePrint );

	m_menubar1->Append( mMenuFile, _("File") );

	mMenuHelp = new wxMenu();
	wxMenuItem* mMenuHelpHelp;
	mMenuHelpHelp = new wxMenuItem( mMenuHelp, wxID_ANY, wxString( _("Help") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuHelp->Append( mMenuHelpHelp );

	mMenuHelp->AppendSeparator();

	wxMenuItem* mMenuHelpSupport;
	mMenuHelpSupport = new wxMenuItem( mMenuHelp, wxID_ANY, wxString( _("Support") ) , wxEmptyString, wxITEM_NORMAL );
	mMenuHelp->Append( mMenuHelpSupport );

	m_menubar1->Append( mMenuHelp, _("Help") );

	this->SetMenuBar( m_menubar1 );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	m_notebook4 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_scrolledWindow5 = new wxScrolledWindow( m_notebook4, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow5->SetScrollRate( 6, 6 );
	wxGridBagSizer* gbSizer1;
	gbSizer1 = new wxGridBagSizer( 0, 0 );
	gbSizer1->SetFlexibleDirection( wxBOTH );
	gbSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	gbSizer1->Add( m_staticText1, wxGBPosition( 0, 0 ), wxGBSpan( 1, 2 ), wxALL, 5 );

	m_staticText2 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	gbSizer1->Add( m_staticText2, wxGBPosition( 1, 0 ), wxGBSpan( 1, 2 ), wxALL, 5 );

	m_staticText5 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	gbSizer1->Add( m_staticText5, wxGBPosition( 2, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_textCtrl1 = new wxTextCtrl( m_scrolledWindow5, wxID_ANY, _("n"), wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_textCtrl1, wxGBPosition( 2, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText6 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	gbSizer1->Add( m_staticText6, wxGBPosition( 3, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_textCtrl2 = new wxTextCtrl( m_scrolledWindow5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_textCtrl2, wxGBPosition( 3, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText7 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	gbSizer1->Add( m_staticText7, wxGBPosition( 4, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_textCtrl3 = new wxTextCtrl( m_scrolledWindow5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_textCtrl3, wxGBPosition( 4, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText8 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	gbSizer1->Add( m_staticText8, wxGBPosition( 6, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_textCtrl4 = new wxTextCtrl( m_scrolledWindow5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gbSizer1->Add( m_textCtrl4, wxGBPosition( 6, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_staticText9 = new wxStaticText( m_scrolledWindow5, wxID_ANY, _("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->Enable( false );

	gbSizer1->Add( m_staticText9, wxGBPosition( 7, 0 ), wxGBSpan( 1, 1 ), wxALL, 5 );

	m_textCtrl5 = new wxTextCtrl( m_scrolledWindow5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl5->Enable( false );

	gbSizer1->Add( m_textCtrl5, wxGBPosition( 7, 1 ), wxGBSpan( 1, 1 ), wxALL, 5 );


	m_scrolledWindow5->SetSizer( gbSizer1 );
	m_scrolledWindow5->Layout();
	gbSizer1->Fit( m_scrolledWindow5 );
	m_notebook4->AddPage( m_scrolledWindow5, _("a page"), false );

	bSizer1->Add( m_notebook4, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( bSizer1 );
	this->Layout();
	wStatusBar = this->CreateStatusBar( 1, 0|wxALWAYS_SHOW_SB, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	mMenuB3->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( mframe::OnQuit ), this, mMenuB3Quit->GetId());
}

mframe::~mframe()
{
	// Disconnect Events

}
