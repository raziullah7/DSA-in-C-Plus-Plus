#include "ArrayADT.h"
template<class arrayType>

// constructor
ArrayADT<arrayType> :: ArrayADT(int initialCap) {
	ArrayADT->Arr = new arrayType[initialCap];
}