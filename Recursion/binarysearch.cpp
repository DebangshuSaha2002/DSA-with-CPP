#include<iostream>

using namespace std;

bool binarysearch(int *arr,int k,int s,int e)
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    if(arr[mid]<k)
    {
        return binarysearch(arr,k,mid+1,e);
    }
    else if(arr[mid]>k)
    {
        return binarysearch(arr,k,s,mid-1);
    }
}

int main()
{
    int arr[5]={1,25,2,34,55};
    int key=25;
    bool ans=binarysearch(arr,key,0,4);
    if(ans)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}