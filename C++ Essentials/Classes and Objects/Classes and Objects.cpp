#include <iostream>
#define PI 3.14

using namespace std;

class Circle {
private:
    int radius;

public:
    /*
    Circle(int r);
    ~Circle();
    int getRadius();
    void setRadius(int r);
    int Area();
    */

    // constructor
    Circle(int r) {
        radius = r;
    }

    // copy constructor
    Circle(Circle& anotherCircle) {
        radius = anotherCircle.radius;
    }

    // destructor
    ~Circle() {
        cout << "\nDestructor was called.";
    }

    // getter or accessor
    int getRadius() {
        return radius;
    }

    // setter or mutator
    void setRadius(int r) {
        radius = r;
    }

    // custom method
    int Area() {
        return PI * radius * radius;
    }
};

// this code is paired with above commented out method declaractions
// if the method are defined where they are declared, then the below
// code is not necessary
/*
// constructor
Circle::Circle(int r) {
    radius = r;
}

// destructor
Circle::~Circle() {
    cout << "\nDestructor was called.";
}

// getter or accessor
int Circle::getRadius() {
    return radius;
}

// setter or mutator
void Circle::setRadius(int r) {
    radius = r;
}

// custom method
int Circle::Area() {
    return PI * radius * radius;
}
*/


int main() {
    Circle myCircle(5);
    cout << "Area : " << myCircle.Area() << endl;
    cout << "Radius : " << myCircle.getRadius() << endl;
    Circle anotherCircle(6);
    Circle testCircle(anotherCircle);
    cout << "Radius : " << testCircle.getRadius();
    return 0;
}