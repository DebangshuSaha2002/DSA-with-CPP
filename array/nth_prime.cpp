#include<iostream>
using namespace std;

bool isprime(int num)
{
    int counter=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            counter=1;
        }
    }
    if(counter==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int n=5;
    int num=1;
    int count=0;
    while(true)
    {
        num++;
        cout<<"checking num:"<<num;
        if(isprime(num))
        {
            count++;
        }
        if(count==n)
        {
            cout<<num<<endl;
            break;
        }
    }
}