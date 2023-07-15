#include "HashTable.cpp"

int main()
{
    HashTable H(10);
    int element;
    
    cout << "\nEnter the " << H.GetSize() << " Elements...\n";
    for (int i = 0; i < H.GetSize(); i++)
    {
        cin >> element;
        H.Insert(element);
    }

    H.Display();

    cout << "\nEnter element to be searched...";
    cin >> element;
    int index = H.Search(element);
    if (index != -1) {
        cout << "Element " << element << " found at index " << index; 
    }
    else {
        cout << "Element Not Found!";
    }

    return 0;
}