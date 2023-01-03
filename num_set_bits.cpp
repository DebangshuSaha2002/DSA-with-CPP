#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the num:";
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<"Num of set bits are:"<<count<<endl;
    return 0;
}