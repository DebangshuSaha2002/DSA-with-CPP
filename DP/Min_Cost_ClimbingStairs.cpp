// //https://leetcode.com/problems/min-cost-climbing-stairs/description/
// //Solv again at the above link *LEETCODE*

// class Solution {
// public:
//     // int solve(vector<int> &cost,int n,vector<int> &dp){
//     //     if(n<=1){
//     //         return cost[n];
//     //     }
//     //     if(dp[n]!=-1){
//     //         return dp[n];
//     //     }
//     //     dp[n]=min(solve(cost,n-1,dp),solve(cost,n-2,dp))+cost[n];
//     //     return dp[n];
//     // }

//     // int solve2(vector<int> &cost,int n){
//     //     vector<int> dp(n+1);
//     //     dp[1]=cost[1];
//     //     dp[0]=cost[0];

//     //     for(int i=2;i<n;i++){
//     //         dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
//     //     }
//     //     return min(dp[n-1],dp[n-2]);
//     // }

//     int solve3(vector<int> &cost,int n){
//         int prev=cost[0];
//         if(n==0){
//             return prev;
//         }
//         int curr=cost[1];
//         int val=0;
//         for(int i=2;i<n;i++){
//             val=min(prev,curr)+cost[i];
//             prev=curr;
//             curr=val;
//         }
//         return min(prev,curr);
//     }
//     int minCostClimbingStairs(vector<int>& cost) {
//         // int n=cost.size();
//         // vector<int> dp(n+1,-1);
//         // int ans=min(solve(cost,n-1,dp),solve(cost,n-2,dp));
//         // return ans;

//         //solvig using dp bottom-up approach
//         // int n=cost.size();
//         // return solve2(cost,n);

//         //optimizing space complexity 
//         int n=cost.size();
//         return solve3(cost,n);
//     }
// };