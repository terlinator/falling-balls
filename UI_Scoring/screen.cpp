//Group Twelve Names: Daniel Esquivel, Briel Finley,
//Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Creates the 
//definitions for the screen functions
//File Name: screen.cpp
//File Created: 12/5/2023
//File Last Edited: 12/05/2023
#include "screen.h"

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

    for (int i = 0; i <= 1000; i += 100) {
        drawCircle({i, 10}, 15, {0, 0, 255}, g);
        drawCircle({i, 990}, 15, {0, 0, 255}, g);
        for (int j = 0; j <= 1000; j += 100) {
            drawCircle({10, j}, 15, {0, 0, 255}, g);
            drawCircle({990, j}, 15, {0, 0, 255}, g);
        }
    }
    drawCircle({850, 800}, 50, {255, 0, 0}, g); // red
    drawRectangle({500, 800}, 50, {255, 0, 0}, g);
    drawCircle({150, 800}, 50, {255, 0, 0}, g);
    // drawCircle({850, 800}, 50, {255, 0, 0}, g); // red
    g.update();

}

void drawPixel(int posX, int posY, int width, 
int height, int R, int G, int B, 
SDL_Plotter& homeScreen){
    while(posX < SCREEN_SIZE_WIDTH && posY < SCREEN_SIZE_HEIGHT){
        homeScreen.plotPixel(width, height, R, G, B);
    }
}

// starts at zero to capture the entire screen
void drawBackground(int width, int height, 
int R, int G, int B, SDL_Plotter& homeScreen){
    for(int i = 0; i <= width; i++){
        for(int j = 0; j <= height; j++){
                homeScreen.plotPixel(width, height, R, G, B);
        }
    }
}

// starts at position x to only plot in the button size
void drawButton(int posX, int posY, int width, 
int height, int R, int G, int B, 
SDL_Plotter& homeScreen){
    for(int x = posX; x < width; x++){
        for(int y = posY; y < height; y++){
            homeScreen.plotPixel(width, height, R, G, B);
        }
    }
}

void drawNewBall(int posX, int posY, int width, 
int height, int R, int G, int B, 
SDL_Plotter& homeScreen){
    for(int i = 0; i <= 2; i++){
        // drawCircle(loc,size, c, g);
    }

}
void drawTitle(int posX, int posY, int SizeOfFont, 
char word, int R, int G, int B, 
SDL_Plotter& homeScreen){

}

void drawCircle(point loc, int size, 
color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.1){
        for(double j = -size; j <= size; j+=0.1){
            if(i*i + j*j <= size*size){
                g.plotPixel(round(loc.x+i),round(loc.y+j),c);
            }
        }
    }
}
void drawRectangle(point loc, int size, 
color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.1){
        for(double j = -size; j <= size; j+=0.1){
            if(i+i + j+j <= size*size){
                g.plotPixel(round(loc.x+i),round (loc.y+j),c);
            }
        }
    }

}
void drawTriangle(point loc, int size, 
color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.01){
        for(double j = -size; j <= size; j+=0.01){
            if((i*i + j+j) <= size+size){
                g.plotPixel(round(loc.x+i),round(loc.y+j),c);
            }
        }
    }
}
