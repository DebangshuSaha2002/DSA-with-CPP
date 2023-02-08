//Search an element in a rotated sorted array

#include<iostream>
using namespace std;

int pivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int binary_search(int arr[],int s,int e,int k)
{
    int p=pivot(arr,5);
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(k==arr[mid])
        {
            return mid;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        else {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int searched(int arr[],int k)
{
    int p=pivot(arr,5);
    if(k>=arr[p] && k<=arr[4])
    {
        return binary_search(arr,p,4,9);
    }
    else{
        return binary_search(arr,0,p,9);
    }
}

int main()
{
    int arr[5]={7,8,9,1,2};
    // pivot(arr,5);
    searched(arr,9);
    return 0;
}