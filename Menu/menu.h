/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */
#ifndef GROUPPROJECT_MENU_H
#define GROUPPROJECT_MENU_H

#include "../SDL_Plotter/SDL_Plotter.h"
#include "../Screen/screen.h"
// #include "../constants.h" // Data
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;

void writeToScreen(const string& filename, int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writeStart(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writeFallingBalls(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writeLeaderboard(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writeCredits(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writeBack(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writePause(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);

void writeOptions(int posX, int posY, int SizeOfFont, SDL_Plotter& homescreen);

// draws a circle
void drawCircle(point loc, int size, color c, SDL_Plotter& g);

// rectangle shape
void drawRectangle(point loc, int size, color c, SDL_Plotter &g, int i, int i1, int i2, SDL_Plotter plotter);

#endif //GROUPPROJECT_MENU_H
