#ifndef POPULATEGHOSTS_H
#define POPULATEGHOSTS_H

#include "ghosts.h"

#include <vector>
using namespace std;

class populateGhosts
{
    vector < ghosts* > spoopy;
    public:
      populateGhosts();
      
      void drawGhosts();
      void animateGhosts();
      void advanceAllGhostsAnimation();

      void moveUp(int, float rate = 0.05);
      void moveDown(int, float rate = 0.05);
      void moveRight(int, float rate = 0.05);
      void moveLeft(int, float rate = 0.05);

      ~populateGhosts();
};

#endif
