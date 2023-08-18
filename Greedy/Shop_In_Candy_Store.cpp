//Shop in a candy store 
//GFG - https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1

// class Solution
// {
// public:
//     vector<int> candyStore(int candies[], int N, int K)
//     {
//         sort(candies,candies+N);
//         int buy=0;
//         int free=N;
//         int minCost=0;
//         while(buy<free){
//             minCost+=candies[buy];
//             buy++;
//             free=free-K;
//         }
//         vector<int> ans;
        
//         buy=N-1;
//         free=-1;
//         int maxCost=0;
//         while(free<buy){
//             maxCost+=candies[buy];
//             free+=K;
//             buy--;
//         }
        
//         ans.push_back(minCost);
//         ans.push_back(maxCost);
        
//         return ans;
//     }
// };