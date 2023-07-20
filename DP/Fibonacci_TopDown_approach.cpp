//This is the Top Down Approach.
//Where we are storing the overlapping subproblems answers
//in a 1d array and using it when needed

//TC=O(n)+O(n)
//SC=O(n)

#include<iostream>
#include<vector>

using namespace std;

int fibo(int n,vector<int> &dp){
    if(n<=1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    else{
        dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
        return dp[n];
    }
}

int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    vector<int> dp(n+1);
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    int ans=fibo(n,dp);
    cout<<"Fibonacci series nth number is: "<<ans<<endl;
    return 0;
}