#include<iostream>
#include<math.h>
using namespace std;

int power(int n)
{
    int ans=0;
    if(n==0)
    {
        return 1;
    }
    else
        return 2*power(n-1);
} 

int main()
{
    int n;
    cin>>n;
    int val=power(n);
    cout<<"2^"<<n<<" is = "<<val<<endl;
    return 0;
}