#include "Implementations.cpp"

int main() {
    Chain<int> myChain1;
    myChain1.Insert(1, 10);
    myChain1.Insert(2, 20);
    myChain1.Insert(3, 30);
    myChain1.Insert(4, 40);
    // myChain1.Insert(5, 50);
    // myChain1.Insert(3, 619);
    myChain1.Display();

    int node = 619;
    /*myChain1.Delete(3, node);
    cout << "Deleted Value : " << node << "\n";*/

    // myChain1.Display();

    int x;
    cout << "Element Found : " << myChain1.Find(2, x) << endl;

    cout << "Position of 619 is : " << myChain1.Search(619) << endl;

    Chain<int> myChain2;
    myChain2.Insert(1, 60);
    myChain2.Insert(2, 70);
    myChain2.Insert(3, 80);
    myChain2.Insert(4, 90);
    myChain2.Display();

    myChain1.Concat(&myChain1, &myChain2);

    return 0;
}