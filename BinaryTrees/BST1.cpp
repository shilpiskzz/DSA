#include "BinaryTree.h"
#include <iostream>
using namespace std;

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

void inorder(BinaryTreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

BinaryTreeNode<int> *deletion(BinaryTreeNode<int> *node, int value)
{
    if (node == nullptr)
    {
        return node;
    }

    if (node->data < value)
    {
        BinaryTreeNode<int> *temp = deletion(node->right, value);
        node->right = temp;
        return node;
    }
    else if (node->data > value)
    {
        BinaryTreeNode<int> *temp = deletion(node->left, value);
        node->left = temp;
        return node;
    }

    // till here we will get the node that we have to delete and we'll have to work on the further parts
    // so now we have to delete the node and manage its left and right connections

    if (node->left == NULL)
    {
        BinaryTreeNode<int> *temp = node->right;
        delete node;
        return temp;
    }
    else if (node->right == NULL)
    {
        BinaryTreeNode<int> *temp = node->left;
        delete node;
        return temp;
    }
    else
    {
        BinaryTreeNode<int> *s = node->right;
        BinaryTreeNode<int> *sp = node;

        while (s->left != NULL)
        {
            sp = s;
            s = s->left;
        }

        if (sp == node)
        {
            sp->right = s->right;
        }
        else
        {
            sp->left = s->right;
        }

        node->data = s->data;
        delete s;
        return node;
    }
}

bool searchInBST(BinaryTreeNode<int> *root, int k)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->data == k)
    {
        return true;
    }
    if (k < root->data)
    {
        return searchInBST(root->left, k);
    }
    else
    {
        return searchInBST(root->right, k);
    }
}
