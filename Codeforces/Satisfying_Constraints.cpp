#include <bits/stdc++.h>
  using namespace std;
  using ll = long long;
  #define rep(i, n) for (ll i = 0; i < n; i++)
  #define ll long long
  




  // my function
  void mrinfamous()
  {
ll n,m;cin>>n>>m;
ll a[n];
rep(i,n)cin>>a[i];
ll b[m];
rep(i,m)cin>>b[i];
sort(a,a+n);sort(b,b+m);

ll pa[n];
ll pb[m];
rep(i,n){
  if(i==0)pa[i]=a[i];
  else pa[i]=a[i]+pa[i-1];
}

rep(i,m){
  if(i==0)pb[i]=b[i];
  else pb[i]=pb[i-1]+b[i];
}



ll sa[n];
ll sb[m];

for(ll i=n-1;i>=0;i--)
{
  if(i==n-1)sa[i]=a[i];
  else sa[i]=sa[i+1]+a[i];
}

for(ll i=m-1;i>=0;i--)
{
  if(i==m-1)sb[i]=b[i];
  else sb[i]=sb[i+1]+b[i];
}


ll ans=-1;

for(ll i=0;i<=n;i++){
  ll npa=i;
  ll nna=n-i;
  ll npb=n-i;
  ll nnb=i;
  ll sum;
  if(i==0){
    sum=sb[m-(n-i)]-pa[n-1];
  }
  else if(i==n){
    sum=sa[0]-pb[n-1];
  }
  else sum=sa[n-(i)]+sb[m-(n-i)]-pa[(n-i)-1]-pb[(i)-1];
  ans=max(sum,ans);
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