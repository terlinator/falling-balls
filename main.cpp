//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: main.cpp
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador

#include <iostream>
//#include UI/UIscoring
//Add back in the menu and stuff
#include "constants.h"
#include "screen.h"
#include <cstdlib>
#include "ball.h"
#include "blocks.h"
#include "Triangle.h"
#include "SDL_Plotter.hpp"
#include <SDL2/SDL_mixer.h>
#include "Point.h"
#include "force.h"

using namespace std;

int main(int argc, char **argv) {
    // Instantiate plotter with sound
    SDL_Plotter g(SCREEN_SIZE_HEIGHT, SCREEN_SIZE_WIDTH, true);

    // Create
    Mix_Chunk *collisionSound = Mix_LoadWAV("/Users/cameronhardin/Desktop/CSI1430/Hardin_Group_Project/Hardin_Group_Project/BallCollision.wav");
    Mix_Chunk *gameSoundtrack = Mix_LoadWAV("/Users/cameronhardin/Desktop/CSI1430/Hardin_Group_Project/Hardin_Group_Project/gameSoundtrack.wav");
    g.initSound("BallCollision.wav");
    g.initSound("gameSoundtrack.wav");

    char key;
    Ball ball;
    color objColor(0, 0, 255);
    unsigned long long int numUpdate = 0;
    int directionChange = 1;

    const int BLOCK_COUNT = 4;  // ADD BLOCKS HERE
    vector<Block> blocks;       // Tracks all blocks

    // BLOCK CREATION
    for (int i = 0; i < BLOCK_COUNT; i++) {
        Point blockPosition(i * (OBJECT_SIZE) + 65, SCREEN_SIZE_HEIGHT - OBJECT_SIZE / 2);
        // X's are spaced evenly, ys are at the bottom of the screen
        Block block(blockPosition, OBJECT_SIZE / 2, 1, objColor);
        blocks.push_back(block);
    }

    while (!g.getQuit()) {
        if (rand() % 2 == 1) {
            directionChange *= -1;
        }

        if (g.kbhit()) {
            switch (toupper(g.getKey())) {
            case 'C':
                g.clear();
                break;
            }
        } else {
            if (g.mouseClick()) {
                // p = g.getMouseClick();
                // ball.setLocation(p);
                // g.clear();
            }

            if ((numUpdate % 7) == 0) {
                ball.display(g, false);

                g.update();
                ball.display(g, true);
            }

            // BLOCK DISPLAY
            for (int i = 0; i < BLOCK_COUNT; i++) {
                if (blocks[i].collisionCheck(ball)) {
                    // Decrease health on collision
                    if (blocks[i].getHealth() > 0) {
                        blocks[i].setHealth(blocks[i].getHealth() - 1);
                    }
                    // Change direction

                    ball.setForce(force(1.5, -PI / 2 + rand() % 100 / 100.0 * directionChange));

                    // Play the collision sound
                    Mix_PlayChannel(-1, collisionSound, 0);
                }
                // Only draw blocks if it has health
                if (blocks[i].getHealth() > 0) {
                    blocks[i].drawBlock(g);
                } else {
                    blocks[i].erase(g);
                }
            }
            // END BLOCKS

            // When ball passes floor
            if (ball.getLoc().y >= g.getRow() - ball.getRadius()) {
                // Shift remaining blocks up by 80 units
                for (int i = 0; i < BLOCK_COUNT; i++) {
                    blocks[i].setPosition(Point(blocks[i].getPosition().x, blocks[i].getPosition().y - 80));
                }

                // Check if new row needs to be introduced
                bool introduceNewRow = true;
                for (int i = 0; i < BLOCK_COUNT; i++) {
                    if (blocks[i].getPosition().y < 80) {
                        introduceNewRow = false;
                        break;
                    }
                }

                // Introduce a new row of blocks
                if (introduceNewRow) {
                    for (int i = 0; i < BLOCK_COUNT; i++) {
                        Point blockPosition(i * (OBJECT_SIZE) + 65, SCREEN_SIZE_HEIGHT - OBJECT_SIZE / 2);
                        // X's are spaced evenly, ys are at the bottom of the screen
                        Block block(blockPosition, OBJECT_SIZE / 2, 1, objColor);
                        blocks.push_back(block);
                    }
                }

                ball.setForce(force(1.5, -PI / 2 + rand() % 100 / 100.0 * directionChange));
                Mix_PlayChannel(-1, collisionSound, 0);
            }
            if (ball.getLoc().x >= g.getCol() - ball.getRadius()) { // Collisions with right wall
                ball.setForce(force(1.5, -PI + rand() % 100 / 100.0 * directionChange));
                Mix_PlayChannel(-1, collisionSound, 0);
            }
            if (ball.getLoc().x <= ball.getRadius()) {
                ball.setForce(force(1.5, rand() % 100 / 100.0 * directionChange)); // Collisions with left wall
                Mix_PlayChannel(-1, collisionSound, 0);
            }
            numUpdate++;

            force f = ball.getForce();
            f.apply(GRAVITY);
            ball.setForce(f);
            ball.move();
        }
    }

    return 0;
}
