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
    for(int i = 0; i < square.size(); i++){ //Loops through the vector for the points 
        for(int j = 0; k < square.size(); j++){  
          int min = square(0).getY; //sets the first variable to the min
          if(square(i).getY < min){ 
              min = square(i).getY; //Makes the smaller variable the min point in the vector
          }
          int max = square(0).getY;
          if(square(i).getY > max){
               max = square(i).getY; //Makes the greater variable the max point in the vector
          }
          edges.push_back(point(minX,minY));
          edges.push_back(point(maxX,maxY));
        }
    return edges;
  }
  
  bool block::collisionCheck(point){
    if 
  }
  
