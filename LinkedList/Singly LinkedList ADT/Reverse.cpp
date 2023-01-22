#include "Chain.h"

template <class T>
void Chain<T>::ReverseByPointers() {
    Node<T>* p = first, * q, * r;
    while (p != NULL) {
        // r is previous node addess
        r = q;
        // q is current node address
        q = p;
        // p moves on to the next node
        p = p->link;
        // link of current node is reversed
        // by assigning it the previous node
        q->link = r;
    }
};

//------------------------------------------------------
// Reverse function
template <class T>
void Chain<T>::ReverseByArray() {
	// traversal Node pointers
	Node<T>* p, * q;
	p = first;
	// array and loop control variable
	T* temp = new T[len];
	int i = 0;
	// storing all values of linkedlist in an array
	while (p != NULL) {
		temp[i] = p->data;
		p = p->link;
		i++;
	}
	// reducing 1 from sentinal value
	i--;
	q = first;
	// storing values in linkedlist from array in reverse order
	while (q != NULL) {
		q->data = temp[i];
		q = q->link;
		i--;
	}
}