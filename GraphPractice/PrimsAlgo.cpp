// //Prims algo to check the MST

// //Used a PQ, Visited array, MST (To keep track of node and parent)

// //https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-spanning-tree

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution
// {
// 	public:
// 	//Function to find sum of weights of edges of the Minimum Spanning Tree.
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         vector<int> vis(V,0);
//         priority_queue <pair<int,int > ,vector<pair<int,int> > ,
//         greater<pair<int,int> > > pq;
//         // {weight,node}
//         pq.push({0,0});
//         int sum=0;
//         while(!pq.empty()){
//             auto top=pq.top();
//             pq.pop();
//             int wt=top.first;
//             int node=top.second;
            
//             if(vis[node]==1){
//                 continue;
//             }
//             vis[node]=1;
//             sum+=wt;
            
//             for(auto it:adj[node]){
//                 int AdjNode=it[0];
//                 int edgWt=it[1];
//                 if(!vis[AdjNode]){
//                     pq.push({edgWt,AdjNode});
//                 }
//             }
//         }
//         return sum;
//     }
// };

// //{ Driver Code Starts.


// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             vector<int> t1,t2;
//             t1.push_back(v);
//             t1.push_back(w);
//             adj[u].push_back(t1);
//             t2.push_back(u);
//             t2.push_back(w);
//             adj[v].push_back(t2);
//         }
        
//         Solution obj;
//     	cout << obj.spanningTree(V, adj) << "\n";
//     }

//     return 0;
// }


// // } Driver Code Ends