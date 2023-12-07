//
// Created by Arianna Finley on 12/2/23.
//

#ifndef GROUPPROJECT_SCORETRACKER_H
#define GROUPPROJECT_SCORETRACKER_H
#include <iostream>
using namespace std;

class trackScore{
private:
    int score;

public:
    trackScore(int initialScore);

    void setScore(int);
    int getScore() const;
    void updateScore(int);
    void displayScore() const;
};
#endif //GROUPPROJECT_SCORETRACKER_H
