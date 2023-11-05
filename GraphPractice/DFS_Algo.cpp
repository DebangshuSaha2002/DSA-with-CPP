#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void dfs(int node,int V,vector<int> &vis,vector<int> &ans,vector<int> adj[]){
    vis[node]=true;
    ans.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,V,vis,ans,adj);
        }
    }
}

int main(){

    int V;
    cout<<"Enter the number of vertices:";
    cin>>V;

    vector<int> adj[V];

    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(5);
    adj[2].push_back(1);
    adj[2].push_back(5);
    adj[2].push_back(4);
    adj[2].push_back(3);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[4].push_back(2);
    adj[4].push_back(3);
    adj[5].push_back(1);
    adj[5].push_back(2);
    adj[5].push_back(4);
    
    vector<int> store;
    vector<int> ans;
    vector<int> visited(V,0);
    for(int i=0;i<V;i++){
        if(!visited[i]){
            dfs(i,V,visited,ans,adj);
        }
    }

    //ans is stored in the ans vector
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}