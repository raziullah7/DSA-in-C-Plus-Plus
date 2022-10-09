#include "ArrayADT.h"

template<class T>
T ArrayADT<T> :: FindMAX(){
	int max = Arr[0];
	for (int i = 0; i < Size; i++) {
		if (Arr[i] > max)
			max = Arr[i];
	}
	return max;
}