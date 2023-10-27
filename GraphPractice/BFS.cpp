#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> bfsOfGraph(vector<int> adj[]) {
        vector<int> ans;
        vector<int> visited(6,0);
        queue<int> q;
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for (auto it:adj[front]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }

int main(){
    vector<int> adj[6];
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


    vector<int> ans=bfsOfGraph(adj);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
}
