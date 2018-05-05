#include "ghosts.h"

ghosts::ghosts(const char* filename, int rows, int cols, float x, float y, float w, float h):TexRect(filename, row, cols, x, y, w, h)
{
    left = true; //we want the ghosts facing left at first
    right = up = down = false;
}

ghosts::~ghosts()
{
  //delete blinky;
  //delete pinky;
  //delete inky;
  //delete clyde;
}
