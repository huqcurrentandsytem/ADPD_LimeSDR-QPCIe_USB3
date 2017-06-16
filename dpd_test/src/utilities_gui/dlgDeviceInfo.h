#ifndef __dlgDeviceInfo__
#define __dlgDeviceInfo__

/**
@file
Subclass of dlgDeviceInfo_view, which is generated by wxFormBuilder.
*/

#include "utilities_gui.h"

//// end generated include
namespace lime{
class IConnection;
}
/** Implementing dlgDeviceInfo_view */
class dlgDeviceInfo : public dlgDeviceInfo_view
{
	protected:
		// Handlers for dlgDeviceInfo_view events.
		void OnGetInfo( wxCommandEvent& event );
	public:
		/** Constructor */
		dlgDeviceInfo( wxWindow* parent );
	//// end generated class members
        dlgDeviceInfo(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString &title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long styles = 0);
        virtual void Initialize(lime::IConnection* pCtrPort, lime::IConnection* pDataPort);
    protected:
        lime::IConnection* ctrPort;
        lime::IConnection* dataPort;

};

#endif // __dlgDeviceInfo__