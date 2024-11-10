#include <iostream>
using namespace std;
#include "treeNode.h"
#include <queue>

// COUNT NUMBER OF NODES
int NumNodes(TreeNode<int> *root)
{
    int ans = 1;
    for (int i = 0; i < root->children.size(); i++)
    {
        ans += NumNodes(root->children[i]);
    }
    return ans;
}

// HEIGHT OF THE TREE

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
            // front ke children ka data print karna hai , don't forget the data part
            // bacusse its like linked list only , data and address hai and we have to print the data
            cout << front->children[i]->data;
            if (i != front->children.size() - 1)
            {
                cout << ",";
            }
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