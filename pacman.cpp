#include "pacman.h"

pacman::pacman(const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5):TexRect(filename, rows, cols, x, y, w, h){
}

void pacman::moveUp(float moveBy){
    y += moveBy;
}

void pacman::moveDown(float moveBy){
    y -= moveBy;
}

void pacman::moveLeft(float moveBy){
    x -= moveBy;
}

void pacman::moveRight(float moveBy){
    x += moveBy;
}
