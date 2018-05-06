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

void pacman::moveUp(float moveBy){
    //changePicture
    pac->change_Picture_File("BMPs/pacman/pacman_up.png", 1, 4); 
    pac->moveUp(moveBy);
    pac->animate();
    pac->draw();
}

void pacman::moveDown(float moveBy){
    //change_Picture_File
    pac->change_Picture_File("BMPs/pacman/pacman_down.png", 1, 4); 
    pac->moveDown(moveBy);
    pac->draw();
}

void pacman::moveLeft(float moveBy){
    //changePicture
    pac->change_Picture_File("BMPs/pacman/pacman_left.png", 1, 4); 
    pac->moveLeft(moveBy);
    pac->draw();
}

void pacman::moveRight(float moveBy){
    //change_Picture_File
    pac->change_Picture_File("BMPs/pacman/pacman_right.png", 1, 4); 
    pac->moveRight(moveBy);
    pac->draw();
}

void pacman::changeDirection(unsigned char key)
{
  if (key == 'w')
  {
      right = false;
      down = false;
      left = false;

      up = true;
      moveUp(2.0/19.0);
  }

  if (key == 'a')
  {
      up = false;
      right = false;
      down = false;

      left = true;
      moveLeft(2.0/19.0);
  }

  if (key == 's')
  {
      up = false;
      left = false;
      right = false;

      down = true;
      moveDown(2.0/19.0);
  }

  if (key == 'd')
  {
      left = false;
      up = false;
      down = false;

      right = true;
      moveRight(2.0/19.0);
  }
}

void pacman::changeDirection(int key) //special key
{
  if (key == 100){
      up = false;
      right = false;
      down = false;

      left = true;
      moveLeft(2.0/19.0);
  }
  if (key == 101){
      right = false;
      down = false;
      left = false;

      up = true;
      moveUp(2.0/19.0);
  }
  if (key == 102){
      left = false;
      up = false;
      down = false;

      right = true;
      moveRight(2.0/19.0);
  }
  if (key == 103){
      up = false;
      left = false;
      right = false;

      down = true;
      moveDown(2.0/19.0);
  }
}

pacman::~pacman()
{
  //delete pacman;
}
