#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;

void solve(map<string,int> &m,vector<string> &balls){
    vector<string> ans;
    priority_queue<pair<int,string> > pq;
    for(auto it=m.begin();it!=m.end();it++){
        pq.push({it->second,it->first});
    }
    while(!pq.empty()){
        auto store=pq.top();
        pq.pop();
        ans.push_back(store.second);
        int val=store.first;
        val--;
        if(val>0){
            pq.push({val,store.second});
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<string> balls;
    balls.push_back("red");
    balls.push_back("red");
    balls.push_back("green");
    balls.push_back("green");
    balls.push_back("green");
    balls.push_back("orange");
    balls.push_back("black");
    balls.push_back("yellow");
    balls.push_back("yellow");

    //using a map to store freq
    map<string,int> m;
    for(int i=0;i<balls.size();i++){
        m[balls[i]]++;
    }

    solve(m,balls);
    return 0;
}