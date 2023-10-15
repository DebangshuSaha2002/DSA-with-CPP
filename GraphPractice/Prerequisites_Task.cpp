// //Basically topo sort only
// //read and understand the question
//https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prerequisite-tasks


// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
// public:
// 	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
// 	    vector<int> adj[N];
// 	    for(int i=0;i<P;i++){
// 	        int f=prerequisites[i].first;
// 	        int n=prerequisites[i].second;
// 	        adj[f].push_back(n);
// 	    }
	    
// 	    vector<int> indegree(N,0);
// 	    for(int i=0;i<N;i++){
// 	        for(auto it:adj[i]){
// 	            indegree[it]++;
// 	        }
// 	    }
	    
// 	    int cnt=0;
// 	    queue<int> q;
// 	    for(int i=0;i<N;i++){
// 	        if(indegree[i]==0){
// 	            q.push(i);
// 	        }
// 	    }
	    
// 	    while(!q.empty()){
// 	        int front=q.front();
// 	        q.pop();
// 	        cnt++;
// 	        for(auto it: adj[front]){
// 	            indegree[it]--;
// 	            if(indegree[it]==0){
// 	                q.push(it);
// 	            }
// 	        }
// 	    }
	    
// 	    if(cnt==N){
// 	        return true;
// 	    }else
// 	        return false;
// 	}
// };

// //{ Driver Code Starts.
// int main(){
// 	int tc;
// 	cin >> tc;
// 	while(tc--){
//     	int N, P;
//         vector<pair<int, int> > prerequisites;
//         cin >> N;
//         cin >> P;
//         for (int i = 0; i < P; ++i) {
//             int x, y;
//             cin >> x >> y;
//             prerequisites.push_back(make_pair(x, y));
//         }
//         // string s;
//         // cin>>s;
//         Solution ob;
//         if (ob.isPossible(N,P, prerequisites))
//             cout << "Yes";
//         else
//             cout << "No";
//         cout << endl;
// 	}
// 	return 0;
// }
// // } Driver Code Ends