#include "QueueADT.cpp"

int main() {
    Queue<char> myQ(10);
    myQ.EnQueue('A');
    myQ.EnQueue('B');
    myQ.EnQueue('C');
    myQ.EnQueue('D');
    myQ.EnQueue('E');

    myQ.Display();

    return 0;
}