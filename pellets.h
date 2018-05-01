#ifndef PELLETS_H
#define PELLETS_H

#include <vector>
#include "TexRect.h"

class pellet : public TexRect //inherits changeBMP, draw, etc.
{
    bool hasBeenEaten;
    public:
      pellet();
      void changeBeenEaten();
      ~pellet();
};

#endif
