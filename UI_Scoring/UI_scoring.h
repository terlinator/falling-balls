#ifndef GROUPPROJECT_UI_SCORING_H_
#define GROUPPROJECT_UI_SCORING_H_
#include <fstream>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

struct player {
    player();
    player(const string &, int);
    void setScore(int);
    int getScore() const;
    static bool compareScores(const player&, const player&);

    void updateLeaderboard(const string&, int);
    void playGame();

    string name;
    int score;
};


    // what i would type in main:
        // playGame();

        // Display the updated leaderboard
        //displayLeaderboard();

#endif GROUPPROJECT_UI_SCORING_H_
