#include<iostream>
using namespace std;

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[6];
    int size;
    cout<<"Enter the num of elements: ";
    cin>>size;
    cout<<"Enter "<<size<<" elements into the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printarr(arr,size);

    reverse(arr,size);
    cout<<"\nAfter reversing the array is:"<<endl;
    printarr(arr,size);

    return 0;
}