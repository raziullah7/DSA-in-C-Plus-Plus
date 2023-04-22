/// Bin Sort
#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

int getMax(int A[], int n)
{
    int max = -32768;
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void Insert(Node** ptrBins, int idx)
{
    Node* temp = new Node;
    temp->value = idx;
    temp->next = nullptr;

    if (ptrBins[idx] == nullptr)
    {
        ptrBins[idx] = temp;
    }
    else
    {
        Node* p = ptrBins[idx];
        while (p->next != nullptr)
        {
            p = p->next;
        }
        p->next = temp;
    }
}

int Delete(Node** ptrBins, int idx)
{
    Node* p = ptrBins[idx];
    ptrBins[idx] = ptrBins[idx]->next;
    int x = p->value;
    delete p;
    return x;
}

void BinSort(int A[], int n)
{
    int max = getMax(A, n);
    Node** bins = new Node * [max + 1];

    for (int i = 0; i < max + 1; i++) {
        bins[i] = nullptr;
    }

    for (int i = 0; i < n; i++) {
        Insert(bins, A[i]);
    }
    int i = 0, j = 0;
    while (i < max + 1)
    {
        while (bins[i] != nullptr)
        {
            A[j++] = Delete(bins, i);
        }
        i++;
    }
    delete[] bins;
}

void Display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "  ";
    }
}



int main() {

    int A[] = { 21, 1, 130, 42, 8, 61, 7, 10 };
    cout << "\nBefore calling Bin Sort....\n";
    Display(A, 8);
    BinSort(A, 8);
    cout << "\nAfter Sorting....\n";
    Display(A, 8);

    return 0;
}
