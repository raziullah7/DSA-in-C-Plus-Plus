#include "AVL.cpp"

int main()
{
    // AVL treeLL;
    // treeLL.root = treeLL.Insert(treeLL.GetRoot(), 50);
    // treeLL.root = treeLL.Insert(treeLL.GetRoot(), 40);
    // treeLL.root = treeLL.Insert(treeLL.GetRoot(), 20);
    // cout << "\nLL Rotation : ";
    // treeLL.InOrder();

    // AVL treeRR;
    // treeRR.root = treeRR.Insert(treeRR.GetRoot(), 5);
    // treeRR.root = treeRR.Insert(treeRR.GetRoot(), 10);
    // treeRR.root = treeRR.Insert(treeRR.GetRoot(), 20);
    // cout << "\nRR Rotation : ";
    // treeRR.InOrder();

    // AVL treeLR;
    // treeLR.root = treeLR.Insert(treeLR.GetRoot(), 40);
    // treeLR.root = treeLR.Insert(treeLR.GetRoot(), 25);
    // treeLR.root = treeLR.Insert(treeLR.GetRoot(), 30);
    // cout << "\nLR Rotation : ";
    // treeLR.InOrder();

    AVL treeRL;
    treeRL.root = treeRL.Insert(treeRL.GetRoot(), 100);
    treeRL.root = treeRL.Insert(treeRL.GetRoot(), 200);
    treeRL.root = treeRL.Insert(treeRL.GetRoot(), 150);
    cout << "\nRL Rotation : ";
    treeRL.InOrder();

    return 0;
}