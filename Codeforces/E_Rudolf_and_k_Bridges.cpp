#include <bits/stdc++.h>
//#define int long long
using namespace std;

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
    tree[node] = max(tree[2*node], tree[2*node + 1]); 
}

int query(int node, int start, int end, int left, int right){
    //complete outside
    if(right < start || left > end){
        return INT_MIN;
    }

    //complete inside
    if(left <= start && right >= end){
        return tree[node];
    }

    int mid = (start + end) / 2;
    int q1 = query(2*node, start, mid, left, right);
    int q2 = query(2*node + 1, mid + 1, end, left, right);

    return max(q1, q2);
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
    tree[node] = max(tree[2*node], tree[2*node + 1]);
}

void solve(){
int N, M, K, D; cin >> N >> M >> K >> D;
vector<vector<int>> river(N, vector<int>(M, 0));
for(int i = 0; i < N; i++){
    for(int j = 0; j < M; j++){
        cin >> river[i][j];
    }
}
vector<int> ans(N, 0);
for(int i = 0 ; i < N ; ++i){
    vector<int> temp(M, 0);
    temp[0] = 1;
    for(int j = 1 ; j < M ; ++j){

    }
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