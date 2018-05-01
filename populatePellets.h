#ifndef POPULATEPELLETS_H
#define POPULATEPELLETS_H

#include <vector>
#include "pellets.h"

using namespace std;

class populatePellets
{
  vector < pellet* > pelletStuff;
  public:
    populatePellets();
    vector < pellet* > getPellets(); 
    ~populatePellets();
};

#endif
