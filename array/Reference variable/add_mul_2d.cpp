#include<iostream>
using namespace std;

void initialize(int ** arr,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
}

void display(int ** arr,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void add(int **arr1,int r1,int c1,int ** arr2,int r2,int c2)
{
    int **sum=new int *[5];
    for(int i=0;i<5;i++)
    {
        sum[i]=new int[5];
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            sum[i][j]+=arr1[i][j]+arr2[i][j];
        }
    }

    display(sum,r1,c1);
}

void mult(int **arr1,int r1,int c1,int **arr2,int r2,int c2)
{
    int** mult=new int* [5];
    for(int i=0;i<5;i++)
    {
        mult[i]=new int[5];
    }

    for(int i=0;i<r1;++i)
    {
        for(int j=0;j<c2;++j)
        {
            for(int k=0;k<c1;++k)
            {
                mult[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    display(mult,r1,c1);
}
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter row 1 and col 1 for 1st column: ";
    cin>>r1>>c1;
    cout<<"Enter row 2 and col 2 for 2nd column: ";
    cin>>r2>>c2;
    int** arr1=new int* [r1];
    for(int i=0;i<c1;i++)
    {
        arr1[i]=new int[c1];
    }
    int** arr2=new int* [r2];
    for(int i=0;i<c2;i++)
    {
        arr2[i]=new int[c2];
    }

    cout<<"Enter values of 1st array:\n";
    initialize(arr1,r1,c1);
    cout<<"Displaying 1st array:\n";
    display(arr1,r1,c1);

    cout<<"Enter values of 2nd array:\n";
    initialize(arr2,r2,c2);
    cout<<"Displaying 2nd array:\n";
    display(arr2,r2,c2);

    add(arr1,r1,c1,arr2,r2,c2);
    mult(arr1,r1,c1,arr2,r2,c2);
    return 0;
}