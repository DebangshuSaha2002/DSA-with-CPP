// //Bellman ford algorithm can be used to find the
// //shortest minimum distance between 2 nodes in a graph
// //We cannot use Dijkstra's Algo for negative weights
// //Thats why we are using Bellman ford

// //Logic is:
// //n-1 times use the formula 
// // if(dist[u]+wt<dist[v])
// // {
// //     dist[v]=dist[u]+wt;
// // }

// //and after this one more time use the same formula
// //AT that time if the distance vector is updated then
// //that means there is a negative cycle 

// //So Bellman Ford algo can be used to DETECT NEGATIVE CYCLE
// //As well as to find shortest distance (negative weights may be present)

// #include <bits/stdc++.h> 
// int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
//     //means in dist vector all the blanks are filled with a very high value of 1e9
//     vector<int> dist(n+1,1e9);
//     dist[src]=0;
//     //n-1 times do the following
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<m;j++){
//             int u=edges[j][0];
//             int v=edges[j][1];
//             int wt=edges[j][2];
//             if(dist[u]!=1e9 && ((dist[u]+wt)<dist[v])){
//                 dist[v]=dist[u]+wt;
//             }
//         }
//     }

//     //check for negative cycle
//     bool flag=false;
//     for(int j=0;j<m;j++){
//         int u=edges[j][0];
//         int v=edges[j][1];
//         int wt=edges[j][2];

//         if(dist[u]!=1e9 && dist[u]+wt<dist[v]){
//             flag=true;
//         }
//     }

//     if(flag==false){
//         return dist[dest];
//     }
//     else{
//         return -1;
//     }
// }