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

void populateGhosts::moveUp(float moveBy, int whichGhost){
    y += moveBy;
    // TO DO: NEED TO FIGURE OUT WHICH GHOST TEXTURE TO CHANGE
    spoopy[whichGhost]->change_Picture_File("BMP/ghosts/", 1, 4);
    change_Picture_File("BMPs/pacman/pacman_up.bmp", 1, 4);
}

void populateGhosts::moveDown(float moveBy){
    y -= moveBy;
    change_Picture_File("BMPs/pacman/pacman_down.bmp", 1, 4);
}

void populateGhosts::moveLeft(float moveBy){
    x -= moveBy;
    change_Picture_File("BMPs/pacman/pacman_left.bmp", 1, 4);
}

void populateGhosts::moveRight(float moveBy){
    x += moveBy;
    change_Picture_File("BMPs/pacman/pacman_right.bmp", 1, 4);
}

populateGhosts::~populateGhosts()
{

}
