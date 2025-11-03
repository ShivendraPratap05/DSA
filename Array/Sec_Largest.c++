#include<iostream>
#include<vector>
using namespace std;

int secLargest(vector<int> & nums)
{
    int largest=-1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>largest){
            largest=nums[i];
        }
    }

    int secLargest=-1;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>secLargest && nums[i]!=largest)
        {
            secLargest=nums[i];
        }
    }
    cout<<"Second Largest element is::"<<secLargest<<endl;
}

int main()
{
    vector<int> nums={6,1,8,2,3,9};
    secLargest(nums);
}

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int secSmallest(vector<int>& nums)
// {
//     int smallest=INT_MAX;
//     for(int i=0;i<nums.size();i++)
//     {
//         smallest=min(smallest,nums[i]);
//     }

//     int secsmallest=INT_MAX;
//     for(int i=0;i<nums.size();i++)
//     {
//         if(nums[i]<secsmallest && nums[i]!=smallest)
//         {
//             secsmallest=nums[i];
//         }
//     }
//     cout<<"Second Smallest value is::"<<secsmallest<<endl;
// }

// int main()
// {
//     vector<int> nums={5,2,7,1,9,8};
//     secSmallest(nums);
// }