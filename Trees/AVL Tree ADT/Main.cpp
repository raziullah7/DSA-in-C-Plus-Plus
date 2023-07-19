#include "AVL.cpp"

int main()
{
    // AVL treeLL;
    // treeLL.root = treeLL.Insert(treeLL.GetRoot(), 50);
    // treeLL.root = treeLL.Insert(treeLL.GetRoot(), 40);
    // treeLL.root = treeLL.Insert(treeLL.GetRoot(), 20);
    // treeLL.InOrder();

    // AVL treeRR;
    // treeRR.root = treeRR.Insert(treeRR.GetRoot(), 5);
    // treeRR.root = treeRR.Insert(treeRR.GetRoot(), 10);
    // treeRR.root = treeRR.Insert(treeRR.GetRoot(), 20);
    // treeRR.InOrder();

    AVL treeLR;
    treeLR.root = treeLR.Insert(treeLR.GetRoot(), 40);
    treeLR.root = treeLR.Insert(treeLR.GetRoot(), 25);
    treeLR.root = treeLR.Insert(treeLR.GetRoot(), 30);
    treeLR.InOrder();

    return 0;
}