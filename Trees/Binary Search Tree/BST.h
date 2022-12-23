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
    Node* Delete(Node* p, int key);
    Node* InOrderPred(Node* p);
    Node* InOrderSucc(Node* p);
    int Height(Node* p);
};

