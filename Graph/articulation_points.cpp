// articulation points are those nodes in the graph which
//if removed will make the graph disconnected or will break it
//into 1 or many number of components

#include<iostream>
#include<vector>
#include<list>
#include<unordered_map>
using namespace std;

int min(int a,int b){
    if(a<b){
        return a;
    }
    return b;
}

void dfs(int node, int parent,vector<int> &disc,unordered_map<int,bool> &vis,vector<int> &low,vector<int> &ap,int &timer,unordered_map<int,list<int> > &adj){
    int child=0;
    vis[node]=true;
    disc[node]=low[node]=timer++;
    for(auto nbr:adj[node]){
        //in this case just ignore
        if(nbr==parent){
            continue;
        }
        if(!vis[nbr]==true){
            dfs(nbr,node,disc,vis,low,ap,timer,adj);
            //we need to update the low as well
            //remember that case...do dry run with an eg
            low[node]=min(low[node],low[nbr]);
            if(low[nbr]>=disc[node] && parent!=-1){
                ap[node]=1;
            }
            child++;
        }
        else{
            low[node]=min(low[node],disc[nbr]);
        }
    }
    if(parent==-1 && child>1){
        ap[node]=1;
    }
}

int main(){
    int n=5;
    int e=5;
    vector<pair<int,int> >edges;

    edges.push_back(make_pair(0,3));
    edges.push_back(make_pair(3,4));
    edges.push_back(make_pair(0,4));
    edges.push_back(make_pair(0,1));
    edges.push_back(make_pair(1,2));

    //adjacency list made
    unordered_map<int,list<int> >adj;
    for(int i=0;i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    //create the required data structure
    vector<int> disc(n);
    unordered_map<int,bool> vis;
    vector<int> low(n);
    vector<int> ap(n,0);
    int timer=0;
    int parent=-1;

    //initializing
    for(int i=0;i<n;i++){
        disc[i]=-1;
        low[i]=-1;
    }

    for(int i=0;i<n;i++){
        if(!vis[i]==true){
            dfs(i,parent,disc,vis,low,ap,timer,adj);
        }
    }

    //printing the articulation points
    cout<<"Articulation points are as below:"<<endl;
    for(int i=0;i<n;i++){
        if(ap[i]!=0){
            cout<<i<<" ";
        }
    }cout<<endl;
    return 0;
}
