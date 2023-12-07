/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */
#include <iostream>
#include "Force/constants.h"
#include "Menu/menu.h"
#include "ball/ball.h"
#include "UI_Scoring/button.h"
#include "Screen/screen.h"
#include <cstdlib>
#include "Blocks/Blocks.h"
#include "Triangle.h"
#include "Circle.h"
#include "SDL_Plotter/SDL_Plotter.h"
#include "Letters/Letters.h"
using namespace std;

void runBallGame(SDL_Plotter& g);


int main(int argc, char ** argv) {
    SDL_Plotter g(SCREEN_SIZE_WIDTH, SCREEN_SIZE_HEIGHT);

    button startButton(385, 380, 182, 50);
    button leaderboardButton(270, 454, 408, 50);
    button optionButton(335, 535, 260, 50);
    button creditsButton(335, 630, 260, 50);
    button backButton(30, 50, 120, 50);
    button soundButton(30, 50, 120, 50);
    button musicButton(30, 50, 120, 50);
    button pauseButton(30, 50, 120, 50);
    drawStartScreen(g);


    while (!g.getQuit()) {

        g.update();
        point x = g.getMouseClick();
        if (backButton.isClicked(x) && backButton.isClickable()){
            g.clear();
            drawStartScreen(g);
            startButton.setIsClickable(true);
            creditsButton.setIsClickable(true);
            leaderboardButton.setIsClickable(true);
            optionButton.setIsClickable(true);
            g.update();
        }
        if (startButton.isClicked(x) && startButton.isClickable()) {
            g.clear();
            leaderboardButton.erase(g);
            pauseButton.draw(g);
            writePause(45, 65, 8, g);
            startButton.setIsClickable(false);
            creditsButton.setIsClickable(false);
            leaderboardButton.setIsClickable(false);
            optionButton.setIsClickable(false);
            runBallGame(g);
            startButton.setIsClickable(true);
            creditsButton.setIsClickable(true);
            leaderboardButton.setIsClickable(true);
            optionButton.setIsClickable(true);

            drawStartScreen(g);
        }
        if (creditsButton.isClicked(x) && creditsButton.isClickable()) {
            g.clear();
            writeCredits(130, 130, 5, g);
            backButton.draw(g);
            writeBack(45, 65, 3, g);
//            startButton.removeFromScreen();
            startButton.setIsClickable(false);
            creditsButton.setIsClickable(false);
            leaderboardButton.setIsClickable(false);
            optionButton.setIsClickable(false);

        }
        if(leaderboardButton.isClicked(x) && leaderboardButton.isClickable()){
            g.clear();
            writeLeaderboard(270, 80, 6, g);
            backButton.draw(g);
            writeBack(45, 65, 3, g);
            startButton.setIsClickable(false);
            creditsButton.setIsClickable(false);
            leaderboardButton.setIsClickable(false);
            optionButton.setIsClickable(false);
        }
        if(optionButton.isClicked(x) && leaderboardButton.isClickable()){
            g.clear();
            writeOptions(100, 270, 5, g);
            backButton.draw(g);
            writeBack(45, 65, 3, g);
            drawCircle({600, 490}, 20, {255, 0, 0}, g); // red
            drawCircle({700, 490}, 20, {0, 0, 255}, g); // blue
            drawCircle({800, 490}, 20, {0, 255, 0}, g); // green
            drawCircle({900, 490}, 20, {255, 0, 255}, g); // purple
            musicButton.draw(g);
            soundButton.draw(g);
            startButton.setIsClickable(false);
            creditsButton.setIsClickable(false);
            leaderboardButton.setIsClickable(false);
            optionButton.setIsClickable(false);
            g.update();

        }
            g.update();
    }
    return 0;
}

void runBallGame(SDL_Plotter& g) {
//    Mix_Chunk* collisionSound = Mix_LoadWAV("BallCollision.wav");
//    g.initSound("BallCollision.wav");

    // Initialize game variables
    Ball ball;
    Point p(80, 80);
    color objColor(0, 0, 255);
    double directionChange = rand() % 10 / 100.0;
    ball.setLoc(p);

    const int BLOCK_COUNT = 4;
    vector<Block> blocks;
    const double SPACING_SCALE = 0.1;
    const int BLOCK_SPACING = SPACING_SCALE * SCREEN_SIZE_WIDTH / (BLOCK_COUNT + 1);

    // Create blocks
    for (int i = 0; i < BLOCK_COUNT; i++) {
        Point blockPosition((i + 1) * BLOCK_SPACING + i * (SCREEN_SIZE_WIDTH - BLOCK_COUNT * BLOCK_SPACING) / BLOCK_COUNT + OBJECT_SIZE / 2,
                            g.getRow() - (OBJECT_SIZE / 2));
        Block block(blockPosition, OBJECT_SIZE / 2, 1, objColor);
        blocks.push_back(block);
    }

    // Game loop
    unsigned long long int numUpdate = 0;
    while (!g.getQuit()) {
        point x = g.getMouseClick();

        button backButton(30, 50, 120, 50);
        backButton.draw(g);\
        writeBack(45, 65, 3, g);

        if (backButton.isClicked(x)){
            g.clear();
            drawStartScreen(g);
            return;
        }
        if ((numUpdate % 1) == 0) {
            ball.display(g, false);
            g.update();
            ball.display(g, true);
        }

        for (auto& block : blocks) {
            block.drawBlock(g);
            if (block.collisionCheck(ball)) {
                ball.setForce(force(1.5, -PI / 2 + directionChange));
//                Mix_PlayChannel(-1, collisionSound, 0);
            }
        }

        // Apply gravity and move ball
        force f = ball.getForce();
        f.apply(GRAVITY);
        ball.setForce(f);
        ball.move();


        numUpdate++;
    }

//    Mix_FreeChunk(collisionSound);
}

