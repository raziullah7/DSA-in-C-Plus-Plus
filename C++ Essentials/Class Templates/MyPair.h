#pragma once
template <class T>

class MyPair {
private:
	// fields
	T a, b;

public:
	// parameterized constructor
	MyPair(T a, T b) {
		this->a = a;
		this->b = b;
	}

	// method to get max values of fields
	T getMax() {
		return (a > b ? a : b);
	};
};
