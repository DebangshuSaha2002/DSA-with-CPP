//Buy and Sell stock III
//3d DP
//leetcode - https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iii/submissions/

// class Solution {
// public:
//     int solve(vector<int> & prices,int index,int buy,int limit){
//         int n=prices.size();
//         if(index>=n){
//             return 0;
//         }

//         if(limit==0){
//             return 0;
//         }

//         int profit=0;

//         if(buy==1){
//             int buy_it=-prices[index]+solve(prices,index+1,0,limit);
//             int ignore_buy=0+solve(prices,index+1,1,limit);
//             profit=max(buy_it,ignore_buy);
//         }
//         else{
//             int sell_it=+prices[index]+solve(prices,index+1,1,limit-1);
//             int ignore_sell=0+solve(prices,index+1,0,limit);
//             profit=max(sell_it,ignore_sell);
//         }
//         return profit;
//     }

//     int solveMem(vector<int> & prices,int index,int buy,int limit,vector<vector<vector<int> > > dp){
//         int n=prices.size();
//         if(index>=n){
//             return 0;
//         }

//         if(limit==0){
//             return 0;
//         }

//         if(dp[index][buy][limit]!=-1){
//             return dp[index][buy][limit];
//         }

//         int profit=0;

//         if(buy==1){
//             int buy_it=-prices[index]+solveMem(prices,index+1,0,limit,dp);
//             int ignore_buy=0+solveMem(prices,index+1,1,limit,dp);
//             profit=max(buy_it,ignore_buy);
//         }
//         else{
//             int sell_it=+prices[index]+solveMem(prices,index+1,1,limit-1,dp);
//             int ignore_sell=0+solveMem(prices,index+1,0,limit,dp);
//             profit=max(sell_it,ignore_sell);
//         }
//         return dp[index][buy][limit]=profit;
//     }

//     int solveTab(vector<int> & prices){
//         int n=prices.size();
//         vector<vector<vector<int> > > dp(n+1,vector<vector<int> > (2,vector<int>(3,0)));
//         for(int index=n-1;index>=0;index--){
//             for(int buy=0;buy<=1;buy++){
//                 for(int limit=1;limit<=2;limit++){
//                     int profit=0;

//                     if(buy==1){
//                         int buy_it=-prices[index]+dp[index+1][0][limit];
//                         int ignore_buy=0+dp[index+1][1][limit];
//                         profit=max(buy_it,ignore_buy);
//                     }
//                     else{
//                         int sell_it=+prices[index]+dp[index+1][1][limit-1];
//                         int ignore_sell=0+dp[index+1][0][limit];
//                         profit=max(sell_it,ignore_sell);
//                     }
//                     dp[index][buy][limit]=profit;
//                 }
//             }
//         }
//         return dp[0][1][2];
//     }

//     int maxProfit(vector<int>& prices) {
//         // return solve(prices,0,1,2);
//         // int n=prices.size();
//         // vector<vector<vector<int> > > dp(n+1,vector<vector<int> > (2,vector<int>(3,-1)));
//         // return solveMem(prices,0,1,2,dp);

//         return solveTab(prices);
//     }
// };