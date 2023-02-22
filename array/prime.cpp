#include<iostream>
using namespace std;
bool isprime(int n)
{
    int count=0;
    if(n==0 || n==1)
    {
        return false;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}
int main()
{
    int n=100;
    for(int i=0;i<=n;i++){
        if(isprime(i))
        {
            cout<<i<<" ";
        }
    }
    return 0;
}