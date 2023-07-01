// //Cycle detection in directed graphs using kahn's algo
// //https://www.codingninjas.com/studio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<unordered_map>
// #include<list>
// #include<queue>
// int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
//   unordered_map<int,list<int> > adj;
//   //create adjacency list
//   for(int i=0;i<edges.size();i++){
//     int u=edges[i].first-1;
//     int v=edges[i].second-1;

//     adj[u].push_back(v);
//   }

//   //store all the indegrees
//   vector<int> indegrees(n);
//   for(auto i:adj){
//     for(auto j:i.second){
//       indegrees[j]++;
//     }
//   } 

//   //if indegree is 0 then push it into the stack
//   queue<int> q;
//   for(int i=0;i<n;i++){
//     if(indegrees[i]==0){
//       q.push(i);
//     }
//   }

//   //do the bfs
//   vector<int> ans;
//   while(!q.empty()){
//     int frontNode=q.front();
//     ans.push_back(frontNode);
//     q.pop();
//     for(auto neighbour:adj[frontNode]){
//       indegrees[neighbour]--;
//       if(indegrees[neighbour]==0){
//         q.push(neighbour);
//       }
//     }
//   }
//   if(ans.size()==n){
//     return false;
//   }
//   else{
//     return true;
//   }
// }