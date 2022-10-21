// this function prints all the sequential sub-arrays
// whose sum equals to zero (index 2-7, index 3-5, etc)

#include <iostream>
using namespace std;

void printAllSubsets(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                cout << "Sub-Array : Index "
                    << i << " to " << j << "\n";
            }
        }
    }
}

int main() {
    int nums[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    int n = sizeof(nums) / sizeof(nums[0]);
    printAllSubsets(nums, n);
    return 0;
}