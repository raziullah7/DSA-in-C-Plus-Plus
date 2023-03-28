#include <iostream>
using namespace std;

void MergeOperation(int input[], int low, int mid, int high) {
	// i for first half of input array
	// j for last half of input array
	// k for placeholder array(temp) for input array
	int i = low, j = mid + 1, k = low;
	// declaring the placeholder array temp
	// (and assigning all values zero)
	int temp[9] {};

	// iterating till one half of array runs out
	while (i < mid && j <= high) {
		// getting 1st half element if it's smaller
		if (input[i] < input[j]) {
			temp[k++] = input[i++];
		}
		// getting 2st half element if it's smaller
		else {
			temp[k++] = input[j++];
		}
	}

	// getting elements left in the 1st half of array
	while (i < mid) {
		input[k++] = temp[i];
		i++;
	}
	// getting elements left in the 2st half of array
	while (j <= high) {
		input[k++] = temp[j];
		j++;
	}
	// overwriting input array as it's reference type
	for (i = low; i <= high; i++) {
		input[i] = temp[i];
	}
}


void MergeSort(int input[], int low, int high) {
	if (low < high) {
		int mid = (low + high) / 2;
		MergeSort(input, low, mid);
		MergeSort(input, mid + 1, high);
		MergeOperation(input, low, mid, high);
	}
}


int main() {
	int input[] ={ 2, 4, 6, 8, 7, 0, 1, 3, 5 };
	int low = 0, high = 8;
	int mid = low + high / 2;

	MergeSort(input, low, high);

	for (int l = 0; l <= high; l++) {
		cout << input[l] << " ";
	}

	return 0;
}