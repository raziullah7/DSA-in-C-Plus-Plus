// circular singly linkedlist

#include "CLL.cpp"

int main() {
    CLL<int> myCLL;
    myCLL.Insert(1, 10);
    myCLL.Insert(2, 20);
    myCLL.Insert(3, 30);
    myCLL.Insert(4, 40);

    myCLL.Display();

    int x = 0;
    myCLL.Delete(4, x);

    myCLL.Display();
}