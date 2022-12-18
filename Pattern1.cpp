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

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         char ch='A'+n-i;
//         for(int j=1;j<=i;j++)
//         {
//             cout<<ch<<" ";
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
*****
****
***
**
*
*/

// int main()
// {
//     int n;
//     cout<<"Enter the value for n: ";
//     cin>>n;
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*
    *
   **
  ***
 ****
*****

*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int i=1;
//     for(int i=1;i<=n;i++)
//     {
//         int space=n-i;
//         while(space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*

****
 ***
  **
   *

*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;

//     for(int i=n;i>=1;i--)
//     {

//         int space=n-i;
//         while(space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*

1111
 222
  33
   4
*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n";
//     cin>>n;
//     int k=1;
//     for(int i=n;i>=1;i--)
//     {
//         int space=n-i;
//         while(space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k;
//         }
//         k=k+1;
//         cout<<endl;
//     }
//     return 0;
// }

/*
    1
   22
  333
 4444
55555

*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     int k=1;
//     for(int i=1;i<=n;i++)
//     {
//         int space=n-i;
//         while(space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k;
//         }
//         k=k+1;
//         cout<<endl;
//     }
//     return 0;
// }

/*
1234
 234
  34
   4
*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         for(int space =0;space<i;space++)
//         {
//             cout<<" ";
//         }
//         for(int j=i;j<=n;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*

      1
    2 3
  4 5 6
7 8 9 10

*/

// int main()
// {
//     int n;
//     cout<<"Enter the value for n: ";
//     cin>>n;

//     int k=1;
//     for(int i=1;i<=n;i++)
//     {
//         int space=n-i;
//         while(space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<k;
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*

    1
   121
  12321
 1234321
123454321

*/

// int main()
// {
//     int n;
//     cout<<"Enter the value of n:";
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         int space=n-i;
//         while(space)
//         {
//             cout<<" ";
//             space=space-1;
//         }
//         for(int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         for(int k=i-1;k>=1;k--)
//         {
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        int o=1;
        for(int l=2;l<=8;l=2*o)
        {
            // o++;
            // for(int h=l;h<=8;h=++)
            // {
                cout<<"*";
            // }
        }
        for(int k=i;k>=1;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}