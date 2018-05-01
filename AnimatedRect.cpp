#include "AnimatedRect.h"

/* THIS ONE IS FOR ANIMATED TEXTURES */

AnimatedRect::AnimatedRect (const char* map_filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

    texture_map_id = SOIL_load_OGL_texture
    (
     map_filename,
     SOIL_LOAD_AUTO,
     SOIL_CREATE_NEW_ID,
     SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
     );

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);

    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    this->rows = rows;
    this->cols = cols;

    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;

    curr_row = 1;
    curr_col = 1;

    complete = false;
    animating = false;

    rising = false;
    movingLeft = true;
}

bool AnimatedRect::done() {
    return complete;
}

void AnimatedRect::draw(){
    if (animating){
        glBindTexture( GL_TEXTURE_2D, texture_map_id );
        glEnable(GL_TEXTURE_2D);
        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);


        float xinc = 1.0/cols;
        float yinc = 1.0/rows;


        float top = 1 - yinc * (curr_row - 1);
        float bottom = 1 - yinc * curr_row;

        float left = xinc * (curr_col - 1);
        float right = xinc * curr_col;


        glBegin(GL_QUADS);

        glTexCoord2f(left, bottom);
        glVertex2f(x, y - h);

        glTexCoord2f(left, top);
        glVertex2f(x, y);

        glTexCoord2f(right, top);
        glVertex2f(x+w, y);

        glTexCoord2f(right, bottom);
        glVertex2f(x+w, y - h);

        glEnd();

        glDisable(GL_TEXTURE_2D);
    }
}

void AnimatedRect::incY(float yinc=0.01){
    y+=yinc;
}

void AnimatedRect::incX(float xinc=0.01){
    x+=xinc;
}

void AnimatedRect::advance(){
    if (curr_col < cols){
        curr_col++;
    }
    else {
        if (curr_row < rows){
            curr_row++;
            curr_col = 1;
        }
        else{
            curr_row = 1;
            curr_col = 1;
        }
    }

    if (curr_row == rows && curr_col == cols){
        complete = true;
    }
}

void AnimatedRect::reset(){
    complete = false;
}

void AnimatedRect::animate(){
    animating = true;
}

void AnimatedRect::stop(){
    animating = false;
}

void AnimatedRect::change_Picture_File(const char* filename, int rows, int cols)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

    texture_map_id = SOIL_load_OGL_texture
    (
     map_filename,
     SOIL_LOAD_AUTO,
     SOIL_CREATE_NEW_ID,
     SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT
     );

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);

    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    this->rows = rows;
    this->cols = cols;

    curr_row = 1;
    curr_col = 1;

    complete = false;
    animating = false;
}

void AnimatedRect::changeX(float x)
{
	  this->x = x;
}

void AnimatedRect::changeY(float y)
{
	  this->y = y;
}

void AnimatedRect::changeWidth(float w)
{
	  this->w = w;
}

void AnimatedRect::changeHeight(float h)
{
	  this->h = h;
}

float AnimatedRect::getX() const
{
    return x;
}

float AnimatedRect::getY() const
{
    return y;
}

float AnimatedRect::getW() const
{
    return w;
}

float AnimatedRect::getH() const
{
    return h;
}

bool AnimatedRect::contains(float x0, float y0)
{
    return (x0 <= this->x+this->w && x0 >= this->x) && (y0 >= (this->y - this->h) && y0 <= this->y); //this->done to prevent user from clicking again once the animation finishes
}

//MOVEMENT
void AnimatedRect::moveUp(float rate){
    y += rate;
}
void AnimatedRect::moveDown(float rate){
    y -= rate;
}
void AnimatedRect::moveLeft(float rate){
    x -= rate;
    if (x < -0.99){
        x = -0.99;
    }
}
void AnimatedRect::moveRight(float rate){
    x += rate;
    if (x + w > 0.99){
        x = 0.99 - w;
    }
}

void AnimatedRect::jump(){
    if(rising){
        y+=yinc;
        if (movingLeft){
            x -=xinc;
        }
        else {
            x +=xinc;
        }
    }
    else {
        y-=yinc;
        if (movingLeft){
            x -=xinc;
        }
        else{
            x +=xinc;
        }
    }

    if (y > 0.99){
        rising = false;
    }
    if ((y-h) < -0.99){
        rising = true;
    }
    if (x < -0.99) {
        movingLeft = false;

    }
    if (x+w > 0.99) {
        movingLeft = true;

    }
}