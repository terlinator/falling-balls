/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */
#include "screen.h"
#include "../Menu/menu.h"
void drawCircle(point loc, int size, color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.1){
        for(double j = -size; j <= size; j+=0.1){
            if(i*i + j*j <= size*size){
                g.plotPixel(round(loc.x+i),round(loc.y+j),c);
            }
        }
    }
}

//void drawRectangle(point loc, int size, color c, SDL_Plotter &g, int i, int i1, int i2, SDL_Plotter plotter) {
//    for(double i = -size; i <= size;i+=0.1){
//        for(double j = -size; j <= size; j+=0.1){
//            if(i+i + j+j <= size*size){
//                g.plotPixel(round(loc.x+i),round (loc.y+j),c);
//            }
//        }
//    }
//
//}

void drawTriangle(point loc, int size, color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.01){
        for(double j = -size; j <= size; j+=0.01){
            if((i*i + j+j) <= size+size){
                g.plotPixel(round(loc.x+i),round(loc.y+j),c);
            }
        }
    }
}
void drawStartScreen(SDL_Plotter& g) {
    button startButton(385, 380, 182, 50);
    button LeaderboardButton(270, 454, 408, 50);
    button optionButton(335, 535, 260, 50);
    button creditsButton(335, 630, 260, 50);
    button backButton(30, 50, 120, 50);
    button pauseButton(30, 50, 120, 50);

    // draw the buttons
    startButton.draw(g);
    LeaderboardButton.draw(g);
    optionButton.draw(g);
    creditsButton.draw(g);
    // Title screen
    writeFallingBalls(130, 100, 12, g);
    writeStart(280, 390, 4, g);

//    for(int i = 0; i < 10000; i++) {
//        g.plotPixel(rand() % 1000, rand() % 1000, 255, 50, 150);
//    }
//    drawCircle(rand() % {50, 50}, 50, {0, 230, 150}, g);

    for (int i = 0; i <= 1000; i += 100) {
        drawCircle({i, 10}, 15, {0, 0, 255}, g);
        drawCircle({i, 990}, 15, {0, 0, 255}, g);
        for (int j = 0; j <= 1000; j += 100) {
            drawCircle({10, j}, 15, {0, 0, 255}, g);
            drawCircle({990, j}, 15, {0, 0, 255}, g);
        }
    }
    drawCircle({850, 800}, 50, {255, 0, 0}, g); // red
//    drawRectangle({500, 800}, 50, {255, 0, 0}, g, 0, 0, 0, SDL_Plotter());
    drawCircle({150, 800}, 50, {255, 0, 0}, g);
    // drawCircle({850, 800}, 50, {255, 0, 0}, g); // red
    g.update();

}