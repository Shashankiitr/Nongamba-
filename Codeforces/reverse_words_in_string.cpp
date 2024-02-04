#include <bits/stdc++.h>
//#define int long long
using namespace std;

void solve(){
string s, ans = ""; getline(cin, s); 
int N = s.length(), j = 0, i = 0, j_limit = N - 1;
while(s[i] == ' '){
    i++; j++;
}
while(s[j_limit] == ' '){
    j_limit--;
}
for(; j <= j_limit;){
    if(s[j] == ' '){
        string temp = s.substr(i, j - i);
        reverse(temp.begin(), temp.end());
        ans += temp + " ";
        while(s[j] == ' '){
            j++;
        }
        i = j;
    }
    else{
        j++;
    }
}
string temp = s.substr(i, j - i);
reverse(temp.begin(), temp.end());
ans += temp;
reverse(ans.begin(), ans.end());
cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        solve();
    }
    return 0;
}