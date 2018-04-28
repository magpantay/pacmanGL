#ifndef TexRect_h
#define TexRect_h

#if defined WIN32
#include <freeglut.h>
#elif defined __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/freeglut.h>
#endif

#include "RgbImage.h"

class TexRect {
protected:
    float x;
    float y;
    float w;
    float h;
    GLuint texture_id;
    int rows;
    int cols;
    int curr_row;
    int curr_col;

    bool complete;
public:
    TexRect (const char*, int, int, float, float, float, float);
    bool done();
    void draw();
    void advance();
    void reset();

    void changeX(float);
    void changeY(float);
    void changeWidth(float);
    void changeHeight(float);

    void moveUp(float rate=0.01);
    void moveDown(float rate=0.01);
    void moveLeft(float rate=0.01);
    void moveRight(float rate=0.01);

    void changeBMPFile(const char*, int, int);
    bool contains(float x, float y);
    void mouseHandler(float x, float y);
    void keyHandler(float key);

};

#endif
