// this function finds out the smallest positive number
// from from an unsorted array

#include <iostream>
using namespace std;

// this function pushes all negative values
// to the end of the array
int partition(int arr[], int n) {
    int pIndex = 0;
    for (int i = 0; i < n; i++) {
        // when the condition becomes false, the pIndex value
        // lags behind in the next iteration and swaps indexes
        if (arr[i] > 0) {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    return pIndex;
}

int FindSmallestMissing(int arr[], int n) {
    // getting the size of positive values partition
    int k = partition(arr, n);

    for (int i = 0; i < k; i++) {
        // using val - 1 to decide the index
        int val = abs(arr[i]);
        // when the condition becomes false, a positive value
        // is pushed into the array whose index is exactly 1
        // less than the missing number in the sequence
        if (val-1 < k && arr[val-1] >= 0) {
            arr[val-1] = -(arr[val-1]);
        }
    }

    for (int i = 0; i < k; i++) {
        // when a positive number is encountered, the index of
        // that number is added by one and returned to main()
        if (arr[i] > 0) {
            return i + 1;
        }
    }
    return k + 1;
}

int main()
{
    int arr[] = { 1, 4, 2, -1, 6, 5 };
    cout << "The Smallest Missing Positive Number : "
        << FindSmallestMissing(arr, 6);
    return 0;
}