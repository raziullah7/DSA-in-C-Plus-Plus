// Double Pointer 2D Array.cpp : This file contains the 'main' function.
//

#include <iostream>

int main() {
    // all memory is stored in heap memory location

    // create double pointer
    int **arr;

    // store array of addresses in it
    arr = new int* [3];

    // iterate through 'arr'(pointer array), which gives the number of rows
    for (int i = 0; i < 3; i++) {
        // assign each pointer location an array
        // which makes a 2D array(matrix)
        arr[i] = new int[5];
        /*
        * as arr stores addresses, so by assigning each location of
        * an array we get a matrix format (2D array)
        * while arr itself is an address capable of storing another address
        * which is the reason why it can store an array, despite being 
        arr     
        🔳 --> 🔳🔳🔳🔳🔳
        🔳 --> 🔳🔳🔳🔳🔳
        🔳 --> 🔳🔳🔳🔳🔳
        */
    }

    std::cout << "Hello World!\n";
}