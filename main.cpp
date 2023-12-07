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


int main(int argc, char ** argv) {
    SDL_Plotter g(SCREEN_SIZE_WIDTH, SCREEN_SIZE_HEIGHT);
    char key;
//     Ball ball;
    Point p;
    color c;
    int size;
    Uint32 RGB;

    // Print the string using the letters
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
//    for (int i = 0; i < 10; i++) {
//        point randPoint(rand() % 800, rand() % 1000);
//        size = 50;
//        color ballColor = {255, 23, 23};
//        drawCircle(randPoint, size, ballColor, g);
//    }

    return 0;
}



