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

      pac->change_Picture_File("BMPs/pacman/pacman_up.png", 1, 4);
  }

  if (key == 'a')
  {
      up = false;
      right = false;
      down = false;

      left = true;

      pac->change_Picture_File("BMPs/pacman/pacman_left.png", 1, 4);
  }

  if (key == 's')
  {
      up = false;
      left = false;
      right = false;

      down = true;

      pac->change_Picture_File("BMPs/pacman/pacman_down.png", 1, 4);
  }

  if (key == 'd')
  {
      left = false;
      up = false;
      down = false;

      right = true;

      pac->change_Picture_File("BMPs/pacman/pacman_right.png", 1, 4);
  }
}

void pacman::changeDirection(int key) //special key
{
  if (key == 100){
      up = false;
      right = false;
      down = false;

      left = true;

      pac->change_Picture_File("BMPs/pacman/pacman_left.png", 1, 4);
  }
  if (key == 101){
      right = false;
      down = false;
      left = false;

      up = true;

      pac->change_Picture_File("BMPs/pacman/pacman_up.png", 1, 4);
  }
  if (key == 102){
      left = false;
      up = false;
      down = false;

      right = true;

      pac->change_Picture_File("BMPs/pacman/pacman_right.png", 1, 4);
  }
  if (key == 103){
      up = false;
      left = false;
      right = false;

      down = true;

      pac->change_Picture_File("BMPs/pacman/pacman_down.png", 1, 4);
  }
}

void pacman::moveUp(float moveBy){
    pac->moveUp(moveBy);
    //pac->draw();
}

void pacman::moveDown(float moveBy){
    pac->moveDown(moveBy);
    //pac->draw();
}

void pacman::moveLeft(float moveBy){
    pac->moveLeft(moveBy);
    //pac->draw();
}

void pacman::moveRight(float moveBy){
    pac->moveRight(moveBy);
    //pac->draw();
}

pacman::~pacman()
{
  //delete pacman;
}
