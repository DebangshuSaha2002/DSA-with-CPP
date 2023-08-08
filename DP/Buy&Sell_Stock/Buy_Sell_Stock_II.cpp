//Buy and Sell Stock II
//Leetcode - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/

// class Solution {
// public:
//     int solve(vector<int> &prices,int buy,int index){
//         if(index==prices.size()){
//             return 0;
//         }

//         int profit=0;

//         if(buy==1){
//             int sell_it= (-prices[index]) + solve(prices,0,index+1);
//             int ignore_sell=0 + solve(prices,1,index+1);
//             profit=max(sell_it,ignore_sell);
//         }
//         else{
//             int buy_it= (+prices[index]) + solve(prices,1,index+1);
//             int ignore_buy= 0 + solve(prices,0,index+1);
//             profit=max(buy_it,ignore_buy);
//         }
//         return profit;
//     }

//     int solveMem(vector<int> &prices,int buy,int index,vector<vector<int> > &dp){
//         if(index==prices.size()){
//             return 0;
//         }

//         if(dp[buy][index]!=-1){
//             return dp[buy][index];
//         }

//         int profit=0;

//         if(buy==1){
//             int sell_it= (-prices[index]) + solveMem(prices,0,index+1,dp);
//             int ignore_sell=0 + solveMem(prices,1,index+1,dp);
//             profit=max(sell_it,ignore_sell);
//         }
//         else{
//             int buy_it= (+prices[index]) + solveMem(prices,1,index+1,dp);
//             int ignore_buy= 0 + solveMem(prices,0,index+1,dp);
//             profit=max(buy_it,ignore_buy);
//         }
//         return dp[buy][index]=profit;
//     }

//     int solveTab(vector<int>& prices){
//         int n=prices.size();
//         vector<vector<int> > dp(2,vector<int> (n+1,0));
//         for(int index=n-1;index>=0;index--){
//             for(int buy=0;buy<=1;buy++){
//                 int profit=0;

//                 if(buy==1){
//                     int sell_it= (-prices[index]) + dp[0][index+1];
//                     int ignore_sell=0 + dp[1][index+1];
//                     profit=max(sell_it,ignore_sell);
//                 }
//                 else{
//                     int buy_it= (+prices[index]) + dp[1][index+1];
//                     int ignore_buy= 0 + dp[0][index+1];
//                     profit=max(buy_it,ignore_buy);
//                 }
//                 dp[buy][index]=profit;
//             }
//         }
//         return dp[1][0];
//     }

//     int solveTabSO(vector<int>& prices){
//         int n=prices.size();
        
//         vector<int>curr(2,0);
//         vector<int>next(2,0);
//         for(int index=n-1;index>=0;index--){
//             for(int buy=0;buy<=1;buy++){
//                 int profit=0;

//                 if(buy==1){
//                     int sell_it= (-prices[index]) + next[0];
//                     int ignore_sell=0 + next[1];
//                     profit=max(sell_it,ignore_sell);
//                 }
//                 else{
//                     int buy_it= (+prices[index]) + next[1];
//                     int ignore_buy= 0 + next[0];
//                     profit=max(buy_it,ignore_buy);
//                 }
//                 curr[buy]=profit;
//             }
//             next=curr;
//         }
//         return next[1];
//     }

//     int maxProfit(vector<int>& prices) {
//         // int n=prices.size();
//         // vector<vector<int> > dp(2,vector<int> (n+1,-1));
//         // return solveMem(prices,1,0,dp);

//         // return solveTab(prices);
//         return solveTabSO(prices);
//     }
// };