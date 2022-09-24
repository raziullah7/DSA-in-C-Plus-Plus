// only writing constructor and destructor

#include "ArrayADT.h"

// constructor
template<class T>
ArrayADT<T> :: ArrayADT(int initialCap) {
	// raising an exception using a user-defined exception class
	if (initialCap < 1) {
		throw IllegalParameterValue("Capacity cannot be negative...");
	}
	Capacity = initialCap;
	Size = 0;
	Arr = new T[initialCap];
	// cout << "Array created successfully..." << endl;
};

// destructor
template<class T>
ArrayADT<T> :: ~ArrayADT() {
	delete Arr;
	// cout << "Memory got released by destructor..." << endl;
};