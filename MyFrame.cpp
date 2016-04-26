#include "wx/wx.h"
#include "MyFrame.h"
#include "mondrian.xpm"

// Event table for MyFrame

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
    EVT_MENU    (wxID_ABOUT,    MyFrame::OnAbout)
    EVT_MENU    (wxID_EXIT,     MyFrame::OnQuit)
    EVT_SIZE    (               MyFrame::OnSize)
    EVT_BUTTON  (wxID_OK,       MyFrame::OnButtonOK)
    EVT_BUTTON  (BUTTON_Green,  MyFrame::GoGreen)
    EVT_BUTTON  (BUTTON_Red,    MyFrame::GoRed)
END_EVENT_TABLE()

MyFrame::MyFrame(const wxString& title)
: wxFrame(NULL, wxID_ANY, title) {
    // Set the frame icon
    SetIcon(wxIcon(mondrian_xpm));

    // Create a menu bar
    wxMenu* fileMenu = new wxMenu;

    // The "About" item should be in the help menu
    wxMenu* helpMenu = new wxMenu;

    helpMenu->Append(wxID_ABOUT, wxT("&About...\tF1"),
            wxT("Show about dialog"));

    fileMenu->Append(wxID_EXIT, wxT("E&xit\tAlt-X"),
            wxT("Quit this program"));

    // Now append the freshly created menu to the menu bar...
    wxMenuBar* menuBar = new wxMenuBar();
    menuBar->Append(fileMenu, wxT("&File"));
    menuBar->Append(helpMenu, wxT("&Help"));
    // ... and attach this menu bar to the frame

    SetMenuBar(menuBar);

    // Create a status bar just for fun
    CreateStatusBar(2);

    SetStatusText(wxT("Welcome to wxWidgets!"));

    wxButton* button = new wxButton(this, wxID_OK, wxT("OK"), wxPoint(200, 100));
    wxButton* green_button = new wxButton(this, BUTTON_Green, wxT("Go Green"), wxPoint(200, 130));
    wxButton* red_button = new wxButton(this, BUTTON_Red, wxT("Go Red"), wxPoint(200, 160));
    
    panel = new wxPanel(this, wxID_ANY);
    panel->SetSize(200,20);
    
    panel->SetPosition(wxPoint(10,10));
    staticBox_label = new wxStaticBox(panel, STATIC_BOX_Label, wxT("Not connecteed"), wxPoint( 0,0));
    //staticBox_label->GetBestSize();
    //staticBox_label->SetSize(200,20);
    //panel->GetBestSize();
    //panel->AddChild(new wxStaticText(this, wxT("gaga"), wxPoint (0,0)));
}

void MyFrame::OnAbout(wxCommandEvent& event) {
    wxString msg;
    msg.Printf(wxT("Hello and welcome to %s"),
            wxVERSION_STRING);

    wxMessageBox(msg, wxT("About this awesome project"),
            wxOK | wxICON_INFORMATION, this);
}

void MyFrame::OnQuit(wxCommandEvent& event) {
    // Destroy the frame
    Close();
}

void MyFrame::OnSize(wxSizeEvent& event) {
    SetStatusText(wxT("Size event fired!"));
}

void MyFrame::OnButtonOK(wxCommandEvent& event) {
    SetStatusText(wxT("OK Button fired!"));
}

void MyFrame::GoGreen(wxCommandEvent& event) {
    //SetStatusText(wxT("Go Green"));
    staticBox_label->SetLabel(wxT("Green"));
    //this->SetBackgroundColour(*wxGREEN);
    panel->SetBackgroundColour(*wxGREEN);
    //staticBox_label->SetForegroundColour(*wxGREEN);
}

void MyFrame::GoRed(wxCommandEvent& event) {
    //SetStatusText(wxT("Go Red"));
    staticBox_label->SetLabel(wxT("Red"));
    //this->SetBackgroundColour(*wxRED);
    panel->SetBackgroundColour(*wxRED);
    //staticBox_label->SetForegroundColour(*wxRED);
}
