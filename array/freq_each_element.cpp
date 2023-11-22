//Frequency of each element in an array
#include<vector>
#include<map>
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

void calculate_freq(int arr[],int size,map<int,int> m)
{
    // int count;
    // int c[size];
    // int visited=-1;
    // for(int i=0;i<size;i++)
    // {
    //     count=1;
    //     for(int j=i+1;j<size;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             c[j]=visited;
    //             count++;
    //         }
    //     }
    //     if(c[i]!=visited)
    //     {
    //         c[i]=count;
    //     }
    // }
    // for(int i=0;i<size;i++)
    // {
    //     if(c[i]!=visited)
    //     {
    //         cout<<arr[i]<<" - "<<c[i]<<"times"<<endl;
    //     }
    // }
    for(int i=0;i<size;i++){
        m[arr[i]]++;
    }   

    for(auto it:m){
        cout<<it.first<<" "<<it.second;
        cout<<endl;
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
    map<int,int> m;
    calculate_freq(arr,size,m);
    // int len=sizeof(arr)/sizeof(arr[0]);
    // cout<<len;
    return 0;
}