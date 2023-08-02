//https://www.codingninjas.com/studio/problems/code-kruskal-s-algorithm_6320?leftPanelTab=1

// #include <iostream>
// #include<vector>
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;

// class disjointSet{
//     public:
//     vector<int> rank,parent;
//     disjointSet(int n){
//         rank.resize(n+1,0);
//         parent.resize(n+1);

//         for(int i=0;i<=n;i++){
//             parent[i]=i;
//         }
//     }

//     int findUParent(int node){
//         if(node==parent[node]){
//             return node;
//         }

//         return parent[node]=findUParent(parent[node]);
//     }

//     void UnionByRank(int u,int v){
//         int ulp_u=parent[u];
//         int ulp_v=parent[v];

//         if(ulp_u == ulp_v){
//             return;
//         }

//         if(rank[ulp_u]<rank[ulp_v]){
//             parent[ulp_u]=ulp_v;
//         }
//         else if(rank[ulp_v]<rank[ulp_u]){
//             parent[ulp_v]=ulp_u;
//         }
//         else{
//             parent[ulp_u]=ulp_v;
//             rank[ulp_v]++;
//         }
//     }
// };

// int main() {
//     // Write your code here
//     int V,E;
//     cin>>V>>E;
//     //{wt,{u,v}}
//     vector<pair<int,pair<int,int> > > edges;
//     for(int i=0;i<E;i++){
//         int u,v,wt;
//         cin>>u>>v>>wt;
//         edges.push_back({wt,{u,v}});
//     }
//     vector<pair<int,pair<int,int> > > ans;
//     sort(edges.begin(),edges.end());
//     disjointSet s(V);
//     for(auto it:edges){
//         int wt=it.first;
//         int u=it.second.first;
//         int v=it.second.second;

//         if(s.findUParent(u) != s.findUParent(v)){
//             s.UnionByRank(u,v);
//             if(u<v){
//                 ans.push_back({u,{v,wt}});
//             }
//             else{
//                 ans.push_back({v,{u,wt}});    
//             }
//         }
//     }
//     for(auto it:ans){
//         cout<<it.first<<" ";
//         cout<<it.second.first<< " ";
//         cout<<it.second.second<<" ";
//         cout<<endl;
//     }

//     return 0;
// }