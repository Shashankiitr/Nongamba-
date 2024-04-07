#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
//int n, x, y;  
        // cin >> n >> x >> y;  
        // vector<int> steps(x);  
        // for(int &step : steps) {  
        //     cin >> step;  
        //     --step;  
        // }  
        // sort(steps.begin(), steps.end()); 
int N, x, y; cin >> N >> x >> y;
multiset<int> S;
for(int i = 0 ; i < x ; ++i){
    int x; cin >> x; x--;
    S.insert(x);
}
vector<int> A(S.begin(), S.end());
// A is steps
//n is N
vector<int> O, E;  
        // for(int i = 0; i < x; ++i) {  
        //     int current = steps[i];  
        //     int next = steps[(i + 1) % x];  
        //     int difference = (next - current + n) % n;  
        //     if(difference >= 3) {  
        //         int bad = difference - 1;  
        //         if(bad & 1) {  
        //             O.push_back(bad);  
        //         }  
        //         else {  
        //             E.push_back(bad);  
        //         }  
        //     }  
        // }  
for(int i = 0 ; i < x ; ++i){
    int a = A[i], b = A[(i + 1) % x];
    int c = (b - a + N) % N;
    if(c >= 3){
        int bad = c - 1;
        if(bad & 1){
            O.push_back(bad);
        }
        else{
            E.push_back(bad);
        }
    }
}
sort(O.begin(), O.end());
        // int total = n;  
        // for(int &diff : O) {  
        //     if(y >= diff / 2) {  
        //         y -= diff / 2;  
        //         diff = 0;  
        //     }  
        //     else {  
        //         int used = min(y, diff / 2);  
        //         diff -= 2 * used;  
        //         y -= used;  
        //         total -= diff;  
        //     }  
        // }  

    
        for(int &diff : E) {  
            int used = min(y, diff / 2);  
            diff -= 2 * used;  
            y -= used;  
            total -= diff;  
        }  
        cout << (total - 2) << endl;  
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}