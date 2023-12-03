#ifndef GROUPPROJECT_UI_SCORING_H
#define GROUPPROJECT_UI_SCORING_H
// 12/3/23 Briel 1:35 PM
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

// testing to make sure the count is right
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

#endif //GROUPPROJECT_UI_SCORING_H
