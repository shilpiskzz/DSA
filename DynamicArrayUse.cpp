#include <iostream>
using namespace std;

class DynamicArray
{
    int *array;
    int nextindex;
    int capacity;

public:
    // creatiing our own default constructor
    DynamicArray()
    {
        array = new int[5];
        capacity = 5;
        nextindex = 0;
    }

    // cpy constructor for deep copy
    DynamicArray(DynamicArray const &d)
    {
        this->capacity = d.capacity;
        this->nextindex = d.nextindex;

        this->array = new int[d.capacity];
        for (int i = 0; i < nextindex; i++)
        {
            this->array[i] = d.array[i];
        }
    }

    void operator=(DynamicArray const &d)
    {
        this->capacity = d.capacity;
        this->nextindex = d.nextindex;

        this->array = new int[d.capacity];
        for (int i = 0; i < nextindex; i++)
        {
            this->array[i] = d.array[i];
        }
    }

    void print()
    {
        for (int i = 0; i < nextindex; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }

    int get(int i)
    {
        if (i < nextindex)
        {
            return array[i];
        }
        else
        {
            return -1;
        }
    }
};