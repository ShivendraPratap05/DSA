// Here we have given the histogram from where we need to find the maximum area of the rectangle tha can we form from the Histogram

#include<iostream>
#include<vector>
using namespace std;

int largRectHisto(vector<int>& nums){
    int i=0;
    int j=i+1;
    int width=1;
    int area=0;

    while (i<=j){
        if(nums[i]<=nums[j]){
            width+=1;
            j++;
            area=max(nums[i]*width,area);
        }
        else{
            area=max(nums[i]*width,area);
            i++;
        }
    }
    return area;
}

int main(){
    vector<int> nums={2,1,5,6,2,3};
    cout<<largRectHisto(nums)<<endl;
}