#include "populateGhosts.h"

populateGhosts::populateGhosts()
{
    ghosts * blinky = new ghosts("BMPs/ghosts/red_ghost_left.png", 1, 2, -1.0+7.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(blinky);
    ghosts * pinky = new ghosts("BMPs/ghosts/pink_ghost_left.png", 1, 2, -1.0+8.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(pinky);
    ghosts * inky = new ghosts("BMPs/ghosts/orange_ghost_left.png", 1, 2, -1.0+9.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(inky);
    ghosts * clyde = new ghosts("BMPs/ghosts/blue_ghost_left.png", 1, 2, -1.0+10.0*(2.0/19.0), 0.0, (2.0/19.0), 0.1);
    spoopy.push_back(clyde);
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

populateGhosts::~populateGhosts()
{

}
