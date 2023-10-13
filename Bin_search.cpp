#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(vector<int> &arr,int s){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==s){
            return mid;
        }
        else if(s<arr[mid]){
            low=mid+1;
        }
        else if(s>arr[mid]){
            high=mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr;
    arr.push_back(74);
    arr.push_back(32);
    arr.push_back(89);
    arr.push_back(21);
    arr.push_back(55);
    //sort the array
    sort(arr.begin(),arr.end());
    int index=binary_search(arr,55);
    if(index!=-1){
        cout<<"Element is present in the array at index:"<<index<<endl;
    }else{
        cout<<"Element is not found in the array"<<endl;
    }
}