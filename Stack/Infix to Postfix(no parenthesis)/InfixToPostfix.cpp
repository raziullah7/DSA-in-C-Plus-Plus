#include "Precedence.cpp"
#include <iostream>
#include <cstring>
// this gets the user defined stack
#include "../Stack ADT/Implementation.cpp"
using namespace std;

void InfixToPostfix(char infix[]) {
	// array to store postfix expression
	char postfix[30]{};
	// declaring array assessing variables
	int i = 0, j = 0;
	char holder;
	// declaring stack
	myStack<char> stk(30);
	// starting conversion, pushing the lowest precedence
	// element to prevent empty stack check
	stk.Push('#');
	// looping through the infix expression
	while (!stk.IsEmpty()) {
		if (precedence(infix[i]) > precedence(stk.TopElement())) {
			stk.Push(infix[i]);
			i++;
		}
		else {
			stk.Pop(holder);
			postfix[j] = holder;
			j++;
		}
	}
	// adding essestial and removing # 
	postfix[j - 1] = '\0';
	// printing postfix expression
	cout << "Postfix Expression is : " << postfix;
}