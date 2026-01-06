#include<iostream>
using namespace std;

int largestElement(int matrix[][3],int rows,int cols)
{
    int larg=matrix[0][0];
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(matrix[i][j]>=larg)
            {
                larg=matrix[i][j];
            }
        }
    }
    cout<<"Larrgest Element in the Matrix is::";
    return larg;

    int mid=(rows*cols)/2;
    int midrow=mid/2;
    int midcol=mid%cols;

    swap(matrix[midrow][midcol],larg);
}

void printMatrix(int matrix[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<matrix[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main()
{
    int rows=4;
    int cols=3;
    int matrix[][3]={{4,8,0},{5,3,9},{11,4,2},{12,7,6}};
    printMatrix(matrix,rows,cols);

    cout<<largestElement(matrix,rows,cols)<<endl;
    cout<<"    "<<endl;

    printMatrix(matrix,rows,cols);
    cout<<"    "<<endl;
    // cout<<middleIndex(matrix,rows,cols)<<endl;
}