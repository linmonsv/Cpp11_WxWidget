/***************************************************************
 * Name:      wx1Main.h
 * Purpose:   Defines Application Frame
 * Author:    qfx (qin2@qq.com)
 * Created:   2016-01-08
 * Copyright: qfx (qinuu.com)
 * License:
 **************************************************************/

#ifndef WX1MAIN_H
#define WX1MAIN_H

//(*Headers(wx1Dialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statline.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class wx1Dialog: public wxDialog
{
    public:

        wx1Dialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~wx1Dialog();

    private:

        //(*Handlers(wx1Dialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(wx1Dialog)
        static const long ID_STATICTEXT1;
        static const long ID_BUTTON1;
        static const long ID_STATICLINE1;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(wx1Dialog)
        wxButton* Button1;
        wxStaticText* StaticText1;
        wxBoxSizer* BoxSizer2;
        wxButton* Button2;
        wxStaticLine* StaticLine1;
        wxBoxSizer* BoxSizer1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WX1MAIN_H
