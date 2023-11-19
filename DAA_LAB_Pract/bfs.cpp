#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void bfs(vector<int> adj[],int size,vector<int> &vis,int start,vector<int> &ans){
    queue<int> q;
    q.push(start);
    vis[start]=1;
    
    while(!q.empty()){
        int v=q.front();
        q.pop();
        cout<<v<<" ";
        for(auto it:adj[v]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }
}

void bfsTraversal(vector<int> adj[],int size){
    vector<int> vis(size,0);
    vector<int> ans;
    for(int i=1;i<size;i++){
        if(!vis[i]){
            bfs(adj,size,vis,i,ans);
        }
    }
}

int main(){
    vector<int> adj[7];

    adj[1].push_back(2);
    adj[1].push_back(4);
    adj[2].push_back(5);
    adj[3].push_back(5);
    adj[3].push_back(6);
    adj[4].push_back(2);
    adj[5].push_back(4);
    adj[6].push_back(6);

    int size=sizeof(adj)/sizeof(adj[0]);
    bfsTraversal(adj,size);

    return 0;
}