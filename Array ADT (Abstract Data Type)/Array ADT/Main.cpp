// must include all files explicitly iff
// separate files are made for each method

#include "ArrayADT.cpp";
#include "Insert.cpp"
#include "Display.cpp"
#include "Delete.cpp"
#include "Find.cpp"
#include "Search.cpp"
#include "Length.cpp"
#include "IsEmpty.cpp"
#include "IsFull.cpp"
#include "Get.cpp"
#include "Set.cpp"
#include "IndexOf.cpp"
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

		/*
		myArray.Display();

		int foundValueHolder;
		cout << "Element Found : " <<(bool) myArray.Find(6, foundValueHolder) << endl;

		cout << "Position : " << myArray.Search(269) << endl;
			
		cout << "Length of Array : " << myArray.Length() << endl;

		cout << "Array is Empty : " << myArray.IsEmpty() << endl;

		cout << "Array is Full : " << myArray.IsFull() << endl;
		*/

		myArray.Set(3, 619);
		cout << myArray.Get(3) << endl;

		cout << myArray.IndexOf(6);

	}
	catch (IllegalParameterValue e) {
		e.outputMessage();
	}
}