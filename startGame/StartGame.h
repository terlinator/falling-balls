// Briel 12/3/23
#ifndef GROUPPROJECT_STARTGAME_H
#define GROUPPROJECT_STARTGAME_H
#include "SDL_Plotter/SDL_Plotter.h"

class button{
private:
    int x, y, width, height;

public:
    void drawButton(SDL_Plotter&, const button&);
    bool isInside(const button&, int, int);
    void gameLoop(SDL_Plotter&);
    void clicked(SDL_Plotter&, const button&, bool&);


};
#endif //GROUPPROJECT_STARTGAME_H
