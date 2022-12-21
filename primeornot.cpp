#include<iostream>
using namespace std;
// int main()
// {
//     int n,count=0;
//     cout<<"Enter the num:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     if(count==2)
//     {
//         cout<<n<<" is prime"<<endl;
//     }
//     else{
//         cout<<n<<" is not prime"<<endl;
//     }
//     return 0;
// }

int main()
{
    for(int i=0;i<=15;i=i+2)
    {
        cout<<i<<" ";
        if(i&1)
        {
            continue;
        }
        i++;

    }
}