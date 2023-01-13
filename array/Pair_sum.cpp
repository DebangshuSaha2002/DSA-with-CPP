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


int main()
{
    int n;
    int arr[100];
    cout<<endl<<"Enter the size of array arr1:";
    cin>>n;
    create_arr(arr,n);
    cout<<endl<<"The array is: ";
    print_arr(arr,n);

    //pair sum
    int s;
    cout<<endl<<"Enter the pair sum value:";
    cin>>s;
    vector <vector <int> > ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==s)
            {
                vector <int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    // for (int i=0;i<ans.size();i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
}