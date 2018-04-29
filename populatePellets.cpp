#include "populatePellets.h"

populatePellets::populatePellets()
{
  pellet * pellet1 = new pellet("BMPs/other/pellet_small.bmp", 1, 1, 0.5, 0.5, 0.1, 0.1); //BMP, row, col, x, y, w, h
  pelletStuff.push_back(pellet1);

  
}
