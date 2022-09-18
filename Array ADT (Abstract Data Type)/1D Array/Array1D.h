#pragma once
#include <iostream>
using namespace std;

class Array {
private:
	// pointer to store the base location of the array
	int* array;
	// how many elements the array can hold
	int capacity;
	// how many elements it currently holds	
	int size;

public:
	Array(int ArrayCap = 10);
	~Array();
	bool isFull();
	bool isEmpty();
	int SizeofArray();
	friend istream& operator >> (istream& is, Array& arr);
	friend ostream& operator << (ostream& is, Array& arr);
};