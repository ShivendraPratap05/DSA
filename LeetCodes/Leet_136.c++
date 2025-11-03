// Single Number
// To generate a unique number in an array

//Code using array
#include<iostream>
using namespace std;

int main()
{
    int arr[5]={1,2,3,2,3};
    int ans=0;
    for(int i=0;i<5;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}

//Code using vector
/*
#include<iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int SingleNumber(vector<int> & nums){
            int ans=0;
            for(int val: nums){
                ans=ans^val;
            }
            return ans;
        }
};
*/