#include "ArrayADT.h"

// constructor
template<class arrayType>
ArrayADT<arrayType> :: ArrayADT(int initialCap) {
	// raising an exception using a user-defined exception class
	if (initialCap < 1) {
		throw IllegalParameterValue("Capacity cannot be negative...");
	}
	Capacity = initialCap;
	Size = 0;
	Arr = new arrayType[initialCap];
	cout << "Array created successfully..." << endl;
};

// destructor
template<class arrayType>
ArrayADT<arrayType> :: ~ArrayADT() {
	delete Arr;
	cout << "Memory got released by destructor..." << endl;
};