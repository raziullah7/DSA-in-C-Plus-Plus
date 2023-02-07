#include "QueueLL.cpp"

int main() {
	QueueLL<int> myQ;
	myQ.EnQueue(10);
	myQ.EnQueue(20);
	myQ.EnQueue(30);
	myQ.EnQueue(40);
	myQ.EnQueue(50);

	int x = 0;
	myQ.DeQueue(x);
	myQ.DeQueue(x);

	myQ.Display();

	myQ.EnQueue(60);
	myQ.EnQueue(70);

	myQ.Display();

	cout << "Front Element : " << myQ.FrontElem() << endl;
	cout << "Rear Element : " << myQ.RearElem() << endl;

	return 0;
}