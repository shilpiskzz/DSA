#include <iostream>
using namespace std;
#include "treeNode.h"

void printTree(TreeNode<int> *root)
{

    // edge case (not the base case)
    // base case is the case that comes after completing the recurssion cycle in the end

    if (root == NULL)
    {
        return;
    }

    // this is the base case , this is where the codition comes after the recurssion

    cout << root->data << ":";

    // printing the children of the root node

    for (int i = 0; i < root->children.size(); i++)
    {
        cout << root->children[i]->data << ",";
    }

    cout << endl;

    // printing the further nodes and unke children through recursion

    for (int i = 0; i < root->children.size(); i++)
    {
        printTree(root->children[i]);
    }
}

int main()
{
    TreeNode<int> *rootNode = new TreeNode<int>(10); // this is not a vector , yeh ek treenode type ka object hai
    TreeNode<int> *node1 = new TreeNode<int>(20);
    TreeNode<int> *node2 = new TreeNode<int>(30);

    rootNode->children.push_back(node1);
    rootNode->children.push_back(node2);
    printTree(rootNode);
}