#include "Implementations.cpp"
#include "Reverse.cpp"

int main() {
    //Chain<int> myChain1;
    //myChain1.Insert(1, 10);
    //myChain1.Insert(2, 20);
    //myChain1.Insert(3, 30);
    //myChain1.Insert(4, 40);
    //// myChain1.Insert(5, 50);
    //// myChain1.Insert(3, 619);
    //myChain1.Display();

    //// int node = 619;
    ///*myChain1.Delete(3, node);
    //cout << "Deleted Value : " << node << "\n";*/

    //// myChain1.Display();

    //int x;
    //cout << "Element Found : " << myChain1.Find(2, x) << endl;

    //cout << "Position of 619 is : " << myChain1.Search(619) << endl;

    //Chain<int> myChain2;
    //myChain2.Insert(1, 5);
    //myChain2.Insert(2, 15);
    //myChain2.Insert(3, 25);
    //myChain2.Insert(4, 35);
    //myChain2.Display();

    //Chain<int> myChain3;
    //// myChain1.Concat(&myChain1, &myChain2);

    //// myChain3.Merge(myChain1.first, myChain2.first);
    //myChain3.Merge(&myChain1, &myChain2);
    //myChain3.Display();

    //myChain3.Reverse();
    //myChain3.Display();

    Chain<int> myChain3;
    myChain3.Insert(1, 10);
    myChain3.Insert(2, 20);
    myChain3.Insert(3, 30);
    myChain3.Insert(4, 40);
    myChain3.Insert(5, 50);
    //myChain3.RemoveDuplicate();
    myChain3.Display();
    //myChain3.ReverseByPointers();
    //myChain3.Display();

    return 0;
}