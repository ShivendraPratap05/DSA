//finding the previous smaller element
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevSmaller(vector<int>& nums){
    stack<int> s;
    vector<int> ans(nums.size(),0);

    for(int i=0;i<nums.size();i++){
        while(s.size()>0 && s.top()>=nums[i]){
            s.pop();
        }

        if(s.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=s.top();
        }
        s.push(nums[i]);
    }

    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums={3,1,0,8,6};

    prevSmaller(nums);
}