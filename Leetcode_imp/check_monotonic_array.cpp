#include<iostream>
using namespace std;

bool monotonic(int arr[],int n)
{
    bool inc=true;
    bool dec=true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            dec=false;
        }
        if(arr[i]>arr[i+1])
        {
            inc=false;
        }
    }
    return inc || dec;
}

int main()
{
    int arr[5]={1,2,3,3,4};
    if(monotonic(arr,5))
    {
        cout<<"Its monotonic";
    }
    else{
        cout<<"Not monotonic";
    }
    return 0;
}