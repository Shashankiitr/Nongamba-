#include <bits/stdc++.h>
#define int long long
using namespace std;

const int MOD = 1e9 + 7;

int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}
//O(log(min(a, b)))

int nCr(int N, int R){
    int a = 1, b = 1; if(N - R < R) R = N - R;
    if(R != 0){
        while(R){
            a *= N; b *= R; int m = gcd(a, b); a /= m; b /= m; N--; R--;
        }
    }
    else{
        return 1;
    }
    return a;
}
//O(N)

int binaryPower(int a, int b) {
    int res = 1;
    while(b > 0) {
        if(b % 2 == 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
}
//O(log(b))

bool chech(vector<int> &A, int K){
    //binary search
    int l = 0, r = A.size() - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(A[m] == K) return true;
        if(A[m] < K) l = m + 1;
        else r = m - 1;
    }
    return false;
}
//O(log(N))

int LowerBound(vector<int> &A, int K, int low, int high){
    //sort(A.begin(), A.end());
    int mid;

    while(low <= high){
        mid = low + (high - low + 1)/2;

        if(A[mid] >= K)
            high = mid-1;
        else 
            low = mid+1;
    }
    return low;
}

int UpperBound(vector<int> &A, int K, int low, int high){
    //sort(A.begin(), A.end());
    int mid;

    while(low <= high){
        mid = low + (high - low + 1)/2;

        if(A[mid] > K)
            high = mid-1;
        else 
            low = mid+1;
    }
    return low;
}

void solve(){
int N, M; cin >> N >> M; vector<int> A(M); for(auto &a : A) cin >> a;
int Q1; cin >> Q1;
while(Q1--){
    int L, R; cin >> L >> R;
    if(L == R){
        if(chech(A, L)){
            cout << -1 << endl;
        }
        else{
            cout << L << endl;
            A.push_back(L);
            sort(A.begin(), A.end());
        }
    }
    else{
        int low_bound = LowerBound(A, L, 0, M - 1);
        int upp_bound = LowerBound(A, R, 0, M - 1);
        if(R - L != upp_bound - low_bound){
            //find that number in the range which is not present in the array
            for(int i = L; i <= R; i++){
                if(!chech(A, i)){
                    cout << i << endl;
                    A.push_back(i);
                    sort(A.begin(), A.end());
                    break;
                }
            }
        }
        else{
            cout << -1 << endl;
        }
    }
}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    t = 1;
    while(t--){
        solve();
    }
    return 0;
}