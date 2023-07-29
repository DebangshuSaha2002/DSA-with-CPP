// //Solve at - https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implementing-dijkstra-set-1-adjacency-matrix

// class Solution
// {
// 	public:
// 	//Function to find the shortest distance of all the vertices
//     //from the source vertex S.
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         set<pair<int,int> > st;
//         st.insert(make_pair(0,S));
//         vector<int> dist(V,INT_MAX);
//         dist[S]=0;
//         while(!st.empty()){
//             auto top=*(st.begin());
//             int TopNodeDist=top.first;
//             int TopNodeData=top.second;
//             st.erase(st.begin());
//             for(auto nbr:adj[TopNodeData]){
//                 if(TopNodeDist + nbr[1] < dist[nbr[0]]){
//                     auto r=st.find(make_pair(dist[nbr[0]],nbr[0]));
//                     if(r!=st.end()){
//                         st.erase(r);
//                     }
                    
//                     dist[nbr[0]]=TopNodeDist+nbr[1];
                    
//                     st.insert(make_pair(dist[nbr[0]],nbr[0]));
//                 }
                
//             }    
//         }
//         return dist;
//     }
// };