// //detect the bridge in the graph

// //bridge is an edge which if removed will increase the overall
// //connected components in the graph

// //It can also be said that bridge is the one which if removed
// //makes the graph disconnected

// //Brute force would be to take each edge and remove and do dfs

// //Below is the optimized approach

// //https://www.codingninjas.com/studio/problems/bridges-in-graph_893026?leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// //SOLVE AGAIN LATER
// #include<unordered_map>
// #include<list>
// void dfs(int node,int timer,int parent,vector<int> &disc,vector<int> &low,unordered_map<int,bool> &vis,
//         unordered_map<int,list<int> > &adj,vector<vector<int> > &result)
//     {
//         vis[node]=true;
//         disc[node]=low[node]=timer++;
//         for(auto nbr:adj[node]){
//             if(nbr==parent){
//                 //just ignore in this case
//                 continue;
//             }
//             if(!vis[nbr]==true){
//                 //if the neighbour is not visited then call dfs
//                 dfs(nbr,timer,node,disc,low,vis,adj,result);
//                 low[node]=min(low[node],low[nbr]);

//                 //check for bridge now
//                 if(low[nbr]>disc[node]){
//                     vector<int> ans;
//                     ans.push_back(node);
//                     ans.push_back(nbr);
//                     result.push_back(ans);
//                 }
//             }
//             else{
//                 //means the node is visited and its not equal to the parent
//                 //Case of Backedge
//                 low[node]=min(low[node],disc[nbr]);
//             }
//         }
//     }

// vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
//     //first create the adjacency list
//     unordered_map<int,list<int> >adj;
//     for(int i=0;i<edges.size();i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     //create the required data structures
//     int timer=0;
//     int parent=-1;
//     vector<int> disc(v);
//     vector<int> low(v);
//     unordered_map<int,bool>vis;

//     //we will store the ans in result
//     vector<vector<int> >result;

//     for(int i=0;i<v;i++){
//         disc[i]=-1;
//         low[i]=-1;
//     }
//     //do dfs
//     for(int i=0;i<v;i++){
//         if(!vis[i]){
//             dfs(i,timer,parent,disc,low,vis,adj,result);
//         }
//     }
//     return result;
// }