#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int> rank, parent, size;
    public:
        DisjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1,1);
            for(int i=0;i<=n;i++){
                parent[i]=i;
            }
        }

        int findUltimateParent(int node){
            if(node==parent[node]){
                return node;
            }

            return parent[node]=findUltimateParent(parent[node]);
        }

        void UnionByRank(int u,int v){
            int ulp_u=findUltimateParent(u);
            int ulp_v=findUltimateParent(v);
            if(ulp_u==ulp_v) return ;

            if(rank[ulp_u]<rank[ulp_v]){
                parent[ulp_u]=ulp_v;
            }
            else if (rank[ulp_v]<rank[ulp_u]){
                parent[ulp_v]=ulp_u;
            }
            else{
                parent[ulp_v]=ulp_u;
                rank[ulp_u]++;
            }
        }

        void UnionBySize(int u,int v){
            int ulp_u=findUltimateParent(u);
            int ulp_v=findUltimateParent(v);
            if(ulp_u==ulp_v) return ;

            if(size[ulp_u]<size[ulp_v]){
                parent[ulp_u]=ulp_v;
                size[ulp_v]+=size[ulp_u];
            }
            else{
                parent[ulp_v]=ulp_u;
                size[ulp_u]+=size[ulp_v];
            }
        }
};

int main(){
    DisjointSet ds(7);
    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);

    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)){
        cout<<"They are in the same component"<<endl;
    }else{
        cout<<"They are not in the same component"<<endl;
    }

    ds.UnionBySize(3,7);

    if(ds.findUltimateParent(3) == ds.findUltimateParent(7)){
        cout<<"They are in the same component"<<endl;
    }else{
        cout<<"They are not in the same component"<<endl;
    }
    return 0;
}