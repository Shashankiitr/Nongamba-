#include <bits/stdc++.h>
#define int long long
using namespace std;

int maxm(int a, int b){
    return a > b ? a : b;
}

int minm(int a, int b){
    return a < b ? a : b;
}

string product(string a, string b){
    if (a=="0" || b=="0"){
	cout<<0<<endl;
	return 0;
}
	int m = a.size() - 1, n = b.size() - 1, carry = 0;
	string product;
	for (int i=0; i<=m+n || carry; ++i) {
		for (int j=maxm(0, i-n); j<=minm(i, m); ++j)
			carry += (a[m-j] - '0') * (b[n-i+j] - '0');
		product += carry % 10 + '0';
		carry /= 10;
	}
	reverse(begin(product), end(product));
    return product;
}

string cube(int N){
    string s = to_string(N);
    string ans = product(s, product(s, s));
    return ans;
}

bool palindrome(int N){
    if(N == 1) return true;
    string s = cube(N);
    int l = 0, r = s.size() - 1;
    while(l < r){
        if(s[l] != s[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N; cin >> N;
    vector<int> A(1000000 + 1);
    for(int i = 0; i < 1000000 + 1; i++){
        A[i] = i;
    }
    int cuberoot = cbrt(N);
    //cout << cuberoot << endl;
    int ans = 0;
    for(int i = cuberoot; i >= 0 ; i--){
        if(palindrome(A[i])){
            ans = i;
            break;
        }
    }

    string s = cube(ans);
    cout << s << endl;

    return 0;
}