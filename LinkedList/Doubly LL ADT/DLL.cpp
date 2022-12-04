#include "DLL.h"
#include <iostream>

template <class T>
DLL<T>::DLL() {
	first = NULL;
	last = NULL;
	len = 0;
}