#include <iostream>
#include <cmath>
#include "SDL_Plotter.h"

using namespace std;

void drawCircle(point loc, int size, color c, SDL_Plotter& g);

int main(int argc, char ** argv)
{

  SDL_Plotter g(SCREEN_SIZE_WIDTH,SCREEN_SIZE_HEIGHT);
    char key;
    Ball ball;
    point p;
    color c;
    int size;
    Uint32 RGB;
    
 // (position x, position y, font size, screen)
    writeFallingBalls(130, 100, 12, g);
    writeStart(280, 390, 4, g);


    for (int round = 0; round < 10; round++) {
        // (x coordinate, y coordinate), size, (r, g, b), g)
        drawCircle({850, 800}, 50, {255, 0, 0}, g); // red
        drawRectangle({500, 800}, 50, {255, 0, 0}, g);
        drawCircle({150, 800}, 50, {255, 0, 0}, g);
    }
    while (!g.getQuit())
    {

        if(g.kbhit()){
            switch(toupper(g.getKey())){
                case 'C': g.clear();
                    break;
            }
        }

        if (g.mouseClick()) {
            p = g.getMouseClick();
            ball.setLocation(p);
            g.clear();
        }
        g.update();

        ball.display(g, true);
        ball.move();
        ball.display(g, false);

        g.Sleep(4);
    }

    return 0;
}
void drawCircle(point loc, int size, color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.1){
        for(double j = -size; j <= size; j+=0.1){
            if(i*i + j*j <= size*size){
                g.plotPixel(round(loc.x+i),round(loc.y+j),c);
            }
        }
    }

}
