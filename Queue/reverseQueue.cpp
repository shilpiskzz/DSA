#include <iostream>
using namespace std;
#include <queue>

void reverseQueue(queue<int> &q)
{
    // Write your code here
    if (q.empty())
    {
        return;
    }

    // Remove the front element
    int front = q.front();
    q.pop();

    // Reverse the remaining queue
    reverseQueue(q);

    // Add the removed element to the back of the queue
    q.push(front);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++)
        {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}
