#ifndef GHOSTS_H
#define GHOSTS_H

#include <vector>
#include "AnimatedRect.h"

using namespace std;

class ghosts //I think inherit, but unsure
{
  public:
    vector < AnimatedRect* > spoopy; //size of 4, change the X and Y coords constantly since they move, just use AnimatedRect

    ghosts();
    ~ghosts();
};

#endif
