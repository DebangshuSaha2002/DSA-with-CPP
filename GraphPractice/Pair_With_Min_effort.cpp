//https://practice.geeksforgeeks.org/problems/path-with-minimum-effort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=path-with-minimum-effort

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     int MinimumEffort(vector<vector<int>>& heights) {
//         int n=heights.size();
//         int m=heights[0].size();
//         vector<vector<int> > dist(n,vector<int>(m,1e9));
//         dist[0][0]=0;
//         priority_queue<pair<int,pair<int,int> > ,vector<pair<int,pair<int,int> > > ,
//         greater<pair<int,pair<int,int> > > >pq;
//         pq.push({0,{0,0}});
//         int drow[]={-1,0,1,0};
//         int dcol[]={0,1,0,-1};
//         while(!pq.empty()){
//             auto top=pq.top();
//             int diff=top.first;
//             int row=top.second.first;
//             int col=top.second.second;
//             pq.pop();
//             if(row==n-1 && col==m-1){
//                 return diff;
//             }
//             for(int i=0;i<4;i++){
//                 int newr=drow[i]+row;
//                 int newc=dcol[i]+col;
//                 if(newr>=0 && newr<n && newc>=0 && newc<m){
//                     int newEff=max(abs(heights[row][col]-heights[newr][newc]),diff);
//                     if(newEff<dist[newr][newc]){
//                         dist[newr][newc]=newEff;
//                         pq.push({newEff,{newr,newc}});
//                     }
//                 }
//             }
//         }
        
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n,m; cin>>n>>m;
//         vector<vector<int>> heights;
       
//         for(int i=0; i<n; ++i){
//             vector<int> temp;
//             for(int j=0; j<m; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             heights.push_back(temp);
//         }
       
//         Solution obj;
//         cout<<obj.MinimumEffort(heights)<<"\n";
//     }
//     return 0;
// }
// // } Driver Code Ends