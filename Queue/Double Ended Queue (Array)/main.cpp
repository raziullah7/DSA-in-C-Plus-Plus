#include "DeQueue.cpp"

int main() {
    DeQueue<int> D(20);
    D.InsertFront(10);
    cout << "\n Front = " << D.getFront();
    cout << "\n Rear  = " << D.getRear();
    D.InsertRear(20);
    cout << "\n Front = " << D.getFront();
    cout << "\n Rear  = " << D.getRear();
    D.InsertFront(30);
    cout << "\n Front = " << D.getFront();
    cout << "\n Rear  = " << D.getRear();
    D.InsertRear(40);
    cout << "\n Front = " << D.getFront();
    cout << "\n Rear  = " << D.getRear();
    D.InsertFront(50);
    cout << "\n Front = " << D.getFront();
    cout << "\n Rear  = " << D.getRear();
    cout << endl;
}