#include<iostream>
using namespace std;

double mypow(int n,double x)
{
    long binform=n;
    if(n<0)
    {
        x=1/x;
        binform=-binform;
    }
    double ans=1;
    while(binform>0)
    {
        if(binform % 2 ==1)
        {
            ans=ans*x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the value of n ::";
    cin>>n;
    double x;
    cout<<"Enter the value of double::";
    cin>>x;
    double expo=mypow(n,x);
    cout<<"Answer is ::"<<expo;
}