// must include all files explicitly iff
// separate files are made for each method

#include "ArrayADT.cpp";
#include "Insert.cpp"
#include "Display.cpp"
#include "Delete.cpp"
#include "Find.cpp"
#include "Search.cpp"
//#include <iostream>

int main() {
	try {
		ArrayADT<int> myArray(10);
		myArray.Insert(1, 60);
		myArray.Insert(2, 50);
		myArray.Insert(3, 40);
		myArray.Insert(2, 30);
		myArray.Insert(5, 69);
		myArray.Insert(6, 169);
		myArray.Insert(7, 269);

		/*int delValueHolder;
		myArray.Delete(5, delValueHolder);*/

		myArray.Display();

		int foundValueHolder;
		cout << "Element Found : " <<(bool) myArray.Find(6, foundValueHolder) << endl;

		cout << "Position : " << myArray.Search(269);

	}
	catch (IllegalParameterValue e) {
		e.outputMessage();
	}
}