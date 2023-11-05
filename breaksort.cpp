#include <vector>
#include<iostream>
using namespace std;

long long minimumSplits(vector<int> arr) {
    long long totalSplits = 0; 
    long long prevVal = arr.back(); 

    for (int idx = arr.size() - 2; idx >= 0; idx--) { 
        totalSplits += (arr[idx] - 1) / prevVal; 
        long long numGroups = ((arr[idx] - 1) / prevVal + 1); 
        prevVal = arr[idx] / numGroups; 
    } 

    
    return totalSplits;
}

int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(41);
    arr.push_back(8);
    // arr.push_back(7);
    // arr.push_back(9);
    cout<<minimumSplits(arr)<<endl;
}