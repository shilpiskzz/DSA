#include <iostream>
using namespace std;
#include "treeNode.h"

int main()
{
    TreeNode<int> *rootNode = new TreeNode<int>(10); // this is not a vector , yeh ek treenode type ka object hai
    TreeNode<int> *node1 = new TreeNode<int>(2);
    TreeNode<int> *node2 = new TreeNode<int>(3);

    rootNode->children.push_back(node1);
    rootNode->children.push_back(node2);
}