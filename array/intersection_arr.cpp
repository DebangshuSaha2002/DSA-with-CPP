// Time complexity is O(n*m)
// where the size of arr1 is n
// and the size of arr2 is m

#include<iostream>
#include<vector>
using namespace std;

void create_arr(int arr[],int size)
{
    cout<<endl<<"Enter "<<size<<" elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
// //VECTOR FUNCTION
// vector <int> intersection_arr(vector <int> &arr1 ,int n, vector <int>& arr2, int m)
// {
//     vector <int> p;
//     for(int i=0;i<n;i++)
//     {
//         int element=arr1[i];
//         for(int j=0;j<m;j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 p.push_back(element);
//                 arr2[j]=INT_MIN;
//                 break;
//             }
//         }
//     }
//     return p;
// }

// int main()
// {
//     int n,m;
//     int arr1[100],arr2[100];
//     cout<<endl<<"Enter the size of array arr1:";
//     cin>>n;
//     create_arr(arr1,n);
//     print_arr(arr1,n);

//     cout<<endl<<"Enter the size of array arr2:";
//     cin>>m;
//     create_arr(arr2,m);
//     print_arr(arr2,m);

//     //INTERSECTION CODE
//     vector <int> p;
//     for(int i=0;i<n;i++)
//     {
//         int element=arr1[i];
//         for(int j=0;j<m;j++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 p.push_back(element);
//                 arr2[j]=INT_MIN;
//                 break;
//             }
//         }
//     }

//     for(int i=0;i<p.size();i++)
//     {
//         cout<<p[i]<<" ";
//     }  
//     return 0;
// }

//OPTIMISED solution having time complexity O(max(n,m))

int main()
{
    int n,m;
    int arr1[100],arr2[100];
    cout<<endl<<"Enter the size of array arr1:";
    cin>>n;
    create_arr(arr1,n);
    print_arr(arr1,n);

    cout<<endl<<"Enter the size of array arr2:";
    cin>>m;
    create_arr(arr2,m);
    print_arr(arr2,m);

    //INTERSECTION CODE
    vector <int> p;
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
        {
            p.push_back(arr1[i]);
            i++;
            j++;
        }
        
        else if(arr1[i]<arr2[j])
        {
            i++;
        }

        else if(arr1[i]>arr2[j])
        {
            j++;
        }
    }

    for(int i=0;i<p.size();i++)
    {
        cout<<p[i]<<" ";
    }
    return 0;
}
