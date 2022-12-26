#include "BST.cpp"

int main() {
	BST myTree;
	myTree.Insert(20);
	myTree.Insert(15);
	myTree.Insert(25);
	myTree.Insert(10);
	myTree.Insert(18);
	myTree.Insert(23);
	myTree.Insert(30);
	myTree.Insert(5);
	myTree.Insert(16);
	myTree.Insert(22);
	myTree.Insert(24);
	myTree.Insert(40);

	cout << "Inorder Traversal : ";
	myTree.Inorder(myTree.GetRootElement());
	cout << '\n';

	cout << "Inorder Predecessor : "
	 << myTree.InOrderPred(myTree.GetRootElement())->data
	 << endl;

	cout << "Inorder Successor : "
	 << myTree.InOrderSucc(myTree.GetRootElement())->data
	 << endl;
	
	cout << "Height : " <<
	 myTree.Height(myTree.GetRootElement()) << '\n';

	return 0;
}