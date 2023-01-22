#include "StackLL.cpp"

int main() {
	StackLL<int> stk;
	stk.Push(10);
	stk.Push(20);
	stk.Push(30);
	stk.Push(40);
	stk.Push(50);

	stk.Display();

	int x = 0;
	stk.Find(3, x);
	cout << "Find 3rd Position: " << x << endl;

	cout << "Search 20 Element: " << stk.Search(20) << endl;

	stk.Pop(x);
	stk.Pop(x);

	stk.Display();

	return 0;
}