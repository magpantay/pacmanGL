#include "App.h"

App::App(const char *label, int x, int y, int w, int h) : GlutApp(label, x, y, w, h)
{
    // Initialize state variables

    mx = 0.0;
    my = 0.0;

    game0 = new game();
}

void App::specialKeyPress(int key)
{
    game0->specialKeyHandler(key);
    redraw();
}

void App::draw()
{

    // Clear the screen
    glClear(GL_COLOR_BUFFER_BIT);

    // Set background color to black
    glClearColor(0.0, 0.0, 1.0, 1.0);

    // Set up the transformations stack
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    game0->drawAll();

    // We have been drawing everything to the back buffer
    // Swap the buffers to see the result of what we drew
    glFlush();
    glutSwapBuffers();
}

void App::idle()
{
    redraw();
}

void App::keyPress(unsigned char key)
{
    game0->regularKeyHandler(key);
    redraw();
}

/* UNNECESSARY */
void App::mouseDown(float x, float y)
{
    // Update app state
    mx = x;
    my = y;
    // No need for mouse handler
}

void App::mouseDrag(float x, float y)
{
    // Update app state
    mx = x;
    my = y;
    // No need for mouse handler
}

void App::specialKeyUp(int key)
{
    // No need to check if key is released (as Pacman moves perpetually until another key press)
}