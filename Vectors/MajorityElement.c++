// This is a Brute force approch to solve this problem

// #include<iostream>
// #include<vector>
// using namespace std;

// vector<int> majorityElements(vector<int> nums)
// {
//     int n=nums.size();
//     for(int val: nums)
//     {
//         int freq=0;
//         for(int ele: nums)
//         {
//             if(ele==val)
//             {
//                 freq++;
//             }
//         }
//         if(freq>n/2)
//         {
//             return val;
//         }
//     }
// }

// int main()
// {
//     vector<int> nums={1,2,2,1,1};
//     vector<int> ans=majorityElements(nums);
//     cout<<ans<<endl;
// }

// This is a Brute Force approch to find the majority element
/*#include<iostream>
using namespace std;

int majorityElements(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        int freq=0;
        for(int j=0;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                freq++;                                     //Time Complexicity = O( n^2 )
            }
        }
        if(freq> size/2)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int size=5;
    int arr[size]={2,1,2,1,2};
    int majority=majorityElements(size,arr);
    cout<<majority<<endl;
}
*/

// Optimised solution for the majority element
/*
#include<iostream>
using namespace std;

int majorityElement(int size, int arr[])
{
    int freq=1;
    int ans=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            freq++;
        }
        else
        {
            freq=1;                                            //Time Complexicity O(n log n)
            ans=arr[i+1];
        }
        if(freq>size/2)
        {
            return ans;
        }
    }
}

int main()
{
    int size=8;
    int arr[size]={1,1,1,2,2,2,2,2};
    int majority=majorityElement(size,arr);
    cout<<majority<<endl;
}
*/

// Moore;s Algorithm (Majority Elements)
#include <iostream>
using namespace std;

int majorityElement(int size, int arr[])
{
    int freq = 0;
    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
            freq = 1;
        }
        // for (int i = 0; i < size; i++)
        // {
            if (ans == arr[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
        // }
    }
    return ans;
}

int main()
{
    int size = 5;
    int arr[size] = {2, 2, 1, 2, 2};
    int majority = majorityElement(size, arr);
    cout << majorityElement << endl;
}