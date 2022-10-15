#include <iostream>
using namespace std;

template <class T>
class IterativeBinarySearch {
private:
    T* Arr;
    int n;

public:
    IterativeBinarySearch(int size) {
        Arr = new T[size];
        cout << "Enter " << size << " Elements : ";
        for (int i = 0; i < size; i++)
            cin >> Arr[i];
        n = size;
    }

    int BinarySearch(int low, int high, T key) {
        while (low <= high) {
            int mid = (low + high) / 2;
            if (key == Arr[mid])
                return mid;
            else if (key > Arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        
    }
};

int main() {
    cout << "Hello World!\n";
}