#include <iostream>

// using struct
struct Node1 {
    int data;
    struct Node1* link;
};

// using class
class Node2 {
    int data;
    Node2* link;
};

// but class can create a generic node
template <class T>
class Node3 {
    T data;
    Node<T> *link;
};

int main() {
    std::cout << "Hello World!\n";
}