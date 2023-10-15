//https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implementing-dijkstra-set-1-adjacency-matrix
//using set
//T.C = V log E

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution
// {
// 	public:
// 	//Function to find the shortest distance of all the vertices
//     //from the source vertex S.
//     vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
//     {
//         set<pair<int,int> > st;
//         st.insert({S,0});
//         vector<int> dist(V,1e8);
//         dist[S]=0;
//         while(!st.empty()){
//             auto front=*(st.begin());
//             int node=front.first;
//             int d=front.second;
//             st.erase(front);
//             for(auto it:adj[node]){
//                 int next=it[0];
//                 int wt=it[1];
//                 if(d+wt<dist[next]){
//                     if(dist[next]!=1e8){
//                         st.erase({next,dist[next]});
//                     }
//                     dist[next]=d+wt;
//                     st.insert({next,dist[next]});
//                 }
//             }
//         }
//         return dist;
//     }
// };


// //{ Driver Code Starts.


// int main()
// {
//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;
//         vector<vector<int>> adj[V];
//         int i=0;
//         while (i++<E) {
//             int u, v, w;
//             cin >> u >> v >> w;
//             vector<int> t1,t2;
//             t1.push_back(v);
//             t1.push_back(w);
//             adj[u].push_back(t1);
//             t2.push_back(u);
//             t2.push_back(w);
//             adj[v].push_back(t2);
//         }
//         int S;
//         cin>>S;
        
//         Solution obj;
//     	vector<int> res = obj.dijkstra(V, adj, S);
    	
//     	for(int i=0; i<V; i++)
//     	    cout<<res[i]<<" ";
//     	cout<<endl;
//     }

//     return 0;
// }


// // } Driver Code Ends