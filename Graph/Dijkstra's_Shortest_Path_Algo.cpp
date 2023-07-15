// //https://www.codingninjas.com/studio/problems/dijkstra-s-shortest-path_920469?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// #include <bits/stdc++.h> 
// vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
//     unordered_map<int,list<pair<int,int> > >adj;
//     //create the adjacency list
//     for(int i=0;i<edges;i++){
//         int u=vec[i][0];
//         int v=vec[i][1];
//         int w=vec[i][2];

//         adj[u].push_back(make_pair(v,w));
//         adj[v].push_back(make_pair(u,w));
//     }

//     //create the set
//     set<pair<int,int> > st;
//     st.insert(make_pair(0,source));
//     vector<int> dist(vertices);
//     //initialize the distance vector with Infinity (INT_MAX)
//     for(int i=0;i<vertices;i++){
//         dist[i]=INT_MAX;
//     }
//     //make source node distance as 0
//     dist[source]=0;

//     while(!st.empty()){
//         auto top=*(st.begin());
//         int nodeDistance=top.first;
//         int topNode=top.second;
//         //erase the topNode
//         st.erase(st.begin());

//         for(auto neighbour:adj[topNode]){
//             if(neighbour.second+nodeDistance<dist[neighbour.first]){
//                 auto record=st.find(make_pair(dist[neighbour.first],neighbour.first));
//                 //if record find then erase
//                 if(record!=st.end()){
//                     st.erase(record);
//                 }

//                 //update the distance
//                 dist[neighbour.first]=neighbour.second+nodeDistance;
//                 //push the record in the set
//                 st.insert(make_pair(dist[neighbour.first],neighbour.first));
//             }
//         }
//     }
//     return dist;
// }
