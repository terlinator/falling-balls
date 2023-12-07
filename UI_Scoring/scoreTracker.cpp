// Created by Arianna Finley on 12/3/23.

#include "scoreTracker.h"

trackScore::trackScore(int initialScore){
    score = initialScore;
}

void trackScore::setScore(int newScore){
    score = newScore;
}
int trackScore::getScore() const{
    return score;
}
void trackScore::updateScore(int value){
    value = 10;
    score += value;
}

void trackScore::displayScore() const{
    cout << "Current Score: " << score << endl;
}