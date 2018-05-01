#include "pellets.h"

pellets::pellets(const char* filename, float x=0, float y=0, float w=0.5, float h=0.5):TexRect(filename, x, y, w, h)
{
  hasBeenEaten = false;
}

void pellets::changeBeenEaten()
{
  hasBeenEaten = true; //only trips when pellet has been eaten to clear from board
}

pellets::~pellets()
{
 //unneeded probably
}
