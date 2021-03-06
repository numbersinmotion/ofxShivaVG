#include "ofApp.h"

//--------------------------------------------------------------
int main()
{
  ofGLFWWindowSettings settings;
  settings.stencilBits = 8;

  auto window = ofCreateWindow(settings);
  auto app = make_shared<ofApp>();
  ofRunApp(window, app);

  return ofRunMainLoop();
}
