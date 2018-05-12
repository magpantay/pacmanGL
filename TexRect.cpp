#include "TexRect.h"

/* THIS IS FOR STATIC OBJECTS THAT JUST NEED TEXTURING */
/* NO ANIMATED TEXTURES HERE, THAT'S HANDLED BY ANIMATEDRECT.H/ANIMATEDRECT.CPP */

TexRect::TexRect(const char *filename, float x = 0, float y = 0, float w = 0.5, float h = 0.5)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

    texture_id = SOIL_load_OGL_texture(
        filename,
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);

    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;

    rising = false;
    movingLeft = true;

    xinc = 0.01;
    yinc = 0.01;
}

// USED FOR MOVEMENT, BUT NO ANIMATION
void TexRect::moveUp(float rate)
{
    y += rate;
}
void TexRect::moveDown(float rate)
{
    y -= rate;
}
void TexRect::moveLeft(float rate)
{
    x -= rate;
    if (x < -0.99)
    {
        x = -0.99;
    }
}
void TexRect::moveRight(float rate)
{
    x += rate;
    if (x + w > 0.99)
    {
        x = 0.99 - w;
    }
}

void TexRect::jump()
{
    if (rising)
    {
        y += yinc;
        if (movingLeft)
        {
            x -= xinc;
        }
        else
        {
            x += xinc;
        }
    }
    else
    {
        y -= yinc;
        if (movingLeft)
        {
            x -= xinc;
        }
        else
        {
            x += xinc;
        }
    }

    if (y > 0.99)
    {
        rising = false;
    }
    if ((y - h) < -0.99)
    {
        rising = true;
    }
    if (x < -0.99)
    {
        movingLeft = false;
    }
    if (x + w > 0.99)
    {
        movingLeft = true;
    }
}
//END MOVEMENT

void TexRect::draw()
{
    glBindTexture(GL_TEXTURE_2D, texture_id);
    glEnable(GL_TEXTURE_2D);

    glBegin(GL_QUADS);
    glColor4f(1, 1, 1, 1);
    glTexCoord2f(0, 0);
    glVertex2f(x, y - h);

    glTexCoord2f(0, 1);
    glVertex2f(x, y);

    glTexCoord2f(1, 1);
    glVertex2f(x + w, y);

    glTexCoord2f(1, 0);
    glVertex2f(x + w, y - h);

    glEnd();

    glDisable(GL_TEXTURE_2D);
}

void TexRect::change_Picture_File(const char *filename) //no need for rows and columns because it's unanimated here
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

    texture_id = SOIL_load_OGL_texture(
        filename,
        SOIL_LOAD_AUTO,
        SOIL_CREATE_NEW_ID,
        SOIL_FLAG_MIPMAPS | SOIL_FLAG_INVERT_Y | SOIL_FLAG_NTSC_SAFE_RGB | SOIL_FLAG_COMPRESS_TO_DXT);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);

    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);

    rising = false;
    movingLeft = true;

    xinc = 0.01;
    yinc = 0.01;
}

bool TexRect::contains(AnimatedRect *obj)
{
    return (obj->getX() <= this->x + this->w && obj->getX() >= this->x) && (obj->getY() >= (this->y - this->h) && obj->getY() <= this->y) || ((obj->getX() + obj->getW()) <= this->x + this->w && (obj->getX() + obj->getW()) >= this->x) && (obj->getY() >= (this->y - this->h) && obj->getY() <= this->y) || (obj->getX() <= this->x + this->w && obj->getX() >= this->x) && ((obj->getY() - obj->getH()) >= (this->y - this->h) && (obj->getY() - obj->getH()) <= this->y) || ((obj->getX() + obj->getW()) <= this->x + this->w && (obj->getX() + obj->getW()) >= this->x) && ((obj->getY() - obj->getH()) >= (this->y - this->h) && (obj->getY() - obj->getH()) <= this->y); //this->done to prevent user from clicking again once the animation finishes
}

bool TexRect::contains(TexRect *obj)
{
    return (obj->getX() <= this->x + this->w && obj->getX() >= this->x) && (obj->getY() >= (this->y - this->h) && obj->getY() <= this->y) || ((obj->getX() + obj->getW()) <= this->x + this->w && (obj->getX() + obj->getW()) >= this->x) && (obj->getY() >= (this->y - this->h) && obj->getY() <= this->y) || (obj->getX() <= this->x + this->w && obj->getX() >= this->x) && ((obj->getY() - obj->getH()) >= (this->y - this->h) && (obj->getY() - obj->getH()) <= this->y) || ((obj->getX() + obj->getW()) <= this->x + this->w && (obj->getX() + obj->getW()) >= this->x) && ((obj->getY() - obj->getH()) >= (this->y - this->h) && (obj->getY() - obj->getH()) <= this->y); //this->done to prevent user from clicking again once the animation finishes
}

float TexRect::getX() const
{
    return x;
}

float TexRect::getY() const
{
    return y;
}

float TexRect::getW() const
{
    return w;
}

float TexRect::getH() const
{
    return h;
}
