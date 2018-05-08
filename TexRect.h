#ifndef TexRect_h
#define TexRect_h

/* THIS IS FOR STATIC OBJECTS THAT JUST NEED TEXTURING */
/* NO ANIMATED TEXTURES HERE, THAT'S HANDLED BY ANIMATEDRECT.H/ANIMATEDRECT.CPP */

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


class TexRect {
public:
    float x;
    float y;
    float w;
    float h;
    GLuint texture_id;

    bool rising;
    bool movingLeft;

    float xinc;
    float yinc;

    TexRect (const char*, float, float, float, float);

    void draw();

    bool contains(float, float);

    void moveUp(float rate=0.01);
    void moveDown(float rate=0.01);
    void moveLeft(float rate=0.01);
    void moveRight(float rate=0.01);

    void jump();

    void change_Picture_File(const char*);

    /* UNNECESSARY, SINCE IT'S PUBLIC
    void changeX(float);
    void changeY(float);
    void changeWidth(float);
    void changeHeight(float);
    */
    float getX() const;
    float getY() const;
    float getW() const;
    float getH() const;
    
};

#endif
