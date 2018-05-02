#include "pacman.h"

pacman::pacman(/*const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5):AnimatedRect(filename, rows, cols, x, y, w, h*/)
{
    pac = new AnimatedRect("BMPs/pacman/pacman_left.png", 1, 4, -1.0+9.0*(2.0/19.0), -0.2, (2.0/19.0), 0.1);
}

/*void pacman::moveUp(float moveBy){
    y += moveBy;
    changeBMPFile("BMPs/pacman/pacman_up.bmp", 1, 4);
}

void pacman::moveDown(float moveBy){1
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
}*/

pacman::~pacman()
{
  //delete pacman;
}

/* MIGHT JUST HAVE A CLASS GAME THAT HAS DEFAULT STUFF */
/* ALSO AS OF 5-1 6:53PM, PACMAN AND GHOSTS DON'T RENDER */
