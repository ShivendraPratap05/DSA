// Rotated shorted array to apply the binary short
#include <iostream>
using namespace std;

int rotatedShortedArray(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if(target == arr[mid])
        {
            return mid;
        }
        if (arr[start] < arr[mid])
        {
            if (arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        // arr[mid]<arr[end]
        {
            if (arr[mid] <= target && target <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end=mid-1;
            }
        }
    }
}

int main()
{
    int size=8;
    int arr[size]={3,4,5,6,7,0,1,2};
    int target=0;
    int ans=rotatedShortedArray(arr,size,target);
    cout<<ans<<endl;
}