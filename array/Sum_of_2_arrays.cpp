#include<iostream>
#include<vector>
using namespace std;

void add_arrays(int arr1[],int n,int arr2[],int m)
{
    vector <int> arr3;
    int i=n-1;
    int j=m-1;
    int carry=0;
    while(i>=0 && j>=0)
    {
        int v1=arr1[i];
        int v2=arr2[j];
        int sum=v1+v2+carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
        i--;
        j--;
    }

    while(i>=0)
    {
        int sum=arr1[i]+carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
        i--;
    }
    while(j>=0)
    {
        int sum=arr2[j]+carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
        j--;
    }
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        arr3.push_back(sum);
    }

    int s=0;
    int e=arr3.size()-1;
    while(s<=e)
    {
        swap(arr3[s++],arr3[e--]);
    }
    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i]<<" ";
    }
}

int main()
{
    int arr1[4]={1,2,3,4};
    int arr2[2]={9,9};
    add_arrays(arr1,4,arr2,2);
}