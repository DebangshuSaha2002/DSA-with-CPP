// //https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-an-undirected-graph

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     bool detect(int src,vector<int> adj[],vector<int>& vis){
//         //{node,parent}
//         queue<pair<int,int> > q;
//         q.push({src,-1});
//         vis[src]=1;
//         while(!q.empty()){
//             auto front=q.front();
//             int node=front.first;
//             int parent=front.second;
//             q.pop();
//             for(auto it:adj[node]){
//                 if(!vis[it]){
//                     vis[it]=1;
//                     q.push({it,node});
//                 }
//                 else if(parent!=it){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     } 
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(detect(i,adj,vis)==true){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycle(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;
// }
// // } Driver Code Ends



//DFS
//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//   private:
//     bool detect(int node,int parent,vector<int> adj[],vector<int> &vis){
//         vis[node]=1;
//         for(auto it:adj[node]){
//             if(!vis[it]){
//                 vis[it]=1;
//                 if(detect(it,node,adj,vis)==true){
//                     return true;
//                 }
//             }else if(parent!=it){
//                 return true;
//             }
//         }
//         return false;
//     }
//   public:
//     // Function to detect cycle in an undirected graph.
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(detect(i,-1,adj,vis)==true){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int tc;
//     cin >> tc;
//     while (tc--) {
//         int V, E;
//         cin >> V >> E;
//         vector<int> adj[V];
//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         Solution obj;
//         bool ans = obj.isCycle(V, adj);
//         if (ans)
//             cout << "1\n";
//         else
//             cout << "0\n";
//     }
//     return 0;
// }
// // } Driver Code Ends