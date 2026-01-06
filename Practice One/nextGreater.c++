#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreater(vector<int>& nums){
    int n=nums.size();
    vector<int> ans(n,-1);
    stack<int>s;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            s.push(nums[i]);
            ans.push_back(-1);
        }
        else{
            if(nums[i]<s.top()){
                ans.push_back(s.top());
                s.pop();
            }
            else{
                s.pop();
                s.push(nums[i]);
            }
        }
    }
    for(int val:ans){
        cout<<val<<",";
    }
    cout<<endl;
}

int main(){
    vector<int> nums={2,5,1,3,7};

    nextGreater(nums);
}