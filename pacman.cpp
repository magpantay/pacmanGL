#include "pacman.h"

pacman::pacman(/*const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5):AnimatedRect(filename, rows, cols, x, y, w, h*/)
{
    pac = new AnimatedRect("BMPs/pacman/pacman_left.png", 1, 4, -1.0+9.0*(2.0/19.0), -0.2, (2.0/19.0), 0.1);
    left = true; //initialize to true, we want pacman facing left
    right = up = down = false; // initialize to false
}

void pacman::drawPacman()
{
   pac->draw(); //draws to buffer
}

void pacman::animatePacman()
{
  pac->animate(); //draw to screen
}

void pacman::advancePacmanAnimation()
{
  pac->advance();
}

void pacman::changeDirection(unsigned char* key)
{
  if (key == 'w')
  {
      right = false;
      down = false;
      left = false;

      up = true;
  }

  if (key == 'a')
  {
      up = false;
      right = false;
      down = false;

      left = true;
  }

  if (key == 's')
  {
      up = false;
      left = false;
      right = false;

      down = true;
  }

  if (key == 'd')
  {
      left = false;
      up = false;
      down = false;

      right = true;
  }
}

void pacman::changeDirection(int specialKey)
{
  if (key == 100){
      up = false;
      right = false;
      down = false;

      left = true;
  }
  if (key == 101){
      right = false;
      down = false;
      left = false;

      up = true;
  }
  if (key == 102){
      left = false;
      up = false;
      down = false;

      right = true;
  }
  if (key == 103){
      up = false;
      left = false;
      right = false;

      down = true;
  }
}

void pacman::moveUp(float moveBy){
    y += moveBy;
    change_Picture_File("BMPs/pacman/pacman_up.bmp", 1, 4);
}

void pacman::moveDown(float moveBy){
    y -= moveBy;
    change_Picture_File("BMPs/pacman/pacman_down.bmp", 1, 4);
}

void pacman::moveLeft(float moveBy){
    x -= moveBy;
    change_Picture_File("BMPs/pacman/pacman_left.bmp", 1, 4);
}

void pacman::moveRight(float moveBy){
    x += moveBy;
    change_Picture_File("BMPs/pacman/pacman_right.bmp", 1, 4);
}

pacman::~pacman()
{
  //delete pacman;
}
