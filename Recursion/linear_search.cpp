#include<iostream>

using namespace std;

bool search(int *arr,int size,int k)
{
    if(size==0)
    {
        return false;
    }
    else if(arr[0]==k)
    {
        return true;
    }
    bool rem=search(arr+1,size-1,k);  
    return rem;  
}
int main()
{
    int arr[5]={1,25,2,34,55};
    int size=5;
    int key=2;
    bool ans=search(arr,size,key);
    if(ans)
    {
        cout<<"Found";
    }
    else{
        cout<<"Not found";
    }
    return 0;
}