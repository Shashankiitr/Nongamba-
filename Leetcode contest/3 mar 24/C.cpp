#include <bits/stdc++.h>
//#define int long long
using namespace std;

int minimumOperationsToWriteY(vector<vector<int>>& grid) {
     int ones = 0, zeros = 0, twos = 0; // for Y
     int ones1 = 0, zeros1 = 0, twos1 = 0; // rest

     int N = grid.size();
     // Y
     for(int i = 0 ; i <= N/2 ; ++i){
        if(grid[i][i] == 1) ones++;
        else if(grid[i][i] == 0) zeros++;
        else twos++;
     }

     for(int i = N/2 + 1 ; i < N ; ++i){
        if(grid[i][N/2] == 1) ones++;
        else if(grid[i][N/2] == 0) zeros++;
        else twos++;
     }

     for(int i = N - 1 ; i > N/2 ; --i){
        if(grid[N - 1 - i][i] == 1) ones++;
        else if(grid[N - 1 - i][i] == 0) zeros++;
        else twos++;
     }

     // rest
     for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < N ; ++j){
            if(grid[i][j] == 1) ones1++;
            else if(grid[i][j] == 0) zeros1++;
            else twos1++;
        }
     }

     ones1 -= ones; zeros1 -= zeros; twos1 -= twos;

     int ans = INT_MAX;

    //ones
    ans = min(ans, min(zeros + twos + ones1 + twos1, zeros + twos + ones1 + zeros1));
    //zeros
    ans = min(ans, min(ones + twos + zeros1 + twos1, ones + twos + ones1 + zeros1));
    //twos
    ans = min(ans, min(ones + zeros + twos1 + zeros1, ones + zeros + ones1 + twos1));

    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    vector<vector<int>> grid(N, vector<int>(N));
    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < N ; ++j){
            cin >> grid[i][j];
        }
    }
    cout << minimumOperationsToWriteY(grid) << endl;
    return 0;
}