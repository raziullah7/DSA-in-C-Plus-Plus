#include "BinaryTree.cpp"

int main() {
	BinaryTree<char> b;
	Node<char>* r = b.newNode('A');
	r->Lchild = b.newNode('B');
	r->Rchild = b.newNode('C');
	r->Rchild->Lchild = b.newNode('D');
	r->Lchild->Rchild = b.newNode('E');

	return 0;
}