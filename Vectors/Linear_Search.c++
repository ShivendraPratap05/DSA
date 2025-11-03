// Performing Linear Search using vectors

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec(5);
    // cout<<"Enter the vector values:";
    for(int i=0;i<vec.size();i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<"Vector are:.."<<vec[i]<<endl;
    }
    int target=1;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==target)
        {
            cout<<"Target found at the location:..."<<i<<endl;
        }
    }
}