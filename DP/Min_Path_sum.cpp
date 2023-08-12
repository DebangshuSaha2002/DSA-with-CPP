// Minimum Path sum
// Leetcode - https://leetcode.com/problems/minimum-path-sum/description/

// class Solution {
// public:
//     int solve(vector<vector<int> > &grid,int i,int j){
//         int n=grid.size();
//         int m=grid[0].size();
//         if(i==n-1 && j==m-1){
//             return grid[i][j];
//         }
//         int right=INT_MAX;
//         int down=INT_MAX;
//         //call for right;
//         if(j+1<m){
//             right=grid[i][j]+solve(grid,i,j+1);
//         }
//         //call for down
//         if(i+1<n){
//             down=grid[i][j]+solve(grid,i+1,j);
//         }
//         return min(right,down);
//     }

//     int solveMem(vector<vector<int> > &grid,int i,int j,vector<vector<int> > &dp){
//         int n=grid.size();
//         int m=grid[0].size();
//         if(i==n-1 && j==m-1){
//             return grid[i][j];
//         }

//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }

//         int right=INT_MAX;
//         int down=INT_MAX;
//         //call for right;
//         if(j+1<m){
//             right=grid[i][j]+solveMem(grid,i,j+1,dp);
//         }
//         //call for down
//         if(i+1<n){
//             down=grid[i][j]+solveMem(grid,i+1,j,dp);
//         }
//         return dp[i][j]=min(right,down);
//     }

//     // int solveTab(vector<vector<int> > &grid){
//     //     int n=grid.size();
//     //     int m=grid[0].size();
//     //     vector<vector<int> > dp(grid.size()+1,vector<int>(grid[0].size(),0));
//     //     dp[n-1][m-1]=grid[n-1][m-1];
//     //     for (int i = n - 2; i >= 0; i--) {
//     //         dp[i][m - 1] = grid[i][m - 1] + dp[i + 1][m - 1];  // Initialize the last column
//     //     }

//     //     for (int j = m - 2; j >= 0; j--) {
//     //         dp[n - 1][j] = grid[n - 1][j] + dp[n - 1][j + 1];  // Initialize the last row
//     //     }

//     //     for(int i=n-2;i>=0;i--){
//     //         for(int j=m-2;j>=0;j--){
//     //             int right=INT_MAX;
//     //             int down=INT_MAX;
//     //             //call for right;
//     //             if(j+1<m){
//     //                 right=grid[i][j]+dp[i][j+1];
//     //             }
//     //             //call for down
//     //             if(i+1<n){
//     //                 down=grid[i][j]+dp[i+1][j];
//     //             }
//     //             dp[i][j]=min(right,down);
//     //         }
//     //     }
//     //     return dp[0][0];
//     // }
//     int minPathSum(vector<vector<int>>& grid) {
//         // return solve(grid,0,0);
//         vector<vector<int> > dp(grid.size()+1,vector<int>(grid[0].size(),-1));
//         return solveMem(grid,0,0,dp);

//         // return solveTab(grid);
//     }
// };