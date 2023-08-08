// //Buy and sell stocks IV
// //here the space complexity is O(k)
// //Leetcode - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/submissions/

// class Solution {
// public:

//     int solve(int k,vector<int> & prices,int index,int t){
//         if(index>=prices.size()){
//             return 0;
//         }

//         if(t==2*k){
//             return 0;
//         }

//         int profit=0;
//         if(t%2==0){
//             int buy_it=-prices[index]+solve(k,prices,index+1,t+1);
//             int skip_buy=solve(k,prices,index+1,t);
//             profit=max(buy_it,skip_buy);
//         }
//         else{
//             int sell_it=prices[index]+solve(k,prices,index+1,t+1);
//             int skip_sell=solve(k,prices,index+1,t);
//             profit=max(sell_it,skip_sell);
//         }
//         return profit;
//     }

//     int solveMem(int k,vector<int> & prices,int index,int t,vector<vector<int> > &dp){
//         if(index>=prices.size()){
//             return 0;
//         }

//         if(t==2*k){
//             return 0;
//         }
//         if(dp[index][t]!=-1){
//             return dp[index][t];
//         }
//         int profit=0;
//         if(t%2==0){
//             int buy_it=-prices[index]+solveMem(k,prices,index+1,t+1,dp);
//             int skip_buy=solveMem(k,prices,index+1,t,dp);
//             profit=max(buy_it,skip_buy);
//         }
//         else{
//             int sell_it=prices[index]+solveMem(k,prices,index+1,t+1,dp);
//             int skip_sell=solveMem(k,prices,index+1,t,dp);
//             profit=max(sell_it,skip_sell);
//         }
//         return dp[index][t]=profit;
//     }

//     int solveTab(int k,vector<int> &prices){
//         int n=prices.size();
//         vector<vector<int> > dp(n+1,vector<int>(2*k+1,0));

//         for(int index=n-1;index>=0;index--){
//             for(int t=0;t<2*k;t++){
//                 int profit=0;
//                 if(t%2==0){
//                     int buy_it=-prices[index]+dp[index+1][t+1];
//                     int skip_buy=dp[index+1][t];
//                     profit=max(buy_it,skip_buy);
//                 }
//                 else{
//                     int sell_it=prices[index]+dp[index+1][t+1];
//                     int skip_sell=dp[index+1][t];
//                     profit=max(sell_it,skip_sell);
//                 }
//                 dp[index][t]=profit;
//             }
//         }
//         return dp[0][0];
//     }

//     int solveTabSO(int k,vector<int> &prices){
//         int n=prices.size();
        
//         vector<int> curr(2*k+1,0);
//         vector<int> next(2*k+1,0);

//         for(int index=n-1;index>=0;index--){
//             for(int t=0;t<2*k;t++){
//                 int profit=0;
//                 if(t%2==0){
//                     int buy_it=-prices[index]+next[t+1];
//                     int skip_buy=next[t];
//                     profit=max(buy_it,skip_buy);
//                 }
//                 else{
//                     int sell_it=prices[index]+next[t+1];
//                     int skip_sell=next[t];
//                     profit=max(sell_it,skip_sell);
//                 }
//                 curr[t]=profit;
//             }
//             next=curr;
//         }
//         return next[0];
//     }

//     int maxProfit(int k, vector<int>& prices) {

//         // return solve(k,prices,0,0);
//         // int n=prices.size();
//         // vector<vector<int> > dp(n+1,vector<int>(2*k+1,-1));
//         // return solveMem(k,prices,0,0,dp);

//         // return solveTab(k,prices);

//         return solveTab(k,prices);
//     }
// };