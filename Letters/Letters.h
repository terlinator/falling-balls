///*
//Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
//Assignment Title: Group project: Falling Balls
//Assignment Description:
//Due Date: 12/6/23
//Date Created: 11/28/23
//Date Last Modified: 12/6/23
// */
//#ifndef GROUPPROJECT_LETTERS_H
//#define GROUPPROJECT_LETTERS_H
//#include <fstream>
//#include <vector>
//#include <string>
//#include "../Force/constants.h"
//#include "../Screen/Screen.h"
//using namespace std;
//struct Letter {
//    int pixels[MATRIX_WIDTH][MATRIX_LENGTH];
//};
//
//// Function to read a letter file and print the Letter
//Letter readLetterFromFile(const string& filename) {
//    ifstream infile(filename);
//    Letter alphabet;
//
//    if (infile.is_open()) {
//        for (int i = 0; i < MATRIX_WIDTH; i++) {
//            string line;
//            getline(infile, line);
//
//            for (int j = 0; j < MATRIX_LENGTH; j++) {
//                alphabet.pixels[i][j] = line[j] - 'A';
//                // Convert char to int (assuming '0' or '1')
//            }
//        }
//        infile.close();
//    }
//    return alphabet;
//}
//
//    // Function to get an array of letters from files
//    vector<Letter> getLetters() {
//    // vector of all the files
//    vector<string> fileNames = {"A.csv", "B.csv", "C.csv", "D.csv", "E.csv", "F.csv", "G.csv", "H.csv",
//                                "I.csv", "A.csv", "A.csv", "A.csv", "A.csv", "A.csv", "A.csv", "A.csv",
//                                "J.csv", "K.csv", "L.csv", "M.csv", "N.csv", "O.csv", "P.csv", "Q.csv",
//                                "R.csv", "S.csv", "T.csv", "U.csv", "V.csv", "W.csv", "X.csv", "Y.csv",
//                                "Z.csv"};
//
//    // Create a vector to hold all the letters
//    vector<Letter> vectOfLetters;
//
//    // Read letters from files and populate the vector
//    for (const string& file : fileNames) {
//        Letter letter = readLetterFromFile(file);
//        vectOfLetters.push_back(letter);
//    }
//
//    return vectOfLetters;
//}
//void plotChar(int X,int Y,char goal,int SizeOfFont,int R,int G,int B,SDL_Plotter& screen){
//    string lineSkipping;
//    ifstream inputFile;
//    char reading;
//    vector<char> dictionary;
//    int numSkipLine=6;
//
//    inputFile.open("digit.txt");
//    inputFile>>reading;
//    while(reading!= endl)
//    {
//        dictionary.push_back(reading);
//        reading=inputFile.get();
//    }
//
//    for(int i=0;i<dictionary.size();i++)
//    {
//        if(dictionary[i]==goal)
//        {
//            numSkipLine=(i)*6+1;
//            break;
//        }
//    }
//    for(int i=0;i<numSkipLine;i++)
//    {
//        getline(inputFile,lineSkipping);
//    }
//
//    for(int i=0;i<5;i++)
//    {
//        for(int ii=0;ii<5;ii++)
//        {
//            int read;
//            inputFile>>read;
//            if(read==1)
//            {
//                // drawRectangle(X + ii * SizeOfFont, Y + i * SizeOfFont, SizeOfFont / 2, SizeOfFont / 2, R, G, B, screen);
//            }
//        }
//    }
//    inputFile.close();
//}
//
//void plotString(const char text[],int numberOfChar,int fontSize,int X,int Y,int R,int G,int B,SDL_Plotter& screen){
//    for(int i=0;i<numberOfChar;i++)
//    {
//        plotChar(X+i*5*fontSize+fontSize/2,Y,text[i],fontSize,R,G,B,screen);
//    }
//}
//
//void plotInt(int num,int fontSize,int X,int Y,int R,int G,int B,SDL_Plotter& screen){
//    char print[10];
//    int test=1000000000,pos=0;
//    print[0]='0';
//    while(test!=0&&num/test==0)
//    {
//        test/=10;
//    }
//    if(test==0)
//    {
//        pos++;
//    }
//    while(test!=0)
//    {
//        print[pos]=static_cast<char>(num/test)+'0';
//        pos++;
//        num%=test;
//        test/=10;
//    }
//    plotString(static_cast<const char*>(print),pos,fontSize,X,Y,R,G,B,screen);
//}
//#endif //GROUPPROJECT_LETTERS_H