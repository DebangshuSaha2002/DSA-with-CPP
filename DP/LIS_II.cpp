// //Doubt in this question
// //Leetcode - https://leetcode.com/problems/longest-increasing-subsequence-ii/description/

// class Solution {
// public:
//     int solve(vector<int> &nums,int k){
//         int maxi=1;
//         vector<int> dp(nums.size(),1);
//         for(int index=0;index<nums.size();index++){
//             for(int prev=0;prev<index;prev++){
//                 if(nums[prev]<nums[index] && (nums[index]-nums[prev])<=k){
//                     dp[index]=max(1+dp[prev],dp[index]);
//                 }
//             }
//             maxi=max(maxi,dp[index]);
//         }
//         return maxi;
//     }
//     int lengthOfLIS(vector<int>& nums, int k) {
//         return solve(nums,k);
//     }
// };