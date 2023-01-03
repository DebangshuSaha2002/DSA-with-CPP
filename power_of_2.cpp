#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int flag=0;
    for(int i=0;i<31;i++)
    {
        if(n==(pow(2,i)))
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<endl<<"Yes "<<n<<" is a power of 2"<<endl;
    }
    else{
        cout<<endl<<"Is not a power of 2"<<endl;
    }
    return 0;
}