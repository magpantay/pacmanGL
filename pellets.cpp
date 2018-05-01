#include "pellets.h"

pellet::pellet(const char* filename, float x, float y, float w, float h):TexRect(filename, x, y, w, h)
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
