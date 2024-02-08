#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
int a[N], tree[4*N];

void build(int node, int start, int end){
    if(start == end){
        tree[node] = a[start];
        return;
    }
    else{
        //divide and conquer
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node + 1, mid + 1, end);

        //hame sum chiye toh

        //isss condition ko ham question ke hisab se change kar sakte hae
        tree[node] = tree[2*node] + tree[2*node + 1];
    }
}

int query(int node, int start, int end, int left, int right){
    // complete outside
    if(right < start || left > end){
        return 0;
    }

    //complete inside
    if(left <= start && right >= end){
        return tree[node];
    }

    //partial complete
    int mid = (start + end)/2;
    int q1 = query(2*node, start, mid, left, right);
    int q2 = query(2*node + 1, mid + 1, end, left, right);

    return q1 + q2;
}

int main(){
    int n; cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    build(1, 0, n - 1); // starting node is 1
    // for(int i = 1 ; i < 4*n ; i++){
    //     cout << tree[i] << endl;
    // }
    
    //infinite while loop
    while(1){
        int type; cin >> type;
        if(type == 0){
            //update
        }
        else if(type == 1){
            //query
            int left, right; cin >> left >> right;
            int ans = query(1, 0, n - 1, left, right);
            cout << ans  << endl;
        }
        else{
            break;
        }
    }
    return 0;
}