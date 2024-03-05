#include <bits/stdc++.h>
using namespace std;

int minOperations(vector<int>& nums, int k) {
    multiset<int> S; 
    int N = nums.size();
    for(int i = 0; i < N; i++) {
        S.insert(nums[i]);
    }
    int ans = 0;

    while (*S.begin() < k && S.size() > 1) {
        ans++;
        int a = *S.begin();
        auto it_a = S.find(a);
        if (it_a != S.end()) {
            S.erase(it_a);
        }
        int b = *S.begin();
        auto it_b = S.find(b);
        if (it_b != S.end()) {
            S.erase(it_b);
        }
        S.insert(a * 2 + b);
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N, K; 
    cin >> N >> K; 
    vector<int> A(N); 
    for(auto &a : A) 
        cin >> a;
    cout << minOperations(A, K);

    return 0;
}
