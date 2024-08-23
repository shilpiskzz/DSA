#include <iostream>
using namespace std;
#include <climits>
class StackUsingArray
{
    // array where we are storing the data
    // dynamicllay created array , as we have to take the size from the user
    int *data;
    // as we cannot use the size given in constructor , as its scope is specific
    int capacity;
    // stores the index of current element
    int nextIndex;

public:
    StackUsingArray(int totalSize)
    {
        data = new int[totalSize];
        capacity = totalSize;
        nextIndex = 0;
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void push(int element)
    {
        if (nextIndex == capacity)
        {
            cout << "stack is full" << end;
            return;
        }
        data[nextIndex] == element;
        nextIndex++;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        data[nextIndex];
    }

    int top()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return;
        }
        return data[nextIndex - 1];
    }
};
