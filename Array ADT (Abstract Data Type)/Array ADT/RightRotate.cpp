#include "ArrayADT.h"

template<class T>
void ArrayADT<T>::RightRotateByOnePosition() {
    int temp = Arr[Size - 1];

    for (int i = Size - 1; i > 0; i--)
        Arr[i] = Arr[i - 1];

    Arr[0] = temp;
}
template<class T>
void ArrayADT<T>::RightRotate(int k) {
    for (int i = 0; i < k; i++)
        RightRotateByOnePosition();
}