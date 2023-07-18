#include <iostream>
#include "Node.cpp"
using namespace std;

class AVL
{
private:
    Node* root;

public:
    int NodeHeight(Node* p);
    int BalanceFactor(Node* p);
    Node* LLRotation(Node* p);
    Node* RRRotation(Node* p);
    Node* LRRotation(Node* p);
    Node* RLRotation(Node* p);
    // passing the address of the root along with the new data key
    Node* Insert(Node* p, int key);
    void InOrder(Node* p);
    void InOrder();
    Node* GetRoot();
};

void AVL::InOrder() {
    InOrder(root);
}

Node* AVL::GetRoot() {
    return root;
}

// gets the Height of the passed node
int AVL::NodeHeight(Node* p)
{
    int hl, hr;
    hl = (p != NULL && p->lChild != NULL) ? p->lChild->height : 0;
    hr = (p != NULL && p->rChild != NULL) ? p->rChild->height : 0;
    return (hl < hr) ? hr + 1 : hl + 1;
}

// gets the Balance Factor of the passed node
int AVL::BalanceFactor(Node* p)
{
    int hl, hr;
    hl = (p != NULL && p->lChild != NULL) ? p->lChild->height : 0;
    hr = (p != NULL && p->rChild != NULL) ? p->rChild->height : 0;
    return hl - hr;
}