// 2D Array.cpp : This file contains the 'main' function.

#include <iostream>

int main() {
    // method # 1, stack memory allocated
    // int arr1[3][5];  correct (initialization not necessary)
    // int arr1[][5];   correct (must initialize)
    // int arr1[3][];   wrong
    // int arr1[][];    wrong
    int arr1[][5] = {
        {10, 11, 12, 13, 14},
        {20, 21, 22, 23, 24},
        {30, 31, 32, 33, 34}
    };
    arr1[0][0] = 69;
    arr1[1][2] = 619;


    // method # 2, heap memory allocated
    int* arr2[3];
    /*arr2[0] = new int[5];
    arr2[1] = new int[5];
    arr2[2] = new int[5];*/
    for (int i = 0; i < 3; i++) {
        arr2[i] = new int[5];
    }

    return 0;
}