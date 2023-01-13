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

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }
    }
    int sum=arr[0]+arr[n-1];
    cout<<endl<<"SUM ="<<sum;
    return 0;
}
