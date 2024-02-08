#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 2, MOD2 = -1e9 - 2;
int a[N];
pair<int, int> tree1[4*N]; //first is minimum and second is the index of the minimum

void built1(int node, int start, int end){
    if(start == end){
        tree1[node].first = a[start];
        tree1[node].second = start;
        return;
    }

    int mid = (start + end) / 2;
    built1(2*node, start, mid);
    built1(2*node + 1, mid + 1, end);

    //this condition will be set according to the question
    if(tree1[2*node].first > tree1[2*node + 1].first){
        tree1[node].first = tree1[2*node].first;
        tree1[node].second = tree1[2*node].second; 
    } 
    else if(tree1[2*node + 1].first > tree1[2*node].first){
        tree1[node].first = tree1[2*node + 1].first;
        tree1[node].second = tree1[2*node + 1].second;
    }
    else{
        //equal case
        tree1[node].first = tree1[2*node].first;
        tree1[node].second = tree1[2*node + 1].second;
    }
}

pair<int, int> query1(int node, int start, int end, int left, int right){
    //complete outside
    if(right < start || left > end){
        pair<int, int> p;
        p.first = MOD2; p.second = -1; return p;
    }

    //complete inside
    if(left <= start && right >= end){
        return tree1[node];
    }

    int mid = (start + end) / 2;
    pair<int ,int> q1 = query1(2*node, start, mid, left, right);
    pair<int ,int> q2 = query1(2*node + 1, mid + 1, end, left, right);

    pair<int, int> q;
    if(q1.first > q2.first){
        q = q1;
    }
    else if(q1.first < q2.first){
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
built1(1, 0 , n - 1);
while(m--){
    int l, r; cin >> l >> r;
    l--; r--;
    pair<int, int> p = query1(1, 0, n - 1, l, r);
    cout << p.first << " " << p.second + 1 << endl;
}
cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}