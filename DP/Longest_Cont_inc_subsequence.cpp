//Longest Continuos Inc subsequence
//https://leetcode.com/problems/longest-continuous-increasing-subsequence/submissions/

// class Solution {
// public:
//     int findLengthOfLCIS(vector<int>& nums) {
//         int count=1;
//         int val=1;
//         if(nums.size()<=1){
//             return 1;
//         }
//         for(int i=0;i<nums.size()-1;i++){
//             if(nums[i]<nums[i+1]){
//                 count++;
//                 val=max(val,count);
//             }
//             else{
//                 count=1;
//             }
//         }
//         return val;
//     }
// };