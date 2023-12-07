//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: menu.cpp
//File Created: 11/14/2023
//File Last Edited: 12/06/2023

#ifndef GROUPPROJECT_BUTTON_H
#define GROUPPROJECT_BUTTON_H
#include "../point.h"
#include "../SDL_Plotter/SDL_Plotter.h"
#include "../Screen/screen.h"
#include "../Menu/menu.h"

class button{
private:
    int x, y, width, height;
    bool clickable;

public:
    button();
    button(int, int, int, int);
/*
* description: checks if button is clicked
* return: bool
* precondition: must initialize button
* postcondition: returns true if pressed
*/
    bool isClicked(point);
/*
* description: draws button
* return: void
* precondition: must initialize button
* postcondition: returns true if pressed
*/
    void draw(SDL_Plotter&) const;
/*
* description: erases the button words
* return: void
* precondition: must initialize button
* postcondition: erases the location of the button
*/
    void erase(SDL_Plotter&);
/*
* description: sets the button to be present
* return: void
* precondition: must have a button
* postcondition: button appears when set
*/
    void setIsClickable(bool);
/*
* description: checks if button is present
* return: bool
* precondition: must have a button
* postcondition: button appears if it is available
*/
    bool isClickable();
/*
* description: removes button function
* return: void
* precondition: must have a button
* postcondition: button can no longer be used
*/
    void removeFromScreen();
};

#endif //GROUPPROJECT_BUTTON_H
