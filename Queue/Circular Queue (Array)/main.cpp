#include "CircularQueue.cpp"

int main() {
    circularQ<int> myCircle(5);
    myCircle.EnQueue(10);
    myCircle.EnQueue(20);
    myCircle.EnQueue(30);
    myCircle.EnQueue(40);

    int x = 0;
    myCircle.DeQueue(x);
    myCircle.DeQueue(x);
    myCircle.DeQueue(x);

    myCircle.EnQueue(50);
    myCircle.EnQueue(60);
    myCircle.EnQueue(70);

    myCircle.Display();
    return 0;
}