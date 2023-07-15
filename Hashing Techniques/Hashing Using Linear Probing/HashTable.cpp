#include <iostream>
using namespace std;

class HashTable
{
private:
    int *HT;
    int size;
public:
    HashTable(int size);
    ~HashTable();
    int HashFunction(int key);
    int LinearProbing(int index);
    void Insert(int element);
    int Search(int element);
    void Display();
    int GetSize();
};

HashTable::HashTable(int size)
{
    this->size = size;
    HT = new int [size];
    for (int i = 0; i < size; i++) {
        HT[i] = 0;
    }
}

// constructor
HashTable::~HashTable()
{
    delete [] HT;
}

// destructor
int HashTable::HashFunction(int key)
{
    return key % size;
}

// returns index of the available memory location
int HashTable::LinearProbing(int element)
{
    // gets the valid array index
    int index = HashFunction(element);
    int i = 0;
    // find empty memory location
    while (HT[(index + i) % size] != 0)
    {
        i++;
    }
    // returns empty memory location index
    return (index + i) % size;
}

void HashTable::Insert(int element)
{
    int index = HashFunction(element);
    // if a collision occurs
    if (HT[index] != 0) {
        // perform linear probing
        index = LinearProbing(element);
    }
    // else no collision
    // directly insert element
    HT[index] = element;
}

// returns index of the found element
int HashTable::Search(int element)
{
    int index = HashFunction(element);
    int i = 0;
    while (HT[(index + i) % size] != element)
    {
        i++;
        // if memory location is 0, search is unsuccessful
        if (HT[(index + i) % size] == 0)
            return -1;
    }
    return (index + i) % size;
}

void HashTable::Display()
{
    for (int i = 0; i < size; i++)
    {
        cout << HT[i] << " ";
    }
    cout << endl;
}

int HashTable::GetSize()
{
    return size;
}