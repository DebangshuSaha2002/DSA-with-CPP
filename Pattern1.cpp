/*
1 2 3 4
1 2 3 4
1 2 3 4 
1 2 3 4 
*/

#include<iostream>
using namespace std;
// int main()
// {
//     for(int i=1;i<5;i++)
//     {
//         for(int j=1;j<5;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* print the reverse*/

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the num of rows: ";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<n-j+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
for n=3 print

1 2 3
4 5 6
7 8 9
*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     int k=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<k<<" ";
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* Print the patern
*
**
***
****
for n=4;
*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i=i;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* print the pattern
1
2 2
3 3 3
4 4 4 4
*/
// int main()
// {
//     int n;
//     cout<<"Enter the value for n: ";
//     cin>>n;

//     int k=1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k<<" ";
//         }
//         k=k+1;
//         cout<<endl;
//     }
//     return 0;
// }

/*Print the pattern
1
2 3
4 5 6
7 8 9 10
*/


// int main()
// {
//     int n;
//     int k=1;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k<<" ";
//             k=k+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
Print the pattern
1
2 3
3 4 5
4 5 6 7
*/

// int main()
// {
//     int n;
//     cin>>n;
//     int k=-1;
//     for(int i=1;i<=n;i++)
//     {
//         k++;
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k+j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
Print the pattern
1
21
321
4321
*/

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i;j>=1;j--)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
AAA
BBB
CCC
*/

// int main()
// {
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             char ch1=ch+i-1;
//             cout<<ch1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/* 
ABC
ABC
ABC
*/

// int main()
// {
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             char ch1=ch+j-1;
//             cout<<ch1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
ABC
DEF
GHI
*/

// int main()
// {
//     char ch='A';
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
A
BC
DEF
*/

// int main()
// {
//     int n;
//     cin>>n;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
A
BC
CDE
DEFG
*/

// int main()
// {
//     int n;
//     cin>>n;
//     int k=-1;
//     char ch='A';
//     for(int i=0;i<n;i++)
//     {
//         k++;
//         for(int j=0;j<=i;j++)
//         {
//             char ch1=ch+j+k;
//             cout<<ch1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
D
CD
BCD
ABCD
*/

int main()
{
    int n;
    cin>>n;
    int k=-1;
    char ch='A'+n-1;
    for(int i=0;i<n;i++)
    {
        k++;
        for(int j=0;j<=i;j++)
        {
            char ch1=ch-k-j;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}