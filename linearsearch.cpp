#include<iostream>
using namespace std;

bool linearsearch(int arr[],int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5];
    int size;
    cout<<"Enter the size of the array:";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element u want to search: ";
    cin>>key;
    int a=linearsearch(arr,key,size);

    if(a!=0)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}