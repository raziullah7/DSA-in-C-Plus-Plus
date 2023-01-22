#include "Implementation.cpp"

int main() {
	TwoStacks<int> myStk(10);
	myStk.Push1(10);
	myStk.Push1(20);
	myStk.Push1(30);

	myStk.Push2(35);
	myStk.Push2(45);
	myStk.Push2(100);
	myStk.Push2(34);
	myStk.Push2(55);
	myStk.Push2(65);

	myStk.Display1();
	myStk.Display2();

	cout << myStk.TopMost1() << endl;
	cout << myStk.TopMost2() << endl;

	int x = 0;
	myStk.Pop1(x);
	myStk.Pop2(x);
	myStk.Pop2(x);

	myStk.Display1();
	myStk.Display2();
}