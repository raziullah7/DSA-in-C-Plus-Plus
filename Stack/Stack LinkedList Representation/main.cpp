#include "StackLL.cpp"

int main() {
	StackLL<int> stk;
	stk.Push(10);
	stk.Push(20);
	stk.Push(30);

	stk.Display();

	int x = 0;
	stk.Find(3, x);
	cout << x;
	return 0;
}