#ifndef AnimatedRect_h
#define AnimatedRect_h

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
    
    void incY();
    
    void reset();
    
    void animate();
    
    void stop();
};

#endif
