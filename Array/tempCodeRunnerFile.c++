int secLargest=-1;
    for(int i=0;i<nums.size()-1;i++)
    {
        if(nums[i]<largest && nums[i]!=largest)
        {
            secLargest=nums[i];
        }
    }