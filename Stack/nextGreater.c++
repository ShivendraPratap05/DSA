//Here we have given the the array where we need to find the upnext greater element then the current one 
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums){

    vector<int> ans(nums.size(),-1);
    for(int i=0;i<nums.size()-1;i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[j]>nums[i]){
                ans[i]=nums[j];
                break;
            }
            else{
                j++;
            }
        }
    }

    for(int val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums={6,8,0,1,3};

    nextGreaterElement(nums);
}*/

//let us go with the optimised way or approch where we use the stack implementation

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<int> nums={6,8,0,1,3};

    stack<int> s;
    vector<int> ans(nums.size(),0);
    for(int i=nums.size()-1;i>=0;i--){

        while(s.size()>0 && s.top()<=nums[i]){
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