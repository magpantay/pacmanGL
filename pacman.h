#ifndef pacman_hpp
#define pacman_hpp

#include "AnimatedRect.h"

class pacman : public AnimatedRect
{
  public:
    bool up;
    bool down;
    bool left;
    bool right; //I feel like the only reason we don't have a populatePacman is because we only need one, while for populatePellets and populateGhosts, we spawn >1 of those

    bool dead;

    pacman();
    pacman(const char *, float, float, bool, bool, bool, bool);

    void changeDirection(int);
    void changeDirection(unsigned char);

    void die();

    ~pacman();
};

#endif
