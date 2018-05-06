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

void populateGhosts::moveUp(int whichGhost, float moveBy){
    if (whichGhost == 0)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_up.png", 1, 2);
    else if (whichGhost == 1)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_up.png", 1, 2);
    else if (whichGhost == 2)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_up.png", 1, 2);
    else
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_up.png", 1, 2);

    spoopy[whichGhost]->moveUp(moveBy);
}

void populateGhosts::moveDown(int whichGhost, float moveBy){
    if (whichGhost == 0)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_down.png", 1, 2);
    else if (whichGhost == 1)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_down.png", 1, 2);
    else if (whichGhost == 2)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_down.png", 1, 2);
    else
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_down.png", 1, 2);

    spoopy[whichGhost]->moveDown(moveBy);
}

void populateGhosts::moveLeft(int whichGhost, float moveBy){
    if (whichGhost == 0)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_down.png", 1, 2);
    else if (whichGhost == 1)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_down.png", 1, 2);
    else if (whichGhost == 2)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_down.png", 1, 2);
    else
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_down.png", 1, 2);

    spoopy[whichGhost]->moveLeft(moveBy);
}

void populateGhosts::moveRight(int whichGhost, float moveBy){
    if (whichGhost == 0)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/red_ghost_down.png", 1, 2);
    else if (whichGhost == 1)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/pink_ghost_down.png", 1, 2);
    else if (whichGhost == 2)
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/orange_ghost_down.png", 1, 2);
    else
      spoopy[whichGhost]->change_Picture_File("BMPs/ghosts/blue_ghost_down.png", 1, 2);

    spoopy[whichGhost]->moveRight(moveBy);
}

populateGhosts::~populateGhosts()
{

}
