// Kadane's algorithm is used to find the maximum subarray
// In kadane's algorithm we generally replace the negative sum by zero to avoid the negative value
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size=7;
    // int arr[size]={-2,1,-3,4,-1,2,1,-5,4};
    int arr[size]={3,-4,5,4,-1,7,-8};
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<size;i++)
    {
        currentSum+=arr[i];
        maxSum=max(currentSum,maxSum);
        if(currentSum<0)
        {
            currentSum=0;
        }
    }
    cout<<"MAx sum is ::"<<maxSum;
}