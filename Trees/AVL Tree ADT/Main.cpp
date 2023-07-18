#include "AVL.cpp"

int main()
{
    AVL treeLL;
    treeLL.root = treeLL.Insert(treeLL.GetRoot(), 50);
    treeLL.root = treeLL.Insert(treeLL.GetRoot(), 40);
    treeLL.root = treeLL.Insert(treeLL.GetRoot(), 20);

    treeLL.InOrder();

    return 0;
}