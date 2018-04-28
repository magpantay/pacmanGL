#ifndef pacman_hpp
#define pacman_hpp

#include "TexRect.h"

class pacman : public TexRect{
    static void (*comp_cb)();
public:
    pacman(const char*, int, int, float, float, float, float);

    void moveUp(float);
    void moveDown(float);
    void moveRight(float);
    void moveLeft(float);
    void autoMove(float);
};

#endif