#ifndef POPULATEPELLETS_H
#define POPULATEPELLETS_H

#include <vector>
#include "pellets.h"

using namespace std;

class populatePellets
{

  public:
    vector < pellet* > pelletStuff;
    populatePellets();
    //vector < pellet* > getPellets(); not needed as pelletStuff is public
    ~populatePellets();
};

#endif
