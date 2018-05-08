#ifndef POPULATEGHOSTS_H
#define POPULATEGHOSTS_H

#include "ghosts.h"

#include <vector>
using namespace std;

class populateGhosts
{
    public:
      vector < ghosts* > spoopy;

      populateGhosts();
      populateGhosts(float, float, float, float, float, float, float, float);

      void drawGhosts();
      void animateGhosts();
      void advanceAllGhostsAnimation();
      void stopAllGhostsAnimation();

      void changeDirection(int, int);
      void moveUp(int, float rate = 0.01);
      void moveDown(int, float rate = 0.01);
      void moveRight(int, float rate = 0.01);
      void moveLeft(int, float rate = 0.01);

      ~populateGhosts();
};

#endif
