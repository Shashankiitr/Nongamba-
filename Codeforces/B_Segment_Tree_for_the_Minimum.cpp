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

const int N = 1e5 + 2;
int a[N], tree[4*N];

void built(int node, int start, int end){
    if(start == end){
        tree[node] = a[start];
        return;
    }

    int mid = (start + end) / 2;
    built(2*node, start, mid);
    built(2*node + 1, mid + 1, end);

    //this condition will be set according to the question
    tree[node] = min(tree[2*node], tree[2*node + 1]); 
}

int query(int node, int start, int end, int left, int right){
    //complete outside
    if(right < start || left > end){
        return INT_MAX;
    }

    //complete inside
    if(left <= start && right >= end){
        return tree[node];
    }

    int mid = (start + end) / 2;
    int q1 = query(2*node, start, mid, left, right);
    int q2 = query(2*node + 1, mid + 1, end, left, right);

    return min(q1, q2);
}

void update(int node, int start, int end, int index, int updateValue){
    //basecase agar us index tak pahuch gye to change it in the array and tree
    if(start == end){
        a[start] = updateValue;
        tree[node] = updateValue;
        return;
    }

    //ye ham us index tak pahuch rahe he by binary search
    int mid = (start + end)/2 ;

    if(index <= mid){
        update(2*node, start, mid, index, updateValue);
    }
    else{
        update(2*node + 1, mid + 1, end, index, updateValue);
    }

    //vapis tree nodes ko update bhi karna padega using backtracking
    tree[node] = min(tree[2*node], tree[2*node + 1]);
}

void solve(){
int n, m; cin >> n >> m; 
for(int i = 0 ; i < n ; i++){
    cin >> a[i];
}
built(1, 0, n - 1);
while(m--){
    int type; cin >> type;
    if(type == 2){
        //query
        int left, right; cin >> left >> right;
        int ans = query(1, 0, n - 1, left, right - 1);
        cout << ans << endl;
    }
    else if(type == 1){
        //update;
        int index, updateValue; cin >> index >> updateValue;
        //cout << "update : ";
        update(1, 0, n - 1, index, updateValue);
        //         for(int i = 0 ; i < n ; i++){
        //     cout << a[i] << " ";
        // }
        // cout << endl;
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