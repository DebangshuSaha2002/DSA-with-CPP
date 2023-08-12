//Min Cost Path
//GFG-https://practice.geeksforgeeks.org/problems/minimum-cost-path3833/1?page=1&category[]=Graph&sortBy=submissions

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends


// class Solution
// {
//     public:
    
//     //Function to return the minimum cost to react at bottom
// 	//right cell from top left cell.
//     int minimumCostPath(vector<vector<int>>& grid) 
//     {
//         //use dijkstra algo
//         int n=grid.size();
//         if(n==1){
//             return grid[n-1][n-1];
//         }
//         priority_queue<pair<int,pair<int,int> > , vector<pair<int,pair<int,int> > >, greater<pair<int,pair<int,int> > > > pq;
//         vector<vector<int> > dist(n,vector<int>(n,1e8));
//         dist[0][0]=grid[0][0];
//         pq.push({grid[0][0],{0,0}});
//         int dr[]={-1,0,1,0};
//         int dc[]={0,1,0,-1};
//         while(!pq.empty()){
//             auto top=pq.top();
//             int nodedist=top.first;
//             int row=top.second.first;
//             int col=top.second.second;
//             pq.pop();
//             for(int i=0;i<4;i++){
//                 int newr=row+dr[i];
//                 int newc=col+dc[i];
//                 if(newr>=0 && newr<n && newc>=0 && newc<n && nodedist+grid[newr][newc]<dist[newr][newc]){
//                     dist[newr][newc]=nodedist+grid[newr][newc];
//                     pq.push({dist[newr][newc],{newr,newc}});
//                 }
//             }
//         }
//         return dist[n-1][n-1];
//     }
// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int n;
// 		cin >> n;
// 		vector<vector<int>>grid(n, vector<int>(n, -1));
// 		for(int i = 0; i < n; i++){
// 			for(int j = 0; j < n; j++){
// 				cin >> grid[i][j];
// 			}
// 		}
// 		Solution obj;
// 		int ans = obj.minimumCostPath(grid);
// 		cout << ans << "\n";
// 	}
// 	return 0;
// }
// // } Driver Code Ends