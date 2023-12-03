#ifndef SCREEN_H_
#define SCREEN_H_

#include "../SDL_Plotter/SDL_Plotter.h"
#include "../constants.h" // Data.h
#include <cmath>
#include <fstream>
#include <sstream>
// #include "Blocks.h"
using namespace std;

// supposed to draw the text, not correct
void drawText(string text, point loc, int fontSize, color l, SDL_Plotter& g);

void drawHomeScreen(SDL_Plotter& homeScreen);

void drawBackground(int width, int height, int R, int G, int B, SDL_Plotter& homeScreen);

void drawButton(int posX, int posY, int width, int height, int R, int G, int B, SDL_Plotter& homeScreen);

void drawNewBall(int posX, int posY, int width, int height, int R, int G, int B, SDL_Plotter& homeScreen);

void drawPoint(int posX, int posY, int width, int height, int R, int G, int B, SDL_Plotter& homeScreen);

void writeFallingBalls(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);
void writeStart(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);



// draws a circle
void drawCircle(point loc, int size, color c, SDL_Plotter& g);

// rectangle shape
void drawRectangle(point loc, int size, color c, SDL_Plotter& g);

// triangle shape
void drawTriangle(point loc, int size, color c, SDL_Plotter& g);

#endif // SCREEN_H_
