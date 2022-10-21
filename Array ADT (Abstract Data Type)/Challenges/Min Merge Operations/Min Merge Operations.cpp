#include <iostream>
using namespace std;

int MinMergeOperation(int arr[], int n) {
    int opCount = 0;
    int i = 0, j = n - 1;
    while (i < j) {
        if (arr[i] < arr[j]) {
            arr[i + 1] += arr[i];
            opCount++;
            i++;
        }
        else if (arr[i] > arr[j]) {
            arr[j - 1] += arr[j];
            opCount++;
            j--;
        }
        else {
            i++;
            j--;
        }
    }
    return opCount;
}

int main() {
    int arr[] = { 6, 1, 4, 3, 1, 7 };
    // converts to {7, 4, 4, 7}
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = MinMergeOperation(arr, n);
    cout << "\nMinimum Merge Operations : " << min << endl;
    return 0;
}