// find the biggest binary search tree in a BINARY TREE

#include <iostream>
using namespace std;
#include "BinaryTree.h"
#include <vector>
#include <queue>
#include <climits>

vector<int> FindHeight(BinaryTreeNode<int> *root)
{
    if (root = nullptr)
    {
        return {INT_MAX, INT_MIN, 0};
    }

    vector<int> L = FindHeight(root->left);
    vector<int> R = FindHeight(root->right);

    vector<int> result;

    // valid condition : root->data > L[1] && root->data < R[0]
    if (root->data > L[1] && root->data < R[0])
    {
        result[0] = min(root->data, min(L[0], R[0]));
        result[1] = max(root->data, max(L[1], R[1]));
        result[2] = max(L[2], R[2]) + 1;
        return result;
    }

    // invalid condition

    result[0] = INT_MIN;
    result[1] = INT_MAX;
    result[2] = max(L[2], R[2]);
    return result;
}

int main()
{
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(8);
    BinaryTreeNode<int> *root1 = new BinaryTreeNode<int>(3);
    BinaryTreeNode<int> *root2 = new BinaryTreeNode<int>(10);
    root->right = root2;
    root->left = root1;

    BinaryTreeNode<int> *root3 = new BinaryTreeNode<int>(4);
    BinaryTreeNode<int> *root4 = new BinaryTreeNode<int>(6);
    root1->right = root4;
    root1->left = root3;

    BinaryTreeNode<int> *root5 = new BinaryTreeNode<int>(14);
    root2->right = root5;

    BinaryTreeNode<int> *root6 = new BinaryTreeNode<int>(5);
    BinaryTreeNode<int> *root7 = new BinaryTreeNode<int>(7);
    root4->right = root7;
    root4->left = root6;

    BinaryTreeNode<int> *root8 = new BinaryTreeNode<int>(13);
    root5->left = root8;

    cout << FindHeight(root)[2];
    // why this [2] beacuse
    //  FindHeigth(root) will return a vector
    // now we want height of that vector which is at index 2 i.e second position
}
