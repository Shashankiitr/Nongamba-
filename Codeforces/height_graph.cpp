#include <iostream>
#include <vector>

using namespace std;

void dfs(const vector<vector<int>>& adj_matrix, vector<bool>& visited, int vertex, int depth, int& max_depth) {
    visited[vertex] = true;
    max_depth = max(max_depth, depth);

    for (int neighbor = 0; neighbor < adj_matrix.size(); ++neighbor) {
        if (adj_matrix[vertex][neighbor] == 1 && !visited[neighbor]) {
            dfs(adj_matrix, visited, neighbor, depth + 1, max_depth);
        }
    }
}

int graphHeight(const vector<vector<int>>& adj_matrix, int root) {
    int num_vertices = adj_matrix.size();
    vector<bool> visited(num_vertices, false);
    int max_depth = 0;

    dfs(adj_matrix, visited, root, 0, max_depth);

    return max_depth;
}

int main() {
    // Example Usage:
    vector<vector<int>> adjacency_matrix = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0}
    };

    int root_vertex = 0;
    int height = graphHeight(adjacency_matrix, root_vertex);

    cout << "Height of the graph: " << height << endl;

    return 0;
}

//time complexity: O(N)
