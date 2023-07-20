//In this bottom up approach we make use of tabulation
#include<iostream>
#include<vector>

using namespace std;

int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    //Step-1 
    vector<int> dp(n+1);
    
    //Step-2
    dp[0]=0;
    dp[1]=1;

    //Step-3 
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    cout<<"The "<<n<<"th fibonacci number is:"<<dp[n]<<endl;
    return 0;
}