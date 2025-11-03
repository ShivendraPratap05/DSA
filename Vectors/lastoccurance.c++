#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec(6);
    for(int i=0;i<vec.size();i++)
    {
        cin>>vec[i];
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<"Elements of vector are::"<<vec[i]<<endl;
    }
    int x;
    cout<<"Enter the x:"<<endl;
    cin>>x;

    int last=-1;
    for(int i=0;i<vec.size();i++)
    {
        if(x==vec[i])
        {
            last=i;
        }
    }
    cout<<"Last occurance is ::"<<last<<endl;
    return 0;
}