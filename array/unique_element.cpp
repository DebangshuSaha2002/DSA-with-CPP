//Finding unique element in an array using XOR(EASY approach)

#include<iostream>
using namespace std;

void printarr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int returnunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main(){

    int arr[5];
    int size;
    cout<<"Enter the num of elements:";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printarr(arr,size);
    cout<<endl<<"The unique element is:"<<returnunique(arr,size)<<endl;
    return 0;
}