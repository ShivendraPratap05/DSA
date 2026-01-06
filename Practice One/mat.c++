#include<iostream>
#include<vector>
using namespace std;

int diagnolsum(vector<vector<int>>& nums){
    int rows=nums.size();
    int prisum=0;
    int secsum=0;

    for(int i=0;i<rows;i++){
        int cols=nums[i].size();
        for(int j=0;j<cols;j++){
            if(i==j){
                prisum+=nums[i][j];
            }
            else if(j=rows-i-1){
                secsum+=nums[i][j];
            }
        }
    }
    cout<<prisum<<endl;
    cout<<secsum<<endl;

}

int main(){
    vector<vector<int>> nums={{1,2,3},{4,5,6},{6,7,8}};
    cout<<diagnolsum(nums);
}