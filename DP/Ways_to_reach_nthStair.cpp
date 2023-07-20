// //https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include <bits/stdc++.h> 
// #define MOD 1000000007
// int findSteps(int n,vector<int> &dp){
//     dp[0]=1;
//     dp[1]=1;

//     if(dp[n]!=-1){
//         return dp[n]%MOD;
//     }
//     else{
//         dp[n]=findSteps(n-1,dp)+findSteps(n-2,dp);
//         return dp[n]%MOD;
//     }
   
// }
// int countDistinctWays(int nStairs) {
//     vector<int>dp(nStairs+1);
//     for(int i=0;i<=nStairs;i++){
//         dp[i]=-1;
//     }
//     return findSteps(nStairs,dp);
// }