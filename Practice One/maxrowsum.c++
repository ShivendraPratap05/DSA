//maximum row sum using vector
#include<iostream>
#include<vector>
using namespace std;

vector<int> maxRowSum(vector<vector<int>>& matrix)
{
    int rows=matrix.size();
    int cols=matrix[0].size();

    int maxSum=0;
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=matrix[i][j];
            if(maxSum<sum)
            {
                maxSum=sum;
            }
        }
    }
    cout<<maxSum<<endl;
}

int main()
{
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};

    maxRowSum(matrix);
}

//maximum row sum using normal c++ coading
/*
#include<iostream>
using namespace std;

int maxRowSum(int rows,int cols,int matrix[][3])
{
    int maxSum=0;
    for(int i=0;i<rows;i++)
    {
        int sum=0;
        for(int j=0;j<cols;j++)
        {
            sum+=matrix[i][j];
            if(maxSum<sum)
            {
                maxSum=sum;
            }
        }
    }
    return maxSum;
}

int main()
{
    int rows=3;
    int cols=3;
    int matrix[rows][cols]={{1,2,3},{4,5,6},{7,8,9}};

    cout<<maxRowSum(rows,cols,matrix[][3])<<endl;
}
*/