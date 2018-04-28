#include "pacman.h"

pacman::pacman(const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5):TexRect(filename, rows, cols, x, y, w, h){
}

void pacman::moveUp(float moveBy){
    y += moveBy;
    changeBMPFile("BMPs/pacman/pacman_up.bmp", 1, 4);
}

void pacman::moveDown(float moveBy){
    y -= moveBy;
    changeBMPFile("BMPs/pacman/pacman_down.bmp", 1, 4);
}

void pacman::moveLeft(float moveBy){
    x -= moveBy;
    changeBMPFile("BMPs/pacman/pacman_left.bmp", 1, 4);
}

void pacman::moveRight(float moveBy){
    x += moveBy;
    changeBMPFile("BMPs/pacman/pacman_right.bmp", 1, 4);
}