#include "GlutApp.h"

// Make this static so that it will not be accessible in other source files
static GlutApp* app;

GlutApp::GlutApp(const char* label, int x, int y, int w, int h) {
    // Set app pointer to be the current object
    app = this;
    
    // Setup window position, size, and title
    glutInitWindowPosition(x, y);
    glutInitWindowSize(w, h);
    glutCreateWindow(label);
    
    // Setup some OpenGL options
    glEnable (GL_DEPTH_TEST);
    glEnable (GL_POINT_SMOOTH);
    glEnable (GL_LINE_SMOOTH);
    glHint (GL_LINE_SMOOTH_HINT, GL_NICEST);
    glHint (GL_POINT_SMOOTH_HINT, GL_NICEST);
    glPointSize (4);
    glLineWidth (2);
    
    // Setup GLUT callbacks for different events
    glutDisplayFunc(displayCB);
    glutMouseFunc(mouseCB);
    glutMotionFunc(motionCB);
    glutKeyboardFunc(keyboardCB);
    glutKeyboardUpFunc(keyUpCB);
    glutSpecialFunc(specialCB);
    glutSpecialUpFunc(specialUpCB);
    glutIdleFunc(idleCB);
    glutReshapeFunc(reshapeCB);
    glutPassiveMotionFunc(passiveCB);
}

void GlutApp::windowToScene ( float& x, float &y )
{
    // Converting window coordinates [0..width] x [0..height] to [-1..1] x [-1..1]
    x = (2.0f*(x/float(width))) - 1.0f;
    y = 1.0f - (2.0f*(y/float(height)));
	// Take care of issue in Windows where y coordinate is a little off
	#if defined WIN32
	y -= 0.03;
	#endif
}

void GlutApp::draw(){
    // Default behavior for a display method
    
    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
    // Set background color to black
    glClearColor(0.0, 0.0, 0.0, 1.0);
    
    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void GlutApp::resize ( int w, int h ) {
    // Update the width and height
    width = w;
    height = h;

    // Tell OpenGL to use the whole window
    glViewport( 0, 0, w, h );

}

void GlutApp::keyPress(unsigned char key){
    // Exit the application when any key is pressed
    exit(0);
}

void GlutApp::run() {
    // Run the main loop
    glutMainLoop();
}

void GlutApp::redraw() {
    // Redraw the display
    glutPostRedisplay();
}


void GlutApp::displayCB(){
    // When GLUT needs to redraw itself, call our draw method
    app->draw();
}

void GlutApp::reshapeCB(int w, int h){
    // When the window is resized, call our resize method
    app->resize(w, h);
}

void GlutApp::idleCB(){
    // Call out idle method when application idles
    app->idle();
}


void GlutApp::mouseCB(int b, int s, int x, int y){
    // Convert mouse position to scene coordinates
    float mx = (float) x;
    float my = (float) y;
    app->windowToScene(mx, my);
    
    // Determine button and state and call appropriate handler
    if (b == 0){
        // Left click
        if (s == 0){
            // Left down
            app->mouseDown(mx, my);
        }
        else {
            // Left up
            app->mouseUp(mx, my);
        }
    }
    else {
        // Right click
        if (s == 0){
            // Right down
            app->mouseRightDown(mx, my);
        }
        else {
            // Right up
            app->mouseRightUp(mx, my);
        }
    }
}

void GlutApp::motionCB(int x, int y){
    // Convert mouse position to scene coordinates
    float mx = (float) x;
    float my = (float) y;
    app->windowToScene(mx, my);
    
    // Call drag handler
    app->mouseDrag(mx, my);
}

void GlutApp::passiveCB (int x, int y){
    // Convert mouse position to scene coordinates
    float mx = (float) x;
    float my = (float) y;
    app->windowToScene(mx, my);
    
    // Call mouse motion handler
    app->mouseMove(mx, my);
}

void GlutApp::keyboardCB(unsigned char key, int x, int y){
    // When a key is pressed, call our keypress handler
    app->keyPress(key);
}

void GlutApp::keyUpCB(unsigned char key, int x, int y){
    app->keyUp(key);
}

void GlutApp::specialCB(int key, int x, int y){
    // When a special key is pressed, call our handler for special keys
    app->specialKeyPress(key);
}

void GlutApp::specialUpCB(int key, int x, int y){
    app->specialKeyUp(key);
}
