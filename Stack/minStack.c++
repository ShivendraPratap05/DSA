#include<iostream>
#include<stack>
#include<vector>
#include<climits>
using namespace std;

class Stack{
    vector<int> vec;

    public:
    void push(int val){
        vec.push_back(val);
    }

    int top(){
        int ans=vec[vec.size()-1];
        cout<<ans<<endl;
    }

    void printStack(){
        for(int val:vec){
            cout<<val<<" ";
        }
        cout<<endl;
    }

    int getMin(){
        int min=INT_MAX;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]<min){
                min=vec[i];
            }
        }
        cout<<min<<endl;
    }

    void pop(){
        vec.pop_back();
    }
};

int main(){
    Stack s1;
    s1.push(-1);
    s1.push(0);
    s1.push(-3);
    
    s1.top();

    s1.getMin();

    s1.pop();

    s1.printStack();
}