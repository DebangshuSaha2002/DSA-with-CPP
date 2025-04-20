//https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/1612605746/

// class Solution {
//     private:
//         bool withinThreshold(int divisor, vector<int> &nums, int threshold){
//             int ans = 0;
//             for(int i=0;i<nums.size();i++){
//                 ans+= ceil(nums[i]/divisor);
//             }
//             if(ans <= threshold) return true;
//             return false;
//         }
//     public:
//         int smallestDivisor(vector<int>& nums, int threshold) {
//             int low = 1;
//             int high = *max_element(nums.begin(), nums.end());
//             while(low<=high){
//                 int mid = (low+high)/2;
//                 if(withinThreshold(mid, nums, threshold)){
//                     high = mid - 1;
//                 }else{
//                     low = mid+1;
//                 }
//             }
//             return low;
//         }
//     };