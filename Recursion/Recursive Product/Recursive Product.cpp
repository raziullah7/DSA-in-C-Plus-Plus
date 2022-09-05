// Recursive Product.cpp : This file contains the 'main' function.
// Program execution begins and ends there.
//

#include <iostream>

int Product(int val1, int val2) {
    if (val1 == 0 || val2 == 0) return 0;
    // we can also comment the two lines below, it will simply reduce 1 extra call
    // with val2 = 0 but the answer remains the same
    else if (val1 == 1) return val2;
    else if (val2 == 1) return val1;

    else return Product(val1, val2 - 1) + val1;
}

int main()
{
    std::cout << Product(5, 5);
}
