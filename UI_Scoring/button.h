/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */

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
    bool isClicked(point);
    void draw(SDL_Plotter&) const;
    void erase(SDL_Plotter&);
    void setIsClickable(bool);
    bool isClickable();
    void removeFromScreen();
};

#endif //GROUPPROJECT_BUTTON_H
