#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        int mid=start+(end-start)/2;

        if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main()
{
    int size=5;
    int arr[size]={1,2,3,4,5,6,7};
    int target=5;
    int ans=binarySearch(arr,size,target);
    cout<<ans;
}