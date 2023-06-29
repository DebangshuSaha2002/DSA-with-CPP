// // DFS Traversal in a GRAPH
// // LINK:- https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa0dPQmtBU1kyNzRtbktkajg3SmtETWtkeTgyZ3xBQ3Jtc0tuUlBFZXA4LTFrZURpVV9ZZDZ3aU5WZzlZUFhtNElLUlVUMFV3U0c3RWlrWGQwMTNvYU9GRjZ6YWZuRW5IMVBHc1FKcmlneERKU2RSbWd2VDlDaHBtTlRkbVlwQjUzVDN0VjFjaVAxcjBOTjdzbjRSQQ&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fdfs-traversal_630462%3FleftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=aJa3U-hydXc
// #include<unordered_map>
// #include<list>

// void createAdjList(unordered_map<int, list<int> > &adj, vector<vector<int>> &edges)
// {
//     for(int i=0;i<edges.size();i++){
//         int u=edges[i][0];
//         int v=edges[i][1];

//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
// }

// void dfs(unordered_map<int, list<int> > &adj, vector<int> &component, unordered_map<int,bool> &visited, int node)
// {
//     component.push_back(node);
//     visited[node]=true;

//     //recursive call for every node
//     for(auto i:adj[node]){
//         if(!visited[i]==true){
//             dfs(adj,component,visited,i);
//         }
//     }
// }

// vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
// {
//     unordered_map<int, list<int> > adj;
//     unordered_map<int,bool> visited;

//     //creating the adjacency list
//     createAdjList(adj,edges);

//     vector<vector<int> >ans;
//     for(int i=0;i<V;i++){
//         if(!visited[i]==true){
//             vector<int> component;
//             dfs(adj,component, visited,i);
//             ans.push_back(component);
//         }
//     }
//     return ans;
// }