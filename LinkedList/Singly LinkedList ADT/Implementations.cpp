#include "Chain.cpp"

//------------------------------------------------------
// consturctor
template <class T>
Chain<T>::Chain() {
	first = NULL;
	last = NULL;
	len = 0;
}

//------------------------------------------------------
// destructor
template <class T>
Chain<T>::~Chain() {
	Node<T>* p = first;
	while (p != NULL) {
		first = first->link;
		delete p;
		p = first;
	}
}

//------------------------------------------------------
// Insert function
template <class T>
void Chain<T>::Insert(int position, T element) {
	// creating a node
	Node<T>* temp;
	temp = new Node<T>;
	temp->data = element;
	temp->link = NULL;

	// checking if linkedlist is empty or not
	// if true means that temp is the first node in list
	if (len == 0) {
		// both first and last point to temp
		first = temp;
		last = temp;
	}

	// if temp is not the first node
	else {
		// inserting to first position in lisnkedlist
		if (position == 1) {
			temp->link = first;
			first = temp;
		}
		// inserting to last position in lisnkedlist
		else if (position == len + 1) {
			last->link = temp;
			last = temp;
		}
		// inserting anywhere other than first or last 
		// positions (middle position)
		else {
			// a pointer for traversing the linkedlist
			Node<T>* ptr = first;
			// traversing till 2 less than position
			for (int i = 0; i < position - 2; i++) {
				ptr = ptr->link;
			}
			// connecting temp with next node of the insertion point
			// making temp->link point to the node next to ptr
			// ptr->link is the address to the next item of insertion point
			temp->link = ptr->link;
			ptr->link = temp;
			// ptr->link now points to temp as next address
		}
	}
	len++;
}

//------------------------------------------------------
// Display function
template <class T>
void Chain<T>::Display() {
	// temp for traversing
	Node<T>* temp = first;
	// NULL means the link part of last pointer
	while (temp != NULL) {
		// printing
		cout << temp->data << " ";
		// moving on to the next item
		temp = temp->link;
	}
	cout << endl;
}

//------------------------------------------------------
// Delete function
template <class T>
void Chain<T>::Delete(int position, T& element) {
	//	checking if list is empty or not
	if (first == NULL) {
		cout << "List is empty\n";
		return;
	}

	// list is not empty
	else {
		// for traversing list and returning element
		Node<T>* p = first, * q;

		// first position
		if (position == 1) {
			first = first->link;
			element = p->data;
			delete p;
		}

		// last position
		else if (position == len) {
			// traversing p to element right before the
			// element to be deleted
			for (int i = 0; i < position - 2; i++) {
				p = p->link;
			}
			// assigning q to last element
			q = p->link;
			// retrieving value of last node
			element = q->data;
			// shifting last to one previous node
			last = p;
			// deleting the formar last node
			delete q;
			// updating last node's link
			p->link = NULL;
		}

		// middle position(s)
		else {
			q = first;
			// traversing to one node previous, to the node
			// to be deleted
			for (int i = 0; i < position - 2; i++) {
				p = p->link;
			}
			// traversing to the node to be deleted
			for (int i = 0; i < position - 1; i++) {
				q = q->link;
			}
			// retrieving element
			element = q->data;
			// updating links to remove node from in between
			p->link = q->link;
			// deleting node
			delete q;
		}
	}
	len--;
}

//------------------------------------------------------
// Find function
template <class T>
bool Chain<T>::Find (int position, T& element) {
	// checking validity of the position
	if (position < 1 || position > len) {
		cout << "Invalid Position!\n";
		return false;
	}
	// traversig to get the element from the position
	Node<T>* p = first;
	for (int i = 0; i <= position; i++) {
		p = p->link;
	}
	element = p->data;
	cout << "Element at position " << position
		<< " is " << element << endl;
	return true;
}

//------------------------------------------------------
// Search function
template <class T>
int Chain<T>::Search(T key) {
	// simple linear search
	Node<T>* ptr = first;
	for (int i = 0; i < len; i++) {
		if (ptr->data == key) {
			return i + 1;	// successful search
		}
		ptr = ptr->link;
	}
	return -1;				// unsuccessful search
}

//------------------------------------------------------
// IsEmpty function
template <class T>
bool Chain<T>::IsEmpty() {
	return first == NULL;
}

//------------------------------------------------------
// Length function
template <class T>
int Chain<T>::Length() {
	return len;
}

// Concatination of 2 LinkedLists
template <class T>
void Chain<T>::Concat(Chain<T>* chain1, Chain<T>* chain2) {
	Node<T>* chain1Head = chain1->first;
	Node<T>* chain2Head = chain2->first;
	// traversing chain1 till last element
	Node<T>* ptr = chain1Head;
	while (ptr->link != NULL) {
		ptr = ptr->link;
	}
	// assigning chain2Head to ptr's link part
	// (which is pointing to last node)
	// this connects the two chains
	ptr->link = chain2Head;
	chain2Head = NULL;

	// printing in a chain like format
	Node<T>* temp = chain1Head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->link;
	}
	cout << endl;
}

//------------------------------------------------------
// merge two sorted linkedlists
template <class T>
// void Chain<T>::Merge(Node<T>* f, Node<T>* s) 

void Chain<T>::Merge(Chain<T>* chain1, Chain<T>* chain2) {
	Node<T>* p, *f, *s;
	f = chain1->first;
	s = chain2->first;
	// for determining the first element of the linkedlist
	if (f->data < s->data) {
		first = p = f;
		f = f->link;
	}
	else {
		first = p = s;
		s = s->link;
	}
	first->link = NULL;
	// traversing for rearranging pointers
	// while (f != NULL && s != NULL)
	while (f && s) {
	// compare f with s and assign the smaller to p
		if (f->data < s->data) {
		// assigning the link to p updates the pointing address of that 
		// node, which is retained even after p points to another node
			p->link = f;
			p = f;
			f = f->link;
		}
		else {
			p->link = s;
			p = s;
			s = s->link;
		}
		p->link = NULL;
	}
	// when one linkedlist reaches it's end, the other
	// one is simply appended to the achieved result
	if (f != NULL)
		p->link = f;
	else
		p->link = s;
}

//------------------------------------------------------
// Reverse function
template <class T>
void Chain<T>::Reverse() {
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