#include "Precedence.cpp"
#include <iostream>
#include <cstring>
// this gets the user defined stack
#include "../Stack ADT/Implementation.cpp"
using namespace std;

void InfixToPostfix(char infix[]) {
	// array to store postfix expression
	char postfix[30]{};
	// declaring variable for popped elements
	char holder;
	// declaring stack
	myStack<char> stk(30);
	// starting conversion, pushing the lowest precedence
	// element to prevent empty stack check
	stk.Push('#');

	// looping through the infix expression
	for (int i = 0; infix[i] != '#'; i++) {
		// for operators
		if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*'
			|| infix[i] == '/' || infix[i] == '^' || infix[i] == '(') {
			// keep popping if precedence of TopElement <= encountered item
			while (isp(stk.TopElement()) <= icp(infix[i])) {
				cout << stk.TopElement();
				stk.Pop(holder);
			}
			// otherwise, push the encountered item
			stk.Push(infix[i]);
		}
		// if item is closing bracket, then keep popping untill
		// the opening item is enountered in the stack
		else if (infix[i] == ')') {
			while (stk.TopElement() != '(') {
				cout << stk.TopElement();
				stk.Pop(holder);
			}
			// finally, pop the opening bracket
			stk.Pop(holder);
		}
		// for operands
		else {
			// simply display them
			cout << infix[i];
		}
	}

	// in the end, if there are any operators remaining in the 
	// stack, pop them and display them
	while (!stk.TopElement() == '#') {
		cout << stk.TopElement();
		stk.Pop(holder);
	}
}