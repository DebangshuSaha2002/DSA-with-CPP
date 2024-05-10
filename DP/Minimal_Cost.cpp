//https://www.naukri.com/code360/problems/minimal-cost_8180930?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// int solve(int k,vector<int> &height,int index){
//     if(index==0){
//         return 0;
//     }
//     int ans=INT_MAX;

//     for(int i=1;i<=k;i++){
//         if (index - i >= 0) {
//           int incl = solve(k, height, index - i) + abs(height[index] - height[index - i]);
//                 ans = min(incl, ans);
//         }
//     }
//     return ans;
// }

// int solveMem(int n,int k,vector<int> &height,int index,vector<int> &dp){
//     if(index==0){
//         return 0;
//     }

//     if(dp[index]!=-1){
//         return dp[index];
//     }

//     int ans=INT_MAX;

//     for(int i=1;i<=k;i++){
//         if (index - i >= 0) {
//             int incl = solveMem(n,k, height, index - i,dp) + abs(height[index] - height[index - i]);
//             ans = min(incl, ans);
//             dp[index]=ans;
//         }
//     }
//     return dp[index];
// }

// int solveTab(int k,vector<int> &height){
//     vector<int> dp(height.size(),INT_MAX);
//     dp[0]=0;
//     for(int j=1;j<height.size();j++){
//         int ans=INT_MAX;
//         for(int i=1;i<=k;i++){
//             if (j - i >= 0) {
//               int incl = dp[j - i] + abs(height[j] - height[j - i]);
//               ans = min(incl, ans);
//               dp[j] = ans;
//             }
//         }
//     }
//     return dp[height.size()-1];
// }

// int minimizeCost(int n, int k, vector<int> &height){
//     int index=height.size();
//     vector<int> dp(index,-1);
//     // return solve(k,height,index-1);
//     // return solveMem(n,k,height,index-1,dp);
//     return solveTab(k,height);
// }