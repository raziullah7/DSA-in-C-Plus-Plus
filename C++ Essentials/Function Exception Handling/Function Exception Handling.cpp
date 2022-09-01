// Function Exception Handling.cpp :
// This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>
using namespace std;

int Division(int val1, int val2) {
        if (val2 == 0) throw 404;
        return val1 / val2;
}

int main() {
    int x = 10, y = 0;
    try {
        cout << "Division of " << x << " by " << y << " is: " << Division(x,  y) << endl;
    }
    catch (int i) {
        cout << "Error : Division by zero \nError Code : " << i << endl;
    }
    cout << "Common statement, outside of try catch, executed\n";
}