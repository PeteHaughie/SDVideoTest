#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main()
{
	// Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
	ofGLWindowSettings settings;
	settings.setSize(640, 480);
	settings.windowMode = OF_WINDOW; // OF_FULLSCREEN / OF_WINDOW

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<ofApp>());
	ofRunMainLoop();
}
