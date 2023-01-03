#include<iostream>
using namespace std;

void PrintArray(int a[],int size)
{
    cout<<endl<<"The array is:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
}

int maxElement(int arr[],int size)
{
    int max=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    //returning the maximum value
    return max;
}


/*
It can also be done as

int maxElement(int arr[],int size)
{
    int maxi=INT_MIN;
    for(int i=0;i<size;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    //returning the maximum value
    return maxi;
}

*/

int minElement(int arr[],int size)
{
    int min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[10];
    cout<<"Enter 9 elements into the array";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }

    PrintArray(arr,10);
    cout<<"Maximum element is: "<<maxElement(arr,10)<<endl;
    cout<<"Minimum element is: "<<minElement(arr,10)<<endl;
    return 0;
}