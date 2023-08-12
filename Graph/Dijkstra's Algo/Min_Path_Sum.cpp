//Leetcode - https://leetcode.com/problems/minimum-path-sum/description/

// class Solution {
// public:
//     int minPathSum(vector<vector<int>>& grid) {
//         priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > > pq;
//         int n=grid.size();
//         int m=grid[0].size();
//         vector<vector<int> > dist(n,vector<int>(m,1e8));
//         dist[0][0]=grid[0][0];
//         pq.push({grid[0][0],{0,0}});
//         int dr[]={1,0};
//         int dc[]={0,1};
//         while(!pq.empty()){
//             auto top=pq.top();
//             int row=top.second.first;
//             int col=top.second.second;
//             int nodedist=top.first;
//             pq.pop();

//             for(int i=0;i<2;i++){
//                 int newr=row+dr[i];
//                 int newc=col+dc[i];
//                 if(newr>=0 && newr<n && newc>=0 && newc<m && nodedist+grid[newr][newc]<dist[newr][newc]){
//                     dist[newr][newc]=nodedist+grid[newr][newc];
//                     pq.push({dist[newr][newc],{newr,newc}});
//                 }
//             }
//         }
//         return dist[n-1][m-1];
//     }
// };