//https://www.geeksforgeeks.org/problems/bipartite-graph/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bipartite-graph

// class Solution {
// private: 
//     bool check(int start, int V, vector<int> adj[], int col[]){
//         queue<int> q;
//         q.push(start);
//         col[start]=0;
        
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
            
//             for(auto it:adj[node]){
//                 if(col[it]==-1){
//                     col[it]=!col[node];
//                     q.push(it);
//                 }
//                 else if(col[it]==col[node]){
//                     return false;
//                 }
//             }
//         }
//         return true;
//     }
// public:
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    int col[V];
// 	    //initially covered all the colours with -1; 
// 	    for(int i=0;i<V;i++) col[i]=-1;
	    
// 	    for(int i=0;i<V;i++){
// 	        if(col[i]==-1){
// 	            if(check(i, V, adj, col)==false){
// 	                return false;
// 	            }
// 	        }
// 	    }
// 	    return true;
// 	}

// };


//USING DFS
// class Solution {
// private: 
//     bool check(int start, int V, vector<int> adj[], vector<int> &col){
//         for(auto it:adj[start]){
//             if(col[it]==-1){
//                 col[it]=!col[start];
//                 if(check(it, V, adj, col)==false){
//                     return false;
//                 }
//             }else if(col[it]==col[start]){
//                 return false;
//             }
//         }
//         return true;
//     }
// public:
// 	bool isBipartite(int V, vector<int>adj[]){
// 	    vector<int> col(V,-1);
// 	    //initially covered all the colours with -1; 
// 	    for(int i=0;i<V;i++) col[i]=-1;
	    
// 	    for(int i=0;i<V;i++){
// 	        if(col[i]==-1){
// 	            if(check(i, V, adj, col)==false){
// 	                return false;
// 	            }
// 	        }
// 	    }
// 	    return true;
// 	}

// };