#pragma once
// SELF REFERENTIAL STRUCTURE : It has reference to the same type
// meaning that a Node(struct/class) points to another Node,
// which is of the same type

template<class T>
class Node {
public:
	T data;
	Node<T>* next;
};


//struct Node {
//	int data;
//	struct Node* link;
//};