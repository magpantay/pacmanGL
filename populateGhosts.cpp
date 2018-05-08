#include "populateGhosts.h"

populateGhosts::populateGhosts()
{
    ghosts * blinky = new ghosts("BMPs/ghosts/red_ghost_left.png", 1, 2, -1.0+7.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(blinky); //[0]
    ghosts * pinky = new ghosts("BMPs/ghosts/pink_ghost_left.png", 1, 2, -1.0+8.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(pinky); //[1]
    ghosts * inky = new ghosts("BMPs/ghosts/orange_ghost_left.png", 1, 2, -1.0+9.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(inky); //[2]
    ghosts * clyde = new ghosts("BMPs/ghosts/blue_ghost_left.png", 1, 2, -1.0+10.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(clyde); //[3]
}

populateGhosts::populateGhosts(float blinky_x, float blinky_y, float pinky_x, float pinky_y, float inky_x, float inky_y, float clyde_x, float clyde_y)
{
    ghosts * blinky = new ghosts("BMPs/ghosts/red_ghost_left.png", 1, 2, blinky_x, blinky_y, (2.0/19.0), 0.1);
    spoopy.push_back(blinky); //[0]
    ghosts * pinky = new ghosts("BMPs/ghosts/pink_ghost_left.png", 1, 2, pinky_x, pinky_y, (2.0/19.0), 0.1);
    spoopy.push_back(pinky); //[1]
    ghosts * inky = new ghosts("BMPs/ghosts/orange_ghost_left.png", 1, 2, inky_x, inky_y, (2.0/19.0), 0.1);
    spoopy.push_back(inky); //[2]
    ghosts * clyde = new ghosts("BMPs/ghosts/blue_ghost_left.png", 1, 2, clyde_x, clyde_y, (2.0/19.0), 0.1);
    spoopy.push_back(clyde); //[3]
}

void populateGhosts::drawGhosts()
{
    for (int i = 0; i < spoopy.size(); i++)
    {
      spoopy[i]->draw(); //will draw into buffer
    }
}

void populateGhosts::animateGhosts()
{
    for (int i = 0; i < spoopy.size(); i++)
    {
      spoopy[i]->animate(); //will draw onto screen
    }
}

void populateGhosts::advanceAllGhostsAnimation()
{
    for (int i = 0; i < spoopy.size(); i++)
    {
       spoopy[i]->advance();
    }
}

void populateGhosts::moveUp(int whichGhost, float moveBy){
    spoopy[whichGhost]->moveUp(moveBy);
}

void populateGhosts::moveDown(int whichGhost, float moveBy){
    spoopy[whichGhost]->moveDown(moveBy);
}

void populateGhosts::moveLeft(int whichGhost, float moveBy){
    spoopy[whichGhost]->moveLeft(moveBy);
}

void populateGhosts::moveRight(int whichGhost, float moveBy){
    spoopy[whichGhost]->moveRight(moveBy);
}

void populateGhosts::changeDirection(int whichGhost, int whichDirection)
{
  /* 0 is up, 1 is down, 2 is left, 3 is right */
  if (whichGhost == 0)
  {
      if (whichDirection == 0)
      {
        spoopy[whichGhost]->up = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->left = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_up.png", 1, 2);
      }
      else if (whichDirection == 1)
      {
        spoopy[whichGhost]->down = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->left = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_down.png", 1, 2);
      }
      else if (whichDirection == 2)
      {
        spoopy[whichGhost]->left = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_left.png", 1, 2);
      }
      else
      {
        spoopy[whichGhost]->right = true;
        spoopy[whichGhost]->left = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_right.png", 1, 2);
      }
  }
  else if (whichGhost == 1)
  {
      if (whichDirection == 0)
      {
        spoopy[whichGhost]->up = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->left = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_up.png", 1, 2);
      }
      else if (whichDirection == 1)
      {
        spoopy[whichGhost]->down = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->left = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_down.png", 1, 2);
      }
      else if (whichDirection == 2)
      {
        spoopy[whichGhost]->left = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_left.png", 1, 2);
      }
      else
      {
        spoopy[whichGhost]->right = true;
        spoopy[whichGhost]->left = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_right.png", 1, 2);
      }
  }
  else if (whichGhost == 2)
  {
      if (whichDirection == 0)
      {
        spoopy[whichGhost]->up = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->left = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_up.png", 1, 2);
      }
      else if (whichDirection == 1)
      {
        spoopy[whichGhost]->down = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->left = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_down.png", 1, 2);
      }
      else if (whichDirection == 2)
      {
        spoopy[whichGhost]->left = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_left.png", 1, 2);
      }
      else
      {
        spoopy[whichGhost]->right = true;
        spoopy[whichGhost]->left = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_right.png", 1, 2);
      }
  }
  else
  {
      if (whichDirection == 0)
      {
        spoopy[whichGhost]->up = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->left = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_up.png", 1, 2);
      }
      else if (whichDirection == 1)
      {
        spoopy[whichGhost]->down = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->left = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_down.png", 1, 2);
      }
      else if (whichDirection == 2)
      {
        spoopy[whichGhost]->left = true;
        spoopy[whichGhost]->right = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_left.png", 1, 2);
      }
      else
      {
        spoopy[whichGhost]->right = true;
        spoopy[whichGhost]->left = spoopy[whichGhost]->up = spoopy[whichGhost]->down = false;
        spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_right.png", 1, 2);
      }
  }
}

populateGhosts::~populateGhosts()
{

}
