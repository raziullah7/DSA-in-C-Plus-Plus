#include <iostream>
using namespace std;

// function to swap the contents of given parameters
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

// use arr[j] > arr[j + 1] for ascending order
// use arr[j] < arr[j + 1] for descending order
void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				Swap(&arr[j], &arr[j + 1]); 
		}
	}
}

int main() {
	int arr[] = {12, 23, 45, 2, 39};
	BubbleSort(arr, 5);

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}