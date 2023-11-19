// bfs in matrix format for characters
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Function to perform BFS
void bfs(vector<vector<char>>& graph, vector<vector<bool>>& visited, int startX, int startY) {
    int dx[] = { -1, 1, 0, 0 };
    int dy[] = { 0, 0, -1, 1 };
    queue<pair<int, int>> q;
    visited[startX][startY] = true;
    q.push({ startX, startY });

    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        int x = current.first;
        int y = current.second;
        cout << graph[x][y] << " ";
        for (int i = 0; i < 4; i++) {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if (newX >= 0 && newX < graph.size() && newY >= 0 && newY < graph[0].size() &&
                !visited[newX][newY]) {
                visited[newX][newY] = true;
                q.push({ newX, newY });
            }
        }
    }
}

int main() {
    // Define the graph
    vector<vector<char>> graph = {
        { 'A', 'B', 'C', 'D' },
        { 'E', 'F', 'G', 'H' },
        { 'I', 'J', 'K', 'L' },
        { 'M', 'N', 'O', 'P' }
    };

    // Define the visited array to keep track of visited nodes
    vector<vector<bool>> visited(graph.size(), vector<bool>(graph[0].size(), false));

    // Perform BFS starting from node (0, 0)
    bfs(graph, visited, 0, 0);

    return 0;
}