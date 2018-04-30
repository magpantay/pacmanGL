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
         pellet * pellet0 = new pellet (-1.0+j*(2.0/19.0)+pellet_spacing_x, 0.8-pellet_spacing_y, default_width, default_height);
         pelletStuff.push_back(pellet0);
      }

    /* SECOND ROW */
      /* SECOND ROW OF PELLETS */
      pellet * pellet7 = new pellet (-1.0+(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet7);

      pellet * pellet8 = new pellet (-1.0+4.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet8);

      pellet * pellet9 = new pellet (-1.0+8.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet9);

      pellet * pellet10 = new pellet (-1.0+10.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet10);

      pellet * pellet11 = new pellet (-1.0+14.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet11);

      pellet * pellet12 = new pellet (-1.0+17.0*(2.0/19.0)+pellet_spacing_x, 0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet12);

    /* THIRD ROW */
      for (float j = 1.0; j < 18.0; j+=1.0)
      {
      	pellet * pellet0 = new pellet (-1.0+j*(2.0/19.0)+pellet_spacing_x, 0.6-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
      }

    /* 9TH ROW (MIDDLE) */
      for (float j = 1.0; j < 18.0; j+=1.0)
      {
  	    pellet * pellet0 = new pellet (-1.0+j*(2.0/19.0)+pellet_spacing_x, 0.0-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
      }

    /* 15TH ROW */ /* SAME AS THIRD ROW */
     for (float j = 1.0; j < 18.0; j+=1.0)
     {
  	    pellet * pellet0 = new pellet (-1.0+j*(2.0/19.0)+pellet_spacing_x, -0.6-pellet_spacing_y, default_width, default_height);
        pelletStuff.push_back(pellet0);
     }

    /* 16TH ROW */ /* SAME AS SECOND ROW */
      pellet * pellet1 = new pellet (-1.0+(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet1);

      pellet * pellet2 = new pellet (-1.0+4.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet2);

      pellet * pellet3 = new pellet (-1.0+8.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet3);

      pellet * pellet4 = new pellet (-1.0+10.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet4);

      pellet * pellet5 = new pellet (-1.0+14.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet5);

      pellet * pellet6 = new pellet (-1.0+17.0*(2.0/19.0)+pellet_spacing_x, -0.7-pellet_spacing_y, default_width, default_height);
      pelletStuff.push_back(pellet6);

    /* 17TH ROW */ /* SAME AS FIRST ROW */
      /* 17TH ROW LEFT */
      for (float j = 1.0; j < 9.0; j+=1.0) //starts at 1 because of the multiplier on the x coord
      {
         pellet * pellet0 = new pellet (-1.0+j*(2.0/19.0)+pellet_spacing_x, -0.8-pellet_spacing_y, default_width, default_height);
         pelletStuff.push_back(pellet0);
      }
      /* 17TH ROW RIGHT */
      for (float j = 10.0; j < 18.0; j+=1.0)
      {
         pellet * pellet0 = new pellet (-1.0+j*(2.0/19.0)+pellet_spacing_x, -0.8-pellet_spacing_y, default_width, default_height);
         pelletStuff.push_back(pellet0);
      }

}
