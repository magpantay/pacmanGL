#include "pellets.h"

pellet::pellet(const char* filename, float x, float y, float w, float h):TexRect(filename, x, y, w, h)
{
  hasBeenEaten = false;
}

void pellet::changeBeenEaten(bool value)
{
  hasBeenEaten = value; //only trips when pellet has been eaten to clear from board
}

bool pellet::getHasBeenEaten(){
  return hasBeenEaten;
}

pellet::~pellet()
{
 //unneeded probably
}
