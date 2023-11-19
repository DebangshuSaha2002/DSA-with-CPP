#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int solve(int i,int j,vector<int> &arr,vector<vector<int> > &dp){
    if(i==j){
        return 0;
    }

    if(dp[i][j]!=-1){
        return dp[i][j];
    }

    int mini=1e9;
    for(int k=i;k<j;k++){
        int steps=(arr[i-1]*arr[k]*arr[j])+solve(i,k,arr,dp)+solve(k+1,j,arr,dp);
        if(steps<mini){
            mini=steps;
        }
    }
    return dp[i][j]=mini;
}

int main(){
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(10);
    arr.push_back(15);
    arr.push_back(20);
    arr.push_back(25);

    int n=arr.size()-1;
    vector<vector<int> > dp(arr.size(),vector<int>(arr.size(),-1));
    cout<<"Ans is :"<<solve(1,n,arr,dp);
    return 0;
}