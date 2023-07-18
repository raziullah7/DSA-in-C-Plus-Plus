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

void AVL::InOrder()
{
    InOrder(root);
}

Node* AVL::GetRoot()
{
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

Node* AVL::Insert(Node* p, int key)
{
    Node* q;
    // if there is no root
    if (p == NULL)
    {
        q = new Node;
        q->data = key;
        q->lChild = q->rChild = NULL;
        // using 1 based height for simplicity
        q->height = 1;
    }
    // if key is greater than root->data
    if (key > p->data)
        p->rChild = Insert(p->rChild, key);
    else if (key < p->data) 
        p->lChild = Insert(p->lChild, key);
    
    // as the key was not NULL, we need to find height
    p->height = NodeHeight(p);

    // not to check the case of LLRotation
    if (BalanceFactor(p) == 2 && BalanceFactor(p->lChild) == 1)
    {
        return LLRotation(p);
    }

    // otherwise simply return p
    return p;

}

Node* AVL::LLRotation(Node* p)
{
    // pl is left child of p
    Node* pl = p->lChild;
    // plr is the right child of pl
    Node* plr = pl->rChild;

    // performing rotation (pl becomes new root element)
    pl->rChild = p;
    // right child of pl becomes left child of p
    p->lChild = plr;

    // reevaluate height of p
    p->height = NodeHeight(p);
    //reevaluate height of pl
    pl->height = NodeHeight(pl);

    // the passed node p may be the root of the entire tree
    if (root == p)
    {
        root = pl;
    }

    // return the address of new root
    return pl;

}