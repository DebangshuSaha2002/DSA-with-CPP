// //Cycle detected algo
// // LINK :- https://www.codingninjas.com/studio/problems/cycle-detection-in-undirected-graph_1062670?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// #include<unordered_map>
// #include<list>
// #include<queue>

// void createAdjList(vector<vector<int>>& edges,unordered_map <int, list<int> > &adj)
// {
//     for(int i=0;i<edges.size();i++)
//     {
//         int u=edges[i][0];
//         int v=edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
// }

// bool checkForCycleBFS(int node,unordered_map<int,bool> &visited,unordered_map <int, list<int> > &adj){
//     queue<int> q;
//     unordered_map<int,int> parent;

//     q.push(node);
//     parent[node]=-1;
//     visited[node]=true;

//     while(!q.empty()){
//         int front=q.front();
//         q.pop();
//         for(auto i:adj[front]){
//             if(visited[i]==true && parent[front]!=i){
//                 return true;
//             }
//             else if(!visited[i]==true){
//                 q.push(i);
//                 parent[i]=front;
//                 visited[i]=true;
//             }
//         }
//     }
//     return false;
// }

// bool checkForCycleDFS(int node,int parent,unordered_map<int,bool> &visited,unordered_map <int, list<int> > &adj)
// {
//     visited[node]=true;

//     for(auto neighbour: adj[node]){
//         if(!visited[neighbour]==true){
//             bool cycleDetected=checkForCycleDFS(neighbour, node, visited, adj);
//             if(cycleDetected){
//                 return true;
//             }
//         }
//         else if(neighbour!=parent){
//             return true;
//         }
//     }
//     return false;
// }

// string cycleDetection (vector<vector<int>>& edges, int n, int m)
// {
//     unordered_map <int, list<int> > adj;
//     unordered_map<int,bool> visited;
//     //adjacency list is created
//     createAdjList(edges,adj);
//     bool cd=false;
//     for(int i=0;i<n;i++){
//         if(!visited[i]==true){
//             cd=checkForCycleDFS(i,-1,visited,adj);
//             if(cd==true){
//                 return "Yes";
//             }
//         }
//     }
//     if(cd==false)
//         return "No";
// }
