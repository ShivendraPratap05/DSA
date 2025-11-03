// This is a brute force approch to solve the maximum water in a container problem 

/*
#include<iostream>
using namespace std;

int watercapacity(int arr[],int size)
{
    int maxwater=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            int w=j-i;
            int h=min(arr[i],arr[j]);
            int ans=w*h;
            maxwater=max(maxwater,ans);
        }
    }
    return maxwater;
}

int main()
{
    int size=5;
    int arr[size]={7,6,2,3,7};
    int aa=watercapacity(arr,size);
    cout<<aa;
}
*/



// Optimised way to solve the maximum water in a container solution
// in optimised way we use the two pointer approch 

#include<iostream>
using namespace std;

int containerwater(int arr[],int size)
{
    int maxwater=0;
    int i=0;
    int j=size-1;
    while(i<j)
    {
        int width=j-i;
        int height=min(arr[i],arr[j]);
        int area=width*height;
        maxwater=max(maxwater,area);
        if(arr[i]<arr[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return maxwater;
}

int main()
{
    int size=5;
    int arr[size]={1,4,2,3,6};
    int ans=containerwater(arr,size);
    cout<<ans;
}