#include "Node.cpp"

template <class T>
class Chain {
private:
	Node<T>* first, * last;
	int len;

public:
	Chain();
	~Chain();
	void Insert(int, T);
	void Delete(int, T&);
	bool Find(int, T&);
	int Search(T);
	void Display();
	int Length();
	bool IsEmpty();
	// bool IsFull();  (not relevent)
	void Concat(Chain<T>*, Chain<T>*);
};