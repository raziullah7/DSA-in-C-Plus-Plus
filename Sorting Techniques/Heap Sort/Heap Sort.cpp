// Heap Sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>

// declaring and defining the Max Heap class
template<class T>
class MaxHeap
{
private:
	T* arr;
	int n;
public:
	MaxHeap(int size);
	void Display();
	void Insert(int size);
	void DelMax(int size, T& x);
	void Adjust(int i, int n);
	void Sort();
	
};

// making constructor
// leaving 0 index empty in array
template<class T>
MaxHeap<T>::MaxHeap(int size)
{
	if (size < 0)
		throw " size must be greater than zero";
	n = size;
	arr = new T[n + 1];
	for (int i = 1; i <= n; i++)
	{
		cout << "\n Enter the element " << i << "\n";
		cin >> arr[i];
	}
}

// making display method
template<class T>
void MaxHeap<T>::Display()
{
	cout << "\nThe array elements are...\n";
	for (int i = 1;i <= n;i++)
		cout << arr[i] << "\t";
}

// making insert method
template<class T>
void MaxHeap<T>::Insert(int size)
{
	// starting from the last index(where the new item is to be inserted)
	// and travering upwards from child to parent (instead of traversing all)
	int i = size;
	// storing new item
	T item = arr[size];
	// needs to re-enact if the newly inserted item(arr[size])
	// is greater than it's parent(arr[i / 2])
	while ((i > 1) && (item > arr[i / 2]))
	{
		arr[i] = arr[i / 2];
		// changing value of i to ABS(i/2)
		i = i / 2;
	}
	// assigning item to complete the exchange between parent and child
	arr[i] = item;
}

// making DelMax method
// deletes the maximum item in the heap,
// which should delete the root in a max-heap evertime
template<class T>
void MaxHeap<T>::DelMax(int size, T& delItem)
{
	// checking if heap is empty
	if (size == 0)
	{
		cout << "Heap is Empty!" << endl;
		return;
	}
	delItem = arr[1];
	arr[1] = arr[size];
	Adjust(1, size - 1);
}

// making Adjust method
// 
template<class T>
void MaxHeap<T>::Adjust(int i, int size)
{
	// storing left child's index in j
	int j = 2 * i;
	// getting element
	T item = arr[i];
	
	while (j < size)
	{
		// checking if right child is greater than left child
		// if yes, changing j to get right child's index
		if ((j < size) && (arr[j] < arr[j + 1]))
		{
			j += 1;
		}
		// comparing item with it's parent(i.e, arr[j]), if item is
		// greater than or equal to it's parent(arr[j])
		if (item >= arr[j])
		{
			break;
		}
		// storing arr[j] in it's parent
		arr[j / 2] = arr[j];
		// making j index point to its left child's index
		j = 2 * j;
	}
}

// making Sort method
template<class T>
void MaxHeap<T>::Sort()
{
	T delItem;
	// start inserting from the start
	for (int i = 1; i <= n; i++) 
	{
		Insert(i);
	}
	// start deleting and adjusting from the end
	for (int i = n; i >= 1; i--)
	{
		DelMax(i, delItem);
		cout << "\nValue of Deleted Item is : " << delItem << "\n";
		arr[i] = delItem;
	}
}




int main()
{
	try
	{
		MaxHeap<int> m(5);
		cout << "\nBefore Sorting...\n";
		m.Display();
		m.Sort();
		cout << "\nAfter Sorting...\n";
		m.Display();
	}
	catch (char* c)
	{
		cout << c;
	}
}