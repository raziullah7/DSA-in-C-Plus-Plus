// using a stack to sort an array
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> tempSt;
    //stack<int> input;
    //input.push(23);     //      | 69 |  |   |
    //input.push(3);      //      | 45 |  |   |
    //input.push(12);     //      | 92 |  |   |
    //input.push(92);     //      | 12 |  |   |
    //input.push(45);     //      | 3  |  |   |
    //input.push(69);     //      | 23 |  |   |

    int arr[] = {23, 3, 12, 92, 45, 69};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    int i = arrSize - 1;
    while (tempSt.size() != arrSize) {
        int temp = arr[i--];

        while (!tempSt.empty() && tempSt.top() < temp) {
            arr[++i] = tempSt.top();
            tempSt.pop();
        }

        tempSt.push(temp);
    }

    while (!tempSt.empty()) {
        cout << tempSt.top() << " ";
        tempSt.pop();
    }


    /*while (!input.empty()) {
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
    cout << endl;*/

    return 0;
}