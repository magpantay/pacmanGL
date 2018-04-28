#include "TexRect.h"

static TexRect* singleton; //we doing this again

void boom(int value)
{
	if (!singleton->done())
	{
		singleton->advance();
		singleton->draw();
		glutTimerFunc(32, boom, value);
	}
}

TexRect::TexRect (const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5){
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

    RgbImage theTexMap( filename );

    glGenTextures( 1, &texture_id );
    glBindTexture( GL_TEXTURE_2D, texture_id );

    gluBuild2DMipmaps(GL_TEXTURE_2D, 3, theTexMap.GetNumCols(), theTexMap.GetNumRows(),
                      GL_RGB, GL_UNSIGNED_BYTE, theTexMap.ImageData() );
    this->texture_id = texture_id;

    this->rows = rows;
    this->cols = cols;

    this->x = x;
    this->y = y;
    this->w = w;
    this->h = h;

    curr_row = 1;
    curr_col = 1;

    complete = false;
}

bool TexRect::done() {
    return complete;
}

void TexRect::draw(){

    glBindTexture( GL_TEXTURE_2D, texture_id );
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

void TexRect::advance(){
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

void TexRect::reset(){
    complete = false;
}

void TexRect::changeBMPFile(const char* filename, int rows, int cols)
{
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
    glEnable(GL_DEPTH_TEST);

    RgbImage theTexMap( filename );

    glGenTextures( 1, &texture_id );
    glBindTexture( GL_TEXTURE_2D, texture_id );

    gluBuild2DMipmaps(GL_TEXTURE_2D, 3, theTexMap.GetNumCols(), theTexMap.GetNumRows(),
                      GL_RGB, GL_UNSIGNED_BYTE, theTexMap.ImageData() );
    this->texture_id = texture_id;
    this->rows = rows;
    this->cols = cols;
    curr_row = 1;
    curr_col = 1;

    complete = false; //need to re-do certain things when changing the image file, like #rows & #cols
}

void TexRect::changeX(float x)
{
	this->x = x;
}

void TexRect::changeY(float y)
{
	this->y = y;
}

void TexRect::changeWidth(float w)
{
	this->w = w;
}

void TexRect::changeHeight(float h)
{
	this->h = h;
}

bool TexRect::contains(float x0, float y0)
{
    return (x0 <= this->x+this->w && x0 >= this->x) && (y0 >= (this->y - this->h) && y0 <= this->y) && (!this->done()); //this->done to prevent user from clicking again once the animation finishes
}

void TexRect::mouseHandler(float x, float y)
{
    if (contains(x, y))
    {
	this->changeBMPFile("fireball.bmp", 6, 6);
	this->draw();
	singleton = this;
	boom(0);
    }

}
