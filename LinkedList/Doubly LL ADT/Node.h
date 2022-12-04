#pragma once

template<class T>
class Node {
public:
    T Data;
    Node<T>* lptr;
    Node<T>* rptr;
};