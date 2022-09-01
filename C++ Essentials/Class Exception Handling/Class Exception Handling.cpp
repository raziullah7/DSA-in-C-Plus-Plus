// Class Exception Handling.cpp :
// This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>
using namespace std;

// the use of inheriting from the built-in class 'exception' is
// that we can make use of it's built-in methods
class MyException : exception {};

int Division(int val1, int val2) {
    // throwing an instance of MyException class
    if (val2 == 0) throw MyException();
    return val1 / val2;
}

int main() {
    int a = 10, b = 0, c;
    try {
        c = Division(a, b);
        cout << "Result of division : " << c << endl;
    }
    // "catch(...)" is called Ellipses, which catches all kinds of exceptions
    catch (MyException) {
        cout << "Error : Division by zero\n";
    }
    cout << "Outside try n catch\n";

    return 1;
}