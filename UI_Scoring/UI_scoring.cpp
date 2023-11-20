//
// Created by Arianna Finley on 11/19/23.
//
#include "UI_scoring.h"

scoreTracker::scoreTracker(){

    // initial score possibly
    int score = 0;
}

void scoreTracker::incrementScore(int points) {
    score += points;
}

void scoreTracker::displayScore(ostream& out) const{
    out << "Current Score: " << score << endl;
}