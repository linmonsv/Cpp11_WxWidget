/***************************************************************
 * Name:      wxButtonTextApp.cpp
 * Purpose:   Code for Application Class
 * Author:    qfx (qin2@qq.com)
 * Created:   2016-01-09
 * Copyright: qfx (qinuu.com)
 * License:
 **************************************************************/
#include <wx/image.h>
#include "wxButtonTextApp.h"
#include "wxButtonTextMain.h"

//(*AppHeaders
//*)

IMPLEMENT_APP(wxButtonTextApp);

bool wxButtonTextApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxButtonTextFrame* Frame = new wxButtonTextFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
