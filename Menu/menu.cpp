//Group Twelve Names: Daniel Esquivel, Briel Finley,
//Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: menu.cpp
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador

#include <iostream>

void writeToScreen(const string& filename, int posX, int posY, int SizeOfFont,
                   SDL_Plotter& homeScreen) {

    ifstream infile;
    string line, value;
    int col, r, g, b, row = 0;

    infile.open(filename);

    while (getline(infile, line)) {
        stringstream ss(line);
        col = 0;
        while (getline(ss, value, ',')) {
            int pixelValue = stoi(value);
            int pixelSize = SizeOfFont;
            r = 0;
            g = 0;
            b = 0;

            for (int i = 0; i <= row; i++) {
                b += 35;
                r += 5;
                for (int l = 0; l <= col; l++) {
                    if (pixelValue == 0) {
                        r = 255;
                        g = 255;
                        b = 255;
                    }
                }

                // Draw the pixel
                for (int x = 0; x < pixelSize; ++x) {
                    for (int y = 0; y < pixelSize; ++y) {
                        homeScreen.plotPixel(posX + col * pixelSize + x,
                                             posY + row * pixelSize + y, r,
                                             g, b);
                    }
                }
                col++;
            }
            row++;
        }
    }
}
void writeFallingBalls(int posX, int posY, int SizeOfFont,
                       SDL_Plotter& homeScreen){
    writeToScreen("Sheets/sheet.csv", posX,
                  posY, SizeOfFont, homeScreen);
}

void writeStart(int posX, int posY, int SizeOfFont,
                SDL_Plotter& homeScreen) {
    writeToScreen("Sheets/start.csv",
                  posX, posY, SizeOfFont, homeScreen);
}

void writeOptions(int posX, int posY, int SizeOfFont,
                  SDL_Plotter& homeScreen) {
    writeToScreen("Sheets/options.csv",
                  posX, posY, SizeOfFont, homeScreen);
}
void writeLeaderboard(int posX, int posY, int SizeOfFont,
                      SDL_Plotter& homeScreen){
    writeToScreen("Sheets/LeaderBoard.csv",
                  posX, posY, SizeOfFont, homeScreen);
}

void writeCredits(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Sheets/Credits.csv", posX, posY, SizeOfFont,
                  homeScreen);
}

void writeBack(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Sheets/back.csv", posX, posY, SizeOfFont,
                  homeScreen);
}

void writePause(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Sheets/pause.csv", posX, posY, SizeOfFont,
                  homeScreen);

