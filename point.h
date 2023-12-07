#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

#include <cmath>

using namespace std;

struct Point{
   double x,y;

   Point(const Point& p){
       *this = p;
   }

   Point(double x = 0, double y = 0){
      this->x = x;
      this->y = y;
   }
/*
 * description: overloads the equals operator
 * return: point reference
 * precondition: point given is valid
 * postcondition: returns *this
 *
*/
   Point& operator= (const Point& p){
       x = p.x;
       y = p.y;
       return *this;
   }
/*
 * description: returns the distance from the point
 * return: double
 * precondition: the the point given is valid
 * postcondition: returns the distance from the point as a double
 *
*/
   double distance(Point p) const{
       return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2));
   }
};

#endif // POINT_H_INCLUDED
