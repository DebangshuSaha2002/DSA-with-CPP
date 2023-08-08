//Buy a sell stock - I
//Leetcode - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int val=prices[0];
//         int profit=0;
//         for(int i=1;i<prices.size();i++){
//             int diff=prices[i]-val;
//             profit=max(profit,diff);
//             val=min(val,prices[i]);
//         }
//         return profit;
//     }
// };