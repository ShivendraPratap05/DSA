#include <iostream>
using namespace std;

class Node                            //here we are trying to create a general node or a structure
{                                     //where a node contain a data and next pointer
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList                     //this is a class we are creating to store the all nodes in a linkedlist
{
    Node *Head;                      //points to starting node
    Node *Tail;                      //points to the ending node

public:
    LinkedList()
    {
        Head = Tail = NULL;          //at firt we assume that linklist is empty
    }

    void push_front(int val){                                //function to add the node from the starting
        Node* newNode=new Node(val);                         //creating a newNode 
        if(Head==NULL){
            Head=Tail=newNode;                               //if ll is empty it will give newNode as only node
            return;
        }
        else{
            newNode->next=Head;                          //newNode ke next ko head ki trf point krenge
            Head=newNode;                               //fir newNode ko Head bana denge
        }
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

    void pop_back(){                          //function to delete the node from the back of the ll
        if(Head==NULL){
            return;
        }
        Node* temp=Head;
        while(temp->next!=Tail){               //temp pointer banyenge or usko tail se phele tak chalyenge
            temp=temp->next;                   // temp ko update krnge
        }

        temp->next=NULL;                       //fir temp ko null krenge fir delete fir new temp ko tail bana denge
        delete Tail;
        Tail=temp;
    }

    void pop_front(){
        if(Head==NULL){
            return;
        }
        Node* temp=Head;
        Head=Head->next;
        temp->next=NULL;
        delete temp;
    }

    int search(int key){             //function use to find the data in a linkedList
        Node* temp=Head;
        int indx=0;
        while(temp!=NULL){
            if(temp->data==key){
                return indx;
            }
            temp=temp->next;
            indx++;
        }
        return -1;
    }

    void reverse(){
        Node* previous=NULL;
        Node* current=Head;
        Node* next=NULL;

        while(current!=NULL){
            next=current->next;
            current->next=previous;

            previous=current;
            current=next;
        }
    }

    void insertmiddle(int val,int position){
        if(position<0){
            return;
        }
        if(position==0){
            return push_front(val);
        }
        Node* temp=Head;
        for(int i=0;i<position;i++){
            temp=temp->next;
        }
        Node* newNode=new Node(val);
        newNode->next=temp->next;
        temp->next=newNode;
    }
};

int main() {
    LinkedList l1;
    // l1.push_front(1);
    // l1.push_front(2);
    // l1.push_front(3);

    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.printLL();

    // l1.pop_back();
    // l1.pop_front();
    // l1.insertmiddle(9,1);
    // cout<<l1.search(3)<<endl;
    // l1.printLL();
    l1.reverse();
    l1.printLL();
}