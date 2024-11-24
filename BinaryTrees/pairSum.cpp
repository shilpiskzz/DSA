#include <iostream>
using namespace std;
#include "BinaryTree.h"
#include <vector>
#include <queue>

bool find(BinaryTreeNode<int> *root, int key)
{
    if (root == nullptr)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }

    if (root->data < key)
    {
        return find(root->right, key);
    }
    else
    {
        return find(root->left, key);
    }
}

BinaryTreeNode<int> *insert(BinaryTreeNode<int> *root, int value)
{
    if (root == nullptr)
    {
        return new BinaryTreeNode<int>(value);
    }

    if (root->data < value)
    {
        BinaryTreeNode<int> *temp = insert(root->right, value);
        root->right = temp;
    }
    else
    {
        BinaryTreeNode<int> *temp = insert(root->left, value);
        root->left = temp;
    }
    return root;
}

int main()
{

    BinaryTreeNode<int> *root = NULL;
    cout << "enter the number of nodes:";
    int n;
    cin >> n;
    cout << endl;

    cout << "enter the valulses od binary tree:";
    int val;
    while (n--)
    {
        cin >> val;
        root = insert(root, val);
    }

    int key;
    cout << "enter the sum:";
    cin >> key;
    cout << endl;

    for (int i = 1; i < (key + 1) / 2; i++)
    {
        if (find(root, i) && find(root, key - i))
        {
            cout << i << " , " << key - i << endl;
        }
    }
}
// 9 6 11 4 8 10 12 1 5 7 2