// From a given vertex in a weighted connected graph, 
// find shortest paths to other vertices using Dijkstra’s algorithm.

#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void AddEdge(vector<vector<pair<int, int>>> &adj, int u, int v, int w) {
    adj[u].push_back({v, w});
    adj[v].push_back({u, w}); // because the graph is undirected
}

void Dijkstra(vector<vector<pair<int, int>>> &adj, int V, int src) {
    vector<int> dist(V, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        for (auto edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < V; i++)
        cout << "Vertex " << i << " Distance from Source: " << dist[i] << "\n";
}

int main() {
    int V = 5;
    vector<vector<pair<int, int>>> adj(V);

    // Adding edges (connected graph)
    AddEdge(adj, 0, 1, 2);
    AddEdge(adj, 0, 4, 5);
    AddEdge(adj, 1, 2, 3);
    AddEdge(adj, 1, 3, 4);
    AddEdge(adj, 2, 3, 6);
    AddEdge(adj, 3, 4, 1);

    cout << "Enter source vertex: ";
    int src;
    cin >> src;

    Dijkstra(adj, V, src);

    cout << "\nVishal Mehra 2023242032\n";
    return 0;
}
