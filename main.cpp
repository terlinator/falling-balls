//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
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
//#include "Circle.h"
#include "SDL_Plotter.hpp"
#include <SDL2/SDL_mixer.h>
#include "Point.h"
#include "force.h"

using namespace std;



int roundCounter = 0;
int main(int argc, char** argv) {
    roundCounter++;
    
    SDL_Plotter g(SCREEN_SIZE_WIDTH, SCREEN_SIZE_HEIGHT, true);
    Mix_Chunk* collisionSound = Mix_LoadWAV("/Users/cameronhardin/Desktop/CSI1430/Hardin_Group_Project/Hardin_Group_Project/BallCollision.wav");
    g.initSound("BallCollision.wav");

    //Data Abstraction
    char key;
    Ball ball;
    Point p(80, 80);
    color c;
    int size;
    Uint32 RGB;
    //Block block;
    color backgroundColor(0, 0, 0); // Black
    Point l(80, 800);
    color color1(0, 255, 0);
    Point tpoint(80, 200);
    Triangle triangle(tpoint, 20, 1, color1);
    //Circle circle(l, 20, 1, color1);
    unsigned long long int numUpdate = 0;
    double directionChange = rand() % 10 / 100.0;

    Point j(500, 800);
    Point k(150, 800);

    color titleColor(0, 255, 0);      // Green

    color playButtonColor(255, 0, 0);     // Red
    color playButtonTextColor(255, 255, 255); // White

    //(position x, position y, font size, screen)
    //writeHeader(130,100, 12, g);
    //writeText(400,400,4,g);

    //CREATE BLOCKS
    const int BLOCK_COUNT = 6;
    color objColor(0, 0, 255);
    std::vector<Block> blocks;

    for (int i = 0; i < BLOCK_COUNT; i++) {
        Point blockPosition(i * (OBJECT_SIZE + 20) + OBJECT_SIZE / 2, g.getRow() - (OBJECT_SIZE / 2));
        Block block(blockPosition, OBJECT_SIZE / 2, 1, objColor);
        block.drawBlock(g);
        blocks.push_back(block);
    }
    for (int i = 0; i < BLOCK_COUNT; i++) {
        if(blocks[i].collisionCheck(ball)) {    //If that ball collides
            ball.setForce(force(1.5, -PI / 2 + directionChange));
            Mix_PlayChannel(-1, collisionSound, 0);
            cout << "YIKESILUGFLASJFG LAH" << endl;
        }
    }

    for (int round = 0; round < 10; round++) {
        // drawCircle(l, 50, playButtonColor, g);
        // drawCircle(j, 50, playButtonColor, g);
        // drawCircle(k, 50, playButtonColor, g);
        // block.drawBlock(g);
        // triangle.drawTriangle(g);
    }

    /* NOTE:
    * This code under while loop properly creates a ball,
    * but any other objects in the loop WILL slow down
    * the program depending on how they are drawn.
    */
    ball.setLoc(p);
    while (!g.getQuit()) {
        if (g.kbhit()) {
            switch (toupper(g.getKey())) {
            case 'C':
                g.clear();
                break;
            }
        }
        if (g.mouseClick()) {
            // p = g.getMouseClick();
            // ball.setLocation(p);
            // g.clear();
        }

        //ball.setPrevLoc(ball.getLoc());

        if ((numUpdate % 1) == 0) {
            ball.display(g, false);

            g.update();
            ball.display(g, true);
        }

        force f = ball.getForce();
        f.apply(GRAVITY);
        ball.setForce(f);
        ball.move();

        // block.drawBlock(g);
        // triangle.drawTriangle(g);
        // circle.drawCircle(g);
        /*if(circle.collisionCheck(ball)) {
            if(rand() % 2 == 0) {
                directionChange *= -1.0;    //Randomly makes bounce left or right
            }
            ball.setForce(force(1.5, -PI/2 + directionChange));     //Scale magnitude to gravity
        }*/

        if (ball.getLoc().y >= g.getRow() - ball.getRadius()) { // Collisions with floor
            ball.setForce(force(1.5, -PI / 2 + directionChange));

            /*NOTE: -1 just makes it play no matter what, middle
            parameter is the name of the sound chunk, and 0 is the number
            of times it should loop. All of this is in the mixer
            documentation*/
            Mix_PlayChannel(-1, collisionSound, 0);
        }
        if (ball.getLoc().x >= g.getCol() - ball.getRadius()) { // Collisions with right wall
            ball.setForce(force(1.5, -PI + directionChange));
            Mix_PlayChannel(-1, collisionSound, 0);
        }
        if (ball.getLoc().x <= ball.getRadius()) {
            ball.setForce(force(1.5, -PI / 2 - directionChange)); // Collisions with left wall
            Mix_PlayChannel(-1, collisionSound, 0);
        }
        numUpdate++;
    }

// Was messing around with the shapes
// drawCircle(l, 50, playButtonColor, g);

// drawTriangle(k, 50, titleColor, g);

return 0;
}
