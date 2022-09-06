// Recursive Fibonacci Series.cpp :
// This file contains the 'main' function.
// Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter Fibonacci Term Number (Range 1, 2, 3, ..., n): ";
    cin >> n;
    cout << "Term " << n << " of Fibonacci Series is " << Fibonacci(n);

    return 1;
}