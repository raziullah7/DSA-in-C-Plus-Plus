// function to assign precedence to operator/operands
// helper function for the infix to postfix convertor

int precedence(char item) {
	// precedence of operators
	if (item == '+' || item == '-')
		return 1;
	else if (item == '*' || item == '/')
		return 2;
	else if (item == '#')
		return 0;
	// operands have the highest precedence
	else
		return 3;
}