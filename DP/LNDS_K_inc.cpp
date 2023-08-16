// leetcode- https://leetcode.com/problems/minimum-operations-to-make-the-array-k-increasing/description/

// //Longest non decreasing 
// class Solution {
// public:
//     //Longest Non-decreasing subsequence
//     int LIS(vector<int>& v){
//         vector<int> ans;
//         if(v.size()==0){
//             return 0;
//         }
//         ans.push_back(v[0]);
//         for(int i=1;i<v.size();i++){
//             if(v[i]>=ans.back()){
//                 ans.push_back(v[i]);
//             }else{
//                 int index=upper_bound(ans.begin(),ans.end(),v[i])-ans.begin();
//                 ans[index]=v[i];
//             }
//         }
//         return ans.size();
//     }
//     int kIncreasing(vector<int>& arr, int k) {
//         int ans=0;
//         for(int i=0;i<k;i++){
//             vector<int> v;
//             for(int j=i;j<arr.size();j=j+k){
//                 v.push_back(arr[j]);
//             }
//             ans+=(v.size()-LIS(v));
//         }
//         return ans;
//     }
// };