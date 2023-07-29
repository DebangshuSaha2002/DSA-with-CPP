//Solve - https://practice.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=distance-from-the-source-bellman-ford-algorithm

// class Solution {
//   public:
//     /*  Function to implement Bellman Ford
//     *   edges: vector of vectors which represents the graph
//     *   S: source vertex to start traversing graph with
//     *   V: number of vertices
//     */
//     vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
//         //for V-1 edges we will do relaxation
//         vector<int> dist(V,1e8);
//         dist[S]=0;
//         for(int i=0;i<V-1;i++){
//             for(auto val:edges){
//                 int u=val[0];
//                 int v=val[1];
//                 int wt=val[2];
                
//                 if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
//                     dist[v]=dist[u]+wt;
//                 }
//             }
//         }
//         for(auto val:edges){
//             int u=val[0];
//             int v=val[1];
//             int wt=val[2];
            
//             if(dist[u]!=1e8 && dist[u]+wt<dist[v]){
//                 return {-1};
//             }
//         }
//         return dist;
//     }
// };