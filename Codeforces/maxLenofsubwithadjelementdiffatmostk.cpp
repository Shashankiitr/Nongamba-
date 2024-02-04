#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxLengthSubsequence(vector<int>& arr, int k) {
    int n = arr.size();
    vector<int> dp(n, 1);

    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (abs(arr[i] - arr[j]) < k) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    // Example usage:
    int N, K; cin >> N >> K; vector<int> A(N); for(auto &a : A) cin >> a;

    int result = maxLengthSubsequence(A, K);
    
    cout << result << endl;
    return 0;
}
