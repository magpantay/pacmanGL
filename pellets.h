#ifndef PELLETS_H
#define PELLETS_H

#include <vector>
#include "TexRect.h"

class pellet : public TexRect //inherits changeBMP, draw, etc.
{
    bool hasBeenEaten;
    public:
      pellet(const char* filename, float x=0, float y=0, float w=0.5, float h=0.5);
      void changeBeenEaten(bool value = true);
      bool getHasBeenEaten();
      ~pellet();
};

#endif
