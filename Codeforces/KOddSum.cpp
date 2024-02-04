#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
int N, K; cin >> N >> K;
if(K == 1){
    for(int i = 1 ; i <= N ; i+=2){
        cout << i << " ";
    }
    for(int i = 2 ; i <= N ; i+=2){
        cout << i << " ";
    }
    cout << endl;
}
else if(K == N - 1){
    for(int i = 1 ; i <= N ; i++){
        cout << i << " ";
    }
    cout << endl;
}
else{
        vector<int> odd, even;
        for(int i = 1 ; i <= N ; i++){
            if(i&1){
                odd.push_back(i);
            }
            else{
                even.push_back(i);
            }
        }

        bool flag = true; //true->odd, false->even
        int X = K;
        while(K--){
            if(flag){
                cout << odd.back() << " ";
                odd.pop_back();
                flag = false;
            }
            else{
                cout << even.back() << " ";
                even.pop_back();
                flag = true;
            }
        }
        if(X%2==0){
            for(int i = 0 ; i < even.size() ; i++){
                cout << even[i] << " ";
            }
            for(int i = 0 ; i < odd.size() ; i++){
                cout << odd[i] << " ";
            }
            cout << endl;
        }
        else{
            for(int i = 0 ; i < odd.size() ; i++){
                cout << odd[i] << " ";
            }
            for(int i = 0 ; i < even.size() ; i++){
                cout << even[i] << " ";
            }
            cout << endl;
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