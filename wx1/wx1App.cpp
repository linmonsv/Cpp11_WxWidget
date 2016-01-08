/***************************************************************
 * Name:      wx1App.cpp
 * Purpose:   Code for Application Class
 * Author:    qfx (qin2@qq.com)
 * Created:   2016-01-08
 * Copyright: qfx (qinuu.com)
 * License:
 **************************************************************/

#include <wx/image.h>
#include "wx1App.h"
#include "wx1Main.h"

//(*AppHeaders
//*)

IMPLEMENT_APP(wx1App);

bool wx1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wx1Dialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
