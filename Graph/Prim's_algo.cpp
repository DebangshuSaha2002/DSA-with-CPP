//Intuition is Greedy
//T.C = E log E

//When we take out a node from the P.Q then check whether its visited or not first
//If its visited then ignore it
//If its not visited then first make it visited and then add the wt of it to the sum
//Now traverse over its adj Node 
//If its not visited then push it into the P.Q

//Need to maintain a visited array, initially initialized with 0

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