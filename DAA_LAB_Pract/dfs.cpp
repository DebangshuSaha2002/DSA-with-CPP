#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;



void dfs(vector<int> adj[],int size,vector<int> &vis,int start){
    stack<int> s;
    s.push(start);
    vis[start]=1;
    while(!s.empty()){
        int top=s.top();
        s.pop();
        cout<<top<<" ";
        for(auto it: adj[top]){
            if(!vis[it]){
                vis[it]=1;
                s.push(it);
            }
        }
    }
}

void dfsTraversal(vector<int> adj[],int size){
    vector<int> vis(size,0);
    int count=0;
    for(int i=1;i<size;i++){
        if(!vis[i]){
            count++;
            dfs(adj,size,vis,i);
        }
    }
    cout<<"\nNum of islands:"<<count<<endl;
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

    dfsTraversal(adj,size);

    return 0;
}