//Find the occurance of an element

#include<iostream>
using namespace std;

int first_occ(int arr[],int k,int n)
{
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            e=mid-1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int last_occ(int arr[],int k,int n)
{
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;
    int ans=-1;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            s=mid+1;
        }
        else if(k<arr[mid])
        {
            e=mid-1;
        }
        else if(k>arr[mid])
        {
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    int arr[10]={1,2,3,4,5,5,5,5,9,0};
    int key=5;

    int occ = (last_occ(arr,key,10)-first_occ(arr,key,10))+1;

    cout<<"The occurance of 5in the array is:"<<occ<<endl;
    return 0;
}