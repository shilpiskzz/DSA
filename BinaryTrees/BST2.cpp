#include <iostream>
using namespace std;
#include "BinaryTree.h"
#include <vector>
#include <queue>

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int val;
    cin >> val;
    vector<int> res;
    bool ans = find(root, val, res);

    if (ans == true)
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i];
            cout << endl;
        }
    }
    else
    {
        cout << "does not exist" << endl;
    }
    delete root;
}

bool find(BinaryTreeNode<int> *root, int key, vector<int> &res)
{
    if (root == nullptr)
    {
        return false;
    }
}

vector<int> *getPath(BinaryTreeNode<int> *root, int data)
{
    // Base case: if root is null, return nullptr
    if (root == nullptr)
    {
        return nullptr;
    }

    // If the current node contains the data
    if (root->data == data)
    {
        vector<int> *path = new vector<int>();
        path->push_back(root->data);
        return path;
    }

    // Recursively check in the left subtree
    if (data < root->data)
    {
        vector<int> *leftPath = getPath(root->left, data);
        if (leftPath != nullptr)
        {
            leftPath->push_back(root->data); // Add current node to the path
            return leftPath;
        }
    }

    // Recursively check in the right subtree
    if (data > root->data)
    {
        vector<int> *rightPath = getPath(root->right, data);
        if (rightPath != nullptr)
        {
            rightPath->push_back(root->data); // Add current node to the path
            return rightPath;
        }
    }

    // If data is not found, return nullptr
    return nullptr;
}

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }

    return root;
}