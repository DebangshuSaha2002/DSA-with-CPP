//Find the square root of a number using binary search

#include<iostream>
using namespace std;

long long int bin_search(int n)
{
    int s=1;
    int e=n;
    int mid=s+(e-s)/2;
    
    int ans;
    while(s<=e)
    {
        long long int sq=mid*mid;
        if(sq==n)
        {
            return mid;
        }
        else if(sq<n)
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double moreprecision(int n,int precision,int x)
{
    double ans=x;
    double factor=1;
    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
        for(double j=0;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int x=bin_search(n);
    cout<<"Ans = "<<moreprecision(n,3,x);
    return 0;
}