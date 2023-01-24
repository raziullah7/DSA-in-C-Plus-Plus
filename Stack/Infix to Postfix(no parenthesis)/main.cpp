#include "InfixToPostfix.cpp"

int main() {
	char infix[30]{};
	// getting infix expression
	cout << "Enter Infix Arithmetic Expression : ";
	cin >> infix;
	// getting length of expression
	int exp_len = strlen(infix);
	// adding essentials
	infix[exp_len] = '#';
	infix[exp_len + 1] = '\0';
	// sending it as argument to the function
	InfixToPostfix(infix);

	return 0;
}