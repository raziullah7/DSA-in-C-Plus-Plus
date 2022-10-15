#include <iostream>
using namespace std;

template <class T>
class RecursiveBinarySearch {
private:
    T* Arr;
    int n;
    void Display(int value) {
        if (value == -1)
            cout << "Key Not Found\n";
        else
            cout << "Key Found on Index " << value << endl;
    }

public:
    RecursiveBinarySearch(int size) {
        Arr = new T[size];
        cout << "Enter " << size << " Elements : ";
        for (int i = 0; i < size; i++)
            cin >> Arr[i];
        n = size;
    }

    int BinarySearch(int low, int high, T key) {
        if (low <= high) {
            int mid = (low + high) / 2;
            if (key == Arr[mid]) {
                Display(mid);
                return mid;
            }
            else if (key > Arr[mid]) {
                return BinarySearch(mid + 1, high, key);
            }
            else
                return BinarySearch(low, mid - 1, key);
        }
        Display(-1);
        return -1;
    }
};

int main() {
    int size = 7, low = 0, high = size - 1, key;
    RecursiveBinarySearch<int> mySearch(size);
    cout << "Enter Key to be Searched : ";
    cin >> key;
    mySearch.BinarySearch(low, high, key);

    return 0;
}