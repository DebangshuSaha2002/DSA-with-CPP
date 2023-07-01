// //Cycle Detection in directed graphs
// //https://www.codingninjas.com/studio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<unordered_map>
// #include<list>

// bool isCyclePresentDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> & dfs_visited,unordered_map<int,list<int> > &adj)
// {
//   visited[node]=true;
//   dfs_visited[node]=true;

//   for(auto neighbour:adj[node]){
//     if(!visited[neighbour]==true){
//       bool DetectedCycle=isCyclePresentDFS(neighbour,visited,dfs_visited,adj);
//       if (DetectedCycle == true) {
//         return true;
//       }
//     }  
//     else if (dfs_visited[neighbour] == true) {
//       return true;
//     }
//   }
//   dfs_visited[node]=false;
//   return false;
// }

// void createAdjList(unordered_map<int,list<int> > &adj,vector < pair < int, int >> & edges)
// {
//   for(int i=0;i<edges.size();i++){
//     int u=edges[i].first;
//     int v=edges[i].second;

//     adj[u].push_back(v);
//   }
// }
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
//   unordered_map<int,list<int> > adj;
//   unordered_map<int,bool> visited;
//   unordered_map<int,bool> dfs_visited;

//   //create the adjacency list
//   createAdjList(adj,edges);

//   for(int i=1;i<=n;i++){
//     if(!visited[i]==true){
//       bool cycleDetected=isCyclePresentDFS(i,visited,dfs_visited,adj);
//       if(cycleDetected==true){
//         return true;
//       }
//     }
//   }
//   return false;
// }