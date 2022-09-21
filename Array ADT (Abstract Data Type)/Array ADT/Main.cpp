#include "ArrayADT.cpp";
#include <iostream>

int main() {
	try {
		ArrayADT<int> myArray(10);
	}
	catch (IllegalParameterValue e) {
		e.outputMessage();
	}
}