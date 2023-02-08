//Write a program to find the pivot element in a rotated and sorted array

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

int main()
{
    int arr[6]={6,8,10,17,3,4};
    cout<<"Pivot is "<<pivot(arr,6)<<endl;
}