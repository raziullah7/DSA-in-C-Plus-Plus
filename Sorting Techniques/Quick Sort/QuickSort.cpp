#include <iostream>
using namespace std;

// function to swap the contents of given parameters
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

// partition function
int Partition(int arr[], int low, int high) {
	// selecting 1st element as pivot
	int pivot = arr[low];
	// i index from starting and j index from ending
	int i = low, j = high;
	// comparing and swapping
	do {
		// traversing from start of array
		do {
			i++;
		} while (arr[i] <= pivot);
		// traversing from end of array
		do {
			j--;
		} while (arr[j] > pivot);
		// locating and replacing higher items
		if (i < j) {
			Swap(&arr[i], &arr[j]);
		}
	} while (i < j);
	// replacing pivot to the start of next partition
	Swap(&arr[low], &arr[j]);
	// returning new pivot's index in array
	return j;
}

// Quick Sort function (recursively sorting using Partition)
void QuickSort(int arr[], int low, int high) {
	if (low < high) {
		int j = Partition(arr, low, high);
		QuickSort(arr, low, j);
		QuickSort(arr, j + 1, high);
	}
}

void main() {
	// initializing array
	int arr[10];
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}

	// unsorted array
	cout << "Unsorted Array : ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// running sort
	QuickSort(arr, 0, 10);

	// sorted array
	cout << " Sorted Array  : ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}