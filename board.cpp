#include "board.h"

gameBoard::gameBoard()
{
  //populate this vector with blocks for the gameboard, assign them the appropriate bmp texture file
  //(const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5)

  /*
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,....................................................................................,,,,,,,,,,,....................................................................................,,,,,,,,,,
                ,,,,,,,,,,.                                                                                    ,,,,,,,,,,`                                                                                    ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                    ,,,,,,,,,,`                                                                                    ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                    ,,,,,,,,,,`                                                                                    ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                                                                                                                   ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                                                                                                                   ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.                                          ,,,,,,,,,,                                ,,,,,,,,,,`                               ,,,,,,,,,,,                                          ,,,,,,,,,,
                ,,,,,,,,,,.                                          ,,,,,,,,,,                                ,,,,,,,,,,`                               ,,,,,,,,,,,                                          ,,,,,,,,,,
                ,,,,,,,,,,.                                          ,,,,,,,,,,                                ,,,,,,,,,,`                               ,,,,,,,,,,,                                          ,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                                                ,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                                                ,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                                                ,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                                                ,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,



                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                                               `,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                                                ,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                                                ,,,,,,,,,,           ,,,,,,,,,,                                                                          ,,,,,,,,,,,          ,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
                ,,,,,,,,,,.                                          ,,,,,,,,,,                                ,,,,,,,,,,`                               ,,,,,,,,,,,                                          ,,,,,,,,,,
                ,,,,,,,,,,.                                          ,,,,,,,,,,                                ,,,,,,,,,,`                               ,,,,,,,,,,,                                          ,,,,,,,,,,
                ,,,,,,,,,,.                                          ,,,,,,,,,,                                ,,,,,,,,,,`                               ,,,,,,,,,,,                                          ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,.          ,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                                                                                                                   ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                                                                                                                   ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,`          ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,          ,,,,,,,,,,,,,,,,,,,,,           ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                    ,,,,,,,,,,`                                                                                    ,,,,,,,,,,
                ,,,,,,,,,,.                                                                                    ,,,,,,,,,,`                                                                                    ,,,,,,,,,,
                ,,,,,,,,,,,....................................................................................,,,,,,,,,,,....................................................................................,,,,,,,,,,
                ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

  */

    float x_axis_divider = (2.0/19.0);  //reason for 2.0/19.0 is because distance from -1 to 1 is 2 and 19.0 blocks is from the amount of blocks horizontally in a Pacman game (x axis divider is in increments of 2.0/19.0)
    //reason height is 0.1 each block is because we need 0.1 at the top for score and stuff, meaning we have 19 blocks left to use. 1.9/19 = 0.1 (y axis divider is in increments of 0.1)

    TexRect * top_bar = new TexRect ("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.9, 2.0, 0.1);
    blocks.push_back(top_bar); //[0]

    TexRect * leftmost_downbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.8, x_axis_divider, 0.5);
    blocks.push_back(leftmost_downbar0); //[1]

    TexRect * leftmost_horizbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.3, 4.0*x_axis_divider, 0.1);
    blocks.push_back(leftmost_horizbar0); //[2]

    TexRect * left_singlebox0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (-1.0+(3.0*x_axis_divider)), 0.2, x_axis_divider, 0.1);
    blocks.push_back(left_singlebox0); //[3]

    TexRect * leftmost_horizbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.1, 4.0*x_axis_divider, 0.1);
    blocks.push_back(leftmost_horizbar1); //[4]

    TexRect * leftmost_horizbar2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, -0.1, 4.0*x_axis_divider, 0.1);
    blocks.push_back(leftmost_horizbar2); //[5]

    TexRect * left_singlebox1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (-1.0+(3.0*x_axis_divider)), -0.2, x_axis_divider, 0.1);
    blocks.push_back(left_singlebox1); //[6]

    TexRect * leftmost_horizbar3 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, -0.3,  4.0*x_axis_divider, 0.1);
    blocks.push_back(leftmost_horizbar3); //[7]

    TexRect * leftmost_downbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0,-0.4, x_axis_divider, 0.5);
    blocks.push_back(leftmost_downbar1); //[8]

    TexRect * bottom_bar = new TexRect ("BMPs/bluesquare.bmp", 1, 1, -1.0, -0.9, 2.0, 0.1);
    blocks.push_back(bottom_bar); //[9]

    TexRect * rightmost_downbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-x_axis_divider, 0.8, x_axis_divider, 0.5);
    blocks.push_back(rightmost_downbar0); //[10]

    TexRect * rightmost_horizbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), 0.3, 4.0*x_axis_divider, 0.1);
    blocks.push_back(rightmost_horizbar0); //[11]

    TexRect * right_singlebox0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (1.0-(4.0*x_axis_divider)), 0.2, x_axis_divider, 0.1);
    blocks.push_back(right_singlebox0); //[12]

    TexRect * rightmost_horizbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), 0.1,  4.0*x_axis_divider, 0.1);
    blocks.push_back(rightmost_horizbar1); //[13]

    TexRect * rightmost_horizbar2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), -0.1, 4.0*x_axis_divider, 0.1);
    blocks.push_back(rightmost_horizbar2); //[14]

    TexRect * right_singlebox1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (1.0-(4.0*x_axis_divider)), -0.2, x_axis_divider, 0.1);
    blocks.push_back(right_singlebox1); //[15]

    TexRect * rightmost_horizbar3 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), -0.3, 4.0*x_axis_divider, 0.1);
    blocks.push_back(rightmost_horizbar3); //[16]

    TexRect * rightmost_downbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-x_axis_divider,-0.4, x_axis_divider, 0.5);
    blocks.push_back(rightmost_downbar1); //[17]

    TexRect * top_middlebar = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(9.0*x_axis_divider), 0.8, x_axis_divider, 0.2);
    blocks.push_back(top_middlebar); //[18]

    TexRect * bottom_middlebar = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(9.0*x_axis_divider), -0.7, x_axis_divider, 0.2);
    blocks.push_back(bottom_middlebar); //[19]

    TexRect * leftupper_box1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(2.0*x_axis_divider), 0.7, 2.0*x_axis_divider, 0.1);
    blocks.push_back(leftupper_box1); //[20]

    TexRect * leftupper_box2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(2.0*x_axis_divider), 0.5, 2.0*x_axis_divider, 0.1);
    blocks.push_back(leftupper_box2); //[21]

    TexRect * leftlower_box1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(2.0*x_axis_divider), -0.5, 2.0*x_axis_divider, 0.1);
    blocks.push_back(leftlower_box1); //[22]

    TexRect * leftlower_box2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(2.0*x_axis_divider), -0.7,  2.0*x_axis_divider, 0.1);
    blocks.push_back(leftlower_box2); //[23]

    TexRect * rightupper_box1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), 0.7, 2.0*x_axis_divider, 0.1);
    blocks.push_back(rightupper_box1); //[24]

    TexRect * rightupper_box2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), 0.5, 2.0*x_axis_divider, 0.1);
    blocks.push_back(rightupper_box2); //[25]

    TexRect * rightlower_box1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), -0.5, 2.0*x_axis_divider, 0.1);
    blocks.push_back(rightlower_box1); //[26]

    TexRect * rightlower_box2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*x_axis_divider), -0.7, 2.0*x_axis_divider, 0.1);
    blocks.push_back(rightlower_box2); //[27]

    TexRect * midleftupperhoriz_box = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(5.0*x_axis_divider), 0.7, 3.0*x_axis_divider, 0.1);
    blocks.push_back(midleftupperhoriz_box);

    TexRect * midleftlowerhoriz_box = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(5.0*x_axis_divider), -0.7, 3.0*x_axis_divider, 0.1);
    blocks.push_back(midleftlowerhoriz_box);

    TexRect * midrightupperhoriz_box = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(8.0*x_axis_divider), 0.7, 3.0*x_axis_divider, 0.1);
    blocks.push_back(midrightupperhoriz_box);

    TexRect * midrightlowerhoriz_box = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(8.0*x_axis_divider), -0.7, 3.0*x_axis_divider, 0.1);
    blocks.push_back(midrightlowerhoriz_box);

    TexRect * midleft_tbox0_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(5.0*x_axis_divider), 0.5, x_axis_divider, 0.5);
    blocks.push_back(midleft_tbox0_part1);

    TexRect * midleft_tbox0_part2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(6.0*x_axis_divider), 0.3, 2.0*x_axis_divider, 0.1);
    blocks.push_back(midleft_tbox0_part2);

    TexRect * midleft_tbox1_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(5.0*x_axis_divider), -0.1, x_axis_divider, 0.5);
    blocks.push_back(midleft_tbox1_part1);

    TexRect * midleft_tbox1_part2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(6.0*x_axis_divider), -0.3, 2.0*x_axis_divider, 0.1);
    blocks.push_back(midleft_tbox1_part2);

    TexRect * middleupper_tbox_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(7.0*x_axis_divider), 0.5, 5.0*x_axis_divider, 0.1);
    blocks.push_back(middleupper_tbox_part1);

    TexRect * middleupper_tbox_part2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(9.0*x_axis_divider), 0.4, x_axis_divider, 0.2);
    blocks.push_back(middleupper_tbox_part2);

    TexRect * middlelower_tbox_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(7.0*x_axis_divider), -0.5, 5.0*x_axis_divider, 0.1);
    blocks.push_back(middlelower_tbox_part1);

    TexRect * middlelower_tbox_part2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(9.0*x_axis_divider), -0.3, x_axis_divider, 0.2);
    blocks.push_back(middlelower_tbox_part2);

    TexRect * midright_tbox0_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(6.0*x_axis_divider), 0.5, x_axis_divider, 0.5);
    blocks.push_back(midright_tbox0_part1);

    TexRect * midright_tbox0_part2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(8.0*x_axis_divider), 0.3, 2.0*x_axis_divider, 0.1);
    blocks.push_back(midright_tbox0_part2);

    TexRect * midright_tbox1_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(6.0*x_axis_divider), -0.1, x_axis_divider, 0.5);
    blocks.push_back(midright_tbox1_part1);

    TexRect * midright_tbox1_part2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(8.0*x_axis_divider), -0.3, 2.0*x_axis_divider, 0.1);
    blocks.push_back(midright_tbox1_part2);

    TexRect * middle_box_part1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(7.0*(2.0/19.0)), 0.1, 5.0*x_axis_divider, 0.1);
    gameSquares.push_back(middle_box_part1);

    TexRect * middle_box_part2 = new Rect("BMPs/bluesquare.bmp", 1, 1, -1.0+(7.0*(2.0/19.0)), -0.1, 5.0*x_axis_divider, 0.1);
    gameSquares.push_back(middle_box_part2);

}
