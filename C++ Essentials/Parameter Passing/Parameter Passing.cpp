
#include <iostream>
using namespace std;

// pass by value
void swap(int var1, int var2) {
    int swapper = var1;
    var1 = var2;
    var2 = swapper;
}

// pass by adderess
// var1 and var2 are pointer parameters
void swap(int *var1, int *var2) {
    // var1 and var2 are storing the addresses of int1 and int2
    int swapper = *var1;
    *var1 = *var2;
    *var2 = swapper;
}

/* nvm, it's an ambigious function call with "Pass by Value"
// pass by adderess
// var1 and var2 are reference parameters
// or simply called "Aliasing"
void swap(int &var1, int &var2) {
    // var1 and var2 are pointing towards the addresses of int1 and int2
    int swapper = var1;
    var1 = var2;
    var2 = swapper;
}
*/


int main()
{
    int int1 = 12, int2 = 27;
    cout << "Value1: " << int1 << "\t" << "Value2: " << int2 << endl;

    // pass by value
    cout << "\nPass By Value Call\n";
    swap(int1, int2);
    cout << "Value1: " << int1 << "\t" << "Value2: " << int2 << endl;

    // pass by adderess
    cout << "\nPass By Adderess Call\n";
    swap(&int1, &int2);
    cout << "Value1: " << int1 << "\t" << "Value2: " << int2 << endl;

    /* nvm, it's an ambigious function call with "Pass by Value"
    // pass by Reference
    cout << "\nPass By Reference Call\n";
    swap(int1, int2);
    cout << "Value1: " << int1 << "\t" << "Value2: " << int2 << endl;
    */
}
