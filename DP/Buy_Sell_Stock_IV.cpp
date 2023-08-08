//Buy and sell stock IV
//3d DP
//leetcode

//T.C=O(n)
//S.C=O(2*k)

// class Solution {
// public:
//     int solve(int k,vector<int> & prices,int i,int buy){
//         if(i >= prices.size()){
//             return 0;
//         }

//         if(k==0){
//             return 0;
//         }
//         int profit=0;
//         if(buy){
//             int buy_it=-prices[i]+solve(k,prices,i+1,0);
//             int skip_buy=0+solve(k,prices,i+1,1);
//             profit=max(buy_it,skip_buy);
//         }
//         else{
//             int sell_it=+prices[i]+solve(k-1,prices,i+1,1);
//             int skip_sell=0+solve(k,prices,i+1,0);
//             profit=max(sell_it,skip_sell);
//         }
//         return profit;
//     }

//     int solveMem(int k,vector<int> & prices,int i,int buy,vector<vector<vector<int> > > & dp){
//         if(i >= prices.size()){
//             return 0;
//         }

//         if(k==0){
//             return 0;
//         }

//         if(dp[i][buy][k]!=-1){
//             return dp[i][buy][k];
//         }

//         int profit=0;
//         if(buy){
//             int buy_it=-prices[i]+solveMem(k,prices,i+1,0,dp);
//             int skip_buy=0+solveMem(k,prices,i+1,1,dp);
//             profit=max(buy_it,skip_buy);
//         }
//         else{
//             int sell_it=+prices[i]+solveMem(k-1,prices,i+1,1,dp);
//             int skip_sell=0+solveMem(k,prices,i+1,0,dp);
//             profit=max(sell_it,skip_sell);
//         }
//         return dp[i][buy][k]=profit;
//     }

//     int solveTab(int lim, vector<int>& prices){
//         int n=prices.size();
//         vector<vector<vector<int> > > dp(n+1,vector<vector<int> > (2,vector<int>(lim+1,0)));

//         for(int i=n-1;i>=0;i--){
//             for(int buy=0;buy<=1;buy++){
//                 for(int k=1;k<=lim;k++){
//                     int profit=0;
//                     if(buy){
//                         int buy_it=-prices[i]+dp[i+1][0][k];
//                         int skip_buy=0+dp[i+1][1][k];
//                         profit=max(buy_it,skip_buy);
//                     }
//                     else{
//                         int sell_it=+prices[i]+dp[i+1][1][k-1];
//                         int skip_sell=0+dp[i+1][0][k];
//                         profit=max(sell_it,skip_sell);
//                     }
//                     dp[i][buy][k]=profit;
//                 }
//             }
//         }
//         return dp[0][1][lim];
//     }

//     int solveTabSO(int lim, vector<int>& prices){
//         int n=prices.size();

//         vector<vector<int> > curr(2,vector<int>(lim+1,0));
//         vector<vector<int> > next(2,vector<int>(lim+1,0));

//         for(int i=n-1;i>=0;i--){
//             for(int buy=0;buy<=1;buy++){
//                 for(int k=1;k<=lim;k++){
//                     int profit=0;
//                     if(buy){
//                         int buy_it=-prices[i]+next[0][k];
//                         int skip_buy=0+next[1][k];
//                         profit=max(buy_it,skip_buy);
//                     }
//                     else{
//                         int sell_it=+prices[i]+next[1][k-1];
//                         int skip_sell=0+next[0][k];
//                         profit=max(sell_it,skip_sell);
//                     }
//                     curr[buy][k]=profit;
//                 }
//             }
//             next=curr;
//         }
//         return next[1][lim];
//     }

//     int maxProfit(int k, vector<int>& prices) {
//         // int n=prices.size();
//         // vector<vector<vector<int> > > dp(n+1,vector<vector<int> > (2,vector<int>(k+1,-1)));
//         // return solveMem(k,prices,0,1,dp);

//         // return solveTab(k,prices);

//         return solveTabSO(k,prices);
//     }
// };