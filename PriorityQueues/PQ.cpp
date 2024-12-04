#include <iostream>
using namespace std;

// Node structure for singly linked list
struct Node
{
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

// Class for singly linked list
class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList() : head(nullptr) {}

    void insert(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Node structure for doubly linked list
struct DoubleNode
{
    int data;
    DoubleNode *next;
    DoubleNode *prev;
    DoubleNode(int value) : data(value), next(nullptr), prev(nullptr) {}
};

// Class for doubly linked list
class DoublyLinkedList
{
public:
    DoubleNode *head;
    DoublyLinkedList() : head(nullptr) {}

    void insert(int value)
    {
        DoubleNode *newNode = new DoubleNode(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            DoubleNode *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void display()
    {
        DoubleNode *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

// Node structure for circular linked list
struct CircularNode
{
    int data;
    CircularNode *next;
    CircularNode(int value) : data(value), next(nullptr) {}
};

// Class for circular linked list
class CircularLinkedList
{
public:
    CircularNode *head;
    CircularLinkedList() : head(nullptr) {}

    void insert(int value)
    {
        CircularNode *newNode = new CircularNode(value);
        if (head == nullptr)
        {
            head = newNode;
            head->next = head; // Point to itself to form a circular structure
        }
        else
        {
            CircularNode *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Make it circular
        }
    }

    void display()
    {
        if (head == nullptr)
            return;
        CircularNode *temp = head;
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main()
{
    // Singly Linked List
    SinglyLinkedList sList;
    sList.insert(10);
    sList.insert(20);
    sList.insert(30);
    cout << "Singly Linked List: ";
    sList.display();

    // Doubly Linked List
    DoublyLinkedList dList;
    dList.insert(5);
    dList.insert(15);
    dList.insert(25);
    cout << "Doubly Linked List: ";
    dList.display();

    // Circular Linked List
    CircularLinkedList cList;
    cList.insert(1);
    cList.insert(2);
    cList.insert(3);
    cout << "Circular Linked List: ";
    cList.display();

    return 0;
}
