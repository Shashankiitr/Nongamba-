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


//sieve
// const int N = 1e7;
// bool sieve[N+1];
// void createSieve(){
// repi(i, 2, N+1) sieve[i] = true;
// for(int i=2; i*i<N ; i++){
// if(sieve[i]==true){
// for(int j=i*i ; j<=N ; j+=i){
// sieve[j]=false;
// }
// }
// }
// }

//mex3
// class Mex {
// private:
//     map<int, int> frequency;
//     set<int> missing_numbers;
//     vector<int> A;

// public:
//     Mex(vector<int> & A) : A(A) {
//         repi(i, 0, A.size()+1)
//             missing_numbers.insert(i);

//         for(auto i : A){
//             ++frequency[i];
//             missing_numbers.erase(i);
//         }
//     }

//     int mex(){
//         return *missing_numbers.begin();//nice
//     }

//     void update(int index, int new_value){
//         if(--frequency[A[index]] == 0){
//             missing_numbers.insert(A[index]);
//         }
//         A[index] = new_value;
//         ++frequency[new_value];
//         missing_numbers.erase(new_value);
//     }
// };
//O(NlogN) for precomputation
//O(1) for finding mex
//O(logN) for update
 
void solve(){
  int n;
    cin >> n;
    int count11 = 1e6, count01 = 1e6, count10 = 1e6;
    
    repi(i, 0, n){
        int minutes;
        cin >> minutes;
        string s;
        cin >> s;
        if(s=="11"){
            count11 = min(count11, minutes);
        }
        else if(s=="01"){
            count01 = min(count01, minutes);
        }
        else if(s=="10"){
            count10 = min(count10, minutes);
        }
    }

    if(count11==1e6 && (count01==1e6 | count10==1e6)){
        cout << -1 << endl;
    }
    else if((count01+count10)>=1e6 && count11!=1e6){
        cout << count11 << endl;
    }
    else if(count01==1e6 | count10==1e6){
        if(count11==1e6){
            cout << -1 << endl;
        }
        else{
            cout << count11 << endl;
        }
        //cout << count11 << endl;
    }
    else{
        cout << min(count01+count10, count11) << endl;
    }
}
 
int main(){
ios_base::sync_with_stdio(false);//fast io
cin.tie(NULL);//fast io
cout.tie(NULL);//fast io

ll t;
cin>>t;
while(t--){
solve();
}   

return 0;
}