// //Count Strongly connected components
// //KOSARAJU's ALGORITHM
// //https://www.codingninjas.com/studio/problems/count-strongly-connected-components-kosaraju-s-algorithm_1171151?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar

// #include<unordered_map>
// #include<list>
// #include<stack>

// void dfs(int node, stack<int> &st,unordered_map<int,list<int> > &adj,unordered_map<int,bool> &visited)
// {
// 	visited[node]=true;
// 	for(auto nbr:adj[node]){
// 		if(!visited[nbr]==true){
// 			dfs(nbr,st,adj,visited);
// 		}
// 	}
// 	//topo logic
// 	st.push(node);
// }

// void revDfs(int node,unordered_map<int,bool> &visited,unordered_map<int,list<int> > &adj){
// 	visited[node]=true;
// 	for(auto nbr:adj[node]){
// 		if(!visited[nbr]){
// 			revDfs(nbr,visited,adj);
// 		}
// 	}
// }

// int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
// {
// 	//first create the adjacency list
// 	unordered_map<int,list<int> > adj;
// 	for(int i=0;i<edges.size();i++){
// 		int u=edges[i][0];
// 		int v=edges[i][1];

// 		adj[u].push_back(v);
// 	}

// 	//do the topo sort
// 	stack<int> st;
// 	unordered_map<int,bool> visited;
// 	for(int i=0;i<v;i++){
// 		if(!visited[i]){
// 			dfs(i,st,adj,visited);
// 		}
// 	}

// 	//now do the transpose of the graph
// 	//transpose means to change the edges
// 	unordered_map<int,list<int> > transpose;
// 	for(int i=0;i<v;i++){
// 		visited[i]=false;
// 		for(auto nbr:adj[i]){
// 			transpose[nbr].push_back(i);
// 		}
// 	}

// 	//now do the dfs and count
// 	int count=0;
// 	while(!st.empty()){
// 		int top=st.top();
// 		st.pop();
// 		if(!visited[top]==true){
// 			count++;
// 			revDfs(top,visited,transpose);
// 		}
// 	}
	
// 	return count;
// }