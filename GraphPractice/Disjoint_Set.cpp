#include<iostream>
#include<vector>
using namespace std;

class DisjointSet{
    vector<int> parent,rank;
    public:
    DisjointSet(int n){
        parent.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }

    int findUParent(int node){
        if(node==parent[node]){
            return node;
        }

        return parent[node]= findUParent(parent[node]);
    }

    void unionBYRank(int u,int v){
        int ulp_u=findUParent(u);
        int ulp_v=findUParent(v);
        if(ulp_u == ulp_v){
            return ;
        }

        if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
        }
        else if(rank[ulp_v]<rank[ulp_u]){
            parent[ulp_v]=ulp_u;
        }
        else{
            //Both the ranks are equal
            parent[ulp_u]=ulp_v;
            rank[ulp_v]++;
        }
    }
};

int main(){

    DisjointSet ds(7);
    ds.unionBYRank(1,2);
    ds.unionBYRank(2,3);
    ds.unionBYRank(4,5);
    ds.unionBYRank(6,7);
    ds.unionBYRank(5,6);
    if(ds.findUParent(3) == ds.findUParent(7)){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    ds.unionBYRank(3,7);
    if(ds.findUParent(3) == ds.findUParent(7)){
        cout<<"Same"<<endl;
    }else{
        cout<<"Not Same"<<endl;
    }
    return 0;
}