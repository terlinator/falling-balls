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
    void displayScore(ostream&) const;

//    double something(const scoreTracker&) const;

    // scoreTracker midpoint(const scoreTracker&);
};
#endif GROUPPROJECT_UI_SCORING_H_
