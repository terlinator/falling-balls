#ifndef FORCE_H_
#define FORCE_H_
#include <cmath>
#include <fstream>
#include <ostream>
#include <iostream>
using namespace std;
// M_PI wasn't working so I just included a constant for PI
const double PI = 3.14159265358979323846264338327950;
class force{
private:
    double magnitude;
    double direction;  // radian

public:
    force();
    force(double m, double d);

    void setMagnitude(double m);
    void setDirection(double d);
    double getMagnitude()const;
    double getDirection()const;

    force operator+(const force& other) const;
    force operator=(const force& other);
    force add(const force& other) const;
    void apply(const force& other);

    void display(ostream& os)const{
        os << getMagnitude() << " " << getDirection() << endl;
    }
};

const force GRAVITY(0.1, PI/2);
#endif FORCE_H_
