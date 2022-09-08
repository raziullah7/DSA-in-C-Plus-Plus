// Recursive GCD.cpp : 
// This file contains the 'main' function. 
// Program execution begins and ends there.

#include <iostream>

        // using subtraction approach
int GCD(int num1, int num2) {
    // this is the terminating condidtion, which return the
    // value when both arguments(num1 and num2) become equal
    if (num1 == num2) return num1;

    // the below cases keep subtracting the greater argument from 
    // smaller one, untill both become equal
    else if (num1 > num2) return GCD(num1 - num2, num2);
    else return GCD(num1, num2 - num1);

    // return 1 when there is no other GCD value found
}

        // using remainder(%) approach
int GCD2(int num1, int num2) {
    if (num2 != 0) {
        return GCD2(num2, num1 % num2);
    }
    return num1;
}


int main() {
    std::cout << GCD(1122, 89) << '\n';
    std::cout << GCD2(1122, 89) << '\n';
}