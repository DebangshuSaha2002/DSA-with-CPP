// https://practice.geeksforgeeks.org/problems/minimum-spanning-tree/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=minimum-spanning-tree

// class Solution
// {
// 	public:
// 	//Function to find sum of weights of edges of the Minimum Spanning Tree.
//     int spanningTree(int V, vector<vector<int>> adj[])
//     {
//         //first make a priority queue
//         priority_queue<pair<int,int> , vector<pair<int,int> >, greater<pair<int,int> > >pq;
//         //make a visited array
//         vector<int> visited(V,0);
//         //edgewt,node
//         pq.push({0,0});
        
//         int sum=0;
//         //Now do until the P.Q becomes empty
//         while(!pq.empty()){
//             auto top=pq.top();
//             pq.pop();
//             int wt=top.first;
//             int node=top.second;
            
//             //check if they are visited or not
//             //If visited the ignore
//             if(visited[node]==1){
//                 continue;
//             }
//             //If not visited then make it visited
//             visited[node]=1;
//             //Then add the weight to the sum
//             sum+=wt;
            
//             for(auto nbr:adj[node]){
//                 int NodeData=nbr[0];
//                 int NodeWt=nbr[1];
                
//                 if(!visited[NodeData]){
//                     pq.push({NodeWt,NodeData});
//                 }
//             }
//         }
//         return sum;
//     }
// };