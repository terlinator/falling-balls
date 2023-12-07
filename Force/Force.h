//<<<<<<< HEAD
///*
//Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
//Assignment Title: Group project: Falling Balls
//Assignment Description:
//Due Date: 12/6/23
//Date Created: 11/28/23
//Date Last Modified: 12/6/23
// */
//
//#ifndef INC_11_7_23_FORCE_H
//#define INC_11_7_23_FORCE_H
//#include <cmath>
//#include <fstream>
//using namespace std;
//
//const double PI = 3.14159265358979323846264338327950;
//class force{
//private:
//    double magnitude;
//    double direction;  // radian
//
//public:
//    force();
//    force(double m, double d);
//
//    void setMagnitude(double m);
//    void setDirection(double d);
//    double getMagnitude()const;
//    double getDirection()const;
//
//    force operator+(const force& other) const;
//    force operator=(const force& other);
//    force add(const force& other) const;
//    void apply(const force& other);
//
//    void display(ostream& os)const{
//        os << getMagnitude() << " " << getDirection() << endl;
//    }
//};
//
//
//#endif //INC_11_7_23_FORCE_H
//=======
//Group Twelve Names: Daniel Esquivel, Briel Finley, 
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//File Name: Force.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023, Andrew Meador

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
    double direction;  // radians

public:
    //description: default constructor
    //return: force object
    //precondition: null
    //postcondition: a force object is created
    force();
    //description: constructor with parameters
    //return: force object
    //precondition: two doubles exist
    //postcondition: a force object with non-default values is created
    force(double m, double d);

    //description: sets magnitude member
    //return: void
    //precondition: a force object exists
    //postcondition: the magnitude of a force object is changed
    void setMagnitude(double m);
    //description: sets direction member
    //return: void
    //precondition: a force object exists
    //postcondition: the direction of a force object is changed
    void setDirection(double d);
    //description: returns magnitude
    //return: double
    //precondition: a force object exists
    //postcondition: magnitude value remains unchanged
    double getMagnitude()const;
    //description: returns direction
    //return: double
    //precondition: a force object exists
    //postcondition: direction value remains unchanged
    double getDirection()const;

    //description: allows for adding force objects
    //return: force object
    //precondition: two force objects exist
    //postcondition: members of two force objects are added together
    force operator+(const force& other) const;
    //description: allows for setting force objects to one another
    //return: force object
    //precondition: two force objects exist
    //postcondition: one force object is set to another
    force operator=(const force& other);
    //description: calculates and applies force to an object
    //return: force object
    //precondition: two force objects exist
    //postcondition: members of two force objects are calculated together
    force add(const force& other) const;
    //description: gives force to an object
    //return: void
    //precondition: a force object exists
    //postcondition: force object values remain unchanged
    void apply(const force& other);

    //description: displays force values being used
    //return: void
    //precondition: a force object and ostream exist
    //postcondition: force object values remain unchanged
    void display(ostream& os)const{
        os << getMagnitude() << " " << getDirection() << endl;
    }
};

const force GRAVITY(0.1, PI/2);

#endif //FORCE_H_
