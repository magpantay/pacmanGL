#include "pellets.h"

pellets::pellets()
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
