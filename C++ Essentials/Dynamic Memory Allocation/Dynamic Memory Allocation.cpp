// Dynamic Memory Allocation.cpp : This file contains the 'main' function.
// Program execution begins and ends there.

#include <iostream>
#include "Node.h"

int main() {
            // ALLOCATION OF MEMORY FOR 1D ARRAY
    // declaring a pointer ptr in stack memory
    int* ptr1;

    // dynamically allocating memory to array in heap memory using "new"
    ptr1 = new int[10];

            // DEALLOCATION OF MEMORY FOR 1D ARRAY
    // deleting array from heap and deleting pointer ptr from stack
    // using "delete"
    delete []ptr1;

            // ALLOCATION OF MEMORY FOR LINKEDLIST
    // a pointer that can store the address of a Node
    Node* ptr2;
    // dynamically allocating memory using "new operator
    ptr2 = new Node;

            // DEALLOCATION OF MEMORY FOR LINKEDLIST
    // simply removing the pointer will release the memory
    delete ptr2;


    return 1;
}
