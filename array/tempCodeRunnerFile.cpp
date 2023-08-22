#include<iostream>
#include<vector>
using namespace std;

void rotatearr(int arr[],int n,int k)
{
    vector <int> finalans(n);
    for(int i=0;i<n;i++)
    {
        finalans[(k+i)%n]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<finalans[i]<<" ";
    }
}

int main()
{
    int arr[6]={1,2,3,4,5,6};
    int k=3;
    rotatearr(arr,6,k);
    return 0;
}