#include "ArrayADT.h"

template<class T>
T ArrayADT<T> :: FindMIN() {

    int min = Arr[0];
    for (int i = 1; i < Size; i++)
    {
        if (Arr[i] < min)
            min = Arr[i];
    }
    return min;
}