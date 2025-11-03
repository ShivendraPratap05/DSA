// Aggressive cow problem where we have n n0. cows and we have to place the cow in their given stalls in such a way to get minimum distance for the maximum
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool possibleValue(vector<int> &nums,int n,int c,int mid)
{
    int cows=1;
    int last=nums[0];
    for(int i=1;i<n;i++)
    {
        if(nums[i]-last>=mid)
        {
            cows++;
            last=nums[i];
        }
        if(cows==c)
        {
            return true;
        }
    }
    return false;
}

int aggresiveCow(vector<int> &nums,int n,int c)
{
    sort(nums.begin(),nums.end());
    int start=1;
    int end=nums[n-1]-nums[0];
    int ans=-1;

    while(start<end)
    {
        int mid=start+(end-start)/2;
        if(possibleValue(nums,n,c,mid))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums={1,2,8,4,9};
    int n=nums.size();
    int c=3;
    cout<<aggresiveCow(nums,n,c)<<endl;
}