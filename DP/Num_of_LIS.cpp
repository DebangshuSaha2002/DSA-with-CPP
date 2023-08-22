//Print the number of LIS
//Code studio - https://www.codingninjas.com/studio/problems/number-of-longest-increasing-subsequence_3751627?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=0

// int findNumberOfLIS(vector<int> &arr)
// {
//     int maxi=1;
//     vector<int> dp(arr.size(),1);
//     vector<int> cnt(arr.size(),1);
//     for(int i=0;i<arr.size();i++){
//         for(int j=0;j<i;j++){
//             if(arr[j]<arr[i] && 1+dp[j]>dp[i]){
//                 dp[i]=1+dp[j];
//                 //just inheriting the value
//                 cnt[i]=cnt[j];
//             }
//             else if(arr[j]<arr[i] && 1+dp[j]==dp[i]){
//                 cnt[i]+=cnt[j];
//             }
//         }
//         maxi=max(maxi,dp[i]);
//     }
//     int nos=0;
//     for(int i=0;i<dp.size();i++){
//         if(dp[i]==maxi){
//             nos+=cnt[i];
//         }
//     }
//     return nos;

// }