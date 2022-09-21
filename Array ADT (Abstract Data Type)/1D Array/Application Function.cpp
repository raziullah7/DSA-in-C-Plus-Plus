// the main function is also known as application function

#include "Array1D.h"

int main() {
	// Array myArr(50);
	// Array myArr;
	Array myArr(5);

	int num;
	cout << "Enter Number of Elements : ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		// uses the overloaded istream of user-defined class Array
		cin >> myArr;
	}

	cout << "Entered Elements are : ";
	// uses the overloaded ostream of user-defined class Array
	cout << myArr;

	/*(myArr.isFull()) ?
		cout << "\nArray is FULL" :
		cout << "\nArray is NOT FULL";

	(myArr.isEmpty()) ? 
		cout << "\nArray is Empty" : 
		cout << "\nArray is NOT EMPTY";*/

	if (myArr.isFull()) cout << "\nArray is FULL";
	else cout << "\nArray is NOT FULL";

	if (myArr.isEmpty()) cout << "\nArray is Empty";
	else cout << "\nArray is NOT EMPTY";

	cout << "\nSize of Array : " << myArr.SizeofArray();
}