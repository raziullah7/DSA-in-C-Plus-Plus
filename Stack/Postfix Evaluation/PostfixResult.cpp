#include "../Stack ADT/Implementation.cpp"
#include <iostream>
using namespace std;

int PostfixResult(char postfix[]) {
	myStack<int> stk(20);
	int result = 0, operand1, operand2;

	for (int i = 0; postfix[i] != '\0'; i++) {
		// ASCII 48 - 58 == numbers 0 - 9
		if (postfix[i] >= 48 && postfix[i] <= 57) {
			// any value minus 48 = its number
			// e.g ASCII 52(4 num) - 48(0 num) = 4 num
			stk.Push(postfix[i] - '0');
		}
		else {
			// pop 2 operands and perform operation
			stk.Pop(operand2);
			stk.Pop(operand1);
			// case for each operator
			switch (postfix[i]) {
			case '+':
				result = operand1 + operand2;
				break;
			case '-':
				result = operand1 - operand2;
				break;
			case '*':
				result = operand1 * operand2;
				break;
			case '/':
				result = operand1 / operand2;
				break;
			case '^':
				result = operand1 ^ operand2;
				break;
			}
			stk.Push(result);
		}
	}
	stk.Pop(result);
	return result;
}