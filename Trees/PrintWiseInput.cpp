#include <iostream>
using namespace std;
#include "treeNode.h"
#include <queue>

void printLevelWiseTree(TreeNode<int> *root)
{
    if (root == nullptr)
    {
        return;
    }

    queue<TreeNode<int> *> pendingNodesQueue;
    pendingNodesQueue.push(root);

    while (!pendingNodesQueue.empty())
    {
        TreeNode<int> *front = pendingNodesQueue.front();
        pendingNodesQueue.pop();

        cout << front->data << ":";

        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i] << " , ";
            pendingNodesQueue.push(front->children[i]);
        }

        cout << endl;
    }
}

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "enter the root data :" << endl;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodesQueue;
    pendingNodesQueue.push(root);

    while (pendingNodesQueue.size() != 0)
    {
        TreeNode<int> *front = pendingNodesQueue.front();
        pendingNodesQueue.pop();

        cout << "enter number of children of" << front->data << endl;
        int numchild;
        cin >> numchild;

        for (int i = 0; i < numchild; i++)
        {
            cout << "enter the " << i << "th child of " << front->data << endl;
            int childData;
            cin >> childData;

            TreeNode<int> *Child = new TreeNode<int>(childData);
            front->children.push_back(Child);
            pendingNodesQueue.push(Child);
        }
    }
    return root;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printLevelWiseTree(root);
}