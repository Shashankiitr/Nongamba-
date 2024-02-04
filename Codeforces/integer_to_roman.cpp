#include <bits/stdc++.h>
//#define int long long
using namespace std;
int LowerBound(vector<pair<int, string>> &A, int K, int low, int high){
        //sort(A.begin(), A.end());
        int mid;

        while(low <= high){
            mid = low + (high - low + 1)/2;

            if(A[mid].first >= K)
                high = mid-1;
            else 
                low = mid+1;
        }
        return low;
    }


void solve(){
    int N; cin >> N;
    vector<int> A1;
    while(N!=0){
        int rem = N%10;
        A1.push_back(rem);
        N /= 10;
    }
    for(int i = 0 ; i < A1.size() ; i++){
        A1[i]*=pow(10, i);
    }
    reverse(A1.begin(), A1.end());

    // for(auto a : A)
    //     cout << a << " ";

        map<int, string> mp;
        mp[4] = "IV"; mp[9] = "IX";
        mp[40] = "XL"; mp[90] = "XC";
        mp[400] = "CD"; mp[900] = "CM";

        vector<pair<int, string>> A(7);
        A[0] = {1, "I"};
        A[1] = {5, "V"};
        A[2] = {10, "X"};
        A[3] = {50, "L"};
        A[4] = {100, "C"};
        A[5] = {500, "D"};
        A[6] = {1000, "M"};

        for(auto &a : A1){
            int num = a;
            string ans = "";
            
            while(num!=0 && mp.find(num) == mp.end()){
            int index = LowerBound(A, num, -1, 6);
           
                //cout << index << endl;
                if (num != A[index].first) index--;
                int count = 0;
                //cout << A[index].first << endl;
                while (num >= A[index].first) {
                    num -= A[index].first;
                    count++;
                }
                while (count--) {
                    ans += A[index].second;
                }
            
        }
        if(mp.find(num) != mp.end()){
            ans += mp[num];
        }
        cout << ans << endl;
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