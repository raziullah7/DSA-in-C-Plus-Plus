#include "Chain.cpp"

//------------------------------------------------------
// consturctor
template <class T>
Chain<T> :: Chain() {
	first = NULL;
	last = NULL;
	len = 0;
}

//------------------------------------------------------
// Insert function
template <class T>
void Chain<T> :: Insert(int position, T element) {
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
void Chain<T> :: Display() {
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
void Chain<T> :: Delete(int position, T& element) {
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
// Display function
template <class T>
bool Chain<T> ::Find (int position, T& element) {
	// checking validity of the position
	if (position < 1 || position > len) {
		return false;
	}
	// traversig to get the element from the position
	Node<T>* p = first;
	for (int i = 0; i <= position; i++) {
		p = p->link;
	}
	element = p->data;
	return true;
}