#include "pacman.h"

pacman::pacman()
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

void pacman::changeDirection(unsigned char key)
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

void pacman::changeDirection(int key) //special key
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
    //changePicture
    pac->moveUp(moveBy);
}

void pacman::moveDown(float moveBy){
    //change_Picture_File
    pac->moveDown(moveBy);
}

void pacman::moveLeft(float moveBy){
    //changePicture
    pac->moveLeft(moveBy);
}

void pacman::moveRight(float moveBy){
    //change_Picture_File
    pac->moveRight(moveBy);
}

pacman::~pacman()
{
  //delete pacman;
}
