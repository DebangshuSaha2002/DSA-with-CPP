// //Using BFS
// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// private:
//     bool check(int start,vector<int> adj[],vector<int>& vis){
//         queue<int> q;
//         vis[start]=0;
//         q.push(start);
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
//             for(auto it:adj[node]){
//                 if(vis[it]==-1){
//                     vis[it]=!vis[node];
//                     q.push(it);
//                 }else if(vis[it]==vis[node]){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// public:
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    vector<int> vis(V,-1);
// 	    for(int i=0;i<V;i++){
// 	        if(vis[i]==-1){
// 	            if(check(i,adj,vis)==false){
// 	                return false;
// 	            }
// 	        }
// 	    }
// 	    return true;
// 	}

// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int V, E;
// 		cin >> V >> E;
// 		vector<int>adj[V];
// 		for(int i = 0; i < E; i++){
// 			int u, v;
// 			cin >> u >> v;
// 			adj[u].push_back(v);
// 			adj[v].push_back(u);
// 		}
// 		Solution obj;
// 		bool ans = obj.isBipartite(V, adj);    
// 		if(ans)cout << "1\n";
// 		else cout << "0\n";  
// 	}
// 	return 0;
// }
// // } Driver Code Ends

//DFS

// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// private:
//     bool DFScheck(int node,int col,vector<int> adj[],vector<int>& colors){
//         colors[node]=col;
//         for(auto it:adj[node]){
//             if(colors[it]==-1){
//                 colors[it]=!colors[node];
//                 if(DFScheck(it,colors[it],adj,colors)==false){
//                     return false;
//                 }
//             }else if(colors[node]==colors[it]){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    vector<int> colors(V,-1);
// 	    for(int i=0;i<V;i++){
// 	        if(colors[i]==-1){
// 	            if(DFScheck(i,0,adj,colors)==false){
// 	                return false;
// 	            }
// 	        }
// 	    }
// 	    return true;
// 	}

// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
// 		int V, E;
// 		cin >> V >> E;
// 		vector<int>adj[V];
// 		for(int i = 0; i < E; i++){
// 			int u, v;
// 			cin >> u >> v;
// 			adj[u].push_back(v);
// 			adj[v].push_back(u);
// 		}
// 		Solution obj;
// 		bool ans = obj.isBipartite(V, adj);    
// 		if(ans)cout << "1\n";
// 		else cout << "0\n";  
// 	}
// 	return 0;
// }
// // } Driver Code Ends