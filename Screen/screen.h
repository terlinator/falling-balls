/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */
#ifndef GROUPPROJECT_SCREEN_H
#define GROUPPROJECT_SCREEN_H

#include "../SDL_Plotter/SDL_Plotter.h"
#include <cmath>
#include <fstream>
#include <sstream>
#include "screen.h"
#include "../Menu/menu.h"
#include "../UI_Scoring/button.h"
using namespace std;

void drawStartScreen(SDL_Plotter& homeScreen);

// draws a circle
void drawCircle(point loc, int size, color c, SDL_Plotter& g);

// rectangle shape
void drawRectangle(point loc, int size, color c, SDL_Plotter &g, int i, int i1, int i2, SDL_Plotter plotter);

// triangle shape
void drawTriangle(point loc, int size, color c, SDL_Plotter& g);

#endif //GROUPPROJECT_SCREEN_H
