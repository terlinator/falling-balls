/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */#include "button.h"
#include "../SDL_Plotter/SDL_Plotter.h"
#include "../Menu/menu.h"

button::button(){
    x = y = width = height = 0;
}


button::button(int x, int y, int width, int height){
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
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


void button::erase(SDL_Plotter& g){
    for (int i = x; i < x + width; i++) {
        for (int j = y; j < y + height; j++) {
            g.plotPixel(i, j, 255, 255, 255);
        }
    }
}