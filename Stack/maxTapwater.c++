//Maxinmum tap water this problem is used to store the maximum tap water 

#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int maxWaterstore(vector<int> & nums){
    int maxi=INT_MIN;
    int secmaxi=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi=max(maxi,nums[i]);
        }
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]>secmaxi && nums[i]<maxi){
            secmaxi=nums[i];
        }
    }
    
    int sum=0;
    for(int i=0;i<nums.size()-1;i++){
        sum=sum+nums[i];
    }

    int area=maxi*secmaxi;
    return (area-sum);
}

int main(){
    vector<int> nums={4,2,0,3,2,5};
    cout<<maxWaterstore(nums)<<endl;
}