#include<iostream>
using namespace std;

int SumOfNumbers(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{
    cout<<"Sum is :"<<SumOfNumbers(5);
}