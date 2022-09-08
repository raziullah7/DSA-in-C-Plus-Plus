// Recursive Factorial.cpp : 
// This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>

long double Factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return Factorial(n - 1) * n;
        
}

int main()
{
    std::cout << Factorial(9);
    return 0;
}