#include <iostream>
using namespace std;
template <typename T>

class Node
{
public:
    T data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack
{
    Node<T> *head;
    int size;

public:
    // we will make a constructor, where we will initialise our data members
    Stack()
    {
    }

    int getSize()
    {
        return size;
    }
    bool isEmpty()
    {
        return head == NULL;
    }

    void push(int element)
    {
    }

    int pop()
    {
        return head->data;
    }

    int top()
    {
    }
};
