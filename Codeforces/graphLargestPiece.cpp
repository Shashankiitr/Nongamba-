#include<bits/stdc++.h>
using namespace std;

int getBiggestPieceSizeHelper(vector<vector<int>> &cake, int n, int x, int y, vector<vector<bool>> &visited){
    // base case: If the current position is out of bounds or the cell is empty or already visited, return 0
    if(x<0 || x>=n || y<0 || y>=n || cake[x][y]==0 || visited[x][y]){
        return 0;
    }
    
    // Mark the current cell as visited
    visited[x][y] = true;
    
    // Recursive call to explore neighboring cells
    return 1 + getBiggestPieceSizeHelper(cake, n, x-1, y, visited) + getBiggestPieceSizeHelper(cake, n, x+1, y, visited) + getBiggestPieceSizeHelper(cake, n, x, y-1, visited) + getBiggestPieceSizeHelper(cake, n, x, y+1, visited);
}

int getBiggestPieceSize(vector<vector<int>> &cake, int n){
    // Create a visited array to keep track of visited cells
    vector<vector<bool>> visited(n, vector<bool>(n));
    
    // Mark all cells as unvisited
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            visited[i][j]=false;
        }
    }  
    
    // Loop to find the maximum size of the biggest piece
    int maxSize = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(cake[i][j]==1 && !visited[i][j]){
                maxSize = max(maxSize, getBiggestPieceSizeHelper(cake, n, i, j, visited));
            }
        }
    }
    
    return maxSize;
}

int main(){
    int n;
    cin >> n;

    // Input the cake
    vector<vector<int>> cake(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> cake[i][j];
        }
    }
    
    // Call the function and print the result
    cout << getBiggestPieceSize(cake, n);
    
    return 0;
}
