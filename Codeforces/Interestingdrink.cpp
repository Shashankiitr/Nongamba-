#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int UpperBound(vector<int> &A, int64_t K, int low, int high){
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
    int N, Q;
    cin >> N;

    vector<int> X(N);
    for(auto &x : X)
        cin >> x;

    sort(X.begin(), X.end());

    cin >> Q;
    vector<int64_t> M(Q);

    for(int i = 0 ; i < Q ; i++){
        cin >> M[i];
        cout << UpperBound(X, M[i], 0, N-1) << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}