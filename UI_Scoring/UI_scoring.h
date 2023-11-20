#ifndef GROUPPROJECT_UI_SCORING_H_
#define GROUPPROJECT_UI_SCORING_H_
#include <fstream>
using namespace std;

class scoreTracker{
private:
    int score;

public:

    scoreTracker();
    void incrementScore(int);
    void displayScore(const ostream&) const;
};
#endif GROUPPROJECT_UI_SCORING_H_

