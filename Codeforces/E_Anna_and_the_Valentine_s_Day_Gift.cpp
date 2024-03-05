#include <bits/stdc++.h>
//#define int long long
using namespace std;

int count(vector<int> &A){
    int totaldigits = 0;
    for(auto i : A){
        string s = to_string(i);
        totaldigits += s.size();
    }
    return totaldigits;
}

int countZeroes(int x){
    int count = 0;
    while(x%10 == 0){KO
        count++;
        x /= 10;
    }
    return count;
}

void solve(){
int N, M; cin >> N >> M;
vector<int> A(N); for(auto &i : A) cin >> i;

int totaldigits = count(A);

vector<int> V(N); //for count of zeroes at last
for(int i = 0 ; i < N ; ++i){
    V[i] = countZeroes(A[i]);
}

sort(V.begin(), V.end()); reverse(V.begin(), V.end());

for(int i = 0 ; i < N ; i+=2){
    totaldigits -= V[i];
}

if(totaldigits >= M + 1){
    cout << "Sasha" << endl;
}
else{
    cout << "Anna" << endl;
}
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