#pragma once

// Declare our main frame class
class MyFrame : public wxFrame
{
     public:
        // Constructor
        MyFrame(const wxString& title);

        // Event handlers
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnSize(wxSizeEvent& event);
        void OnButtonOK(wxCommandEvent& event);
        void GoGreen(wxCommandEvent& event);
        void GoRed(wxCommandEvent& event);
        
     private:
        // This class handles events
        DECLARE_EVENT_TABLE()
        wxStaticBox* staticBox_label;
        wxPanel* panel;
};

enum
{
    BUTTON_Green = wxID_HIGHEST + 1, // declares an id which will be used to call the button
    BUTTON_Red,
    STATIC_BOX_Label
};
