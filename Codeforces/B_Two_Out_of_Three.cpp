#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <numeric>
using namespace std;

void solve(){
int N, count = 0; cin >> N;map<int, int> mp ; vector<pair<int, int>> V;  
for(int i = 0 ; i < N ; i++){
    int X; cin >> X;
    V.push_back(make_pair(X, i));
    mp[X]++;
}
sort(V.begin(), V.end());
bool three = false;
for(auto i : mp){
    if(i.second > 3){
        three = true;
    }
    if(i.second >= 2){
        count++;
    }
}
if(three == false){
    if(count == 0){
        cout << -1 << endl;
        return;
    }
}
if(mp.size() == 1){
    cout << -1 << endl;
    return;
}
vector<int> B(N, 1);
if(count == 1){
    int count1 = 1;
    for(int i = 0 ; i < N - 1 ; i++){
        if(V[i].first == V[i + 1].first){
            count1++;
        }
    }
    if(count1 == 2){
        cout << -1 << endl;
        return;
    }
    else{
        cout << -1 << endl;
        return;
    } 
}
else{
    int bot = -1;
    for(int i = 0 ; i < N  ; i++){
        if((V[i].first == V[i + 1].first) && bot == -1){
            B[V[i].second] = 1; B[V[i + 1].second] = 2;
            bot = V[i].first;
            continue;
        }
        if((V[i].first == V[i + 1].first) && bot != -1 && V[i].first != bot){
            B[V[i].second] = 1; B[V[i + 1].second] = 3;
            break;
        }
    }
    for(auto &b : B) cout << b << " ";
    cout << endl;
    return;
}
cout << -1 << endl;

}
 
int main(){
    ios_base::sync_with_stdio(false);//fast io
    cin.tie(NULL);//fast io
    cout.tie(NULL);//fast io
    int t;  
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
