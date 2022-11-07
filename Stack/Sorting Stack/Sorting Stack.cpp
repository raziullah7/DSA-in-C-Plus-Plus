#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> input, tempSt;
    input.push(23);     //      | 69 |  |   |
    input.push(3);      //      | 45 |  |   |
    input.push(12);     //      | 92 |  |   |
    input.push(92);     //      | 12 |  |   |
    input.push(45);     //      | 3  |  |   |
    input.push(69);     //      | 23 |  |   |
                        //      ``````  `````
    
    while (!input.empty()) {
        int temp = input.top();
        input.pop();
        
        while (!tempSt.empty() && tempSt.top() < temp) {
            input.push(tempSt.top());
            tempSt.pop();
        }

        tempSt.push(temp);
    }
    
    while (!tempSt.empty()) {
        cout << tempSt.top() << " ";
        tempSt.pop();
    }
    cout << endl;

    return 0;
}