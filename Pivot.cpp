#include<iostream>
#include<vector>

using namespace std;

int pivot(vector<int> &ans,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(ans[mid]>=ans[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main(){
    vector<int> ans;
    ans.push_back(4);
    ans.push_back(5);
    ans.push_back(6);
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(3);    
    int n=ans.size();

    cout<<"Pivot is : "<<pivot(ans,n)<<endl;
}