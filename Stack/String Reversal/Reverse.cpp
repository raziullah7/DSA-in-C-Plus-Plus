#include <iostream>
#include <stack>
using namespace std;

void charReverse(string str) {
	stack<char> stk;
	// pushing string in stack
	for (int i = 0; str[i] != '\0'; i++) {
		stk.push(str[i]);
	}
	// storing reverse string in newStr
	string newStr = "";
	for (int i = 0; !(stk.empty()); i++) {
		newStr += stk.top();
		stk.pop();
	}
	// output result
	cout << newStr;
}

void wordReverse(string str) {
	stack<string> stk;
	for (int i = 0; i < str.length(); i++) {
		string word = "";
		while (str[i] != ' ' && i < str.length()) {
			word += str[i];
			i++;
		}
		stk.push(word);
	}
	// storing reverse string in newStr
	string newStr = "";
	for (int i = 0; !(stk.empty()); i++) {
		newStr += stk.top();
		stk.pop();
	}
	// output result
	cout << newStr;
}