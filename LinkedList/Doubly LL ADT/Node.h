#pragma once

template<class T>
class Node {
public:
    T data;
    Node<T>* lptr;
    Node<T>* rptr;
};