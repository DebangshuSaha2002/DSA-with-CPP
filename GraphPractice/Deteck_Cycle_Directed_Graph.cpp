//https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=detect-cycle-in-a-directed-graph

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   private:
//     bool dfsCycleCheck(int node,vector<int> adj[],vector<int> &vis,vector<int> &pathvis){
//         vis[node]=1;
//         pathvis[node]=1;
//         for(auto it: adj[node]){
//             if(!vis[it]){
//                 if(dfsCycleCheck(it,adj,vis,pathvis)==true){
//                     return true;
//                 }
//             }else if(pathvis[it]){
//                 return true;
//             }
//         }
//         pathvis[node]=0;
//         return false;
//     }
//   public:
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//         vector<int> vis(V,0);
//         vector<int> pathvis(V,0);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 if(dfsCycleCheck(i,adj,vis,pathvis)==true){
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// //{ Driver Code Starts.

// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;

//         vector<int> adj[V];

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }

//         Solution obj;
//         cout << obj.isCyclic(V, adj) << "\n";
//     }

//     return 0;
// }

// // } Driver Code Ends