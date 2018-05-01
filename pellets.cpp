#include "pellets.h"

pellet::pellet(const char* filename, float x=0, float y=0, float w=0.5, float h=0.5):TexRect(filename, x, y, w, h)
{
  hasBeenEaten = false;
}

void pellet::changeBeenEaten()
{
  hasBeenEaten = true; //only trips when pellet has been eaten to clear from board
}

pellet::~pellet()
{
 //unneeded probably
}
