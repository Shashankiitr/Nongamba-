#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &input){
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
    return prev;
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        vector<int> temp1, temp2;
        for(int i=0 ; i<n ; i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
        return max(f(n-1, temp1), f(n-1, temp2));
    }

int main(){
    vector<int> nums;
    int n;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout <<rob(nums) << endl;
}