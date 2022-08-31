#pragma once
template <class T>

class MyPair {
private:
	T a, b;

public:
	T getMax(T a, T b) {
		return (a > b ? a : b);
	};
};
