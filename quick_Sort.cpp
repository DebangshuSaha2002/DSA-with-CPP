//Quick sort 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int partition(vector<int> &arr,int low,int high,int &c){
    int pivot=arr[high];
    int i=low;
    for(int j=low;j<high;j++){
        c++;
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[high]);
    return i;
}

void quicksort(vector<int> &arr,int low,int high,int &c){
    if(low<high){
        int p=partition(arr,low,high,c);
        quicksort(arr,low,p-1,c);
        quicksort(arr,p+1,high,c);
    }
}

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(25);
    arr.push_back(15);
    arr.push_back(40);
    arr.push_back(25);
    arr.push_back(30);
    arr.push_back(35);
    arr.push_back(20);
    arr.push_back(25);
    // arr.push_back(45);
    // arr.push_back(50);
    // arr.push_back(10);
    // arr.push_back(25);
    // arr.push_back(15);
    // arr.push_back(20);
    int low=0;
    int high=arr.size()-1;
    int c=0;
    cout<<"\nPrinting the Unsorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    quicksort(arr,low,high,c);

    cout<<"\nPrinting the Sorted array: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"\nComparisons are:"<<c<<endl;
    return 0;
}