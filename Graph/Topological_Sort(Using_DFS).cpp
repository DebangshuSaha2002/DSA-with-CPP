// //Topological sort using DFS in graph
// //Topological sort is possible only in DAG means directed acyclic graph
// //https://www.codingninjas.com/studio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// #include <bits/stdc++.h> 

// void topoSortAns(int node,vector<bool> &visited, unordered_map<int, list<int> > &adj,stack<int> &s)
// {
//     visited[node]=true;
//     for(auto neighbour:adj[node]){
//         if(!visited[neighbour]==true){
//             topoSortAns(neighbour, visited, adj, s);
//         }
//     }
//     //When no adj list is presnt then push that node to the stack
//     s.push(node);
// }

// void createAdjList(vector<vector<int>> &edges,unordered_map<int, list<int> > &adj){
//     for(int i=0;i<edges.size();i++){
//         int u=edges[i][0];
//         int v=edges[i][1];

//         adj[u].push_back(v);
//     }
// }

// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
//     vector<bool> visited(v);
//     unordered_map<int, list<int> >adj;

//     //create the adjacency list
//     createAdjList(edges,adj);
//     stack<int> s;
//     vector<int> TS;
//     for(int i=0;i<v;i++){
//         if(!visited[i]==true){
//             topoSortAns(i,visited,adj,s);
//         }
//     }

//     while(!s.empty()){
//         int val=s.top();
//         s.pop();
//         TS.push_back(val);
//     }
//     return TS;
// }