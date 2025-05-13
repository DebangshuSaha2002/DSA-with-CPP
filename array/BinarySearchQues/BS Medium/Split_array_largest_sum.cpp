//https://leetcode.com/problems/split-array-largest-sum/

// class Solution {
//     private:
//         int countPartition(vector<int> &nums, int maxSum){
//             int partition = 1;
//             int sum = 0;
//             for(int i=0;i<nums.size();i++){
//                 if(sum+nums[i]<=maxSum){
//                     sum=sum+nums[i];
//                 }else{
//                     partition++;
//                     sum = nums[i];
//                 }
//             }
//             return partition;
//         }
//     public:
//         int splitArray(vector<int>& nums, int k) {
//             int low = *max_element(nums.begin(), nums.end());
//             int high = accumulate(nums.begin(), nums.end(), 0);
    
//             // for(int maxSum = low;maxSum<=high; maxSum++){
//             //     int val = countPartition(nums, k , maxSum);
//             //     if(val==k){
//             //         return maxSum;
//             //     }
//             // }
    
//             while(low<=high){
//                 int mid = (low+high)/2;
//                 int val = countPartition(nums, mid);
//                 if(val>k){
//                     low=mid+1;
//                 }else{
//                     high = mid-1;
//                 }
//             }
//             return low;
//         }
//     };