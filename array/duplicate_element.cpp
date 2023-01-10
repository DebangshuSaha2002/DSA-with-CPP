//Check for duplicate elements in an array

#include<iostream>
using namespace std;

void printArr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int DupCheck(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }

    for(int i=1;i<size;i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main()
{
    int arr[10];
    int size;
    cout<<"Enter the num of elements:";
    cin>>size;

    cout<<"\nEnter "<<size<<" elements into the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printArr(arr,size);
    cout<<endl<<"The duplicate element is:"<<DupCheck(arr,size);
    return 0;
}