// here we have an array whose value is at peak in full array and we have to return the index for it
#include<iostream>
#include<vector>
using namespace std;

int mountainArray(vector<int>& nums)
{
    int start=1;
    int end=nums.size()-2;
    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
        {
            return mid;
        }
        else if(nums[mid]>nums[mid-1])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
}

int main()
{
    vector<int> nums={1,2,5,7,8,2};
    int ans=mountainArray(nums);
    cout<<ans;
}