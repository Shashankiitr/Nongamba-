#include <bits/stdc++.h>
//#define int long long
using namespace std;

int calculateY(int y1, int y2, int y3, int y4){
    if(y3 <= y1 && y4 >= y1 && y4 <= y2){
        return y4 - y1;
    }
    else if(y3 >= y1 && y4 <= y2){
        return y4 - y3;
    }
    else if(y3 >= y1 && y3 <= y2 && y4 >= y2){
        return y2 - y3;
    }
    else if(y3 <= y1 && y4 >= y2){
        return y2 - y1;
    }
    else{
        return 0;
    }
}

int largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
    int N = bottomLeft.size();
    int ans = 0;
    for(int i = 0 ; i < N ; ++i){
        int x1 = bottomLeft[i][0];
        int y1 = bottomLeft[i][1];
        int x2 = topRight[i][0];
        int y2 = topRight[i][1];
        for(int j = i + 1 ; j < N ; ++j){
            int x3 = bottomLeft[j][0];
            int y3 = bottomLeft[j][1];
            int x4 = topRight[j][0];
            int y4 = topRight[j][1];
            
            if(x3 <= x1 && x4 >= x1 && x4 <= x2){
                int X = x4 - x1;
                int Y = calculateY(y1, y2, y3, y4);
                int A = min(X, Y);
                if(A * A > ans){
                    ans = A * A;
                }
            }
            else if(x3 >= x1 && x4 <= x2){
                int X = x4 - x3;
                int Y = calculateY(y1, y2, y3, y4);
                int A = min(X, Y);
                if(A * A > ans){
                    ans = A * A;
                }
            }
            else if(x3 >= x1 && x3 <= x2 && x4 >= x2){
                int X = x2 - x3;
                int Y = calculateY(y1, y2, y3, y4);
                int A = min(X, Y);
                if(A * A > ans){
                    ans = A * A;
                }}
            else if(x3 <= x1 && x4 >= x2){
                int X = x2 - x1;
                int Y = calculateY(y1, y2, y3, y4);
                int A = min(X, Y);
                if(A * A > ans){
                    ans = A * A;
                }
            }
            else{
                continue;
            }
    }
    }
    return ans;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N;
    vector<vector<int>> bottomLeft(N, vector<int>(2)), topRight(N, vector<int>(2));
    for(int i = 0; i < N; i++){
        cin >> bottomLeft[i][0] >> bottomLeft[i][1];
    }
    for(int i = 0; i < N; i++){
        cin >> topRight[i][0] >> topRight[i][1];
    }
    cout << largestSquareArea(bottomLeft, topRight) << endl;

    return 0;
}