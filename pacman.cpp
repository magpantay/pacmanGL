#include "pacman.h"

static pacman *singleton;

pacman::pacman() : AnimatedRect("BMPs/pacman/pacman_left.png", 1, 4, -1.0 + 9.0 * (2.0 / 19.0), -0.21, 0.075, 0.075)
{
    left = true;               //initialize to true, we want pacman facing left
    right = up = down = false; // initialize to false
    dead = false;
}

pacman::pacman(const char *filename, float x, float y, bool left, bool right, bool up, bool down) : AnimatedRect(filename, 1, 4, x, y, 0.075, 0.075)
{
    this->left = left;
    this->right = right;
    this->up = up;
    this->down = down;
    dead = false;
}

void pacman::changeDirection(unsigned char key)
{
    if (key == 'w')
    {
        right = false;
        down = false;
        left = false;

        up = true;

        change_Picture_File("BMPs/pacman/pacman_up.png", 1, 4);
    }

    if (key == 'a')
    {
        up = false;
        right = false;
        down = false;

        left = true;

        change_Picture_File("BMPs/pacman/pacman_left.png", 1, 4);
    }

    if (key == 's')
    {
        up = false;
        left = false;
        right = false;

        down = true;

        change_Picture_File("BMPs/pacman/pacman_down.png", 1, 4);
    }

    if (key == 'd')
    {
        left = false;
        up = false;
        down = false;

        right = true;

        change_Picture_File("BMPs/pacman/pacman_right.png", 1, 4);
    }
}

void pacman::changeDirection(int key) //special key
{
    if (key == 100)
    {
        up = false;
        right = false;
        down = false;

        left = true;

        change_Picture_File("BMPs/pacman/pacman_left.png", 1, 4);
    }
    if (key == 101)
    {
        right = false;
        down = false;
        left = false;

        up = true;

        change_Picture_File("BMPs/pacman/pacman_up.png", 1, 4);
    }
    if (key == 102)
    {
        left = false;
        up = false;
        down = false;

        right = true;

        change_Picture_File("BMPs/pacman/pacman_right.png", 1, 4);
    }
    if (key == 103)
    {
        up = false;
        left = false;
        right = false;

        down = true;

        change_Picture_File("BMPs/pacman/pacman_down.png", 1, 4);
    }
}

void pacman::die()
{
    dead = true;
    change_Picture_File("BMPs/pacman/pacman_death.png", 1, 14);
}

pacman::~pacman()
{
    //delete pacman;
}