//Printing the largest number in the array

/*#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int Largest=INT_MIN;
    for (int i=0;i<=6;i++)
    {
        if(arr[i]>Largest)
        {
            Largest=arr[i];
        }
    }
    cout<<"Largest Element is::"<<Largest<<endl;
}*/
 
/*Smallest number in the array
#include<iostream>
using namespace std;
#include<climits>

int main()
{
    int arr[5]={26,46,32,75,23};
    int Smallest=INT_MAX;
    int index;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<Smallest)
        {
            Smallest=arr[i];
            index =i;
        }
    }
    cout<<"Smallest Number in an array is:"<<index<<":"<<Smallest<<endl;
}
#include<iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    for(int i=0;i<size;i++ )
    {
        arr[i]=2*arr[i];
    }
}

int main()
{
    int arr[]={1,2,3};
    changeArr(arr,3);
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<"~ ";
    }
    cout<<endl;
    return 0;
}

//Second Largest Number:---
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[5]={1,12,3,4,5};
    int Largest=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>Largest){
            Largest=arr[i];
        }
    }
    int Slargest=-1;
    for(int i=0;i<5;i++){
        if(arr[i]>Slargest && arr[i]!=Largest){
            Slargest=arr[i];
        }
    }
    cout<<"Largest Number is:"<<Slargest<<endl;
}*/

//Using function
#include<iostream>
#include<climits>
using namespace std;

int Largest(int a,int b)
{
    if(a>b)
    {
        cout<<"A is Largest"<<endl;
    }
    else
    {
        cout<<"B is largest"<<endl;
    }
}

int main()
{
    cout<<Largest(10,2);
}