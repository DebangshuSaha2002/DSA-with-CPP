//Disjoint Set Data Structure

#include<iostream>
#include<vector>
using namespace std;

class disjointSet{
    public:
    vector<int> parent,rank;
    disjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findUParent(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findUParent(parent[node]);
    }

    void unionByRank(int u,int v){
        int ulp_u=findUParent(u);
        int ulp_v=findUParent(v);
        if(ulp_u==ulp_v){
            return;
        }

        if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]){
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_u]=ulp_v;
            rank[ulp_v]++;
        }
    }

};

int main(){
    disjointSet s(7);
    s.unionByRank(1,2);
    s.unionByRank(2,3);
    s.unionByRank(4,5);
    s.unionByRank(6,7);
    s.unionByRank(5,6);

    //check whether 3 and 7 belong to the same component

    if(s.findUParent(3) == s.findUParent(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

    s.unionByRank(3,7);

    if(s.findUParent(3) == s.findUParent(7)){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"Not Same"<<endl;
    }

    return 0;
}