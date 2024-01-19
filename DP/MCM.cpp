//Matrix Chain Multiplication
#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int MCMmem(int i,int j,vector<int> arr,vector<vector<int> >dp,int &count){
    if(i==j){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int mini=1e9;
    for(int k=i;k<j;k++){
        count++;
        int steps=(arr[i-1]*arr[k]*arr[j]) + MCMmem(i,k,arr,dp,count) + MCMmem(k+1,j,arr,dp,count);
        if(steps<mini){
            mini=steps;
        }
    }

    return dp[i][j]=mini;
}


int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    // arr.push_back(2);
    // arr.push_back(2);


    int n=arr.size()-1;
    
    vector<vector<int> > dp(arr.size(),vector<int>(arr.size(),-1));
    int count=0;
    int ans=MCMmem(1,n,arr,dp,count);
    cout<<ans<<endl;
    cout<<"\nSteps:"<<count<<endl;
    return 0;
}