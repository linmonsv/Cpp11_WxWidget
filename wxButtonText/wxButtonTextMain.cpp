/***************************************************************
 * Name:      wxButtonTextMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    qfx (qin2@qq.com)
 * Created:   2016-01-09
 * Copyright: qfx (qinuu.com)
 * License:
 **************************************************************/

#include "wxButtonTextMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(wxButtonTextFrame)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wxButtonTextFrame)
const long wxButtonTextFrame::ID_TEXTCTRL1 = wxNewId();
const long wxButtonTextFrame::ID_BUTTON2 = wxNewId();
const long wxButtonTextFrame::ID_TEXTCTRL2 = wxNewId();
const long wxButtonTextFrame::ID_BUTTON1 = wxNewId();
const long wxButtonTextFrame::ID_MENUITEM1 = wxNewId();
const long wxButtonTextFrame::idMenuAbout = wxNewId();
const long wxButtonTextFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxButtonTextFrame,wxFrame)
    //(*EventTable(wxButtonTextFrame)
    //*)
END_EVENT_TABLE()

wxButtonTextFrame::wxButtonTextFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxButtonTextFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxGridSizer* GridSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    SetClientSize(wxSize(330,121));
    GridSizer1 = new wxGridSizer(0, 2, 0, 0);
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, _("0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl1->SetBackgroundColour(wxColour(128,255,0));
    GridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(this, ID_BUTTON2, _("+"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    Button2->SetBackgroundColour(wxColour(128,255,255));
    GridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("0"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    TextCtrl2->SetBackgroundColour(wxColour(0,255,0));
    GridSizer1->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button1 = new wxButton(this, ID_BUTTON1, _("-"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button1->SetBackgroundColour(wxColour(0,255,255));
    GridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(GridSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, ID_MENUITEM1, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    SetSizer(GridSizer1);
    Layout();

    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxButtonTextFrame::OnButton2Click);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxButtonTextFrame::OnButton1Click);
    Connect(ID_MENUITEM1,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxButtonTextFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxButtonTextFrame::OnAbout);
    //*)
}

wxButtonTextFrame::~wxButtonTextFrame()
{
    //(*Destroy(wxButtonTextFrame)
    //*)
}

void wxButtonTextFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxButtonTextFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxButtonTextFrame::OnButton2Click(wxCommandEvent& event)
{
    wxString str = TextCtrl1->GetValue();
    int num;
    num = wxAtoi(str);
    num ++;
    wxString mystring = wxString::Format(wxT("%i"),num);

    TextCtrl1->SetValue(mystring);
}

void wxButtonTextFrame::OnButton1Click(wxCommandEvent& event)
{
    wxString str = TextCtrl2->GetValue();
    int num;
    num = wxAtoi(str);
    num --;
    wxString mystring = wxString::Format(wxT("%i"),num);

    TextCtrl2->SetValue(mystring);
}
