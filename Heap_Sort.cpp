#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;

void maxheapify(vector<int> &arr,int n,int i,int &c){
    int left=2*i+1;
    int right=2*i+2;
    int largest=i;

    while(left<n && arr[left]>arr[largest]){
        largest=left;
    }

    while(right<n && arr[right]>arr[largest]){
        largest=right;
    }

    c++;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        maxheapify(arr,n,largest,c);
    }
}

void heapsort(vector<int> &arr,int n,int &c){
    for(int i=n-1;i>=1;i--){
        swap(arr[i],arr[0]);
        maxheapify(arr,i-1,0,c);
    }
}

int main(){
    vector<int> arr;
    int n=10;
    int c=0;
    for(int i=0;i<10;i++){
        int num=rand()%10;
        arr.push_back(num);
    }

    cout<<"\nArray is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=n/2-1;i>=0;i--){
        maxheapify(arr,n,i,c);
    }
    //maxheap
    cout<<"\nAfter MaxHeapify"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //do heap sort
    heapsort(arr,n,c);

    cout<<"\nAfter heapsort:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nC is:"<<c<<endl;
    cout<<endl;
}