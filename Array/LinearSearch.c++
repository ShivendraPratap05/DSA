//Normall performing the code

/*#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int target=12;
    int index;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
            index=i;
            cout<<index<<endl;
        }
    }
    cout<<-1<<endl;
}*/

//Using function to perform the same code;;

#include<iostream>
using namespace std;

int Searching(int arr[],int size,int target)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[]={12,4,14,3,8};
    int size=5;
    int target=3;
    cout<<Searching(arr,size,target)<<endl;
    return 0;
}