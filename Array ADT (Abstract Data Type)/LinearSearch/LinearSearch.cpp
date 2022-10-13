// LinearSearch.cpp : This file contains the 'main' function.

#include <iostream>
using namespace std;

template <class T>
class LinearSearch {
private:
    T* Arr;
    int n, key;

    // used internally for getting values of Array and Key
    void getArrAndKey() {
        
    }

public:
    // constructor
    LinearSearch(int size) {
        // creating array
        Arr = new T[size];
        n = size;

        // getting array
        cout << "Enter " << n << " Elements : ";
        for (int i = 0; i < n; i++)
            cin >> Arr[i];

        // getting key
        cout << "Enter Key : ";
        cin >> key;
    }

    // simple linear search method
    void Linear() {
        // begin linear search
        int i = 0, flag = 0;
        for (i = 0; i < n; i++) {
            if (key == Arr[i]) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "Key found at position " << i + 1 << endl;
        else
            cout << "Key not found\n";
    }

    void EnhancedLinearSearch() {
        // begin enhanced linear search
        int i = 0, flag = 0;
        for (i = 0; i < n; i++) {
            if (key == Arr[i]) {
                // swapping key element to 0th index
                // reduces time complexity for repeated key
                int swapper = Arr[i];
                Arr[i] = Arr[0];
                Arr[0] = swapper;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            cout << "Key found at position " << i + 1 << endl;
        else
            cout << "Key not found\n";
    }
};

// main function
int main() {
    LinearSearch<int> mySearch(7);
    mySearch.EnhancedLinearSearch();
    mySearch.Linear();
}