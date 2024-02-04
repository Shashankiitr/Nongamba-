#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &input, vector<int> &dp){
    if(n==0) return input[0];
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int pick = input[n] + f(n-2, input, dp);
    int notPick = 0 + f(n-1, input, dp);

    return dp[n] = max(pick, notPick);
}

int main(){
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i=0 ; i<n ; i++){
        cin >> input[i];
    }
    vector<int> dp(n, -1);
    dp[0] = input[0];
    for(int i=1 ; i<n ; i++){
        int pick = input[i];
        if(i-2 >= 0) pick+=dp[i-2];//if i==1 usae to include karna padega other case mae +=dp[i-1] bhi add krdenge
        int notPick = dp[i-1];

        dp[i] = max(pick, notPick);
    }
    cout << dp[n-1] << endl;
}

//time complexity : O(n)
//space complexity : O(n)
