#include "ghosts.h"

ghosts::ghosts()
{
  float pellet_spacing_x = 0.025;
  float pellet_spacing_y = 0.025;
  float default_width = (2.0/19.0)-2.0*pellet_spacing_x;
  float default_height = 0.1-2.0*pellet_spacing_y;

  AnimatedRect * blinky = new AnimatedRect("BMPs/ghosts/red_ghost_left.bmp", 1, 2, -1.0+7.0*(2.0/19.0)+pellet_spacing_x, 0.0-pellet_spacing_y, default_width, default_height);
  spoopy.push_back(blinky);
  AnimatedRect * pinky = new AnimatedRect("BMPs/ghosts/pink_ghost_left.bmp", 1, 2, -1.0+8.0*(2.0/19.0)+pellet_spacing_x, 0.0-pellet_spacing_y, default_width, default_height);
  spoopy.push_back(pinky);
  AnimatedRect * inky = new AnimatedRect("BMPs/ghosts/orange_ghost_left.bmp", 1, 2, -1.0+9.0*(2.0/19.0)+pellet_spacing_x, 0.0-pellet_spacing_y, default_width, default_height);
  spoopy.push_back(inky);
  AnimatedRect * clyde = new AnimatedRect("BMPs/ghosts/blue_ghost_left.bmp", 1, 2, -1.0+10.0*(2.0/19.0)+pellet_spacing_x, 0.0-pellet_spacing_y, default_width, default_height);
  spoopy.push_back(clyde);
}

ghosts::~ghosts()
{
  //delete blinky;
  //delete pinky;
  //delete inky;
  //delete clyde;
}
