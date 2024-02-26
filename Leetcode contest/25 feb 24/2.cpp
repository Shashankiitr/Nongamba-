#include <bits/stdc++.h>
//#define int long long
using namespace std;

bool isPossibleToSplit(vector<int> & nums){
    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }
    for(auto it = mp.begin(); it != mp.end(); it++){
        if(it->second > 2) return false;
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N; cin >> N; vector<int> A(N); for(int i = 0; i < N; i++) cin >> A[i];
    cout << isPossibleToSplit(A) << endl;

    return 0;
}