#ifndef pacman_hpp
#define pacman_hpp

#include "AnimatedRect.h"

class pacman
{
    //static void (*comp_cb)();
public:
    bool up;
    bool down;
    bool left;
    bool right; //I feel like the only reason we don't have a populatePacman is because we only need one, while for populatePellets and populateGhosts, we spawn >1 of those

    AnimatedRect * pac;

    pacman(/*const char*, int, int, float, float, float, float*/);

    void drawPacman();
    void animatePacman();
    void advancePacmanAnimation();

    void changeDirection(int);
    void changeDirection(unsigned char*);

    void moveUp(float);
    void moveDown(float);
    void moveRight(float);
    void moveLeft(float);

    ~pacman();
};

#endif
