#include<iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    // cout<<*arr<<endl;                        //1
    // cout<<arr<<endl;                         //address
    //*arr = arr[0]
    cout<<*(arr+2);

    //INcrement (++) and Decrement(--)
    // int a=6;
    // int* ptr=&a;
    // cout<<ptr<<endl;
    // ptr=ptr+3;
    // cout<<ptr<<endl;

    // We can also perform addition or subtraction peration on both the point
    // int* ptr;
    // int* ptr2=ptr+10;
    // cout<<ptr2-ptr;
}