#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Structure to represent an edge
struct Edge {
    int src, dest, weight;
};

// Function to perform Bellman-Ford algorithm
void BellmanFord(int V, int E, vector<Edge>& edges, int src) {
    vector<int> dist(V, INT_MAX);
    dist[src] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src;
            int v = edges[j].dest;
            int weight = edges[j].weight;

            if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
            }
        }
    }

    // Check for negative weight cycle
    for (int i = 0; i < E; i++) {
        int u = edges[i].src;
        int v = edges[i].dest;
        int weight = edges[i].weight;

        if (dist[u] != INT_MAX && dist[u] + weight < dist[v]) {
            cout << "Graph contains negative weight cycle!" << endl;
            return;
        }
    }

    // Print shortest distances
    cout << "Vertex Distance from Source\n";
    for (int i = 0; i < V; i++) {
        cout << i << "\t\t" << dist[i] << endl;
    }
}

int main() {
    cout << "Vishal Mehra\n";

    int V = 5; // number of vertices
    int E = 8; // number of edges

    vector<Edge> edges(E);

    edges[0] = {0, 1, -1};
    edges[1] = {0, 2, 4};
    edges[2] = {1, 2, 3};
    edges[3] = {1, 3, 2};
    edges[4] = {1, 4, 2};
    edges[5] = {3, 2, 5};
    edges[6] = {3, 1, 1};
    edges[7] = {4, 3, -3};

    BellmanFord(V, E, edges, 0);

    return 0;
}
