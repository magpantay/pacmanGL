#ifndef AnimatedRect_h
#define AnimatedRect_h

/* THIS ONE IS FOR ANIMATED TEXTURES */

#if defined WIN32
#include <freeglut.h>
#include "../windows/SOIL.h"
#elif defined __APPLE__
#include <GLUT/glut.h>
#include <SOIL.h>
#else
#include <GL/freeglut.h>
#include <SOIL.h>
#endif

class AnimatedRect {
    float x;
    float y;
    float w;
    float h;
    GLuint texture_map_id;

    int rows;
    int cols;

    int curr_row;
    int curr_col;

    bool complete;
    bool animating;
public:
    AnimatedRect (const char*, int, int, float, float, float, float);
    bool done();
    void draw();
    void advance();

    void incY(float yinc=0.01);
    void incX(float xinc=0.01);
    void decY(float yinc=0.01);
    void decX(float xinc=0.01);

    void reset();
    void animate();
    void stop();
    void change_Picture_File(const char*, int, int);

    void moveUp(float rate=0.05);
    void moveDown(float rate=0.05);
    void moveLeft(float rate=0.05);
    void moveRight(float rate=0.05);

    void changeX(float);
    void changeY(float);
    void changeWidth(float);
    void changeHeight(float);

    float getX() const;
    float getY() const;
    float getW() const;
    float getH() const;

    bool contains(AnimatedRect*);
};

#endif
