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

    void push_front(int val){
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

    void printLL(){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<"~>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
 
    // int middleElement(int size){                          //This is the brute force approch for finding the middle for the value
    //     if(size%2!=0){
    //         size=size/2;
    //         Node* temp=Head;
    //         for(int i=0;i<size;i++){
    //             temp=temp->next;
    //         }
    //         return temp->data;
    //     }
    // }

    int middleElement(){
        Node* slow=Head;
        Node* fast=Head;

        while(fast->next!=NULL && fast!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->data;
    }
};

int main()
{
    LinkedList l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);
    l1.push_front(6);
    l1.printLL();

    cout<<l1.middleElement();
}