#include "populatePellets.h"

populatePellets::populatePellets()
{
    float pellet_spacing_x = 0.025;
    float pellet_spacing_y = 0.025;
    float default_width = (2.0 / 19.0) - 2.0 * pellet_spacing_x;
    float default_height = 0.1 - 2.0 * pellet_spacing_y;

    /* FIRST ROW */
    /* FIRST ROW LEFT */
    for (float j = 1.0; j < 9.0; j += 1.0) //starts at 1 because of the multiplier on the x coord
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.8 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }
    /* FIRST ROW RIGHT */
    for (float j = 10.0; j < 18.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.8 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    /* SECOND ROW */
    /* SECOND ROW OF PELLETS */
    pellet *pellet1 = new pellet("BMPs/other/pellet_big.png", -1.0 + (2.0 / 19.0) + pellet_spacing_x - 0.00725, 0.7 - pellet_spacing_y + 0.015, default_width + 0.02, default_height + 0.03);
    pelletStuff.push_back(pellet1); //BIGGER PELLET #1

    pellet *pellet2 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, 0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet2);

    pellet *pellet3 = new pellet("BMPs/other/pellet_med.png", -1.0 + 8.0 * (2.0 / 19.0) + pellet_spacing_x, 0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet3);

    pellet *pellet4 = new pellet("BMPs/other/pellet_med.png", -1.0 + 10.0 * (2.0 / 19.0) + pellet_spacing_x, 0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet4);

    pellet *pellet5 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, 0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet5);

    pellet *pellet6 = new pellet("BMPs/other/pellet_big.png", -1.0 + 17.0 * (2.0 / 19.0) + pellet_spacing_x - 0.00725, 0.7 - pellet_spacing_y + 0.015, default_width + 0.02, default_height + 0.03);
    pelletStuff.push_back(pellet6); //BIGGER PELLET #2

    /* THIRD ROW */
    for (float j = 1.0; j < 18.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.6 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    /* 4TH ROW */
    pellet *pellet7 = new pellet("BMPs/other/pellet_med.png", -1.0 + (2.0 / 19.0) + pellet_spacing_x, 0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet7);

    pellet *pellet8 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, 0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet8);

    pellet *pellet9 = new pellet("BMPs/other/pellet_med.png", -1.0 + 6.0 * (2.0 / 19.0) + pellet_spacing_x, 0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet9);

    pellet *pellet10 = new pellet("BMPs/other/pellet_med.png", -1.0 + 12.0 * (2.0 / 19.0) + pellet_spacing_x, 0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet10);

    pellet *pellet11 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, 0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet11);

    pellet *pellet12 = new pellet("BMPs/other/pellet_med.png", -1.0 + 17.0 * (2.0 / 19.0) + pellet_spacing_x, 0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet12);

    /* 5TH ROW */
    for (float j = 1.0; j < 5.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    for (float j = 6.0; j < 9.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    for (float j = 10.0; j < 13.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    for (float j = 14.0; j < 18.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    /* 6TH ROW */
    pellet *pellet13 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, 0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet13);

    pellet *pellet14 = new pellet("BMPs/other/pellet_med.png", -1.0 + 8.0 * (2.0 / 19.0) + pellet_spacing_x, 0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet14);

    pellet *pellet15 = new pellet("BMPs/other/pellet_med.png", -1.0 + 10.0 * (2.0 / 19.0) + pellet_spacing_x, 0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet15);

    pellet *pellet16 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, 0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet16);

    /* 7TH ROW */
    pellet *pellet41 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, 0.2 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet41);

    for (float j = 6.0; j < 13.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.2 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    pellet *pellet42 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, 0.2 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet42);

    /* 8TH ROW */

    pellet *pellet33 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, 0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet33);

    pellet *pellet34 = new pellet("BMPs/other/pellet_med.png", -1.0 + 6.0 * (2.0 / 19.0) + pellet_spacing_x, 0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet34);

    pellet *pellet35 = new pellet("BMPs/other/pellet_med.png", -1.0 + 12.0 * (2.0 / 19.0) + pellet_spacing_x, 0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet35);

    pellet *pellet36 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, 0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet36);

    /* 9TH ROW (MIDDLE) */
    for (float j = 1.0; j < 18.0; j += 1.0)
    {
        if (j == 7.0 || j == 8.0 || j == 9.0 || j == 10.0)
            continue; // still lazy to separate the for-loop
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, 0.0 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    /*************/
    /* AT THIS POINT, THIS IS THE SAME AS THE 1ST TO 8TH ROW EXCEPT THE Y COORD IS NEGATIVE */
    /*************/

    /* 10TH ROW OF PELLETS */ /* SAME AS 8TH ROW */
    pellet *pellet37 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, -0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet37);

    pellet *pellet38 = new pellet("BMPs/other/pellet_med.png", -1.0 + 6.0 * (2.0 / 19.0) + pellet_spacing_x, -0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet38);

    pellet *pellet39 = new pellet("BMPs/other/pellet_med.png", -1.0 + 12.0 * (2.0 / 19.0) + pellet_spacing_x, -0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet39);

    pellet *pellet40 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, -0.1 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet40);

    /* 11TH ROW */ /* SAME AS 7TH ROW */
    pellet *pellet43 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, -0.2 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet43);

    for (float j = 6.0; j < 13.0; j += 1.0)
    {
        if (j == 9.0)
            continue; //just to skip the middle one, I'm too lazy
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.2 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    pellet *pellet44 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, -0.2 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet44);

    /* 12TH ROW OF PELLETS */ /* SAME AS 6TH ROW */
    pellet *pellet29 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, -0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet29);

    pellet *pellet30 = new pellet("BMPs/other/pellet_med.png", -1.0 + 8.0 * (2.0 / 19.0) + pellet_spacing_x, -0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet30);

    pellet *pellet31 = new pellet("BMPs/other/pellet_med.png", -1.0 + 10.0 * (2.0 / 19.0) + pellet_spacing_x, -0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet31);

    pellet *pellet32 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, -0.3 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet32);

    /* 13TH ROW */ /* SAME AS 5TH ROW */
    for (float j = 1.0; j < 5.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    for (float j = 6.0; j < 9.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    for (float j = 10.0; j < 13.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    for (float j = 14.0; j < 18.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.4 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    /* 14TH ROW */ /* SAME AS 4TH */
    pellet *pellet17 = new pellet("BMPs/other/pellet_med.png", -1.0 + (2.0 / 19.0) + pellet_spacing_x, -0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet17);

    pellet *pellet18 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, -0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet18);

    pellet *pellet19 = new pellet("BMPs/other/pellet_med.png", -1.0 + 6.0 * (2.0 / 19.0) + pellet_spacing_x, -0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet19);

    pellet *pellet20 = new pellet("BMPs/other/pellet_med.png", -1.0 + 12.0 * (2.0 / 19.0) + pellet_spacing_x, -0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet20);

    pellet *pellet21 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, -0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet21);

    pellet *pellet22 = new pellet("BMPs/other/pellet_med.png", -1.0 + 17.0 * (2.0 / 19.0) + pellet_spacing_x, -0.5 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet22);

    /* 15TH ROW */ /* SAME AS THIRD ROW */
    for (float j = 1.0; j < 18.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.6 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }

    /* 16TH ROW */ /* SAME AS SECOND ROW */
    pellet *pellet23 = new pellet("BMPs/other/pellet_big.png", -1.0 + (2.0 / 19.0) + pellet_spacing_x - 0.00725, -0.7 - pellet_spacing_y + 0.015, default_width + 0.02, default_height + 0.03);
    pelletStuff.push_back(pellet23); //BIG PELLET #3

    pellet *pellet24 = new pellet("BMPs/other/pellet_med.png", -1.0 + 4.0 * (2.0 / 19.0) + pellet_spacing_x, -0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet24);

    pellet *pellet25 = new pellet("BMPs/other/pellet_med.png", -1.0 + 8.0 * (2.0 / 19.0) + pellet_spacing_x, -0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet25);

    pellet *pellet26 = new pellet("BMPs/other/pellet_med.png", -1.0 + 10.0 * (2.0 / 19.0) + pellet_spacing_x, -0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet26);

    pellet *pellet27 = new pellet("BMPs/other/pellet_med.png", -1.0 + 14.0 * (2.0 / 19.0) + pellet_spacing_x, -0.7 - pellet_spacing_y, default_width, default_height);
    pelletStuff.push_back(pellet27);

    pellet *pellet28 = new pellet("BMPs/other/pellet_big.png", -1.0 + 17.0 * (2.0 / 19.0) + pellet_spacing_x - 0.00725, -0.7 - pellet_spacing_y + 0.015, default_width + 0.02, default_height + 0.03);
    pelletStuff.push_back(pellet28); //BIG PELLET #4

    /* 17TH ROW */ /* SAME AS FIRST ROW */
    /* 17TH ROW LEFT */
    for (float j = 1.0; j < 9.0; j += 1.0) //starts at 1 because of the multiplier on the x coord
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.8 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }
    /* 17TH ROW RIGHT */
    for (float j = 10.0; j < 18.0; j += 1.0)
    {
        pellet *pellet0 = new pellet("BMPs/other/pellet_med.png", -1.0 + j * (2.0 / 19.0) + pellet_spacing_x, -0.8 - pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
    }
    //44
}

void populatePellets::drawPellets()
{
    for (int i = 0; i < pelletStuff.size(); i++)
    {
        if (!pelletStuff[i]->getHasBeenEaten())
        {
            pelletStuff[i]->draw();
        }
    }
}

populatePellets::~populatePellets()
{
    for (int i = 0; i < pelletStuff.size(); i++)
    {
        delete pelletStuff[i];
    }
}
