/*
here we are you array only , but we don't have to specify size , as in the code array double its size itself , usiing dynamic allocation concept
*/
#include <iostream>
using namespace std;
#include <climits>
template <typename T>
class stackUsingDynamic
{
    T *data;
    int capacity;
    int nextIndex;

public:
    stackUsingDynamic()
    {
        nextIndex = 0;
        capacity = 4;
        data = new T[4];
    }

    int size()
    {
        return nextIndex;
    }

    bool isEmpty()
    {
        return nextIndex == 0;
    }

    void push(T element)
    {
        if (nextIndex == capacity)
        {
            T *newData = new T[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            delete[] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
            ;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top()
    {
        if (isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        return data[nextIndex - 1];
    }
};