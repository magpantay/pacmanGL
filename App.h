#ifndef App_hpp
#define App_hpp

#include "GlutApp.h"
#include "TexRect.h"

class App: public GlutApp {
    // Maintain app state here
    float mx;
    float my;

public:
    // Constructor, to initialize state
    App(const char* label, int x, int y, int w, int h);
    
    // These are the events we want to handle
    void draw();
    void keyPress(unsigned char key);
    void keyUp(unsigned char key);
    void mouseDown(float x, float y);
    void mouseDrag(float x, float y);
    void idle();
    TexRect* mushroom;
    TexRect* mushroom2;
    TexRect* mushroom3;
};

#endif
