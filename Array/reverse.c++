#include<iostream>
using namespace std;

void ReverseArray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={5,4,3,2,1};
    int size=5;
    ReverseArray(arr,size);
    printArray(arr,size);
}