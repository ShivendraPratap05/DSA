// Here also we are going to find the next greater elemnet in an array but now we have given one rotated array 

#include<iostream>
#include<vector>
using namespace std;

vector<int> nextGreater(vector<int>& nums){
    vector<int> ans(nums.size());
    for(int i=0;i<nums.size()-1;i++){
        ans.push_back(nums[i]);
    }

    nums.insert(nums.end(),ans.begin(),ans.end());
    for(int val:nums){
        cout<<val<<",";
    }
    cout<<endl;
}

int main(){
    vector<int> nums={3,6,5,4,2};
    nextGreater(nums);
}