//Check for duplicate elements in an array

#include<iostream>
#include<vector>
using namespace std;

void printArr(vector <int> arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

vector <int> DupCheck(vector <int> & arr,int size)
{
    vector <int> p;
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
    for(int i=0;i<size;)
    {
        if(arr[i]==arr[i+1])
        {
            p.push_back(arr[i]);
            i=i+2;
        }
        else
        {
            i++;
        }
    }
    return p;
}

int main()
{
    vector <int> arr;
    int size;
    cout<<"Enter the num of elements:";
    cin>>size;

    cout<<"\nEnter "<<size<<" elements into the array:"<<endl;
    for(int i=0;i<size;i++)
    {
        int a=0;
        cin>>a;
        arr.push_back(a);
    }

    printArr(arr,size);
    // cout<<endl<<"The duplicate element is:"<<DupCheck(arr,size);
    vector <int> p;
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
    for(int i=0;i<size;)
    {
        if(arr[i]==arr[i+1])
        {
            p.push_back(arr[i]);
            i=i+2;
        }
        else
        {
            i++;
        }
    }
    for(int i=0;i<p.size();i++)
    {
        cout<<endl<<p[i]<<" ";
    }
    return 0;

}