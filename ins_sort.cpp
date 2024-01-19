#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i;
        while(j>0 && arr[j-1]>key){
            arr[j]=arr[j-1];
            j--;
            ++count;
        }
        arr[j]=key;
    }
    cout<<"The count is:"<<count<<endl;
}

int main(){
    int arr[]={3,-1,4,9,2,6,8,10,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

