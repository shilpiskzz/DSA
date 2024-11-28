#include <vector>
template <typename T>

class PriorityQueue
{

    vector<int> pq;

public:
    // constructore
    PriorityQueue()
    {
        int size = 0;
        int nextIndex = 0;
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int getSize()
    {
        return pq.size;
    }

    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childINdex > 0)
        {

            int parentIndex = (childIndex - 1) / 2;
            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }

            childIndex = parentIndex;
            parentIndex = (childIndex - 1) / 2;
        }
    }
};