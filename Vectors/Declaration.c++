#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int> vec;
    // vector<int> vec={1,2,4,3,4};
    // vector<int> vec(3,0);
    // cout<<"Vector is::"<<vec[0]<<endl;
    // cout<<"Vector is::"<<vec[1]<<endl;
    // cout<<"Vector is::"<<vec[2]<<endl;
    vector<int> vec={11,6,67,55,111};
    for(char i:vec){
        cout<<i<<endl;
    }
    // if we give char in vector and int data type in loop then it give the ascii value
    return 0;
}