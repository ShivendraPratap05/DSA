#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input;
    cout<<"Enter the string:";
    cin>>input;

    string reverse=" ";
    for(int i=input.length()-1;i>=0;i--)
    {
        reverse+=input[i];
    }
    cout<<reverse<<endl;
    return 0;
}