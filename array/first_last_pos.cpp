//First and Last occurance of an element in an array
#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    int arr[5]={1,2,3,4,4};
    cout<<"The first occ of 4 is at index "<<firstOcc(arr,5,4)<<endl;
    cout<<"The last occ of 4 is at index "<<lastOcc(arr,5,4)<<endl;
    return 0;
}
