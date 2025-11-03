// Code to print all subarrays
#include <iostream>
#include<climits>
using namespace std;

void SubArray(int arr[], int size)
{
    int maxSum=INT_MIN;
    for (int start = 0; start < size; start++)
    {
        int currentSum=0;
        for (int end = start; end < size; end++)
        {
            currentSum+=arr[end];
            // maxSum=max(currentSum,maxSum);
        }
    }
    // cout << "maximum subarray is::"<<maxSum;
}

int printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size = 5;
    int arr[size] = {-1, -2, -3, -4, -5};
    int maxSum=INT_MIN;
    printArray(arr,size);
    SubArray(arr, size);
}

// Printing maximum subaaray
// #include<iostream>
// #include<climits>
// using namespace std;

// int main()
// {
//     int size=5;
//     int arr[size]={-1,2,3,4,- 5};
//     int maxSum=INT_MIN;
//     for(int start=0;start<size;start++)
//     {
//         int currentSum=0;
//         for(int end=start;end<size;end++)
//         {
//             currentSum=currentSum+arr[end];
//             maxSum=max(currentSum,maxSum);
//         }
//     }
//     cout<<"maximum subarray is :"<<maxSum<<endl;
//     return 0;
// }