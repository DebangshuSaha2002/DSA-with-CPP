// //Find the max sum of non adjacent elements
// //https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// //Check leetcode also for the same type of question and solve

// #include <bits/stdc++.h> 
// // int solveRec(vector<int> &nums,int index){
// //     if(index<0){
// //         return 0;
// //     }
// //     if(index==0){
// //         return nums[index];
// //     }
// //     int incl=solveRec(nums,index-2)+nums[index];
// //     int excl=solveRec(nums,index-1)+0;
// //     int ans=max(incl,excl);
// //     return ans;
// // }

// // int solveMem(vector<int> &nums,int index,vector<int> &dp){
// //     if(index<0){
// //         return 0;
// //     }
// //     if(index==0){
// //         return nums[index];
// //     }
// //     if(dp[index]!=-1){
// //         return dp[index];
// //     }
// //     int incl=solveMem(nums,index-2,dp)+nums[index];
// //     int excl=solveMem(nums,index-1,dp)+0;
// //     int ans=max(incl,excl);
// //     dp[index]=ans;
// //     return ans;
// // }

// // int solveTab(vector<int> &nums){
// //     int n=nums.size();
// //     vector<int> dp(n,0);
// //     dp[0]=nums[0];
// //     for(int i=1;i<n;i++){
// //         int incl=dp[i-2]+nums[i];
// //         int excl=dp[i-1]+0;
// //         dp[i]=max(incl,excl);
// //     }
// //     return dp[n-1];
// // }


// int solveTabSpaceOpt(vector<int> &nums){
//     int n=nums.size();
//     int prev2=0;
//     int prev1=nums[0];
//     for(int i=1;i<n;i++){
//         int incl=prev2+nums[i];
//         int excl=prev1+0;
//         int ans=max(incl,excl);

//         prev2=prev1;
//         prev1=ans;
//     }
//     return prev1;
// }
// int maximumNonAdjacentSum(vector<int> &nums){
//     //using recursion
//     // int n=nums.size();
//     // int ans=solveRec(nums,n-1);
//     // return ans;

//     //using memoization
//     // int n=nums.size();
//     // vector<int> dp(n,-1);
//     // int ans=solveMem(nums,n-1,dp);
//     // return ans;

//     //using tabulation
//     return solveTabSpaceOpt(nums);
// }