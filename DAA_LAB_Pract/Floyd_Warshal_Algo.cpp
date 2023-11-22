#include <iostream>
#include <vector>
#include<limits>
using namespace std;
#define INF 99999
vector<vector<int>> floydWarshall(int V, vector<vector<int>>& graph) {
    vector<vector<int>> dist(V, vector<int>(V, 1e8));

    // Initialize the distance matrix with the given graph
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dist[i][j] = graph[i][j];
        }
    }

    // Perform the Floyd-Warshall algorithm
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j]) {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    return dist;
}

int main() {
    int V = 4; // Number of vertices
    vector<vector<int> > graph = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };

    vector<vector<int>> result = floydWarshall(V, graph);

    cout << "Shortest distances between all pairs of vertices:" << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (result[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << result[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}