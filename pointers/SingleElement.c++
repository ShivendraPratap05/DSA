#include <iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    int start = 0;
    int end = nums.size() - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
}

int main()
{
    vector<int> nums={1,1,2,2,3,4,4,5,5};
    int ans=singleNonDuplicate(nums);
    cout<<ans<<endl;
}