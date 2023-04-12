#include <iostream>
using namespace std;

		/* doesn't work for negative values */

// function to get greatest value from an array
int getMax(int arr[], int len) {
	int max = arr[0];
	for (int i = 1; i < len; i++)
		if (arr[i] > max)	max = arr[i];
	return max;
}


// Counting Sort function
void CountingSort(int arr[], int len) {
	// declaring max values
	int max;
	// getting max value
	max = getMax(arr, len);
	// initializing count array with all elements zero
	int* countArr = new int[max] { 0 };
	// adding to count using indexes
	for (int i = 0; i < len; i++) {
		countArr[arr[i]] += 1;
	}
	// getting values using count array
	// i for countArr and j for arr
	for (int i = 0, j = 0; i < max; ) {
		if (countArr[i] > 0) {
			arr[j++] = i;
			countArr[i]--;
		}
		else {
			i++;
		}
	}
}


// main function
void main() {
	int arr[5] = { 22, 24, 12, 34, 65 };
	int len = 5;

	cout << "Unsorted Array : ";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	CountingSort(arr, len);

	cout << " Sorted Array  : ";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}