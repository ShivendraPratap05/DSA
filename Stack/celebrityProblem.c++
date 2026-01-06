// This is a celebrity problem where we have give with the matrix with 0, 1 values assigned 
// also eveyone should know the celebrity=1;
// and celebrity should not know everyone =0;

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int celebrity(vector<vector<int>>& nums){
    int n=nums.size();
    stack<int> s;
    for(int i=0;i<n;i++){
        s.push(i);
    }

    while(s.size()>1){
        int i=s.top();
        s.pop();

        int j=s.top();
        s.pop();

        if(nums[i][j]==0){
            s.push(i);
        }
        else{
            s.push(j);
        }
    }

    int celeb=s.top();
    for(int i=0;i<n;i++){
        if(i!=celeb && (nums[i][celeb]==0) || (nums[celeb][i]==1)){
            return -1;
        }
    }

    return celeb;
}

int main(){
    vector<vector<int>>nums={{0,1,0},{0,0,0},{0,1,0}};

    cout<<celebrity(nums)<<endl;
}