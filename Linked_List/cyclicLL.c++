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

class LinkedList{
    Node* Head;
    Node* Tail;

    public:
    LinkedList(){
        Head=Tail=NULL;
    }

    void push_back(int val){
        Node* newNode=new Node(val);
        if(Head==NULL){
            Head=Tail=newNode;
            return;
        }
        else{
            Tail->next=newNode;
            Tail=newNode;
        }
    }

    bool Is_Cyclic(){
        Node* slow =Head;
        Node* fast=Head;

        bool iscycle=false;

        while(fast->next!=NULL && fast!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                iscycle=true;
            }
        }
        return iscycle;
    }

    void printLL(){
        Node* temp=Head;
        while(temp!=NULL){
            cout<<temp->data<<"~>";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    LinkedList l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(1);

    l1.printLL();
    l1.Is_Cyclic();
}