// Selection sort is the sorting technique where we select the smallest element from the unsorted array and store it at arr[0]

#include<iostream>
using namespace std;

void selectionSort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int mi=i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
               mi=j;
                // swap(arr[i],arr[j]);
            }
        }
        swap(arr[i],arr[mi]);
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
    int size=5;
    int arr[size]={2,1,6,3,9};

    selectionSort(arr,size);
    printArray(arr,size);
    return 0;
}