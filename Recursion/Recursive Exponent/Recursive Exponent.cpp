// Recursive Exponent.cpp : This file contains the 'main' function.
// Program execution begins and ends there.
//

#include <iostream>

// linear time complexity n
int power(int base, int exponent) {
    if (exponent == 0) return 1;
    else
        return power(base, exponent - 1) * base;
}


// time complexity log[base2]n
int optimizedPower(int base, int exponent) {
    if (exponent == 0) return 1;
    int temp = optimizedPower(base, exponent / 2);
    int value = temp * temp;
    if (exponent % 2) return base * value;
    else return value;
}

int main()
{
    std::cout << power(2, 3) << '\n';
    std::cout << optimizedPower(2, 3);
}