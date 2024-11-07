#include <iostream>
using namespace std;
#include "treeNode.h"
#include <queue>

void printTree(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }
    cout << endl;

    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
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
    printTree(root);
}