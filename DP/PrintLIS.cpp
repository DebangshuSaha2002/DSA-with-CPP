//Coding Ninja - https://www.codingninjas.com/studio/problems/longest-increasing-subsequence_630459?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTab=1
// #include<bits/stdc++.h>
// int longestIncreasingSubsequence(int arr[], int n)
// {
//     vector<int> dp(n,1);
//     vector<int> hash(n);
//     int lastIndex=0;
//     int maxi=1;
//     for(int index=0;index<n;index++){
//         hash[index]=index;
//         for(int prev=0;prev<index;prev++){
//             if(arr[prev]<arr[index] && (1+dp[prev]>dp[index])){
//                 dp[index]=1+dp[prev];
//                 hash[index]=prev;
//             }
//         }
//         if(dp[index]>maxi){
//             maxi=dp[index];
//             lastIndex=index;
//         }
//     }

//     vector<int> LIS;
//     LIS.push_back(arr[lastIndex]);
//     while(hash[lastIndex]!=lastIndex){
//         lastIndex=hash[lastIndex];
//         LIS.push_back(arr[lastIndex]);
//     }
//     reverse(LIS.begin(),LIS.end());
    
//     // for(int i=0;i<LIS.size();i++){
//     //     cout<<LIS[i]<< " ";
//     // }
//     // cout<<endl;

//     return maxi;
// }
