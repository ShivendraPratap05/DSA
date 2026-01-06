// Different Methods used in Stack are
// 1. push->push function is to add the element at the top
// 2. pop ->pop function is to delete the element from the top
// 3. top->top returns the top most element from the stack

#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }

    void pop(){
        vec.pop_back();
    }

    int top(){
        cout<<vec[vec.size()-1]<<endl;
    }

    bool isEmpty(){
        if(vec.size()==0){
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

    // s1.pop();
     s1.top();
     
    while(!s1.isEmpty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}