// briel 12/3/23
#include "UI_Scoring.h"

player::player() {
    name = "bob";
    score = 25;
}

player::player(const string & n, int s){
     name = n;
     score = s;
}
void player::setScore(int s){
    score = s;
}

int player::getScore() const{
    return score;
}

bool player::compareScores(const player& p1, const player& p2){
    return p1.score > p2.score;
}

void updateLeaderboard(const string& playerName, int score){
    ofstream outfile;
    outfile.open("leaderboard.txt");
    if(outfile.is_open()){
        outfile << playerName << ", " << score << endl;
    }
    else{
        cout << "ERROR: Failed to open file" << endl;
    }
}

void displayLeaderboard(){
    ifstream infile;
    vector<player> players;
    infile.open("leaderboard.txt");

    if(infile.is_open()){
        string line, name;
        int score;
        while(getline(infile, line)) {
            stringstream ss(line);
            getline(ss, name, ',');
            ss >> score;
            // players.push_back(name, score);
        }
        infile.close();
    }

    // sort players by score
    // player::compareScores(players.begin(), players.end());

    cout << "LEADERBOARD: " << endl;
    for(const auto& player : players){
        cout << player.name << ": " << player.score << endl;
    }
}

void playGame(){
    string playerName;
    int playerScore;
    cout << "Enter your name: ";
    cin >> playerName;

    playerScore = 25;

    updateLeaderboard(playerName, playerScore);

}
