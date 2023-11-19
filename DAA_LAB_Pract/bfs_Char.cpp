#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

void bfs(unordered_map<char, vector<char> >& adj, vector<int>& vis, char start) {
    queue<char> q;
    q.push(start);
    vis[start - 'a'] = 1;

    while (!q.empty()) {
        char v = q.front();
        q.pop();
        cout << v << " ";
        for (char neighbor : adj[v]) {
            if (!vis[neighbor - 'a']) {
                vis[neighbor - 'a'] = 1;
                q.push(neighbor);
            }
        }
    }
}

void bfsTraversal(unordered_map<char, vector<char> >& adj, char start) {
    vector<int> vis(26, 0);  // Assuming vertices are lowercase letters
    bfs(adj, vis, start);
}

int main() {
    unordered_map<char, vector<char> > adj;

    adj['s'] = {'r', 'w', 'x'};
    adj['r'] = {'v', 's'};
    adj['v'] = {'r'};
    adj['w'] = {'s', 't', 'x'};
    adj['t'] = {'u', 'w', 'x'};
    adj['u'] = {'t', 'w', 'x'};
    adj['x'] = {'w', 't', 'u'};
    adj['y'] = {'x', 'u'};
    
    char start = 's';
    bfsTraversal(adj, start);

    return 0;
}
