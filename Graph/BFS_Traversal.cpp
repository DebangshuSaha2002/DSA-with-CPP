// // BFS TRAVERSAL IN A GRAPH
// // LINK:- https://www.codingninjas.com/studio/problems/bfs-in-graph_973002?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// #include <bits/stdc++.h> 
// void createAdjList(unordered_map i++)
//     {
//         int u=edges[i].first;
//         int v=edges[i].second;

//         adj[u].insert(v);
//         adj[v].insert(u)<int,set<int> > &adj,vector<pair<int, int>> edges)
// {
//     for(int i=0;i<edges.size();;
//     }
// }

// void bfs( unordered_map <int,set<int> > &adj, unordered_map <int,bool> &visited,vector<int> &ans,int node)
// {
//     queue<int> q;
//     q.push(node);
//     visited[node]=true;

//     while(!q.empty()){
//         int frontNode=q.front();
//         q.pop();
//         ans.push_back(frontNode);
//         for(auto i:adj[frontNode]){
//             if(!visited[i]==true){
//                 q.push(i);
//                 visited[i]=true;
//             }
//         }
//     }
// }

// vector<int> BFS(int vertex, vector<pair<int, int>> edges)
// {
//     vector<int> ans;
//     unordered_map <int,set<int> > adj;
//     unordered_map <int,bool> visited;

//     createAdjList(adj,edges);

//     for(int i=0;i<vertex;i++){
//         if(!visited[i]==true){
//             bfs(adj,visited,ans,i);
//         }
//     }
//     return ans;
// }