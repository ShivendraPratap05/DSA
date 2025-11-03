// Code for product of the elements of an array
/*#include<iostream>
#include<vector>
using namespace std;

int productArray(vector<int> & nums)
{
    int ans=1;
    for(int i=0;i<nums.size();i++)
    {
        ans=ans*nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums={2,3,1,5};
    int value=productArray(nums);
    cout<<"Product of an array is ::"<<value;
}
*/












// Brute force approch to solve the product of an araay except itself
/*
#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int> & nums)
{
    int n=nums.size();
    vector<int> ans(n);
    for(int i=0;i<n;i++)
    {
        int prod=1;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                prod*=nums[j];
            }
        }
        ans[i]=prod;
    }
    return ans;
}

int main()
{
    vector<int> nums={2,3,1,5};
    vector<int> value=productArray(nums);
    for(int val: value)
    {
        cout<<val<<",";
    }
    cout<<endl;
}
*/














// Optimal approch to solve the same question
#include<iostream>
#include<vector>
using namespace std;

vector<int> productArray(vector<int> & nums )
{
    int n=nums.size();
    vector<int> ans(n,1);
    vector<int> preffix(n,1);
    vector<int> suffix(n,1);

    for(int i=1;i<n;i++)
    {
        preffix[i]=preffix[i-1]*nums[i-1];
    }

    for(int i=n-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*nums[i+1];
    }

    for(int i=0;i<n;i++)
    {
        ans[i]=preffix[i]*suffix[i];
    }
    return ans;
}

int main()
{
    vector<int>nums={1,4,2,5};
    vector<int> value=productArray(nums);
    for(int val:value)
    {
        cout<<val<<",";
    }
    cout<<endl;
}