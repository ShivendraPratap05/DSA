// creating a linklist

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
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=Tail=newNode;
            return;
        }
        else{
            newNode->next=Head;
            Head=newNode;
        }
    }

    void printLL()
    {
        Node* temp=Head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"~>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    LinkedList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);

    l1.printLL();
}