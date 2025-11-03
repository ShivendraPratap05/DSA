// Selection sort is the sorting technique where we select the smallest element from the unsorted array and store it at arr[0]

#include<iostream>
using namespace std;

void insertionSort(int arr[],int size)
{
    // int key=0;
    // for(int i=1;i<size;i++)
    // {
    //     key=arr[i];
    //     int j=i-1;
    //     while(j>=0 && arr[j]>=key)
    //     {
    //         arr[j+1]=arr[j];
    //         j=j-1;
    //     }
    //     arr[j+1]=key;
    // }
    for(int i=1;i<size;i++)
    {
        int key=arr[i];
        for(int j=i-1;j<size-1;j++)
        {
            if(arr[j]>arr[i])
            {
                swap(arr[i],arr[j]);
                key=arr[j];
            }
        }
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={2,1,6,3,9};
    int size=sizeof(arr)/(sizeof(arr[0]));

    insertionSort(arr,size);
    printArray(arr,size);
    return 0;
}