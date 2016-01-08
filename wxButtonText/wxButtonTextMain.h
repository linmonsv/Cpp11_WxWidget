/***************************************************************
 * Name:      wxButtonTextMain.h
 * Purpose:   Defines Application Frame
 * Author:    qfx (qin2@qq.com)
 * Created:   2016-01-09
 * Copyright: qfx (qinuu.com)
 * License:
 **************************************************************/

#ifndef WXBUTTONTEXTMAIN_H
#define WXBUTTONTEXTMAIN_H

//(*Headers(wxButtonTextFrame)
#include <wx/sizer.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class wxButtonTextFrame: public wxFrame
{
    public:

        wxButtonTextFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxButtonTextFrame();

    private:

        //(*Handlers(wxButtonTextFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(wxButtonTextFrame)
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON1;
        static const long ID_MENUITEM1;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxButtonTextFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXBUTTONTEXTMAIN_H
