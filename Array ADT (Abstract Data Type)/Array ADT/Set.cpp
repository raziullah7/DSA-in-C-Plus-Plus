#include "ArrayADT.h"

template<class T>
void ArrayADT<T>::Set(int index, T element)
{
    if (index < 0 || index > Size)
        throw IllegalParameterValue("Invalid Index....");
    Arr[index] = element;
}