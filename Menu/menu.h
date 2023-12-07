//Group Twelve Names: Daniel Esquivel, Briel Finley,
//Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: menu.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador

#include <iostream>

#include "screen.h"
/*
 * description: writes the text to a point
 * return: void
 * precondition: ints provided are valid
 * postcondition: drwas the text in a set point
 *
*/
void writeText(int posX, int posY, 
int SizeOfFont, SDL_Plotter& homeScreen);
/*
 * description: writes the header text
 * return: void
 * precondition: the ints provided are valid
 * postcondition: writes the header to the set point
 *
*/
void writeHeader(int posX, int posY, 
int SizeOfFont, SDL_Plotter& homeScreen);

