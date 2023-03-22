/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

#include<iostream>
using namespace std;

int stairs(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return stairs(n-1)+stairs(n-2);
}

int main()
{
    int n;
    cin>>n;
    int ans=stairs(n);
    cout<<ans<<endl;
}