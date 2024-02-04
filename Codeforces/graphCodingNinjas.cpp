#include<bits/stdc++.h>
using namespace std;

bool hasPathHelper(vector<vector<char>> &board, int n, int m, string cn, vector<vector<int>> &visited, int i, int j){
    
    //condition on i and j & mark visited
    if(i>=0 && i<=n-1 && j>=0 && j<=m-1 && board[i][j]==cn[0]){
        visited[i][j]=1;
    }

    //recursive calls 
    bool x1;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i-1][j-1]){
        x1 = hasPathHelper(board, n, m, cn.substr(1), visited, i-1, j-1);
    }
    else{
        x1 = false;
    }
    bool x2;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i-1][j]){
        x2 = hasPathHelper(board, n, m, cn.substr(1), visited, i-1, j);
    }
    else{
        x2 = false;
    }
    bool x3;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i-1][j+1]){
        x3 = hasPathHelper(board, n, m, cn.substr(1), visited, i-1, j+1);
    }
    else{
        x3 = false;
    }
    bool x4;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i][j+1]){
        x4 = hasPathHelper(board, n, m, cn.substr(1), visited, i, j+1);
    }
    else{
        x4 = false;
    }
    bool x5;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i+1][j+1]){
        x5 = hasPathHelper(board, n, m, cn.substr(1), visited, i+1, j+1);
    }
    else{
        x5 = false;
    }
    bool x6;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i+1][j]){
        x6 = hasPathHelper(board, n, m, cn.substr(1), visited, i+1, j);
    }
    else{
        x6 = false;
    }
    bool x7;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i+1][j-1]){
        x7 = hasPathHelper(board, n, m, cn.substr(1), visited, i+1, j-1);
    }
    else{
        x7 = false;
    }
    bool x8;
    if((i>=0 && i<=n-1 && j>=0 && j<=m-1) && !visited[i][j-1]){
        x8 = hasPathHelper(board, n, m, cn.substr(1), visited, i, j-1);
    }
    else{
        x8 = false;
    }
    return (x1||x2||x3||x4||x5||x6||x7||x8);
}

bool hasPath(vector<vector<char>> &board, int n, int m) {
    string cn = "CODDINGNINJA";

    vector<vector<int>> visited(n, vector<int>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                visited[i][j] = 0;
            }
        }
    
    for(int i=0 ; i<n ; i++){
        //ith row
        for(int j=0 ; j<m ; j++){
            //jth col in ith row
            if(board[i][j]=='C'){
                if(hasPathHelper(board, n, m, cn, visited, i, j)){
                    return true;
                }
                else{
                    for (int i = 0; i < n; ++i) {
                        for (int j = 0; j < m; ++j) {
                        visited[i][j] = 0;
            }
        }
                }
            }
        }
        return false;
    }
}
int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> board(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }
    //make a loop to iterate through elements of an array

    cout << (hasPath(board, n, m) ? 1 : 0);
}