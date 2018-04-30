#include "populatePellets.h"

populatePellets::populatePellets()
{
    float pellet_spacing_x = 0.025;
    float pellet_spacing_y = 0.025;
    float default_width = (2.0/19.0)-2.0*pellet_spacing_x;
    float default_height = 0.1-2.0*pellet_spacing_y;

    /* FIRST ROW */
        /* FIRST ROW LEFT */
        for (float j = 1.0; j < 9.0; j+=1.0) //starts at 1 because of the multiplier on the x coord
        {
           pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, 0.8-pellet_spacing_y, default_width, default_height);
           pelletStuff.push_back(pellet0);
        }
        /* FIRST ROW RIGHT */
        for (float j = 10.0; j < 18.0; j+=1.0)
        {
           pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, 0.8-pellet_spacing_y, default_width, default_height);
           pelletStuff.push_back(pellet0);
        }

    /* SECOND ROW */
        /* SECOND ROW OF PELLETS */
        pellet * pellet1 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet1);

        pellet * pellet2 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+4.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet2);

        pellet * pellet3 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+8.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet3);

        pellet * pellet4 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+10.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet4);

        pellet * pellet5 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+14.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet5);

        pellet * pellet6 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+17.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet6);

    /* THIRD ROW */
        for (float j = 1.0; j < 18.0; j+=1.0)
        {
        	pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, 0.6-pellet_spacing_y, default_width, default_height);
          pelletStuff.push_back(pellet0);
        }

    /* 4TH ROW */
        pellet * pellet7 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+(2.0/19.0)+pellet_spacing_x, 0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet7);

        pellet * pellet8 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+4.0*(2.0/19.0)+pellet_spacing_x, 0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet8);

        pellet * pellet9 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+6.0*(2.0/19.0)+pellet_spacing_x, 0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet9);

        pellet * pellet10 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+12.0*(2.0/19.0)+pellet_spacing_x, 0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet10);

        pellet * pellet11 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+14.0*(2.0/19.0)+pellet_spacing_x, 0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet11);

        pellet * pellet12 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+17.0*(2.0/19.0)+pellet_spacing_x, 0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet12);

    /* 6TH ROW */
        pellet * pellet13 = new pellet (-1.0+4.0*(2.0/19.0)+pellet_spacing_x, 0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet13);

        pellet * pellet14 = new pellet (-1.0+8.0*(2.0/19.0)+pellet_spacing_x, 0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet14);

        pellet * pellet15 = new pellet (-1.0+10.0*(2.0/19.0)+pellet_spacing_x, 0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet15);

        pellet * pellet16 = new pellet (-1.0+14.0*(2.0/19.0)+pellet_spacing_x, 0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet16);

    /* 8TH ROW */

         pellet * pellet33 = new pellet (-1.0+4.0*(2.0/19.0)+pellet_spacing_x, 0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet33);

         pellet * pellet34 = new pellet (-1.0+6.0*(2.0/19.0)+pellet_spacing_x, 0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet34);

         pellet * pellet35 = new pellet (-1.0+12.0*(2.0/19.0)+pellet_spacing_x, 0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet35);

         pellet * pellet36 = new pellet (-1.0+14.0*(2.0/19.0)+pellet_spacing_x, 0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet36);

    /* 9TH ROW (MIDDLE) */
        for (float j = 1.0; j < 18.0; j+=1.0)
        {
    	    pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, 0.0-pellet_spacing_y, default_width, default_height);
          pelletStuff.push_back(pellet0);
        }

    /* 10TH ROW OF PELLETS */ /* SAME AS 8TH ROW */
         pellet * pellet37 = new pellet (-1.0+4.0*(2.0/19.0)+pellet_spacing_x, -0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet37);

         pellet * pellet38 = new pellet (-1.0+6.0*(2.0/19.0)+pellet_spacing_x, -0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet38);

         pellet * pellet39 = new pellet (-1.0+12.0*(2.0/19.0)+pellet_spacing_x, -0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet39);

         pellet * pellet40 = new pellet (-1.0+14.0*(2.0/19.0)+pellet_spacing_x, -0.1-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
         gameSquares.push_back(pellet40);

    /* 12TH ROW OF PELLETS */ /* SAME AS 6TH ROW */
        pellet * pellet29 = new pellet (-1.0+4.0*(2.0/19.0)+pellet_spacing_x, -0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet29);

        pellet * pellet30 = new pellet (-1.0+8.0*(2.0/19.0)+pellet_spacing_x, -0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet30);

        pellet * pellet31 = new pellet (-1.0+10.0*(2.0/19.0)+pellet_spacing_x, -0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet31);

        pellet * pellet32 = new pellet (-1.0+14.0*(2.0/19.0)+pellet_spacing_x, -0.3-pellet_spacing_y, default_height, default_width, 1.0,0.0,0.0);
        gameSquares.push_back(pellet32);

    /* 14TH ROW */ /* SAME AS 4TH */
        pellet * pellet17 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+(2.0/19.0)+pellet_spacing_x, -0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet17);

        pellet * pellet18 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+4.0*(2.0/19.0)+pellet_spacing_x, -0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet18);

        pellet * pellet19 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+6.0*(2.0/19.0)+pellet_spacing_x, -0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet19);

        pellet * pellet20 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+12.0*(2.0/19.0)+pellet_spacing_x, -0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet20);

        pellet * pellet21 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+14.0*(2.0/19.0)+pellet_spacing_x, -0.5-pellet_spacing_y,  default_width, default_height);
        pelletStuff.push_back(pellet21);

        pellet * pellet22 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+17.0*(2.0/19.0)+pellet_spacing_x, -0.5-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet22);

    /* 15TH ROW */ /* SAME AS THIRD ROW */
       for (float j = 1.0; j < 18.0; j+=1.0)
       {
    	    pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, -0.6-pellet_spacing_y, default_width, default_height);
          pelletStuff.push_back(pellet0);
       }

    /* 16TH ROW */ /* SAME AS SECOND ROW */
        pellet * pellet23 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet23);

        pellet * pellet24 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+4.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet24);

        pellet * pellet25 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+8.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet25);

        pellet * pellet26 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+10.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet26);

        pellet * pellet27 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+14.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet27);

        pellet * pellet28 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+17.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet28);

    /* 17TH ROW */ /* SAME AS FIRST ROW */
        /* 17TH ROW LEFT */
        for (float j = 1.0; j < 9.0; j+=1.0) //starts at 1 because of the multiplier on the x coord
        {
           pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, -0.8-pellet_spacing_y, default_width, default_height);
           pelletStuff.push_back(pellet0);
        }
        /* 17TH ROW RIGHT */
        for (float j = 10.0; j < 18.0; j+=1.0)
        {
           pellet * pellet0 = new pellet ("BMPs/other/pellet_small.bmp", 1, 1, -1.0+j*(2.0/19.0)+pellet_spacing_x, -0.8-pellet_spacing_y, default_width, default_height);
           pelletStuff.push_back(pellet0);
        }
}
