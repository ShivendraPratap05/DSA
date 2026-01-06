#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
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
            Head = newNode;
        }
    }

    Node* reverseKterm(int k)
    {
        int count=0;
        Node* temp=Head;
        while(count<k)
        {
            if(temp==NULL){
                return Head;
            }
            temp=temp->next;
        }
        Node* prevNode=reverseKterm(k);

        temp=Head;
        count=0;
        while(count<k){
            Node* next=temp->next;
            temp->next=prevNode;

            prevNode=temp;
            temp=next;

            count++;
        }
    }

    void printLL()
    {
        Node *temp = Head;
        while (temp != NULL)
        {
            cout << temp->data << "~>";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    int k = 2;
    LinkedList l1;
    l1.push_front(6);
    l1.push_front(5);
    l1.push_front(4);
    l1.push_front(3);
    l1.push_front(2);
    l1.push_front(1);

    l1.printLL();

    l1.reverseKterm(2);

    l1.printLL();
}
