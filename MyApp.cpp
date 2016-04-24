#include "MyApp.h"
#include "MyFrame.h"

// Implements MyApp& wxGetApp()
DECLARE_APP(MyApp)

// Give wxWidgets the means to create a MyApp object
IMPLEMENT_APP(MyApp)

bool MyApp::OnInit()
{
    // Create the main application window
    MyFrame *frame = new MyFrame(wxT("Minimal wxWidgets App from Richard"));

    // Show it
    frame->Show(true);

    // Start the event loop
    return true;
}
