//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: menu.cpp
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador

#include <iostream>

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
