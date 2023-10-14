// //Rotten Oranges
// //BFS is used as we are first traversing all at the same level

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution 
// {D
//     public:
//     //Function to find minimum time required to rot all oranges. 
//     int orangesRotting(vector<vector<int>>& grid) {
//         queue<pair<pair<int,int>, int> > q;
//         int n=grid.size();
//         int m=grid[0].size();
//         int vis[n][m];
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]==2){
//                     vis[i][j]=2;
//                     q.push({{i,j},0});
//                 }else{
//                     vis[i][j]=0;
//                 }
//             }
//         }
        
//         int drow[4]={-1,0,1,0};
//         int dcol[4]={0,1,0,-1};
//         int tm=0;
//         //applying BFS
//         while(!q.empty()){
//             int r=q.front().first.first;
//             int c=q.front().first.second;
//             int t=q.front().second;
//             tm=max(tm,t);
//             q.pop();
//             for(int i=0;i<4;i++){
//                 int nrow=drow[i]+r;
//                 int ncol=dcol[i]+c;
//                 if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]!=2 && grid[nrow][ncol]==1){
//                     vis[nrow][ncol]=2;
//                     q.push({{nrow,ncol},t+1});
//                 }
//             }
//         }
        
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]==1 && vis[i][j]!=2){
//                     return -1;
//                 }
//             }
//         }
//         return tm;
//     }
// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n, m;
// 		cin >> n >> m;
// 		vector<vector<int>>grid(n, vector<int>(m, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < m; j++){
// 				cin >> grid[i][j];
// 			}
// 		}
// 		Solution obj;
// 		int ans = obj.orangesRotting(grid);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }
// // } Driver Code Ends