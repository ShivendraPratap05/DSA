// Pinter Partition problem 

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

bool isValid(vector<int>& arr,int m, int n,int mid)
{
    int painter=1;
    int unit=0;
    for(int i=0;i<n;i++)
    {
        // if(arr[i]<arr[mid]) return false;

        if(mid>=arr[i]+unit)
        {
            unit+=arr[i];
        }
        else
        {
            painter++;
            unit=arr[i];
        }
    }
    return painter<=m ;
}

int painterPart(vector<int>& arr,int m, int n)
{
    int maxval=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxval=max(arr[i],maxval);
    }

    int start=maxval;
    int end=sum;
    int ans=-1;
    while(start<end)
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
    return ans;
}

int main()
{
    vector<int> arr={10,10,10,10};
    int n=arr.size();
    int m=2;
    cout<<painterPart(arr,m,n)<<endl;
}