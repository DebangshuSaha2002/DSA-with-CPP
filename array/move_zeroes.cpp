#include<iostream>
#include<vector>
using namespace std;

// void move_zeroes(int arr[],int n,int arr1[],int m)
// {
//     int cz=0,k=0,i=0;
//     while(i<n)
//     {
//         if(arr[i]==0)
//         {
//             cz++;
//             i++;
//         }
//         else
//         {
//             arr1[k++]=arr[i++];
//         }
//     }
//     for(int i=0;i<cz;i++)
//     {
//         arr1[k++]=0;
//     }
// }

void move_zeroes(int arr[],int n)
{
    int nonZero=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[j],arr[nonZero]);
            nonZero++;
        }
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6]={2,0,4,0,5,0};
    // move_zeroes(arr,6,arr1,6);
    move_zeroes(arr,6);
    printarray(arr,6);
    return 0;
}