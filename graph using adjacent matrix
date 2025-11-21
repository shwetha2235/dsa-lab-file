#include <iostream>
using namespace std;

// Function to create an adjacency matrix
void createAdjacencyMatrix(int vertices, vector<vector<int>>& adjMatrix, int edges) {
    cout << "Enter edges (source destination):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        // For undirected graph, mark both [u][v] and [v][u] as 1
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; // Comment this line if graph is directed
    }
}

// Function to print adjacency matrix
void printAdjacencyMatrix(const vector<vector<int>>& adjMatrix) {
    int n = adjMatrix.size();
    cout << "\nAdjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int vertices, edges;

    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    // Initialize adjacency matrix with 0s
    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));

    // Create the adjacency matrix
    createAdjacencyMatrix(vertices, adjMatrix, edges);

    // Print adjacency matrix
    printAdjacencyMatrix(adjMatrix);

    return 0;
}






