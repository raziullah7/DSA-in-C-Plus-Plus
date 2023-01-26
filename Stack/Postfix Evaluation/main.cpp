#include "PostfixResult.cpp"

int main() {
	char postfix[20]{};

	cout << "Enter Postfix Expression : ";
	cin >> postfix;

	int result = PostfixResult(postfix);

	cout << result;

	return 0;
}