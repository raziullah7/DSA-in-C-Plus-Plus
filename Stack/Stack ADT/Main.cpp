#include "Implementation.cpp"

int main() {
	int x;
	myStack<int> st(6);
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);

	x = st.search(30);
	cout << "Element Search : " << x << endl;

	cout << "Stack Length : " << st.length() << endl;

	x = st.isEmpty();
	cout << "Stack Empty : " << x << endl;

	x = st.isFull();
	cout << "Stack Full : " << x << endl;
}