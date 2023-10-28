//GFG LINK is in prims algo code

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends


// class DisjointSet{
//     vector<int> parent,rank;
//     public:
//     DisjointSet(int n){
//         parent.resize(n+1);
//         rank.resize(n+1,0);
//         for(int i=0;i<=n;i++){
//             parent[i]=i;
//         }
//     }

//     int findUParent(int node){
//         if(node==parent[node]){
//             return node;
//         }

//         return parent[node]= findUParent(parent[node]);
//     }

//     void unionBYRank(int u,int v){
//         int ulp_u=findUParent(u);
//         int ulp_v=findUParent(v);
//         if(ulp_u == ulp_v){
//             return ;
//         }

//         if(rank[ulp_u]<rank[ulp_v]){
//             parent[ulp_u]=ulp_v;
//         }
//         else if(rank[ulp_v]<rank[ulp_u]){
//             parent[ulp_v]=ulp_u;
//         }
//         else{
//             //Both the ranks are equal
//             parent[ulp_u]=ulp_v;
//             rank[ulp_v]++;
//         }
//     }
// };
// class Solution
// {
// 	public:
// 	//Function to find sum of weights of edges of the Minimum Spanning Tree.
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         int sum=0;
//         vector<pair<int,pair<int,int> > > edges;
//         // {wt,{node,adjNode}}
//         for(int i=0;i<V;i++){
//             for(auto it:adj[i]){
//                 int adjNode=it[0];
//                 int wt=it[1];
//                 int node=i;
//                 edges.push_back({wt,{node,adjNode}});
//             }
//         }
        
//         sort(edges.begin(),edges.end());
//         DisjointSet ds(V);
        
//         for(auto it:edges){
//             int edgWt=it.first;
//             int u=it.second.first;
//             int v=it.second.second;
            
//             if(ds.findUParent(u)!=ds.findUParent(v)){
//                 ds.unionBYRank(u,v);
//                 sum+=edgWt;
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