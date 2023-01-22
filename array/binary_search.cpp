//Binary search

#include<iostream>
using namespace std;

void create_arr(int arr[],int size)
{
    cout<<"Enter "<<size<<" elements into the array:\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j])
            {
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
}

void print_arr(int arr[],int size)
{
    cout<<"The array is:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int binary_search(int arr[],int size,int key)
{
    int high=size-1;
    int low=0;
    int mid=(high+low)/2;

    while(low<=high)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            low=0;
            high=mid-1;
        }
        else if(key>arr[mid])
        {
            low=mid+1;
            high=size-1;
        }
        mid=(low+high)/2;
    }
    return -1;
}

int main()
{
    int arr[100];
    int s;
    cout<<"Enter the num of elements:";
    cin>>s;

    create_arr(arr,s);

    //sorting the array
    sort(arr,s);
    print_arr(arr,s);

    //Binary search
    int key;
    cout<<"\nEnter the element u want to search:";
    cin>>key;
    int i=binary_search(arr,s,key);
    if(i>=0)
    {
        cout<<"The element is found and is at index "<<i<<endl;
    }
    else
    {
        cout<<"The element is not found in the array"<<endl;
    }
    return 0;
}