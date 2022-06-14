///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/gbsizer.h>
#include <wx/panel.h>
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class mframe
///////////////////////////////////////////////////////////////////////////////
class mframe : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar1;
		wxMenu* mMenuB3;
		wxMenu* mMenuFile;
		wxMenu* mMenuHelp;
		wxNotebook* m_notebook4;
		wxPanel* m_panel3;
		wxStaticText* m_staticText1;
		wxStaticText* m_staticText2;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl1;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText9;
		wxTextCtrl* m_textCtrl5;
		wxStatusBar* wStatusBar;

		// Virtual event handlers, override them in your derived class
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }


	public:

		mframe( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("scrollplay"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 886,681 ), long style = wxDEFAULT_FRAME_STYLE|wxICONIZE|wxBORDER_DEFAULT|wxFULL_REPAINT_ON_RESIZE|wxTAB_TRAVERSAL );

		~mframe();

};

