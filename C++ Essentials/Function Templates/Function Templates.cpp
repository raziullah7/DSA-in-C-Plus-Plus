// Function Templates.cpp : This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>
using namespace std;

/*
// overloaded method to generate the max of two values
int getMax(int a, int b) {
    return (a > b) ? a : b;
}

double getMax(double a, double b) {
    return (a > b) ? a : b;
}
*/

// writing a generic method using template
template <class T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}




int main() {

    cout << getMax(5, 8) << endl;
    cout << getMax(5.29, 5.28) << endl;
    cout << getMax('A', 'b') << endl;
}
