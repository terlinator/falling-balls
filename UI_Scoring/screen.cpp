#include "screen.h"

void drawHomeScreen(SDL_Plotter& homeScreen){

}

void drawPixel(int posX, int posY, int width, int height, int R, int G, int B, SDL_Plotter& homeScreen){
    while(posX < SCREEN_SIZE_WIDTH && posY < SCREEN_SIZE_HEIGHT){
        homeScreen.plotPixel(width, height, R, G, B);
    }
}

// starts at zero to capture the entire screen
void drawBackground(int width, int height, int R, int G, int B, SDL_Plotter& homeScreen){
    for(int i = 0; i <= width; i++){
        for(int j = 0; j <= height; j++){
                homeScreen.plotPixel(width, height, R, G, B);
        }
    }
}

// starts at position x to only plot in the button size
void drawButton(int posX, int posY, int width, int height, int R, int G, int B, SDL_Plotter& homeScreen){
    for(int x = posX; x < width; x++){
        for(int y = posY; y < height; y++){
            homeScreen.plotPixel(width, height, R, G, B);
        }
    }
}

void drawNewBall(int posX, int posY, int width, int height, int R, int G, int B, SDL_Plotter& homeScreen){
    for(int i = 0; i <= 2; i++){
        // drawCircle(loc,size, c, g);
    }

}
void drawTitle(int posX, int posY, int SizeOfFont, char word, int R, int G, int B, SDL_Plotter& homeScreen){

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
void drawRectangle(point loc, int size, color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.1){
        for(double j = -size; j <= size; j+=0.1){
            if(i+i + j+j <= size*size){
                g.plotPixel(round(loc.x+i),round (loc.y+j),c);
            }
        }
    }

}
void drawTriangle(point loc, int size, color c, SDL_Plotter& g){
    for(double i = -size; i <= size;i+=0.01){
        for(double j = -size; j <= size; j+=0.01){
            if((i*i + j+j) <= size+size){
                g.plotPixel(round(loc.x+i),round(loc.y+j),c);
            }
        }
    }
}
void writeText(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
    ifstream infile;
    string line, value;
    int col, r, g, b, row = 0;

    infile.open("sheet.csv");
    while (getline(infile, line)) {
        stringstream ss(line);
        col = 0;
        while (getline(ss, value, ',')) {
            int pixelValue = stoi(value);
            int pixelSize = SizeOfFont;

            // Prints black if number is 1, white for anything else
            if(pixelValue == 1){
                r = 0;
                g = 0;
                b = 0;
            }
            else{
                r = 255;
                g = 255;
                b = 255;
            }

            // Draw the pixel
            for (int x = 0; x < pixelSize; ++x) {
                for (int y = 0; y < pixelSize; ++y) {
                    homeScreen.plotPixel(posX + col * pixelSize + x, posY + row * pixelSize + y, r, g, b);
                }
            }

            col++;
        }

        row++;
    }
}

void writeHeader(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
    ifstream infile;
    string line, value;
    int col, r, g, b, row = 0;

    infile.open("start.csv");
    while (getline(infile, line)) {
        stringstream ss(line);
        col = 0;
        while (getline(ss, value, ',')) {
            int pixelValue = stoi(value);
            int pixelSize = SizeOfFont;

            // Prints black if number is 1, white for anything else
            if(pixelValue == 1){
                r = 0;
                g = 0;
                b = 0;
            }
            else{
                r = 255;
                g = 255;
                b = 255;
            }

            // Draw the pixel
            for (int x = 0; x < pixelSize; ++x) {
                for (int y = 0; y < pixelSize; ++y) {
                    homeScreen.plotPixel(posX + col * pixelSize + x, posY + row * pixelSize + y, r, g, b);
                }
            }

            col++;
        }

        row++;
    }
}
