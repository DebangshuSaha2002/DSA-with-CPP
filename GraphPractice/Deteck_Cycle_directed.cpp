// //detecting cycle in a directed graph using kahns algo
// //if the topo sort size of == no of nodes then no cycle
// //but if size is less then no of nodes then cycle is detected

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     // Function to detect cycle in a directed graph.
//     bool isCyclic(int V, vector<int> adj[]) {
//         //KAHN's ALGO
// 	    //Need to maintain an indegree->must
// 	    vector<int> indegree(V,0);
// 	    for(int i=0;i<V;i++){
// 	        for(auto it:adj[i]){
// 	            indegree[it]++;
// 	        }
// 	    }
	    
// 	    //push all elements with indegree 0 into the queue
// 	    queue<int> q;
// 	    for(int i=0;i<V;i++){
// 	        if(indegree[i]==0){
// 	            q.push(i);
// 	        }
// 	    }
	    
// 	    int cnt=0;
// 	    while(!q.empty()){
// 	        int front=q.front();
// 	        q.pop();
// 	        cnt++;
// 	        for(auto it:adj[front]){
// 	            indegree[it]--;
// 	            if(indegree[it]==0){
// 	                q.push(it);
// 	            }
// 	        }
// 	    }
// 	    if(cnt==V){
// 	        return false;
// 	    }else
// 	        return true;
	    
//     }
// };

// //{ Driver Code Starts.

// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int V, E;
//         cin >> V >> E;

//         vector<int> adj[V];

//         for (int i = 0; i < E; i++) {
//             int u, v;
//             cin >> u >> v;
//             adj[u].push_back(v);
//         }

//         Solution obj;
//         cout << obj.isCyclic(V, adj) << "\n";
//     }

//     return 0;
// }

// // } Driver Code Ends