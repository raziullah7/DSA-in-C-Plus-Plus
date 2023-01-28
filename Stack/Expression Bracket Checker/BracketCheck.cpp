#include "../Stack ADT/Implementation.cpp"
#include <cstring>

bool BracketCheck(char* str) {
    // getting string length
    int exp_Len = strlen(str);
    // deeclaring stack and variables
    myStack<int> stk(exp_Len);
    int i = 0, holder = 0;
    // while string does not end
    while (str[i] != '\0') {
        // push, if opening bracket is encountered
        if (str[i] == '(') {
            stk.Push(str[i]);
        }
        // pop, if closing barcket is encountered
        else if (str[i] == ')') {
            if (stk.IsEmpty()) {
                return false;
            }
            stk.Pop(holder);
        }
        // increment index variable
        i++;
    }
    // if stack is empty then all opening brackets
    // have their closing pair in the expression
    if (stk.IsEmpty()) {
        return true;
    }
    return false;
}