#include <iostream>
#include <vector>
using namespace std;

vector<int> bellmanFord(int V, vector<vector<int>>& edges, int S) {
    vector<int> dist(V, 1e8); // Initialize distances with a large value
    dist[S] = 0; // Distance from source to itself is 0

    // Relax V-1 times
    for (int i = 0; i < V - 1; i++) {
        for (auto val : edges) {
            int u = val[0];
            int v = val[1];
            int wt = val[2];

            if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
                dist[v] = dist[u] + wt;
            }
        }
    }

    // Check for negative cycles
    for (auto val : edges) {
        int u = val[0];
        int v = val[1];
        int wt = val[2];

        if (dist[u] != 1e8 && dist[u] + wt < dist[v]) {
            // Negative cycle detected
            return {-1};
        }
    }

    return dist;
}

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> edges = {{0, 1, -1}, {0, 2, 4}, {1, 2, 3}, {1, 3, 2}, {1, 4, 2}, {3, 2, 5}, {3, 1, 1}, {4, 3, -3}};
    int S = 0; // Source vertex

    vector<int> result = bellmanFord(V, edges, S);

    if (result[0] == -1) {
        cout << "Negative cycle detected. No shortest path exists.";
    } else {
        cout << "Shortest distances from source " << S << ":" << endl;
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << ": " << result[i] << endl;
        }
    }

    return 0;
}