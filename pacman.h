#ifndef pacman_hpp
#define pacman_hpp

#include "AnimatedRect.h"

class pacman : public AnimatedRect
{
    //static void (*comp_cb)();
public:
    bool up;
    bool down;
    bool left;
    bool right; //I feel like the only reason we don't have a populatePacman is because we only need one, while for populatePellets and populateGhosts, we spawn >1 of those
    
    bool dead;

    //AnimatedRect * pac;

    pacman();
    pacman(const char*, float, float, bool, bool, bool, bool);

    /*void drawPacman();
    void animatePacman();
    void advancePacmanAnimation();*/

    void changeDirection(int);
    void changeDirection(unsigned char);
    
    void die();

    /*void moveUp(float moveBy=0.01);
    void moveDown(float moveBy=0.01);
    void moveLeft(float moveBy=0.01);
    void moveRight(float moveBy=0.01);*/

    ~pacman();
};

#endif
