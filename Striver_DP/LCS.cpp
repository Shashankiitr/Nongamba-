#include <iostream>
#include <string>
#include <vector>

using namespace std;


// brute grote   lcs = rte
// 
string lcs(string s1, string s2, int n, int m, vector<vector<string>>& t) {

    if (n == 0 || m == 0)
        return "";

    if (!t[n][m].empty())
        return t[n][m];

    if (s1[n - 1] == s2[m - 1])
        return t[n][m] = lcs(s1, s2, n - 1, m - 1, t) + s1[n - 1];

    return t[n][m] = (lcs(s1, s2, n - 1, m, t).length() > lcs(s1, s2, n, m - 1, t).length()) ? lcs(s1, s2, n - 1, m, t) : lcs(s1, s2, n, m - 1, t);
}

string shortestCommonSupersequence(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        vector<vector<string>> t(n + 1, vector<string>(m + 1, ""));

        string LCS = lcs(s1, s2, n, m, t);
        int N = LCS.size();
        string ans = "";

        int last_index1 = 0;
        int last_index2 = 0;
        for(int i = 0 ; i < N ; i++){
            string s = "";
            s+=LCS[i];
            cout << "s " << s << endl;
            
            int index1 = s1.find(s);
            cout << index1 << endl;
            int index2 = s2.find(s);
            cout << index2 << endl;

            last_index1 = index1;
            last_index2 = index2;

            ans += s1.substr(last_index1, index1 - last_index1);
            cout << "ans1 " << ans << endl;
            ans += s2.substr(last_index2, index2 - last_index2);
            cout << "ans2 " << ans << endl;
            ans += s;

            s1[index1] = '#'; s2[index2] = '#';
            last_index1++; last_index2++;
        }
        return ans;
    }

int main() {

    string s1, s2;
    cin >> s1 >> s2;


    cout << shortestCommonSupersequence(s1, s2) << endl; // abcf

    return 0;
}

//time complexity: O(n*m)
