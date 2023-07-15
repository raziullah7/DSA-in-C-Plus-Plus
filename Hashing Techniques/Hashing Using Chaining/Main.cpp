#include "HashTable.cpp"

int main()
{
    // cout << "Hello World!\n";

    int arr[] = {16, 12, 129, 5, 67, 90, 39, 70, 15, 44};
    HashTable H;
    
    for (int i = 0; i < 10; i++) {
        H.Insert(arr[i]);
    }

    int key = 90;
    int value = H.Search(key);

    cout << "Key Value : " << value << endl;

    return 0;
}