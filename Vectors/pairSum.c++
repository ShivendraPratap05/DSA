// #Brute Force Approch
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);

                return ans;
            }
        }
    }
}

int main()
{
    vector<int> nums={1,11,14,17};
    int target=18;

    vector<int> ans=pairSum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
}
*/

// Optimized approch

#include<iostream>  
#include<vector>
using namespace std;

vector<int> pairSum(vector<int> nums,int target)
{
    vector<int> ans;
    int n=nums.size();
    int i=0, j=n-1;
    while(i<j)
    {
        int sum=nums[i]+nums[j];
        if(sum<target)
        {
            i++;
        }
        else if (sum>target)
        {
            j--;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{
    vector<int> nums={2,7,11,15};
    int target=26;
    vector<int> ans=pairSum(nums,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;
}