#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfs(vector<int> adjList[],int V,int &count){
    queue<int> q;
    vector<int> ans;
    vector<int> visited(V+1,0);
    q.push(0);
    visited[0]=1;
    while(!q.empty()){
        int val=q.front();
        q.pop();
        ans.push_back(val);
        for(auto it:adjList[val]){
            count++;
            if(!visited[it]){
                q.push(it);
                visited[it]=1;
            }
        }
    }

    //Now I have the answer in my ans vector;
    return ans;
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
    int count=0;
    store=bfs(adj,V,count);
    for(int i=0;i<store.size();i++){
        cout<<store[i]<<" ";
    }

    cout<<"\nObserved number of steps : "<<count<<endl;
    return 0;
}