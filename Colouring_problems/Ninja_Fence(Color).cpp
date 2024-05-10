// #include <bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std;

#define MOD 1000000007
int add(int a,int b){
    return ((a%MOD)+(b%MOD))%MOD;
}

int mul(int a,int b){
    return ((a%MOD)*(b%MOD))%MOD;
}

int solve(int n,int k){
    if(n==1){
        return k;
    }

    if(n==2){
        return add(k,mul(k,(k-1)));
    }

    int ans=add(mul(solve(n-2,k),(k-1)),mul(solve(n-1,k),(k-1)));
    return ans;
}


int solveMem(int n,int k,vector<int> &dp){
    if(n==1){
        return k;
    }

    if(n==2){
        return add(k,mul(k,(k-1)));
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n]=add(mul(solveMem(n-2,k,dp),(k-1)),mul(solveMem(n-1,k,dp),(k-1)));
    return dp[n];
}

int solveTab(int n,int k){
    vector<int> dp(n+1);
    dp[1]=k;
    dp[2]=add(k,mul(k,(k-1)));
    for (int i=3;i<=n;i++){
        int first=mul(dp[i-2],(k-1));
        int second=mul(dp[i-1],(k-1));
        dp[i]=add(first,second);
    }
    return dp[n];
}

int solveTabSO(int n,int k){
    int prev2=k;
    int prev1=add(k,mul(k,(k-1)));;
    for (int i=3;i<=n;i++){
        int first=mul(prev1,(k-1));
        int second=mul(prev2,(k-1));
        int ans=add(first,second);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}

int numberOfWays(int n, int k) {
    // return solve(int n,int k);
    // vector<int> dp(n+1,-1);
    // return solveMem(n,k,dp);

    // return solveTab(n,k);
    return solveTabSO(n,k);
}



int main(){
    int n,k;
    cin>>n>>k;
    cout<<numberOfWays(n,k)<<endl;
    return 0;
}