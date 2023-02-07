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

	return 0;
}