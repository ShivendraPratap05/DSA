//Smallest Number In an Array
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={32,45,84,23,72,74,32};
    int size=sizeof(arr)/sizeof(int);
    int Smallest=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<Smallest)
        {
            Smallest=arr[i];
        }
    }
    cout<<"Smallest= "<<Smallest<<endl;
} 
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size=5;
    int arr[size];
    cout<<"Enter the arrays";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int largest=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<largest)
        {
            largest=arr[i];
        }
    }
    cout<<"Smallest ::"<<largest<<endl;
}*/

//Largest NUmber in an array
/*#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={23,1,76,4,66};
    int Largest=INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>Largest)
        {
            Largest=arr[i];
        }
    }
    cout<<"Largest number is::"<<Largest<<endl;
}*/
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size=4;
    int arr[size];
    cout<<"Enter the elements";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int Largest=INT_MIN;
    for (int i=0;i<size;i++)
    {
        if(arr[i]>Largest)
        {
            Largest=arr[i];
        }
    }
    cout<<"Largest Number is ::"<<Largest<<endl;
}