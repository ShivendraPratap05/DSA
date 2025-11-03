// usage of & --> as a address returner
// && --> as a and operato

#include<iostream>
using namespace std;

void change(int &b)
{
    b=20;
}
int main()
{
    int a=10;
    change(a);

    cout<<a;

    // cout<<&a<<endl;
    // int* ptr=&a;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*(&a)<<endl;
    // cout<<*(ptr)<<endl;
    // cout<<*(&ptr)<<endl;
    // int** ptr1=&ptr;
    // cout<<ptr1<<endl;
    // cout<<&ptr1<<endl;
    // cout<<*(ptr1)<<endl;
    // cout<<**(ptr1)<<endl;
    // int* ptr= NULL;
    // cout<<ptr;
}
