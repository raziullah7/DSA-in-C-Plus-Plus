#include "InfixToPostfix.cpp"

int main() {
	char infix[30]{};
	// getting infix expression
	cout << "Enter Infix Arithmetic Expression : ";
	cin >> infix;
	// getting length of expression
	int exp_len = strlen(infix);
	// adding # as end point for loops
	infix[exp_len] = '#';
	// sending it as argument to the function
	InfixToPostfix(infix);

	return 0;
}