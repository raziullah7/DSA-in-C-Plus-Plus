#include "Implementation.cpp"

int main() {
	int x;
	myStack<int> st(6);
	st.Push(10);
	st.Push(20);
	st.Push(30);
	st.Push(40);

	x = st.Search(30);
	cout << "Element Search : " << x << endl;

	cout << "Stack Length : " << st.Length() << endl;

	x = st.IsEmpty();
	cout << "Stack Empty : " << x << endl;

	x = st.IsFull();
	cout << "Stack Full : " << x << endl;
	
	st.Display();
}