// Creating a doubly linklist with some of the methods with it

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class LinkedList
{
    Node *Head;
    Node *Tail;

public:
    LinkedList()
    {
        Head = Tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (Head == NULL)
        {
            Head = Tail = newNode;
            return;
        }
        else
        {
            newNode->next = Head;
            Head->prev = newNode;
            Head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (Head == NULL)
        {
            Head = Tail = newNode;
            return;
        }
        else
        {
            newNode->prev = Tail;
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    void pop_front()
    {
        if (Head == NULL)
        {
            return;
        }
        Node *temp = Head;
        Head = Head->next;
        if (Head != NULL)
        {
            temp->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        /*
        Write your code here
        */
    }

    void printLL()
    {
        Node *temp = Head;
        while (temp != NULL)
        {
            cout << temp->data << "   <=>   ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    LinkedList l1;
    // l1.push_front(1);
    // l1.push_front(2);
    // l1.push_front(3);

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    l1.printLL();
    l1.pop_front();
    l1.printLL();
}