//<<<<<<< HEAD
/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */
#include "menu.h"
void writeToScreen(const string& filename, int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
//=======
////Group Twelve Names: Daniel Esquivel, Briel Finley,
////	Cameron Hardin, Sterling Matthews, Andrew Meador
////Project Name: Falling Balls
////File Name: menu.cpp
////File Created: 11/14/2023
////File Last Edited: 12/05/2023, Andrew Meador
//
//#include <iostream>
//
//void writeText(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
//>>>>>>> main
    ifstream infile;
    string line, value;
    int col, r, g, b, row = 0;

//<<<<<<< HEAD
    infile.open(filename);
//=======
//    infile.open("sheet.csv");
//>>>>>>> main
    while (getline(infile, line)) {
        stringstream ss(line);
        col = 0;
        while (getline(ss, value, ',')) {
            int pixelValue = stoi(value);
            int pixelSize = SizeOfFont;
//<<<<<<< HEAD
            r = 0;
            g = 0;
            b = 0;

            for(int i = 0; i <= row; i++) {
                b += 35;
                r += 5;
                for (int l = 0; l <= col; l++) {
                    if (pixelValue == 0) {
                        r = 255;
                        g = 255;
                        b = 255;
                    }
                }
//=======
//
//            // Prints black if number is 1, white for anything else
//            if(pixelValue == 1){
//                r = 0;
//                g = 0;
//                b = 0;
//            }
//            else{
//                r = 255;
//                g = 255;
//                b = 255;
//>>>>>>> main
            }

            // Draw the pixel
            for (int x = 0; x < pixelSize; ++x) {
                for (int y = 0; y < pixelSize; ++y) {
                    homeScreen.plotPixel(posX + col * pixelSize + x, posY + row * pixelSize + y, r, g, b);
                }
            }
//<<<<<<< HEAD
            col++;
        }
        row++;
    }
}
void writeFallingBalls(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
    writeToScreen("Letters/CSV sheets/sheet.csv", posX, posY, SizeOfFont, homeScreen);
}

void writeStart(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
    writeToScreen("Letters/CSV sheets/start.csv", posX, posY, SizeOfFont, homeScreen);
}

void writeOptions(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
    writeToScreen("Letters/CSV sheets/options.csv", posX, posY, SizeOfFont, homeScreen);
}
void writeLeaderboard(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Letters/CSV sheets/Leaderboard.csv", posX, posY, SizeOfFont, homeScreen);
}

void writeCredits(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Letters/CSV sheets/credits.csv", posX, posY, SizeOfFont, homeScreen);
}

void writeBack(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Letters/CSV sheets/back.csv", posX, posY, SizeOfFont, homeScreen);
}

void writePause(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    writeToScreen("Letters/CSV sheets/pause.csv", posX, posY, SizeOfFont, homeScreen);
}

void writeWords(char a[], int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
    string word;
    //while() {
    writeToScreen("Letters/CSV sheets/back.csv", posX, posY, SizeOfFont, homeScreen);
}
//void writePause(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen){
//    writeToScreen("Letters/CSV sheets/pause.csv", posX, posY, SizeOfFont, homeScreen);
//}
//=======
//
//            col++;
//        }
//
//        row++;
//    }
//}
//
//void writeHeader(int posX, int posY, int SizeOfFont, SDL_Plotter& homeScreen) {
//    ifstream infile;
//    string line, value;
//    int col, r, g, b, row = 0;
//
//    infile.open("start.csv");
//    while (getline(infile, line)) {
//        stringstream ss(line);
//        col = 0;
//        while (getline(ss, value, ',')) {
//            int pixelValue = stoi(value);
//            int pixelSize = SizeOfFont;
//
//            // Prints black if number is 1, white for anything else
//            if(pixelValue == 1){
//                r = 0;
//                g = 0;
//                b = 0;
//            }
//            else{
//                r = 255;
//                g = 255;
//                b = 255;
//            }
//
//            // Draw the pixel
//            for (int x = 0; x < pixelSize; ++x) {
//                for (int y = 0; y < pixelSize; ++y) {
//                    homeScreen.plotPixel(posX + col * pixelSize + x, posY + row * pixelSize + y, r, g, b);
//                }
//            }
//
//            col++;
//        }
//
//        row++;
//    }
//}
//>>>>>>> main
