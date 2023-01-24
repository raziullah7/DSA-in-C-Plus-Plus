// function to assign precedence to operator/operands
// helper function for the infix to postfix convertor

// incoming priority
// checks priority of incoming character
// from the infix expression
int icp(char item) {
	switch (item) {
	case '^': return 1;
	case '/': return 2;
	case '*': return 2;
	case '-': return 3;
	case '+': return 3;
	case '(': return 0;	// different
	case '#': return 8;
	default : return 8;
	}
}

// in-stack priority
// checks priority of items present
// inside the stack
int isp(char item) {
	switch (item) {
	case '^': return 1;
	case '/': return 2;
	case '*': return 2;
	case '-': return 3;
	case '+': return 3;
	case '(': return 8; // different
	case '#': return 8;
	default : return 8;
	}
}