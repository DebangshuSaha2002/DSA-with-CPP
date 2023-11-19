//Dijkstr'a algo

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void Dijkstra(vector<vector<int> >adj[],vector<int> &dist){
    // {w,u}
    priority_queue<pair<int,int> ,vector<pair<int,int> >,greater<pair<int,int> > >pq;
    dist[0]=0;
    pq.push({0,0});
    while(!pq.empty()){
        auto front=pq.top();
        int w=front.first;
        int u=front.second;
        pq.pop();

        for(auto it:adj[u]){
            int edgWt=it[0];
            int v=it[1];
            if(edgWt+w<dist[v]){
                dist[v]=edgWt+w;
                pq.push({dist[v],v});
            }
        }
    }
}

int main(){
    vector<vector<int>> adj[6];
    vector<vector<int>> edges;
    vector<int> v1{1, 3}, v2{2, 3}, v3{2, 4}, v4{4, 2}, 
    v5{4, 1}, v6{0, 4},v7{2, 4},v8{4, 3},v9{5, 5},v10{1, 2},
    v11{4, 2};
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[3].push_back(v6);
    adj[3].push_back(v7);
    adj[3].push_back(v8);
    adj[3].push_back(v9);
    adj[5].push_back(v10);
    adj[5].push_back(v11);
    vector<int> dist(6,1e9);
    Dijkstra(adj,dist);
    return 0;
}