//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: main.cpp
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador

#include <iostream>
//#include "UI_Scoring/UI_Scoring.h"
#include "constants.h"
#include "screen.h"
#include <cstdlib>
#include "ball.h"
#include "blocks.h"
#include "Triangle.h"
#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char ** argv){
    SDL_Plotter g(SCREEN_SIZE_WIDTH,SCREEN_SIZE_HEIGHT);
    char key;
    Ball ball;
    point p;
    color c;
    int size;
    Uint32 RGB;
    Block block;
    Triangle triangle;
    color color1(0, 255, 0);


    // g.getColor(10,10);
    point l (850,800);
    point j (500,800);
    point k (150,800);

    color titleColor(0, 255, 0);     // Green
    color backgroundColor(0, 0, 0);    // Black
    color playButtonColor(255, 0, 0);  // Red
    color playButtonTextColor(255, 255, 255); // White

   // (position x, position y, font size, screen)
    writeHeader(130,100, 12, g);
    writeText(400,400,4,g);

    for(int round = 0; round < 10; round++) {
        //drawCircle(l, 50, playButtonColor, g);
        //drawCircle(j, 50, playButtonColor, g);
        //drawCircle(k, 50, playButtonColor, g);
    }

    /* NOTE:
     * This code under while loop properly creates a ball,
     * but any other objects in the loop WILL slow down
     * the program depending on how they are drawn.
    */

    while (!g.getQuit())
    {
        g.update();

        if(g.kbhit()){
            switch(toupper(g.getKey())){
                case 'C': g.clear();
                    break;
            }
        }
        if(g.mouseClick()){
            p = g.getMouseClick();
            ball.setLocation(p);
            g.clear();
        }


        ball.display(g, false);
        ball.move();
        ball.display(g, true);


        //drawCircle(l, 50, playButtonColor, g);
        block.drawBlock(p, 50, color1, g);
        triangle.drawTriangle(g);


    }

//    Was messing around with the shapes
//     drawCircle(l, 50, playButtonColor, g);

//     drawTriangle(k, 50, titleColor, g);

// draws 10 balls. pretty useless but ye
    for (int i=0; i < 10; i++){
        point randPoint (rand() % 800, rand() % 1000);
        size = 50;
        color ballColor(255, 23, 23);
        drawCircle(randPoint, size, ballColor, g);
    }

    return 0;
}
