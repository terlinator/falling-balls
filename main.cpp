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
#include "Circle.h"
#include "SDL_Plotter.h"

using namespace std;

int main(int argc, char ** argv){
    SDL_Plotter g(SCREEN_SIZE_WIDTH,SCREEN_SIZE_HEIGHT);
    char key;
    Ball ball;
    Point p (80, 80);
    color c;
    int size;
    Uint32 RGB;
    Block block;
    color backgroundColor(0, 0, 0);    // Black
    Point l(80,800);
    Triangle triangle;
    color color1(0, 255, 0);
    Circle circle(l, 20, 1, color1);
    unsigned long long int numUpdate = 0;
    double directionChange = rand() % 10 / 100.0;


    // g.getColor(10,10);

    Point j (500,800);
    Point k (150,800);

    color titleColor(0, 255, 0);     // Green

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
    ball.setLocation(p);
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
            //p = g.getMouseClick();
            //ball.setLocation(p);
            //g.clear();
        }


        ball.setPrevLocation(ball.getLocation());

        if((numUpdate % 1) == 0) {
            ball.display(g, false);

            g.update();
            ball.display(g, true);

        }

        force f = ball.getForce();
        f.apply(GRAVITY);
        ball.setForce(f);
        ball.move();




        //block.drawBlock(g);
        //triangle.drawTriangle(g);
        circle.drawCircle(g);
        if(circle.collisionCheck(ball)) {
            if(rand() % 2 == 0) {
                directionChange *= -1.0;    //Randomly makes bounce left or right
            }
            ball.setForce(force(1.5, -PI/2 + directionChange));     //Scale magnitude to gravity
        }

        if(ball.getLocation().y >= g.getRow() - ball.getRadius()) { //Collisions with floor
            ball.setForce(force(1.5, -PI/2 + directionChange));
        }
        if(ball.getLocation().x >= g.getCol() - ball.getRadius()) { //Collisions with right wall
            ball.setForce(force(1.5, -PI + directionChange));
        }
        if(ball.getLocation().x <= ball.getRadius()) {
            ball.setForce(force(1.5, -PI/2 - directionChange));     //Collisions with left wall
        }
        numUpdate ++;
    }

//    Was messing around with the shapes
//     drawCircle(l, 50, playButtonColor, g);

//     drawTriangle(k, 50, titleColor, g);


    return 0;
}
