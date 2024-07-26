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

    void add(int element)
    {

        if (nextindex == capacity)
        {
            int *arraynew = new int[2 * capacity];
            for (int i = 0; i < nextindex; i++)
            {
                arraynew[i] = array[i];
            }
            delete[] array;
            array = arraynew;
            capacity *= 2;
        }

        array[nextindex] = element;
        nextindex++;
    }

    void add(int index, int element)
    {
        if (index < nextindex)
        {
            array[index] = element;
        }
        if (index == nextindex)
        {
            add(element);
        }
        return;
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
            cout << array[i];
            return array[i];
        }
        else
        {
            return -1;
        }
    }
};