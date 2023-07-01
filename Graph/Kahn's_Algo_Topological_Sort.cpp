// //Kahn's Algorithm for solving topological sort (DAG)

// //https://www.codingninjas.com/studio/problems/topological-sort_982938?topList=love-babbar-dsa-sheet-problems&leftPanelTab=1&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include <bits/stdc++.h> 
// vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    
//     //step-1 create the adjacent list
//     unordered_map<int,list<int> >adj;
//     for(int i=0;i<e;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
        
//         adj[u].push_back(v);
//     }

//     //step-2 create the indegree
//     vector<int> indegree(v);
//     for(auto i:adj){
//         for(auto j:i.second){
//             indegree[j]++;
//         }
//     }

//     //step-3 if indegree is 0 then push it to the queue
//     queue<int> q;
    
//     for(int i=0;i<v;i++){
//         if(indegree[i]==0){
//             q.push(i);
//         }
//     }

//     //step-3 do the dfs for kahn's algo
//     vector<int> ans;
//     while(!q.empty()){

//         //add the front of the q to the frontnode
//         int frontNode=q.front();
//         //then pop that element from the queue
//         q.pop();
//         //add it to the ans vector
//         ans.push_back(frontNode);

//         for(auto neighbour:adj[frontNode]){
//             indegree[neighbour]--;
//             if(indegree[neighbour]==0){
//                 q.push(neighbour);
//             }
//         }
//     }
//     return;
// }