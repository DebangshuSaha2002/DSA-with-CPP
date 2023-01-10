//Frequency of each element in an array

#include<iostream>
using namespace std;

void printArr(int arr[],int size)
{
    cout<<"The elements in the array is:"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void calculate_freq(int arr[],int size)
{
    int count;
    int c[size];
    int visited=-1;
    for(int i=0;i<size;i++)
    {
        count=1;
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                c[j]=visited;
                count++;
            }
        }
        if(c[i]!=visited)
        {
            c[i]=count;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(c[i]!=visited)
        {
            cout<<arr[i]<<" - "<<c[i]<<"times"<<endl;
        }
    }
}

int main()
{
    int arr[10];
    int size;
    cout<<"Enter the num of elements: ";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    printArr(arr,size);
    calculate_freq(arr,size);
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<len;
    return 0;
}