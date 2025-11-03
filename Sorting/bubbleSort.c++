// Bubble sort is the sorting technique where we arrange the elements in there accending or descending order
// by cmparing there adjacent element in the array

#include<iostream>
using namespace std;

void bubbleSort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
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
    int size=4;
    int arr[size]={3,2,5,1};
    bubbleSort(arr,size);

    printArray(arr,size);
    return 0;
}