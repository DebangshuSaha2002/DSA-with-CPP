#include<iostream>
using namespace std;

void swap(int& a,int& b)
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main()
{
    int a=5;
    int b=6;
    cout<<"Before swapping "<<"a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping "<<"a="<<a<<" and b="<<b<<endl;
    return 0;
}