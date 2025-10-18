#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

void AddEdge(vector<vector<pair<int, int>>> &adj, int u, int v, int w) {
    adj[u].push_back({v, w});
    adj[v].push_back({u, w});
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

        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            int w = adj[u][i].second;

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

    AddEdge(adj, 0, 1, 10);
    AddEdge(adj, 0, 4, 3);
    AddEdge(adj, 1, 2, 2);
    AddEdge(adj, 1, 4, 4);
    AddEdge(adj, 2, 3, 9);
    AddEdge(adj, 4, 1, 1);
    AddEdge(adj, 4, 2, 8);

    Dijkstra(adj, V, 0);
    cout << "\n";
    cout << "Vishal Mehra" << " " << "2023242032" << " ";
    return 0;
}
