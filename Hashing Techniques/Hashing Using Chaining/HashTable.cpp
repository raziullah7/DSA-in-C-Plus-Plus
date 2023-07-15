#include <iostream>
#include "Node.cpp"
using namespace std;

class HashTable
{
public:
    Node ** HT;
    HashTable();
    ~HashTable();
    int HashFunction(int element);
    void Insert(int element);
    int Search(int element);
};

HashTable::HashTable()
{
    HT = new Node* [10];
    for (int i = 0; i < 10; i++) {
        HT[i] = 0;
    }
}

int HashTable::HashFunction(int element)
{
    // where 10 is the size of the array because it's chained instead of probing
    return element % 10;
}

void HashTable::Insert(int element)
{
    // getting insert index
    int index = HashFunction(element);
    // making node
    Node *temp = new Node;
    temp->data = element;
    temp->next = NULL;

    // if there was no element in the array before,
    // insert at that first location
    if (HT[index] == NULL) {
        HT[index] = temp;
    }
    // if there was already a node at the location,
    // chain a new node after that node
    else {
        Node *p, *q = HT[index];
        // either p's data is less than element or
        // p reaches the end of the chain
        while (p != NULL && p->data < element) {
            q = p;
            p = p->next;
        }
        // inserting on first location of the chain
        if (q == HT[index]) {
            temp->next = HT[index];
            HT[index] = temp;
        }
        // if it;s not the first position
        else {
            temp->next = q->next;
            q->next = temp;
        }
    }
}

int HashTable::Search(int element)
{
    int index = HashFunction(element);
    Node *p = HT[index];
    while (p) {
        if (p->data == element) {
            return p->data;
        }
        p = p->next;
    }
    // unsuccessful search
    return -1;
}


HashTable::~HashTable()
{
    for (int i = 0; i < 10; i++) {
        Node *p = HT[i];
        while (HT[i] != NULL)
        {
            HT[i] = HT[i]->next;
            delete p;
            p = HT[i];
        }
    }
    delete HT;
}
