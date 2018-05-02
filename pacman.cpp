#include "pacman.h"

pacman::pacman(/*const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5):AnimatedRect(filename, rows, cols, x, y, w, h*/)
{
    float pellet_spacing_x = 0.025;
    float pellet_spacing_y = 0.025;
    float default_width = (2.0/19.0)-2.0*pellet_spacing_x;
    float default_height = 0.1-2.0*pellet_spacing_y;

    pac = new AnimatedRect("BMPs/pacman/pacman_left.bmp", -1.0+9.0*(2.0/19.0)+pellet_spacing_x, -0.2-pellet_spacing_y, default_width, default_height);
}

void pacman::moveUp(float moveBy){
    y += moveBy;
    changeBMPFile("BMPs/pacman/pacman_up.bmp", 1, 4);
}

void pacman::moveDown(float moveBy){
    y -= moveBy;
    changeBMPFile("BMPs/pacman/pacman_down.bmp", 1, 4);
}

void pacman::moveLeft(float moveBy){
    x -= moveBy;
    changeBMPFile("BMPs/pacman/pacman_left.bmp", 1, 4);
}

void pacman::moveRight(float moveBy){
    x += moveBy;
    changeBMPFile("BMPs/pacman/pacman_right.bmp", 1, 4);
}

pacman::~pacman()
{
  //delete pacman;
}

/* MIGHT JUST HAVE A CLASS GAME THAT HAS DEFAULT STUFF */
