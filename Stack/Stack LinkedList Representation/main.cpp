#include "StackLL.cpp"

int main() {
	StackLL<int> stk;
	stk.Push(10);
	stk.Push(20);
	stk.Push(30);

	stk.Display();
	return 0;
}