// Here we are going to implement the stack using the LinkedList

#include <iostream>
#include <list>
using namespace std;

class Stack
{
    list<int> ll;

public:
    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    void top(){
        ll.front();
    }

    bool isEmpty(){
        if(ll.size()==0){
            return true;
        }
        return false;
    }
};

int main()
{
    Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    return 0;
}