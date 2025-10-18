//Find Minimum Cost Spanning Tree of a given undirected graph using Prim’s algorithm. 
#include <iostream> 
#include <vector> 
#include <queue> 
#include <climits> 
using namespace std; 
 
const int INF = INT_MAX; 
 
void AddEdge(vector<vector<pair<int, int>>> &adj, int u, int v, int wt) { 
    adj[u].push_back({wt, v}); 
    adj[v].push_back({wt, u}); 
} 
 
void Prims(vector<vector<pair<int, int>>> &adj, int V, int start) { 
    vector<bool> visited(V, false); 
    vector<int> key(V, INF); 
    vector<int> parent(V, -1); 
    key[start] = 0; 
 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    pq.push({0, start}); 
 
    while (!pq.empty()) { 
        int u = pq.top().second; 
        pq.pop(); 
 
        if (visited[u]) 
            continue; 
        visited[u] = true; 
 
        for (int i = 0; i < adj[u].size(); i++) { 
            int wt = adj[u][i].first; 
            int v = adj[u][i].second; 
            if (!visited[v] && wt < key[v]) { 
                key[v] = wt; 
                parent[v] = u; 
                pq.push({key[v], v}); 
            } 
        } 
    } 
 
    int totalWeight = 0; 
    cout << "Minimum Spanning Tree edges:\n"; 
    for (int i = 0; i < V; i++) { 
        if (parent[i] != -1) { 
            cout << parent[i] << " - " << i << " with weight " << key[i] << "\n"; 
            totalWeight += key[i]; 
        } 
    } 
    cout << "Total weight of MST: " << totalWeight << "\n"; 
} 
 
int main() { 
    int V = 5; 
    vector<vector<pair<int, int>>> adj(V); 
 
    AddEdge(adj, 0, 1, 2); 
    AddEdge(adj, 0, 3, 6); 
    AddEdge(adj, 1, 2, 3); 
    AddEdge(adj, 1, 3, 8); 
 
    int start = 0; 
    Prims(adj, V, start); 
    cout << "\n"; 
    cout << "gourav" << " " << "2023078033" << " "; 
    return 0; 
}