//Pair with minimum effort GFG
//Solve at-https://practice.geeksforgeeks.org/problems/path-with-minimum-effort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=path-with-minimum-effort

//based on dijkstra algo only

// class Solution {
//   public:
//     int MinimumEffort(vector<vector<int>>& heights) {
//         int n=heights.size();
//         int m=heights[0].size();
//         vector<vector<int> > dist(n,vector<int> (m,INT_MAX));
//         dist[0][0]=0;
//         priority_queue<pair<int,pair<int,int> > , vector<pair<int,pair<int,int> > >, greater<pair<int,pair<int,int> > > >pq;
//         pq.push({0,{0,0}});
//         int dr[]={-1,0,1,0};
//         int dc[]={0,1,0,-1};
//         while(!pq.empty()){
//             auto top=pq.top();
//             int Diff=top.first;
//             int r=top.second.first;
//             int c=top.second.second;
//             pq.pop();
//             for(int i=0;i<4;i++){
//                 int newr=r+dr[i];
//                 int newc=c+dc[i];
//                 if(newr>=0 && newr<n && newc>=0 && newc<m){
//                     int newEffort=max(abs(heights[r][c]-heights[newr][newc]),Diff);
//                     if(newEffort < dist[newr][newc]){
//                         dist[newr][newc]=newEffort;
//                         pq.push({newEffort,{newr,newc}});
//                     }                
                    
//                 }
//             }
//         }
//         return dist[n-1][m-1];
//     }
// };