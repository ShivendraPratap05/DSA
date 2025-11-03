#include<iostream>
using namespace std;
int main()
{
    int size=5;
    int arr[size];
    int i;
    cout<<"Enter the elements of an array::";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    for(i=0;i<size;i++){
        cout<<"array is ::"<<arr[i]<<endl;
    }
    int Largest=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>Largest){
            Largest=arr[i];
        }
    }
    int Slargest=-1;
    for(i=0;i<size;i++)
    {
        if(arr[i]>Slargest && arr[i]!=Largest){
            Slargest=arr[i];
        }
    }
    cout<<"Second Largest Number in an array is:"<<Slargest<<endl;
}