// Book Allocaton technique or Chocolate distribution problem both are same 
// Here in this kind of problem we have n no. of thing is given to m no. of stdent to distribute

#include<iostream>
#include<vector>
using namespace std;

bool isValid(vector<int> &arr,int m,int n,int mid)
{
    int student=1;
    int pages=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }

        if(arr[i]+pages<=mid)
        {
            pages+=arr[i];
        }
        else
        {
            student++;
            pages=arr[i];
        }
    }
    return student>m ? false : true;
}

int allocateBook(vector<int> &arr,int m,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int start=0;
    int end=sum;
    int ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(isValid(arr,m,n,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr={2,1,3,4};
    int n=arr.size();
    int m=5;
    cout<<allocateBook(arr,m,n)<<endl;
}