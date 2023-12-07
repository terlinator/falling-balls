//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create screen functions
//File Name: screen.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023
#ifndef SCREEN_H_
#define SCREEN_H_

#include "../SDL_Plotter/SDL_Plotter.h"
#include "../constants.h" // Data
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;
/*
* description: draws the home page
* return: void
* precondition: must have access to SDL
* postcondition: displays the home screen
*/
void drawStartScreen(SDL_Plotter& homeScreen);
/*
 * description: draws the home screen
 * return: void
 * precondition: the SDL plotter is valid
 * postcondition: draws the home screen
 *
*/
void drawHomeScreen(SDL_Plotter& homeScreen);
/*
 * description: draws the background
 * return: void
 * precondition: ints provided are valid
 * postcondition: draws the background
 *
*/
void drawBackground(int width, int height, 
int R, int G, int B, SDL_Plotter& homeScreen);
/*
 * description: draws a button at the given point
 * return: void
 * precondition: the values given are valid 
 * postcondition: draws a button
 *
*/
void drawButton(int posX, int posY, int width, int height, 
int R, int G, int B, SDL_Plotter& homeScreen);
/*
 * description: draws a ball
 * return: void
 * precondition: values given are valid
 * postcondition: draws a new ball at the given point
 *
*/
void drawNewBall(int posX, int posY, int width, int height, 
int R, int G, int B, SDL_Plotter& homeScreen);
/*
 * description: draws a pixel at the point
 * return: void
 * precondition: the values given are valid
 * postcondition: a pixel is drawn
 *
*/
void drawPoint(int posX, int posY, int width, int height,
int R, int G, int B, SDL_Plotter& homeScreen);
/*
 * description: writes the text given in set size
 * return: void
 * precondition: values given are valid
 * postcondition: writes the text
 *
*/
void writeText(int posX, int posY, 
int SizeOfFont, SDL_Plotter& homeScreen);
/*
 * description: writes the header of the project
 * return: void
 * precondition: values given are valid
 * postcondition: writes the header
 *
*/
void writeHeader(int posX, int posY, 
int SizeOfFont, SDL_Plotter& homeScreen);

/*
 * description: draws the circle at a point
 * return: void
 * precondition: the values given are valid
 * postcondition: draws the circle
 *
*/
void drawCircle(point loc, 
int size, color c, SDL_Plotter& g);

/*
 * description: draws the rectangle at given point
 * return: void
 * precondition: values given are valid
 * postcondition: draws the rectangle at point
 *
*/
void drawRectangle(point loc, 
int size, color c, SDL_Plotter& g);

// triangle shape
/*
 * description: draws the triangle at the point with color
 * return: void
 * precondition: given values are valid
 * postcondition: draws the triangle
 *
*/
void drawTriangle(point loc, int size, 
color c, SDL_Plotter& g);

#endif // SCREEN_H_
