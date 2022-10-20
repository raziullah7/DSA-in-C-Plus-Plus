// find minimum and maximum value from an array
// in a single iteration

#include <iostream>
using namespace std;

void FindingMaxMin(int Arr[], int n) {
    int min = Arr[0];
    int max = Arr[0];

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] < min)
            min = Arr[i];
        else if (Arr[i] > max)
            max = Arr[i];
    }
    cout << "\nThe Max is ..." << max;
    cout << "\nThe Min is ..." << min;
}

int main() {
    int A[] = { 20, 35, 43,80,99 };
    FindingMaxMin(A, 5);
    return 0;
}