//Group Twelve Names: Daniel Esquivel, Briel Finley,
//Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: menu.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador
#ifndef GROUPPROJECT_MENU_H
#define GROUPPROJECT_MENU_H

#include "../SDL_Plotter/SDL_Plotter.h"
#include "../Screen/screen.h"
// #include "../constants.h" // Data
#include <cmath>
#include <fstream>
#include <sstream>
using namespace std;
/*
* description: writes the text to the screen
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeToScreen(const string& filename, int posX, int posY, int SizeOfFont,
                   SDL_Plotter& homeScreen);
/*
* description: writes the title page text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeStart(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);
/*
* description: writes the header text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeFallingBalls(int posX, int posY, int SizeOfFont, SDL_Plotter&
                        homeScreen);
/*
* description: writes the leaderboard text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeLeaderboard(int posX, int posY, int SizeOfFont, SDL_Plotter&
                        homeScreen);
/*
* description: writes the credits text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeCredits(int posX, int posY, int SizeOfFont, SDL_Plotter&
                    homeScreen);
/*
* description: writes the back button text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeBack(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);
/*
* description: writes the pause button text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writePause(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen);
/*
* description: writes the options text
* return: void
* precondition: the ints provided are valid
* postcondition: writes the header to the set point
*/
void writeOptions(int posX, int posY, int SizeOfFont, SDL_Plotter&
                homescreen);

/*
* description: draws a circle
* return: void
* precondition: the point and int provided is valid
* postcondition: draws the circle to the set point
*/
void drawCircle(point loc, int size, color c, SDL_Plotter& g);

/*
* description: draws a rectangle
* return: void
* precondition: the point and int provided is valid
* postcondition: draws the rectangle to the set point
*/
void drawRectangle(point loc, int size, color c, SDL_Plotter &g,
                   int i, int i1, int i2, SDL_Plotter plotter);

#endif //GROUPPROJECT_MENU_H
