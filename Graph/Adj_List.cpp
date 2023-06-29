//Graph implementation using adjacency list

#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;
template <typename T>
class Graph{
    public:
    unordered_map<T,list<T> > adj;

    //I have considered direction to check whether the graph is directed or not
    void addEdge(T u,T v,bool direction){
        adj[u].push_back(v);

        //direction==0 means its a undirected graph
        //direction==1 means its a directed graph
        if(direction==0){
            adj[v].push_back(u);
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<"-->";
            for(auto j:i.second){
                cout<<j<<",";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the number of nodes:"<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges:"<<endl;
    cin>>m;
    Graph<int> g;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v,0);
    }

    g.printAdjList();
}