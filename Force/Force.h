/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */

#ifndef INC_11_7_23_FORCE_H
#define INC_11_7_23_FORCE_H
#include <cmath>
#include <fstream>
using namespace std;

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


#endif //INC_11_7_23_FORCE_H
