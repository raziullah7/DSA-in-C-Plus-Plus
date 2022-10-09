#include "ArrayADT.h"

template<class T>
T ArrayADT<T> :: SumOfArray() {
    T sum = 0;
    for (int i = 0; i < Size; i++)
        sum += Arr[i];
    return sum;
}