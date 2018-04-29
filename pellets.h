#ifndef PELLETS_H
#define PELLETS_H

#include <vector>

class pellets : public TexRect //inherits changeBMP, draw, etc.
{
    bool hasBeenEaten;
    public:
      pellets();
      void changeBeenEaten();
      ~pellets();
};

#endif
