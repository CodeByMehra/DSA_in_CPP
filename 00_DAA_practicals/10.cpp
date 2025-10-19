//Implement any scheme to find the optimal solution for the Travelling salesman problem. 
#include <iostream>
#include <climits>
using namespace std;

const int n = 4;
const int MAX = 1000000;

// Distance matrix (1-based indexing)
int dist[n + 1][n + 1] = {
    { 0, 0, 0, 0, 0 },
    { 0, 0, 10, 15, 20 },
    { 0, 10, 0, 25, 25 },
    { 0, 15, 25, 0, 30 },
    { 0, 20, 25, 30, 0 },
};

// Memoization array
int memo[n + 1][1 << (n + 1)] = {0};

// Recursive function for TSP
int fun(int i, int mask) {
    // Base case: only node 1 and i are visited
    if (mask == ((1 << i) | 3))
        return dist[1][i];

    // If already computed
    if (memo[i][mask] != 0)
        return memo[i][mask];

    int res = MAX;

    // Try all possible previous nodes j
    for (int j = 1; j <= n; j++) {
        if ((mask & (1 << j)) && j != i && j != 1)
            res = min(res, fun(j, mask & (~(1 << i))) + dist[j][i]);
    }

    return memo[i][mask] = res;
}

int main() {
    cout << "gourav \n";
    int ans = MAX;

    // Try every node as the last node in the tour
    for (int i = 1; i <= n; i++) {
        ans = min(ans, fun(i, (1 << (n + 1)) - 1) + dist[i][1]);
    }

    cout << "The cost of most efficient tour = " << ans << endl;
    return 0;
}
