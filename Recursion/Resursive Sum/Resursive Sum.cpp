
#include <iostream>
using namespace std;
template <class T>

// resursive approach to find the sum of two numbers
// using generics to support more types of numbers
T SumTwoNumbers(T val1, T val2) {
    if (val1 == 0) return val2;
    else if (val2 == 0) return val1;
    else return SumTwoNumbers(val1, val2 - 1) + 1;
}

int main() {
    cout << "Resursive Sum : " << SumTwoNumbers(40000, 650000);
}