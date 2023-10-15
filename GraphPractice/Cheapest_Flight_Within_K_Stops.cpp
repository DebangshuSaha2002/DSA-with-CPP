//https://practice.geeksforgeeks.org/problems/cheapest-flights-within-k-stops/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=cheapest-flights-within-k-stops

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K)  {
//         vector<pair<int,int> > adj[n];
//         for(int i=0;i<flights.size();i++){
//             int from=flights[i][0];
//             int to=flights[i][1];
//             int dis=flights[i][2];
//             adj[from].push_back({to,dis});
//         }
//         queue<pair<int,pair<int,int> > >q;
//         vector<int> dist(n,1e9);
//         dist[src]=0;
//         q.push({0,{src,0}});
//         while(!q.empty()){
//             auto top=q.front();
//             q.pop();
//             int stops=top.first;
//             int node=top.second.first;
//             int d=top.second.second;
//             if(stops>K){
//                 continue;
//             }
            
//             for(auto it:adj[node]){
//                 int to=it.first;
//                 int edgWt=it.second;
                
//                 if(d+edgWt<dist[to] && stops<=K){
//                     dist[to]=d+edgWt;
//                     q.push({stops+1,{to,dist[to]}});
//                 }
//             }
//         }
        
//         if(dist[dst]==1e9){
//             return {-1};
//         }else
//             return dist[dst];
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int n; cin>>n;
//         int edge; cin>>edge;
//         vector<vector<int>> flights;
        
//         for(int i=0; i<edge; ++i){
//             vector<int> temp;
//             for(int j=0; j<3; ++j){
//                 int x; cin>>x;
//                 temp.push_back(x);
//             }
//             flights.push_back(temp);
//         }
        
//         int src,dst,k;
//         cin>>src>>dst>>k;
//         Solution obj;
//         cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
//     }
//     return 0;
// }
// // } Driver Code Ends