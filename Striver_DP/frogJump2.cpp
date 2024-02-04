#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> heights(n);
    for(int i=0 ; i<n ; i++){
        cin >> heights[i];
    }
    vector<int> dp(n, -1);
    dp[0]=0;
    for(int i=1 ; i<n ; i++){
        int left = dp[i-1]+abs(heights[i] - heights[i-1]);
        int right = INT_MAX;
        if(i>1) right = dp[i-2]+abs(heights[i] - heights[i-2]);

        dp[i] = min(left, right);
    }
    cout << dp[n-1] << endl;
}

//time complexity : O(n)
//space complexity : O(n) + O(n) (for array)