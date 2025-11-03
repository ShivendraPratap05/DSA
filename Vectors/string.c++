#include<iostream>
#include<string>
using namespace std;

int main()
{
    string input="Shivendra";

    string reversed=" ";
    for(int i=input.length()-1;i>=0;i--)
    {
        reversed+=input[i];
    }

    cout<<"reversed string is::"<<reversed<<endl;
    return 0;
}