#include <bits/stdc++.h>
//#define int long long
using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, T; cin >> N >> T;
    vector<int> P(N, 0); set<int> S; S.insert(0);

    vector<pair<int, int>> AB;
    for(int i = 0; i < T; i++){
        int a, b; cin >> a >> b;
        AB.push_back({a, b});
    }

    for(int i = 0; i < T; i++){
        int a = AB[i].first, b = AB[i].second;
        P[a - 1] += b;
        S.insert(P[a - 1]);
        cout << S.size() << endl;
    }


    return 0;
}