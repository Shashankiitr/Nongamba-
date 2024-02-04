#include <bits/stdc++.h>
using namespace std;


#define repi(i, j, n) for(int i=j ; i<(n); ++i)
#define repl(i, j, n) for(ll i=j ; i<(n); ++i)
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define vpii vector<pii>
#define vpll vector<pll>
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

void solve(){
  int n, m;
  cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  repi(i, 0, n){
    repi(j, 0, m){
      cin >> v[i][j];
    }
  }
  repi(i, 0, n){
        // i is even then start with black
        if(i%2==0){
            repi(j, 0, m){
                //start with black
                if(j%2==0 && v[i][j]=='.'){
                    v[i][j]='B';
                }
                else if(j%2!=0 && v[i][j]=='.'){
                    v[i][j]='W';
                }
            }
        }
        else{
            repi(j, 0,m){
                //start with white
                if(j%2==0 && v[i][j]=='.'){
                    v[i][j]='W';
                }
                else if(j%2!=0 && v[i][j]=='.'){
                    v[i][j]='B';
                }
            }
        }
  }
  //print the matrix
    repi(i, 0, n){
        repi(j, 0, m){
        cout << v[i][j];
        }
        cout << endl;
    }
}
 
int main(){
ios_base::sync_with_stdio(false);//fast io
cin.tie(NULL);//fast io
cout.tie(NULL);//fast io

solve();

return 0;
}