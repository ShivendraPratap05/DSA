#include<iostream>
using namespace std;

int main()
{
    int size=5;
    int marks[size];
    cout<<"Enter the marks"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }
   // int marks[5]={22,53,74,70,37};                                  //it is an integer type array that stores the integer type array
    //char marks[3];                                character type array only stores character type array in it
    //double marks[5];                              double type array only store the decimal values in it
    /*marks[0]=220;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    int size=sizeof(marks)/4;
    cout<<(size)<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<marks[i]<<endl;
    }*/
   for(int i=0;i<size;i++)
   {
    cout<<marks[i]<<endl;
   }
}