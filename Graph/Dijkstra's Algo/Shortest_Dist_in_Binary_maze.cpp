//Find the shortest distance in a binary maze
//here since the distance from one lets say node to another is +1 
//which is constant so here we are doing dijkstra algo using a queue and not a priority queue

// -> https://practice.geeksforgeeks.org/problems/shortest-path-in-a-binary-maze-1655453161/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=shortest-path-in-a-binary-maze

// class Solution {
//   public:
//     int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
//                      pair<int, int> destination) {
//         int n=grid.size();
//         int m=grid[0].size();
//         if(source.first==destination.first && source.second==destination.second){
//             return 0;
//         }
//         vector<vector<int> > dist(n,vector<int> (m,INT_MAX));
//         dist[source.first][source.second]=0;
//         queue<pair<int,pair<int,int> > >q;
//         q.push({0,{source.first,source.second}});
//         int dr[]={-1,0,1,0};
//         int dc[]={0,1,0,-1};
        
//         while(!q.empty()){
//             auto top=q.front();
//             q.pop();
//             int r=top.second.first;
//             int c=top.second.second;
//             int Nodedist=top.first;
            
//             for(int i=0;i<4;i++){
//                 int newr=r+dr[i];
//                 int newc=c+dc[i];
//                 if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1 && (Nodedist+1)<dist[newr][newc]){
//                     dist[newr][newc]=Nodedist+1;
//                     if(newr==destination.first && newc==destination.second){
//                         return Nodedist+1;
//                     }
//                     q.push({1+Nodedist,{newr,newc}});
//                 }
//             }
//         }
//         return -1;
//     }
// };