// Find the peak element in an array

#include<iostream>

using namespace std;

int peak_element(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

int main()
{
    int arr[6]={1,2,5,6,3,0};
    cout<<"The peak element in the array is "<<peak_element(arr,6)<<endl;
    return 0;
}