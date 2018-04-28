#include "pellets.h"

pellets::pellets(const char* filename, int rows=1, int cols=1, float x=0, float y=0, float w=0.1, float h=0.1):TexRect(filename, rows, cols, x, y, w, h)
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
