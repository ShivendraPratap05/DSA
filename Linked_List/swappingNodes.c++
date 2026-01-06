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

    void push_back(int val){                       //function to add the node at the end of the ll
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=Tail=newNode;
            return;
        }
        else{
            Tail->next=newNode;                   //tail ke next ko newNde ki trf point krenge
            Tail=newNode;                        //fir newNode ko tail bana denge
        }
    }

    void printLL(){                                   //logic to print the formed ll
        Node* temp=Head;                             //initializing the node temp from head and iterate till it become NULL
        while(temp!=NULL){ 
            cout<<temp->data<<"~>";
            temp=temp->next;                         //updating the temp 
        }
        cout<<"NULL"<<endl;
    }

    Node* swappingPair(){
        if(Head==NULL || Head->next==NULL){
            return Head;
        }
        
        Node* first=Head;
        Node* sec=Head->next;
        Node* prev=NULL;

        while(first!=NULL && sec!=NULL){
            Node* third=sec->next;
            sec->next=first;
            first->next=third;

            if(prev!=NULL){
                prev->next=sec;
            }
            else{
                Head=sec;
            }

            prev=first;
            first=third;

            if(third!=NULL){
                third->next=sec;
            }
            else{
                sec=NULL;
            }
        }
        return Head;
    }
};

int main()
{
    LinkedList l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);

    l1.printLL();

    cout<<l1.swappingPair()<<endl;
}