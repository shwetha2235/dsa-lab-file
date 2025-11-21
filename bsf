#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// Function to perform BFS traversal using adjacency matrix
void BFS(int start, const vector<vector<int>>& adjMatrix, vector<bool>& visited) {
    queue<int> q;
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal starting from node " << start << ": ";

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        // Check all vertices for adjacency
        for (int i = 0; i < adjMatrix.size(); i++) {
            if (adjMatrix[node][i] && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int vertices, edges;
    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    // Initialize adjacency matrix with 0
    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));

    cout << "Enter edges (source destination):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Comment this line if graph is directed
    }

    vector<bool> visited(vertices, false);

    // Perform BFS for each component (handles disconnected graphs)
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            BFS(i, adjMatrix, visited);
        }
    }

    return 0;
}
