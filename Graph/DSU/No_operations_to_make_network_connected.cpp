//Leetcode - https://leetcode.com/problems/number-of-operations-to-make-network-connected/

// class DisjointSet{
//     vector<int> parent,size;
//     public:
//     DisjointSet(int n){
//         parent.resize(n+1);
//         size.resize(n+1,1);
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
    
//     void UnionBySize(int u, int v){
//         int ulp_u=findUParent(u);
//         int ulp_v=findUParent(v);
//         if(ulp_u == ulp_v) return;
//         if(size[ulp_u]<size[ulp_v]){
//             parent[ulp_u]=ulp_v;
//             size[ulp_v]+=size[ulp_u];
//         }
//         else
//         {
//             parent[ulp_v]=ulp_u;
//             size[ulp_u]+=size[ulp_v];
//         }
//     }
// };
// class Solution{
// public:
//     int makeConnected(int n, vector<vector<int>>& connections) {
//         //basically the ans is the total number of components -1
//         //so to connect a component using a edge i need to check whether there are any extra edges in the current component or not
//         //This can be done using the DSU Data Structure
//         int extraEdges=0;
//         DisjointSet ds(n);
//         for(auto it:connections){
//             if(ds.findUParent(it[0]) != ds.findUParent(it[1])){
//                 ds.UnionBySize(it[0],it[1]);
//             }else{
//                 extraEdges+=1;
//             }
//         }

//         //count the number of components
//         int cntCompo = 0;
//         for(int i=0;i<n;i++){
//             if(ds.findUParent(i)==i){
//                 cntCompo+=1;
//             }
//         }
//         if(extraEdges >= cntCompo-1){
//             return cntCompo - 1;
//         }else{
//             return -1;
//         }
//     }
// };