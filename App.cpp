#include "App.h"

/* static App* singleton;

void app_timer(int val)
{
  if (!singleton->game0->gameOver)
  {
    singleton->game0->advanceAllAnimations();
    singleton->redraw();
    glutTimerFunc(80, app_timer, val);
  }
} */
/*
void app_timer(int value){
    if (singleton->game_over){
        singleton->gameOver->advance();
    }

    if (singleton->moving){
        singleton->ball->jump();
        float bx = singleton->ball->x + singleton->ball->w/2;
        float by = singleton->ball->y - singleton->ball->h + 0.1;
        if (singleton->platform->contains(bx, by)){
            singleton->ball->rising = true;
            singleton->ball->yinc +=0.005;
            singleton->ball->xinc = singleton->ball->yinc;
            if (singleton->ball->yinc > 0.15){
                singleton->ball->yinc = 0.15;
            }
        }

        if (singleton->ball->y - singleton->ball->h < -0.99){
            singleton->moving = false;
            singleton->game_over = true;
            singleton->gameOver->animate();

        }
    }
    if (singleton->up){
        singleton->platform->moveUp(0.05);
    }
    if (singleton->down){
        singleton->platform->moveDown(0.05);
    }
    if (singleton->left){
        singleton->platform->moveLeft(0.05);
    }
    if (singleton->right){
        singleton->platform->moveRight(0.05);
    }

    if (singleton->game_over){
        singleton->redraw();
        glutTimerFunc(80, app_timer, value); //keep at 80, seems to be good animation speed for pacman
    }
    else{
        if (singleton->up || singleton->down || singleton->left || singleton->right || singleton->moving && !singleton->game_over){
            singleton->redraw();
            glutTimerFunc(16, app_timer, value);
        }
    }


} */

App::App(const char* label, int x, int y, int w, int h): GlutApp(label, x, y, w, h){
    // Initialize state variables

    mx = 0.0;
    my = 0.0;

    game0 = new game();

}

void App::specialKeyPress(int key){
    game0->specialKeyHandler(key);
    redraw();
}

void App::draw() {

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

void App::idle(){
    redraw();
}

void App::keyPress(unsigned char key) {
    if (key == ' '){ 
        delete game0; 
        game0 = new game();
    }
    game0->regularKeyHandler(key);
    redraw();
}

/* UNNECESSARY */
void App::mouseDown(float x, float y){
    // Update app state
    mx = x;
    my = y;
    // No need for mouse handler

}

void App::mouseDrag(float x, float y){
    // Update app state
    mx = x;
    my = y;
    // No need for mouse handler

}

void App::specialKeyUp(int key){
    // No need to check if key is released (as Pacman moves perpetually until another key press)
}
