#ifndef GlutApp_hpp
#define GlutApp_hpp

#include <iostream>

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

class GlutApp {
private:
    // GLUT callbacks
    static void idleCB ();
    static void mouseCB (int b, int s, int x, int y);
    static void motionCB (int x, int y);
    static void passiveCB (int x, int y);
    static void displayCB ();
    static void keyboardCB (unsigned char key, int x, int y);
    static void specialCB (int key, int x, int y);
    static void reshapeCB (int w, int h);
    static void keyUpCB (unsigned char key, int x, int y);
    static void specialUpCB(int key, int x, int y);
    
    // The current size of the window
    int width;
    int height;
    
    // Function for converting window coordinates to scene coordinates
    void windowToScene(float& x, float& y);
    
public:
    // Default constructor
    GlutApp(const char* label="GlutApp", int x=50, int y=50, int w=500, int h=500);
    
    // A function to redraw the window
    void redraw();
    
    // A function to start the main loop
    void run();
    
private:
    // Functions below can be redefined in child class to respond to events
    
    // Called when the screen needs to be drawn
    virtual void draw();
    
    // Called when window is resized
    virtual void resize ( int w, int h );
    
    // Called when a key is pressed
    virtual void keyPress(unsigned char key);
    
    // Called when a key is released
    virtual void keyUp(unsigned char key){}
    
    // Called when a special key (up/down arrow) is pressed
    virtual void specialKeyPress(int key){}
    
    // Called when a special key (up/down arrow) is released
    virtual void specialKeyUp(int key){}
    
    // Called all the time
    virtual void idle(){}
    
    // Called when left mouse button is pressed down
    virtual void mouseDown(float x, float y){}
    
    // Called when left mouse button is released
    virtual void mouseUp(float x, float y){}
    
    // Called when right mouse button is pressed down
    virtual void mouseRightDown(float x, float y){}
    
    // Called when right mouse button is released
    virtual void mouseRightUp(float x, float y){}
    
    // Called when dragging occurs (keeping the mouse button down while moving)
    virtual void mouseDrag(float x, float y){}
    
    // Called every time the mouse is moved
    virtual void mouseMove(float x, float y){}
};

#endif
