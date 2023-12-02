#include "Color.h"

void block::createBlock(){
    R = 0;
    G = 0;
    B = 0;
    loc.x = 0;
    loc.y = 0;
    size = 10;
  }

  void Square:drawSquare(point origin, int sidelength, color c, SDL_Plotter& g) {
    //plotPixel(p.x,  p.y,  r,  g,  b)
    //for square
    int squareX, squareY;
    int R = this->color.R;
    int G = this->color.G;
    int B = this->color.B;
  
    for(int i = -sidelength/2; i < sidelength/2; i++){   //how far away (rows)
      for(int j = -sidelength/2; j < sidelength/2; j++){ //how far away (columns)
        squareX = (origin.x)-i;  //x plus or minus distance
        squareY = (origin.y)-j;  //y plus or minus distance
        g.plotPixel(squareX,squareY,R,G,B); 
      }
    }
  }

  void block::setBlockValue(int val){
    health = val;
  }

  int block::getBlockValue(){
    return health;
  }

  square block::getEdge(){
    vector<vector <point> > edges;
    int minX = square[0][0];
    int maxX = square[0][0];
    for(int i = 0; i < square.size(); i++){ //Loops through the vector for the points 
        if(square[i][j] < minX){
            minX = square[i][j];
        }
        if(square[i][j] > maxX){
            maxX = square[i][j];
        }
        for(int j = 0; k < square.size(); j++){  
          int minY = square[i][0]; //sets the first variable to the min
          if(square[i][j] < min){ 
              min = square[i][j]; //Makes the smaller variable the min point in the vector
          }
          int maxY = square[i][0];
          if(square[i][j] > max){
               max = square[i][j]; //Makes the greater variable the max point in the vector
          }
        }
        edges.push_back(point(minX,minY));
        edges.push_back(point(maxX,maxY));
    return edges;
  }

  vector<Point> sortByCol(vector<Point> p) {
    Point mid = p[0];
    for (int i = 0; i < p.size(); i++) {
        for (int j = i+1; j < p.size(); j++) {
            if (p[i].x < p[j].x) {
                mid.x = p[j].x;
                p[j].x = p[i].x;
                p[i].x = mid.x;
            }
        }
    }
    return p;    //returns point array sorted by column (least x to greatest x)
  }
  
  bool block::collisionCheck(point){
    if 
  }
  
