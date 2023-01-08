//Swapping alternate elements in an array

#include<iostream>
using namespace std;

void printarr(int arr[],int size)
{
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void reverse_alternate(int arr[],int size)
{
    int s1=0;
    int s2=1;
    while(s2<=size-1)
    {
        swap(arr[s1],arr[s2]);
        s1=s1+2;
        s2=s2+2;
    }
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

    reverse_alternate(arr,size);
    printarr(arr,size);
    return 0;
}