#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};
class CircularLinkedList{
    Node* Head;
    Node* Tail;

    public:
    CircularLinkedList(){
        Head=Tail=NULL;
    }

    void Insert_Head(int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=Tail=newNode;
            Tail->next=Head;
            return;
        }
        else{
            newNode->next=Head;
            Head=newNode;
            Tail->next=Head;
        }
    }

    void printLL(){
        if(Head==NULL){
            return;
        }

        cout<<Head->data<<"~>";
        Node* temp=Head->next;

        while(temp!=Head){
            cout<<temp->data<<"~>";
            temp=temp->next;
        }
        cout<<temp->data<<endl;
    }

    void Insert_back(int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=Tail=newNode;
            Tail->next=Head;
        }

        else{
            newNode->next=Head;
            Tail->next=newNode;
            Tail=newNode;
        }
    }
};

int main(){
    CircularLinkedList l1;
    // l1.Insert_Head(1);
    // l1.Insert_Head(2);
    // l1.Insert_Head(3);

    l1.Insert_back(1);
    l1.Insert_back(2);
    l1.Insert_back(3);
    l1.Insert_back(4);
    l1.printLL();
    
}