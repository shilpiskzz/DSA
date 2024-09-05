template <typename T>
class Node
{

public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Queue
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    Queue()
    {
        size = 0;
        head = NULL;
        tail = NULL;
    }

    int getsize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    T front()
    {
        if (isEmpty())
        {
            return 0;
        }
        return head->data;
    }

    T dequeue()
    {
        if (isEmpty())
        {
            return 0;
        }

        T ans = head->data;
        Node<T> *Temp = head;
        head = head->next;
        delete Temp;
        size--;
        return ans;
        /*  T ans = head->next;
            delete head;
            size--;
            head = ans;
            return head;
this will give us an error as invalid conversion from 'Node<int>*' to 'int'
        */
    }
};