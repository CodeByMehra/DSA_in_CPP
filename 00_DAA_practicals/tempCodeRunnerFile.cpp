#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
void AddEdge(vector<vector<int>> &adj, int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
void DFS(vector<vector<int>> &adj, int v, vector<bool> &visited) 
{ 
    visited[v] = true; 
    cout << v << " "; 
 
    for (auto u : adj[v]) 
    { 
        if (!visited[u]) 
            DFS(adj, u, visited); 
    } 
} 
 
int main() 
{ 
    int v = 5; 
    vector<vector<int>> adj(v);  // Graph with 5 vertices (0 to 4) 
    AddEdge(adj, 0, 1); 
    AddEdge(adj, 0, 2); 
    AddEdge(adj, 1, 2); 
    AddEdge(adj, 1, 3); 
    AddEdge(adj, 2, 4); 
    AddEdge(adj, 3, 4); 
    cout << "ENTER SOURCE VERTEX FOR DFS TRAVERSAL: "; 
    int s; 
    cin >> s; 
    vector<bool> visited(v, false); 
    DFS(adj, s, visited); 
 
    cout << "\n gourav 2023078033\n";  
}