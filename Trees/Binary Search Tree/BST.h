#pragma once
#include "Node.h"

class BST {
private:
    Node* root;
public:
    BST();
    Node* GetRootElement();
    void Insert(int key);
    void Inorder(Node* p);
    Node* Search(int key);
    Node* RecursiveSearch(int key, Node*);
    Node* Delete(int key, Node* p);
    Node* InOrderPred(Node* p);
    Node* InOrderSucc(Node* p);
    int Height(Node* p);
};
