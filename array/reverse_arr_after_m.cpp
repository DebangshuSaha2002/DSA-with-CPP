#include<iostream>
#include<vector>
using namespace std;


void create_arr(int arr[],int size)
{
    cout<<endl<<"Enter "<<size<<" elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int n;
    int arr[100];
    cout<<endl<<"Enter the size of array arr1:";
    cin>>n;
    create_arr(arr,n);
    cout<<endl<<"The array is: ";
    print_arr(arr,n);

    int m;
    cout<<"Enter the value of m:";
    cin>>m;

    int start=m+1;
    int end=n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}