#include "BinaryTree.cpp"

int main() {
	BinaryTree<char> b;
	Node<char>* r = b.newNode('A');
	r->Lchild = b.newNode('B');
	r->Rchild = b.newNode('C');
	r->Rchild->Lchild = b.newNode('D');
	r->Lchild->Rchild = b.newNode('E');

	cout << "\npreorder traversal: ";
	b.PreOrder(r);

	cout << "\nInorder traversal: ";
	b.InOrder(r);

	cout << "\nIterative Inorder traversal: ";
	b.IterativeInOrder(r);

	cout << "\nPostorder traversal: ";
	b.PostOrder(r);

	cout << "\nHeight : " << b.Height(r);
	cout << "\nNode Count : " << b.CountNodes(r);

	return 0;
}