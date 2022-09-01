// Basic Exception Handling.cpp :
// This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    int val1 = 10, val2 = 1;
    try {
        if (val2 == 0) throw 404;
        cout << "Division of " << val1 << " by " << val2 << " is: " << val1 / val2 << endl;
    }
    catch (int i) {
        cout << "Error : Division by zero \nError Code : " << i << endl;
    }
    cout << "Common statement executed\n";
    
}