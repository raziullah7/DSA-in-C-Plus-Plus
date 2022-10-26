#include "Implementations.cpp"

int main() {
    Chain<int> myChain;
    myChain.Insert(1, 10);
    myChain.Insert(2, 20);
    myChain.Insert(3, 30);
    myChain.Insert(4, 40);
    myChain.Insert(5, 50);
    myChain.Insert(3, 619);

    myChain.Display();
    return 0;
}