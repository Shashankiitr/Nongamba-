#include <bits/stdc++.h>
using namespace std;

// Function to perform Breadth First Search (BFS) traversal starting from a given vertex
void printBFS(int** edges, int n, int sv, bool* visited) {
    queue<int> q; // Create a queue for BFS traversal

    q.push(sv); // Enqueue the starting vertex
    visited[sv] = true; // Mark the starting vertex as visited

    // Process the vertices in the queue
    while (!q.empty()) {
        int front = q.front(); // Get the front vertex from the queue
        q.pop(); // Dequeue the front vertex
        cout << front << " "; // Print the front vertex

        // Explore adjacent vertices
        for (int i = 0; i < n; i++) {
            if (i == front) {
                continue;
            }
            if (edges[front][i] == 1 && !visited[i]) {
                q.push(i); // Enqueue adjacent vertex if not visited
                visited[i] = true; // Mark adjacent vertex as visited
            }
        }
    }
}

// Main BFS function to visit all connected components of the graph
void BFS(int** edges, int n) {
    bool* visited = new bool[n];
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }

    // Iterate through all vertices and perform BFS if not visited
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            printBFS(edges, n, i, visited);
        }
    }

    delete[] visited;
}

int main() {
    int n; // Number of vertices
    int e; // Number of edges
    cin >> n >> e;

    // Create a 2D array to represent the graph's adjacency matrix
    int** edges = new int*[n];
    for (int i = 0; i < n; i++) {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++) {
            edges[i][j] = 0; // Initialize all edges as unconnected
        }
    }

    // Input the edges and mark them as connected
    for (int i = 0; i < e; i++) {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1; // Assuming an undirected graph
    }

    // Perform BFS traversal starting from all vertices
    BFS(edges, n);

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] edges[i];
    }
    delete[] edges;
}
