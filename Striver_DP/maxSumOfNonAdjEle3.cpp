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
    int prev = input[0];
    int prev2 = 0;
    for(int i=1 ; i<n ; i++){
        int pick = input[i];
        if(i-2 >= 0) pick+=prev2;//if i==1 usae to include karna padega other case mae +=dp[i-1] bhi add krdenge
        int notPick = prev;

        int curi = max(pick, notPick);
        prev2 = prev;
        prev = curi;
    }
    cout << prev << endl;
}

//time complexity : O(n)
//space complexity : O(1)