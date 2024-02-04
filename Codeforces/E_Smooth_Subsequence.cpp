#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxLengthSubsequence(const vector<int>& A, int D) {
    int N = A.size();
    vector<int> dp(N, 1);

    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < i; ++j) {
            if (abs(A[i] - A[j]) <= D) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main() {
    int N, D;
    //cout << "Enter the length of the sequence (N): ";
    cin >> N >> D;

    vector<int> A(N);
    //cout << "Enter the sequence elements: ";
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    //cout << "Enter the maximum absolute difference (D): ";
    //cin >> D;

    int result = maxLengthSubsequence(A, D);
    //cout << "Maximum length of subsequence: " << result << endl;
    cout << result << endl;
    return 0;
}

// Time Complexity: O(N^2)
