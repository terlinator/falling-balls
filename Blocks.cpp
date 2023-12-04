#include "Color.h"
#include "Blocks.h"
#include "ball/ball.h"

block::Block() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->sideLength = 10;
  this->color = Color(0,0,0);
}

void Block::drawBlock(point origin, int sidelength, color c, SDL_Plotter& g) {
    //plotPixel(p.x,  p.y,  r,  g,  b)
    //for square
    int squareX, squareY;
    int R = c.R;
    int G = c.G;
    int B = c.B;

    for (int i = -sidelength / 2; i < sidelength / 2; i++) {
        //how far away (rows)
        for (int j = -sidelength / 2; j < sidelength / 2; j++) {
            //how far away (columns)
            squareX = (origin.x) - i; //x plus or minus distance
            squareY = (origin.y) - j; //y plus or minus distance
            g.plotPixel(squareX, squareY, R, G, B);
        }
    }
}

void Block::setBlockValue(int val) {
    health = val;
}
void Block::setSide(int x) {
    sideLength = x;
}

int Block::getSideLength() {
    return sideLength;
}

point Block::getLocation() {
    return loc;
}

int Block::getBlockValue() {
    return health;
}

bool Block::collisionCheck(Ball circle) {
    bool Tf;
    //dist = sqrt((x2 - x1)^2 + (y2 - y1)^2 )
    if(circle.getRadius() + circle.getLocation().x > ((sideLength / 2) + this->getLocation().x)) {
        Tf = true;
    }
    else if(circle.getRadius() + circle.getLocation().y > ((sideLength / 2) + this->getLocation().y)) {
        Tf = true;
    }
    else if(circle.getRadius() + circle.getLocation().x >
        ((pow(pow(sideLength/2,2) + pow(sideLength/2,2),1/2.0)))) {
        Tf = true;
    }
    else if(circle.getRadius() + circle.getLocation().y >
        ((pow(pow(sideLength/2,2) + pow(sideLength/2,2),1/2.0)))) {
        Tf = true;
        }
    else {
        Tf = false;
    }
    return Tf;
}


/*
 *vector<point> block::getEdge(vector<vector<point>> edges) {
    int minX = edges[0][0];
    int maxX = edges[0][0];
    for (int i = 0; i < square.size(); i++) {
        //Loops through the vector for the points
        if (edges[i][0] < minX) {
            minX = edges[i][0];
        }
        if (edges[i][0] > maxX) {
            maxX = edges[i][0];
        }
        for (int j = 0; j < square.size(); j++) {
            int minY = edges[i][0]; //sets the first variable to the min
            if (edges[i][j] < minY) {
                minY = edges[i][j]; //Makes the smaller variable the min point in the vector
            }
            int maxY = edges[i][0];
            if (edges[i][j] > maxY) {
                maxY = edges[i][j]; //Makes the greater variable the max point in the vector
            }
        }
        edges.push_back(point(minX, minY));
        edges.push_back(point(maxX, maxY));
    }
    return edges;
}
*/

/*vector<vector<point>> groupPointsByX(const vector<point> points) {
    //Find the maximum column to determine the range of cols
    int maxCol = 0;
    for (int i = 0; i < points.size(); i++) {
        const point& point = points[i];
        maxCol = max(maxCol, point.x);
    }

    //Create cols to hold points with the same col value
    vector<vector<point>> cols(maxCol + 1);

    //Group points into cols based on their x values
    for (int i = 0; i < points.size(); i++) {
        const point& point = points[i];
        cols[point.x].push_back(point);
    }
    return cols;
}
*/

  
