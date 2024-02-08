#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool check(vector<int> &A, int K){
    //check if K is present in A by binary search
    int l = 0, r = A.size() - 1;
    while(l <= r){
        int mid = (l + r) / 2;
        if(A[mid] == K){
            return true;
        }
        else if(A[mid] < K){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return false;
}


void solve(){
int N, M, K; cin >> N >> M >> K; vector<int> a(N), b(M), A, B, both;
for(int i = 0 ; i < N ; i++){
    cin >> a[i];
}
for(int i = 0 ; i < M ; i++){
    cin >> b[i];
}
sort(a.begin(), a.end()); sort(b.begin(), b.end());
for(int i = 1 ; i <= K ; i++){
    bool find_in_a = check(a, i);
    bool find_in_b = check(b, i);

    if(find_in_a == false && find_in_b == false){
        cout << "NO" << endl;
        return;
    }
    else if(find_in_a == true && find_in_b == false){
        A.push_back(i);
    }
    else if(find_in_a == false && find_in_b == true){
        B.push_back(i);
    }
    else{
        both.push_back(i);
    }
}
if(A.size() + B.size() + both.size() == K && A.size() <= K/2 && B.size() <= K/2){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
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