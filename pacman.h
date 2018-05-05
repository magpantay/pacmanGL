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
    bool right;

    AnimatedRect * pac;

    pacman(/*const char*, int, int, float, float, float, float*/);

    void drawPacman();
    void animatePacman();

    void changeDirection(int);
    void changeDirection(unsigned char*);

    void moveUp(float);
    void moveDown(float);
    void moveRight(float);
    void moveLeft(float);
    //void autoMove(float, int);

    ~pacman();
};

#endif
