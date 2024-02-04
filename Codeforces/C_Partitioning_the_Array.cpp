// #include <bits/stdc++.h>
// //#define int long long
// using namespace std;

// int gcd(int a, int b){
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);

// }

// void solve(){
//     int N; cin >> N; vector<int> A(N), D; for(auto &a : A) cin >> a;
//     for (int i = 1; i <= sqrt(N); i++){
//         if (N % i == 0){
//             D.push_back(i);
//             if (i != N / i)
//                 D.push_back(N / i);
//         }
//     }
//     int ans = 1;
//     for (int i = 0; i < D.size(); i++)
//     {
//         if (D[i] == N) continue;
//         unordered_map<int, vector<int>> mp;
//         for (int j = 1; j <= N; j++)
//         {
//             mp[j % D[i]].push_back(A[j - 1]);
//         }
//         int B = 0;
//         for (auto &x : mp){
//             int P = 0; sort(x.second.begin(), x.second.end());
//             for (int i = 1; i < x.second.size(); i++){
//                 P = gcd(P, x.second[i] - x.second[i - 1]);
//             }
//             B = gcd(B, P);
//         }
//         if (B != 1) ans++;
//     }
//     cout << ans << endl;
// }

// int32_t main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t;
//     cin >> t;
//     while(t--){
//         solve();
//     }
//     return 0;
// }

include <bits/stdc++.h>
  using namespace std;
  using ll = long long;
  #define rep(i, n) for (ll i = 0; i < n; i++)
  #define ll long long
  




  // my function
  void mrinfamous()
  {
ll n,k,x;cin>>n>>k>>x;
ll a[n];
rep(i,n)cin>>a[i];
sort(a,a+n);
ll sum=0;
ll en=n-x;

rep(i,n){
  if(i<en)sum+=a[i];
  else sum-=a[i];
}
ll ans=sum;

for(ll i=n-1;i>=n-k;i--){
  if(i>=en){
      sum+=a[i];
      if(en-1>=0)sum-=2*a[en-1];
      en--;
       ans=max(sum,ans);
  }
}
cout<<ans<<endl;


  }
  
  
  
  
     
     
  
 

    


   

   

       
  
  


  int main()
  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
      mrinfamous();
    }
    return 0;
  }