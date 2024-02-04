// #include <bits/stdc++.h>
// //#define int long long
// using namespace std;

// bool func(int N, int M){
//     if(N == M){
//         return true;
//     }
//     if(N%3 != 0){
//         return false;
//     }
//     return (func(N/3, M) || func(2*N/3, M));
// }

// void solve(){
// int N, M; cin >> N >> M;
// if(M > N){
//     cout << "NO" << endl;
//     return;
// }
// else if(M == N){
//     cout << "YES" << endl;
//     return;
// }
// else if(N%3 != 0){
//     cout << "NO" << endl;
//     return;
// }
// else{
//     if(func(N, M)){
//         cout << "YES" << endl;
//     }
//     else{
//         cout << "NO" << endl;
//     }
// }
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
//#define int long long
using namespace std;

void func(int A[], int N){
    if(N%3 == 0){
            A[N/3] = 1;
            func(A, N/3);
            A[2*N/3] = 1;
            func(A, 2*N/3);
    }
    else{
        return;
    }
}

void solve(){
int N, M; cin >> N >> M;
if(M > N){
    cout << "NO" << endl;
    return;
}
else if(M == N){
    cout << "YES" << endl;
    return;
}
else if(N%3 != 0){
    cout << "NO" << endl;
    return;
}
else{
    int A[N] = {0};
    func(A, N);
    if(A[M] == 1){
        cout << "YES" << endl;
        return;
    }
    else{
        cout << "NO" << endl;
        return;
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