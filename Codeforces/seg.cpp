#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 2, MOD = 1e9 + 2;
int a[N];
pair<int, int> tree[4*N]; //first is minimum and second is the index of the minimum

void built(int node, int start, int end){
    if(start == end){
        tree[node].first = a[start];
        tree[node].second = start;
        return;
    }

    int mid = (start + end) / 2;
    built(2*node, start, mid);
    built(2*node + 1, mid + 1, end);

    //this condition will be set according to the question
    if(tree[2*node].first < tree[2*node + 1].first){
        tree[node].first = tree[2*node].first;
        tree[node].second = tree[2*node].second; 
    } 
    else if(tree[2*node + 1].first < tree[2*node].first){
        tree[node].first = tree[2*node + 1].first;
        tree[node].second = tree[2*node + 1].second;
    }
    else{
        //equal case
        tree[node].first = tree[2*node].first;
        tree[node].second = tree[2*node + 1].second;
    }
}

pair<int, int> query(int node, int start, int end, int left, int right){
    //complete outside
    if(right < start || left > end){
        pair<int, int> p;
        p.first = MOD; p.second = -1; return p;
    }

    //complete inside
    if(left <= start && right >= end){
        return tree[node];
    }

    int mid = (start + end) / 2;
    pair<int ,int> q1 = query(2*node, start, mid, left, right);
    pair<int ,int> q2 = query(2*node + 1, mid + 1, end, left, right);

    pair<int, int> q;
    if(q1.first < q2.first){
        q = q1;
    }
    else if(q1.first > q2.first){
        q = q2;
    }
    else{
        q.first = q1.first;
        q.second = q1.second;
    }
    return q;
}

void solve(){
int n, m; cin >> n;
for(int i = 0 ; i < n ; i++){
    cin >> a[i];
}
cin >> m;
built(1, 0 , n - 1);
while(m--){
    int l, r; cin >> l >> r;
    l--; r--;
    pair<int, int> p = query(1, 0, n - 1, l, r);
    cout << p.first << " " << p.second + 1 << endl;
}
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}