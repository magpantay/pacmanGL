#ifndef PELLETS_H
#define PELLETS_H

#include <vector>

class pellets : public TexRect
{
    bool hasBeenEaten;
    public:
      pellets();
      void changeBeenEaten();
      ~pellets();
};

#endif
