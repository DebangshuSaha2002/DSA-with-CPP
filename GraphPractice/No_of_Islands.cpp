//No of islands GFG
//https://practice.geeksforgeeks.org/problems/find-the-number-of-islands/1

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private:
//     void bfs(int row,int col,vector<vector<char>>& grid,vector<vector<int> > &vis){
//         int n=grid.size();
//         int m=grid[0].size();
//         vis[row][col]=1;
//         queue<pair<int,int> > q;
//         q.push({row,col});
//         while(!q.empty()){
//             auto f=q.front();
//             int r=f.first;
//             int c=f.second;
//             q.pop();
//             for(int drow=-1;drow<=1;drow++){
//                 for(int dcol=-1;dcol<=1;dcol++){
//                     int nrow=r+drow;
//                     int ncol=c+dcol;
//                     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' 
//                     && !vis[nrow][ncol]){
//                         vis[nrow][ncol]=1;
//                         q.push({nrow,ncol});
//                     }
//                 }
//             }
//         }
//     }
//   public:
//     // Function to find the number of islands.
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int cnt=0;
//         vector<vector<int> > vis(n,vector<int>(m,0));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(!vis[i][j] && grid[i][j]=='1'){
//                     cnt++;
//                     bfs(i,j,grid,vis);                    
//                 }
//             }
//         }
//         return cnt;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n, m;
//         cin >> n >> m;
//         vector<vector<char>> grid(n, vector<char>(m, '#'));
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < m; j++) {
//                 cin >> grid[i][j];
//             }
//         }
//         Solution obj;
//         int ans = obj.numIslands(grid);
//         cout << ans << '\n';
//     }
//     return 0;
// }
// // } Driver Code Ends