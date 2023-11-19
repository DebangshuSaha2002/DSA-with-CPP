#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;

void dijkstra(unordered_map<char, vector<pair<char,int> > > &adj,char start){
    priority_queue<pair<char,int>,vector<pair<char,int> >,greater<pair<char,int> > > pq;
    pq.push(make_pair(start,0));
    vector<int> dist(adj.size(),INT_MAX);
    dist[start-'a']=0;
    while(!pq.empty()){
        auto front=pq.top();
        pq.pop();
        char u=front.first;
        int w=front.second;
        for(auto it: adj[u]){
            int v=it.first;
            int edgWt=it.second;
            if(w+edgWt<dist[v-'a']){
                dist[v-'a']=w+edgWt;
                pq.push(make_pair(v,dist[v-'a']));
            }
        }
    }

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
}


int main() {
    unordered_map<char, vector<pair<char,int> > > adj;

    adj['s'].push_back(make_pair('t',10));
    adj['s'].push_back(make_pair('y',5));
    adj['t'].push_back(make_pair('x',1));
    adj['t'].push_back(make_pair('y',2));
    adj['x'].push_back(make_pair('z',4));
    adj['y'].push_back(make_pair('t',3));
    adj['y'].push_back(make_pair('x',9));
    adj['y'].push_back(make_pair('z',2));
    adj['z'].push_back(make_pair('s',7));
    adj['z'].push_back(make_pair('x',6));

    char start = 's';
    dijkstra(adj, start);

    return 0;
}
