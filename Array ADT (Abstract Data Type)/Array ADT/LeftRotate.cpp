#include "ArrayADT.h"

template<class T>
void ArrayADT<T> :: LeftRotateByOnePosition() {
    int temp = Arr[0];

    for (int i = 0; i < Size - 1; i++)
        Arr[i] = Arr[i + 1];

    Arr[Size - 1] = temp;
}

template<class T>
void ArrayADT<T> :: LeftRotate(int k) {
    for (int i = 0; i < k; i++)
        LeftRotateByOnePosition();
}