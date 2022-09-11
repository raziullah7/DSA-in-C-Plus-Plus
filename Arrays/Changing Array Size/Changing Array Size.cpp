// Changing Array Size.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // once array gets created, the size cannot be altered
    // size can only be changed indirectly

    // old array capacity
    int *a;
    a = new int[10];

    // new array capacity
    int *b;
    b = new int[20];

    // storing members of old array in new array
    for (int i = 0; i < 10; i++) {
        b[i] = a[i];
    }

    // overriding pointers
    a = b;
    b = NULL;
}