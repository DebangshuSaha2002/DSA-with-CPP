// //Kruskal's Algorithm .... using disjoint sets
// //https://www.codingninjas.com/studio/problems/minimum-spanning-tree_631769?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// //Solve again later on--NOTE

// #include<algorithm>
// bool cmp(vector<int>& a, vector<int>& b){
//   return a[2]<b[2];
// }
// void makeSet(vector<int>& parent, vector<int>& rank,int n){
//   for(int i=0;i<n;i++){
//     parent[i]=i;
//     rank[i]=0;
//   }
// }

// int findParent(int node,vector<int>& parent){
//   if(parent[node]==node){
//     return node;
//   }
//   return parent[node]=findParent(parent[node],parent);
// }

// void unionSet(int u,int v,vector<int> &parent,vector<int> &rank){
//   u=findParent(u,parent);
//   v=findParent(v,parent);

//   if(rank[u]<rank[v]){
//     parent[u]=v;
//   }
//   else if(rank[v]<rank[u]){
//     parent[v]=u;
//   }
//   else{
//     parent[v]=u;
//     rank[u]++;
//   }
// }

// int minimumSpanningTree(vector<vector<int>>& edges, int n)
// {
//   int minWeight=0;
//   sort(edges.begin(),edges.end(),cmp);

//   vector<int> parent(n);
//   vector<int> rank(n);
//   makeSet(parent,rank,n);

//   for(int i=0;i<edges.size();i++){
//     int u=findParent(edges[i][0],parent);
//     int v=findParent(edges[i][1],parent);
//     int wt=edges[i][2];

//     if(u!=v){
//       minWeight+=wt;
//       unionSet(u,v,parent,rank);
//     }
//   }
//   return minWeight;
// }