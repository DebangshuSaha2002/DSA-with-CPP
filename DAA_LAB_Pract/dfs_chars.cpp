#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(vector<char> adj[], int size, vector<int>& vis, char start) {
    stack<char> s;
    s.push(start);
    vis[start - 'a'] = 1;
    
    while (!s.empty()) {
        char top = s.top();
        s.pop();
        cout << top << " ";
        
        for (auto it : adj[top - 'a']) {
            if (!vis[it - 'a']) {
                vis[it - 'a'] = 1;
                s.push(it);
            }
        }
    }
}

void dfsTraversal(vector<char> adj[], int size) {
    vector<int> vis(size, 0);
    int count = 0;
    
    for (int i = 0; i < size; i++) {
        if (!vis[i]) {
            count++;
            dfs(adj, size, vis, i + 'a');
        }
    }
    
    cout << "\nNum of islands: " << count << endl;
}

int main() {
    vector<char> adj[7];
    
    adj['a' - 'a'].push_back('b');
    adj['a' - 'a'].push_back('d');
    adj['b' - 'a'].push_back('e');
    adj['c' - 'a'].push_back('e');
    adj['c' - 'a'].push_back('f');
    adj['d' - 'a'].push_back('b');
    adj['e' - 'a'].push_back('d');
    adj['f' - 'a'].push_back('f');
    
    int size = sizeof(adj) / sizeof(adj[0]);
    dfsTraversal(adj, size);
    
    return 0;
}