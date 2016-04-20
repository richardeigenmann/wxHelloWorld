#include "wx/wx.h"

// Declare our main frame class
class MyFrame : public wxFrame
{
     public:
        // Constructor
        MyFrame(const wxString& title);

        // Event handlers
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);

     private:
        // This class handles events
        DECLARE_EVENT_TABLE()
};
