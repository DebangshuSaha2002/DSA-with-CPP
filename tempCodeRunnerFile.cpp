#include<iostream>
using namespace std;

int partition(int *arr,int s,int e)
{
    int c=0;
    int pivot=arr[s];
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
        {
            c++;
        }
    }
    int pivotindex=s+c;
    swap(arr[s],arr[pivotindex]);
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(j>pivotindex && i<pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void quicksort(int *arr, int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int p=partition(arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}

int main()
{
    int arr[5]={2,4,1,6,9};
    quicksort(arr,0,4);

    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}