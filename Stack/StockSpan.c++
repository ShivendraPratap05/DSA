#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    vector<int> vec = {100, 80, 60, 70, 60, 75, 85};

    stack<int> s;
    vector<int> ans(vec.size(),0);

    for (int i = 0; i < vec.size(); i++)
    {
        while (s.size()>0 && vec[s.top()] <= vec[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i]=i+1;
        }
        else{
            ans[i]=i-s.top();
        }
        s.push(i);
    }

    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl; 
}