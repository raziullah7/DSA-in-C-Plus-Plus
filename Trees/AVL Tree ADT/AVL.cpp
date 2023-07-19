#include <iostream>
#include "Node.cpp"
using namespace std;

class AVL
{
public:
    Node* root;

    AVL();
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

// constructor
AVL::AVL()
{
    root = NULL;
}

// InOrder traversal shortcut
void AVL::InOrder()
{
    InOrder(root);
}

// InOrder traversal implemented
void AVL::InOrder(Node* p)
{
    if (p)
    {
        InOrder(p->lChild);
        cout << p->data << " ";
        InOrder(p->rChild);
    }
}

// getter for root
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
        q->lChild = NULL;
        q->rChild = NULL;
        // using 1 based height for simplicity
        q->height = 1;
        return q;
    }
    // if key is greater than root->data
    if (key > p->data)
        p->rChild = Insert(p->rChild, key);
    else if (key < p->data) 
        p->lChild = Insert(p->lChild, key);
    
    // as the key was not NULL, we need to find height
    p->height = NodeHeight(p);

    // check the case of LLRotation
    if (BalanceFactor(p) == 2 && BalanceFactor(p->lChild) == 1)
    {
        return LLRotation(p);
    }
    // check the case of LLRotation
    else if (BalanceFactor(p) == -2 && BalanceFactor(p->rChild) == -1)
    {
        return RRRotation(p);
    }
    // check the case of LRRotation
    else if (BalanceFactor(p) == 2 && BalanceFactor(p->lChild) == -1)
    {
        return LRRotation(p);
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

    // re-evaluate height of p
    p->height = NodeHeight(p);
    //re-evaluate height of pl
    pl->height = NodeHeight(pl);

    // the passed node p may be the root of the entire tree
    if (root == p)
    {
        root = pl;
    }

    // return the address of new root
    return pl;
}

Node* AVL::RRRotation(Node* p)
{
    // pr is right child of p
    Node* pr = p->rChild;
    // prl is the left child of pr
    Node* prl = pr->lChild;

    // performing rotation (pr becomes new root element)
    pr->lChild = p;
    // left child of pr becomes right child of p
    p->rChild = prl;

    // re-evaluate height of p
    p->height = NodeHeight(p);
    //re-evaluate height of pr
    pr->height = NodeHeight(pr);

    // in case the p is the root of the tree
    if (root == p)
    {
        root = pr;
    }

    // return the address of new root
    return pr;
}

Node* AVL::LRRotation(Node* p)
{
    // pl is left child of p
    Node* pl = p->lChild;
    // plr is the right child of pl
    Node* plr = pl->rChild;

    // performing 1st rotation (re-assigning plr's children)
    // left child of plr becomes right child of pl
    pl->rChild = plr->lChild;
    // right child of plr becomes left child of p
    p->lChild = plr->rChild;

    // performing 2nd rotation (plr becomes new root element)
    plr->rChild = p;
    // pl becomes the left child of plr
    plr->lChild = pl;

    // re-evaluate height of p
    p->height = NodeHeight(p);
    //re-evaluate height of pl
    pl->height = NodeHeight(pl);
    //re-evaluate height of plr
    plr->height = NodeHeight(plr);

    // the passed node p may be the root of the entire tree
    if (root == p)
    {
        root = plr;
    }

    // return the address of new root
    return plr;
}