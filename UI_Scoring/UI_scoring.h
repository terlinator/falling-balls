#ifndef UI_SCORING_H_
#define UI_SCORING_H_

class scoreTotal(){
private:
    int x, y;


public:

    scoreTracker();
    scoreTracker(int, int);

    // setters
    void setX(double);
    void setY(double);

    // getters
    void getX(double);
    void getY(double);


    void display(ostream&) const;

    double distance(const myPoint&) const;

    myPoint midpoint(const myPoint&);
}

    //setters


    //getters
    get
}

#endif UI_SCORING_H_
