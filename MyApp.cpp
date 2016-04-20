#include "MyApp.h"
#include "MyFrame.h"

bool MyApp::OnInit()
{
    // Create the main application window
    MyFrame *frame = new MyFrame(wxT("Minimal wxWidgets App from Richard"));

    // Show it
    frame->Show(true);

    // Start the event loop
    return true;
}
