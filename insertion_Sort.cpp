#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int> &arr){
    for(int j=1;j<arr.size();j++){
        int key=arr[j];
        int i=j;
        while(i>0 && arr[i-1]>key){
            arr[i]=arr[i-1];
            i=i-1;
        }
        arr[i]=key;
    }
}

int main(){
    vector<int> arr;
    arr.push_back(74);
    arr.push_back(32);
    arr.push_back(89);
    arr.push_back(21);
    arr.push_back(55);
    insertionsort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}