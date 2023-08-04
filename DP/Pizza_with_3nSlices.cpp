//Pizza with 3n slices
//https://leetcode.com/problems/pizza-with-3n-slices/description/

// class Solution {
// public:
//     int solve(vector<int> &slices,int index,int endIndex,int n){
//         if(n==0 || index>endIndex){
//             return 0;
//         }

//         int include=slices[index]+solve(slices,index+2,endIndex,n-1);
//         int exclude=0+solve(slices,index+1,endIndex,n);

//         return max(include,exclude);
//     }

//     int solveMem(vector<int> &slices,int index,int endIndex,int n,vector<vector<int> > &dp){
//         if(n==0 || index>endIndex){
//             return 0;
//         }
//         if(dp[index][n]!=-1){
//             return dp[index][n];
//         }
//         int include=slices[index]+solveMem(slices,index+2,endIndex,n-1,dp);
//         int exclude=0+solveMem(slices,index+1,endIndex,n,dp);

//         return dp[index][n]=max(include,exclude);
//     }

//     int solveTab(vector<int> &slices){
//         int k=slices.size();
//         vector<vector<int> > dp1(k+2,vector<int> (k+2,0));
//         for(int index=k-2;index>=0;index--){
//             for(int n=1;n<=k/3;n++){
//                 int include=slices[index]+dp1[index+2][n-1];
//                 int exclude=0+dp1[index+1][n];

//                 dp1[index][n]=max(include,exclude);
//             }
//         }
//         int case1=dp1[0][k/3];
//         vector<vector<int> > dp2(k+2,vector<int> (k+2,0));
//         for(int index=k-1;index>=1;index--){
//             for(int n=1;n<=k/3;n++){
//                 int include=slices[index]+dp2[index+2][n-1];
//                 int exclude=0+dp2[index+1][n];

//                 dp2[index][n]=max(include,exclude);
//             }
//         }
//         int case2=dp2[1][k/3];
//         return max(case1,case2);
//     }

//     int solveTabSO(vector<int> &slices){
//         int k=slices.size();

//         vector<int> prev1(k+2,0);
//         vector<int> curr1(k+2,0);
//         vector<int> next1(k+2,0);

//         for(int index=k-2;index>=0;index--){
//             for(int n=1;n<=k/3;n++){
//                 int include=slices[index]+next1[n-1];
//                 int exclude=0+curr1[n];

//                 prev1[n]=max(include,exclude);
//             }
//             next1=curr1;
//             curr1=prev1;
//         }
//         int case1=curr1[k/3];
        
//         vector<int> prev2(k+2,0);
//         vector<int> curr2(k+2,0);
//         vector<int> next2(k+2,0);

//         for(int index=k-1;index>=1;index--){
//             for(int n=1;n<=k/3;n++){
//                 int include=slices[index]+next2[n-1];
//                 int exclude=0+curr2[n];

//                 prev2[n]=max(include,exclude);
//             }
//             next2=curr2;
//             curr2=prev2;
//         }
//         int case2=curr2[k/3];
//         return max(case1,case2);
//     }

//     int maxSizeSlices(vector<int>& slices) {
//         // int k=slices.size();
//         // if(k==0){
//         //     return 0;
//         // }
//         // vector<vector<int> > dp1(k,vector<int>(k,-1));
//         // int case1=solveMem(slices,0,k-2,k/3,dp1);
//         // vector<vector<int> > dp2(k,vector<int>(k,-1));
//         // int case2=solveMem(slices,1,k-1,k/3,dp2);

//         // return max(case1,case2);

//         // return solveTab(slices);

//         return solveTabSO(slices);
//     }
// };