#include "point.h"
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

bool block::collisionCheck(Ball circle) {
    bool Tf;
    if(circle.getRadius() > sideLength) {
        Tf = false;
    }
    else {
        Tf = true;
    }
    return Tf;
}

  /*
  vector<Point> block::getEdge(){
    vector<vector<Point> > edges;
    edges = groupPointsByX(this->points);    //Gets 2D vector from function given 1D vec of points

    int minX = edges[0][0];
    int maxX = edges[0][0];
    for(int i = 0; i < square.size(); i++){ //Loops through the vector for the points 
        if(edges[i][0] < minX){
            minX = edges[i][0];
        }
        if(edges[i][0] > maxX){
            maxX = edges[i][0];
        }
        for(int j = 0; j < square.size(); j++){  
          int minY = edges[i][0]; //sets the first variable to the min
          if(edges[i][j] < minY){ 
              minY = edges[i][j]; //Makes the smaller variable the min point in the vector
          }
          int maxY = edges[i][0];
          if(edges[i][j] > maxY){
               maxY = edges[i][j]; //Makes the greater variable the max point in the vector
          }
        }
        edges.push_back(point(minX,minY));
        edges.push_back(point(maxX,maxY));
    return edges;
  }

  vector<vector<Point> > groupPointsByX(const vector<Point> points) {
    //Find the maximum column to determine the range of cols
    int maxCol = 0;
    for (int i = 0; i < points.size(); i++) {
        const Point& point = points[i];
        maxCol = max(maxCol, point.x);
    }

    //Create cols to hold points with the same col value
    vector<vector<Point> > cols(maxCol + 1);

    //Group points into cols based on their x values
    for (int i = 0; i < points.size(); i++) {
        const Point& point = points[i];
        cols[point.x].push_back(point);
    }
    return cols;
  }*/
  
  bool block::collisionCheck(point){
    if 
  }
  
