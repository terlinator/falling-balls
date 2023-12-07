////
//// Created by Arianna Finley on 11/19/23.
////
//#include "UI_scoring.h"
//
//player::player(){
//    score = 32;
//    name = "bob";
//}
//
//player::player(const string& n, int s){
//    this->name = n;
//    this->score = s;
//}
//void player::setScore(int s){
//    score = s;
//}
//int player::getScore() const{
//    return score;
//}
//bool compareScores(const player& p1, const player& p2) {
//    return p1.score > p2.score;
//}
//
//void updateLeaderboard(const string& playerName, int score) {
//    ofstream outfile("leaderboard.txt");
//
//    if (outfile.is_open()) {
//        outfile << playerName << "," << score << endl;
//        outfile.close();
//    } else {
//        cout << "ERROR: Failed to open file" << endl;
//    }
//}
//
//void displayLeaderboard() {
//    ifstream infile("leaderboard.txt");
//    vector<player> players;
//
//    if (infile.is_open()) {
//        string line, name;
//        int score;
//        while (getline(infile, line)) {
//            stringstream ss(line);
//            getline(ss, name, ',');
//            ss >> score;
//            //players.push_back(name, score);
//        }
//        infile.close();
//    }
//
//    // Sort players by score
//    player::compareScores(players.begin(), players.end());
//
//    cout << "LEADERBOARD: " << endl;
//    for (const auto& player : players) {
//        cout << player.name << ": " << player.score << endl;
//    }
//}
//
//void playGame() {
//    string playerName;
//    int playerScore;
//    cout << "Enter your name: ";
//    cin >> playerName;
//
//    playerScore = 2500; // Replace this with the actual score obtained in the game. just a demo number
//
//    // Update leaderboard with player's name and score
//    updateLeaderboard(playerName, playerScore);
//}
//
//
//
//
//
//
//
//
//
//
//
////scoreTracker::scoreTracker(){
////
////    // initial score possibly
////    int score = 0;
////}
////
////void scoreTracker::incrementScore(int points) {
////    score += points;
////}
////
////void scoreTracker::displayScore(ostream& out) const{
////    out << "Current Score: " << score << endl;
////}