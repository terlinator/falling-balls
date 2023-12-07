//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: menu.cpp
//File Created: 11/14/2023
//File Last Edited: 12/06/2023
#include "button.h"
#include "../SDL_Plotter/SDL_Plotter.h"
#include "../Menu/menu.h"

button::button(){
    x = y = width = height = 0;
    clickable = true;
}


button::button(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    clickable = true;
}
bool button::isClicked(point p){
    cout << p.x << " " << p.y << endl;
    return (p.x >= x && p.x <= x + width && p.y >= y && p.y <= y + height);
}

// Other member functions...

void button::draw(SDL_Plotter& g) const {
    // Draw the button only if it's active
    for (int i = x; i < x + width; i++) {
        for (int j = y; j < y + height; j++) {
            g.plotPixel(i, j, 255, 255, 255); // Draw the button
        }
    }
}

void button::removeFromScreen(){
    x = y = width = height = 0;
    clickable = false;
}


void button::erase(SDL_Plotter& g){
    for (int i = x; i < x + width; i++) {
        for (int j = y; j < y + height; j++) {
            g.plotPixel(i, j, 255, 255, 255);
        }
    }
}

void button::setIsClickable(bool clickable){
    this->clickable = clickable;

}
bool button::isClickable(){
    return clickable;
}

