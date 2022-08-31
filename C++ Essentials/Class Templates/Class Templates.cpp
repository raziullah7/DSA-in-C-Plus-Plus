#include <iostream>
#include "MyPair.h"
using namespace std;

int main()
{
    MyPair<int> somePair(3, 79);
    cout << somePair.getMax() << endl;

    MyPair<float> anotherPair(3.29, 3.79);
    cout << anotherPair.getMax() << endl;

    return 1;
}
