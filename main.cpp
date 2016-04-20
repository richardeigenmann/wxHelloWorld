// Name: minimal.cpp
// Purpose: Minimal wxWidgets sample
// Author: Julian Smart

#include "wx/wx.h"

#include "MyApp.h"
#include "MyFrame.h"


// Implements MyApp& wxGetApp()
DECLARE_APP(MyApp)

// Give wxWidgets the means to create a MyApp object
IMPLEMENT_APP(MyApp)

// Event table for MyFrame
BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU(wxID_ABOUT, MyFrame::OnAbout)
    EVT_MENU(wxID_EXIT, MyFrame::OnQuit)
END_EVENT_TABLE()
