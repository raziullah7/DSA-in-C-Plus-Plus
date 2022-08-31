// Dynamic Memory Allocation.cpp : This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>

int main() {
            // ALLOCATION OF MEMORY FOR 1D ARRAY
    // declaring a pointer ptr in stack memory
    int* ptr;

    // dynamically allocating memory to array in heap memory using "new"
    ptr = new int[10];

            // DEALLOCATION OF MEMORY FOR 1D ARRAY
    // deleting array from heap and deleting pointer ptr from stack
    // using "delete"
    delete []ptr;



    return 1;
}
