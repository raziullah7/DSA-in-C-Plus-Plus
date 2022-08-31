#include <iostream>
#include "Container.h"
using namespace std;


int main() {
    Container<char> myChar('d');
    cout << myChar.changeCase() << endl;

    Container<int> myInt(12);
    cout << myInt.increase() << endl;

    Container<float> myFloat(68.69);
    cout << myFloat.increase() << endl;
}