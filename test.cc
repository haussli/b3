#include <stdbool.h>

#include <scrollplay.h>
#include <wx/app.h>

class B3 : public wxApp
{
  public:
    virtual bool OnInit();
    ~B3() {};

  private:
};

wxDECLARE_APP(B3);

wxIMPLEMENT_APP(B3);

bool
B3::OnInit()
{
    if (!wxApp::OnInit())
	return false;

    SetAppDisplayName(_("B3"));

    //mframe *frame = new mframe((wxFrame*)NULL);
    mframe *frame = new mframe((wxWindow*)NULL);
    frame->Show(true);
    return true;
}
