#include "ArrayADT.h"

template<class T>
T ArrayADT<T> :: Average() {
    return SumOfArray() / Size;
}