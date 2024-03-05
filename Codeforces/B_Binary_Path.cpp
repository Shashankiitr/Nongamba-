// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void print(int val, string ans)
// {
//     cout<<ans<<endl;
//     cout<<val<<endl;

// }

// void solve(){
//         int n;
//         cin>>n; string string1, string2; cin>>string1>>string2;
        
//         string s[2];
//         s[0]=string1;
//         s[1]=string2;

//         int dp[2][n];
//         int pos=n;
//         int i = n - 1;
//         while(i >= 0)
//         {
//             if(s[0][i]=='0')
//             {
//                 pos=i;
//             }
//             dp[0][i]=pos;
//             i--;
//         }
//         pos=n;
//         i = n - 1;
//         while(i >= 0)
//         {
//             if(s[1][i]=='0')
//             {
//                 pos=i;
//             }
//             dp[1][i]=pos;
//             i--;
//         }

//         string ans="";
//         pos=0;
//         i = 0;
//         while(i < n)
//         {
//             ans.push_back(s[pos][i]);
//             if(i == n - 1)
//             {
//                 if(pos == 0)
//                 {
//                     ans.push_back(s[1][i]);
//                 }
//                 else
//                 {
//                     break;
//                 }
                
//             }
//             if(pos == 0)
//             {
//                 if(dp[0][i + 1] > dp[1][i] + 1)
//                 {
//                     pos = 1;
//                     i--;
//                 }
//             }
//             i++;
//         }
//         vector<int> range(n,0);
//         i = n;
//         while(i >= 1)
//         {
//             if(ans[i] == s[1][i - 1])
//             {
//                 range[i - 1] = 1;
//             }
//             else
//             {
//                 break;
//             }
//             i--;
//         }
//         int val = 0;
//         bool flag = false;
//         i = 0;
//         while(i < n)
//         {
//             if(ans[i] == s[0][i])
//             {
//                 flag = true;
//                 if(range[i])
//                 {
//                     val++;
//                 }
//             }
//             else if(flag)
//             {
//                 break;
//             }
//             i++;
//         }
//         print(val, ans);
// }

// signed main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
// }


#include <iostream>
#include <vector>
#include <utility>
#include <string>
using namespace std;

using ll = long long;
using ii = pair<ll,ll>;
using vi = vector<ll>;
using vii = vector<ii>;

void invec(vector<ll> &a, ll &n){
    for (ll i = 0; i < n; ++i) {
        ll input;
        cin >> input;
        a.push_back(input);
    }
}

void solve(){
    ll n;
    cin >> n;
    ll ch = -1;
    string s1, s2;
    cin >> s1 >> s2;

    for (ll i = 0; i < n - 1; ++i) {
        if (s1[i + 1] == '1' && s2[i] == '0') {
            ch = i;
            break;
        }
    }

    if (ch == -1) {
        ch = n - 1;
    }

    string s3;
    for (ll i = 0; i <= ch; ++i) {
        s3.push_back(s1[i]);
    }
    for (ll i = ch; i < n; ++i) {
        s3.push_back(s2[i]);
    }

    ll count = 0;
    vector<ll> v;
    for (ll i = 0; i < n - 1; ++i) {
        if (s1[i + 1] == s2[i]) {
            v.push_back(1);
        } else {
            v.push_back(0);
        }
    }

    vector<ll> h;
    h.push_back(v[0]);
    for (ll i = 0; i < n - 2; ++i) {
        h.push_back(h[i] + v[i + 1]);
    }

    for (ll i = 1; i <= ch; ++i) {
        if (ch - i == h[ch - 1] - h[i - 1]) {
            count++;
        }
    }

    string s4;
    s4.push_back(s1[0]);
    for (ll i = 0; i < n; ++i) {
        s4.push_back(s2[i]);
    }

    if (s4 == s3) {
        count++;
    }

    cout << s3 << endl;
    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
