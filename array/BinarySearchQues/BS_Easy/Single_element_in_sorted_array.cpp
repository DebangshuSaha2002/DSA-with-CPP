//https://leetcode.com/problems/single-element-in-a-sorted-array/

// class Solution {
//     public:
//         int singleNonDuplicate(vector<int>& nums) {
//             int low=0;
//             int high=nums.size()-1;
//             int ans = -1;
//             while(low<=high){
//                 int mid = (low+high)/2;
//                 if(mid%2==0){
//                     if(mid+1<nums.size() && nums[mid+1]==nums[mid]){
//                         low=mid+1;
//                     }else{
//                         ans=mid;
//                         high=mid-1;
//                     }
//                 }
//                 else{
//                     if(mid+1<nums.size() && nums[mid+1]==nums[mid]){
//                         ans=mid;
//                         high=mid-1;
//                     }else{
//                         low=mid+1;
//                     }
//                 }
//             }
//             return nums[ans];
//         }
//     };