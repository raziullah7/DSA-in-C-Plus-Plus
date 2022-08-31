#include <iostream>
#include "MyPair.h"
using namespace std;

int main()
{
    MyPair<int> somePair;
    cout << somePair.getMax(3, 79) << endl;

    MyPair<float> anotherPair;
    cout << somePair.getMax(3.29, 3.79) << endl;

    return 1;
}
