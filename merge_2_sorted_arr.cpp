//Merge 2 sorted arrays 
#include<iostream>
#include<vector>
using namespace std;

void merge(int *arr1,int *arr2,int l1,int l2,int *arr3)
{
    int index1=0;
    int index2=0;
    // vector <int> merged;
    int k=0;
    while(index1<l1 && index2<l2)
    {
        if(arr1[index1]<arr2[index2])
        {
            arr3[k++]=arr1[index1++];
        }
        else
        {
            arr3[k++]=arr2[index2++];
        }
    }

    while(index1<l1)
    {
        arr3[k++]=arr1[index1++];
    }

    while(index2<l2)
    {
        arr3[k++]=arr2[index2++];
    }
}

int main()
{
    int arr1[5]={1,3,5,8,9};
    int arr2[5]={2,6,8,9,10};
    int arr3[10];
    for(int i=0;i<10;i++)
    {
        arr3[i]=0;
    }
    int l1=5;
    int l2=5;
    merge(arr1,arr2,l1,l2,arr3);

    for(int i=0;i<(10);i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}