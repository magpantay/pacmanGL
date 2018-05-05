#ifndef GHOSTS_H
#define GHOSTS_H

#include <vector>
#include "AnimatedRect.h"

using namespace std;

class ghosts
{
  public:

    bool left;
    bool up;
    bool down;
    bool right;

    ghosts(const char*, int, int, float, float, float, float);

    ~ghosts();
};

#endif
