#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <climits>
using namespace std;

int score(int r,int a[],int h,int l)
{
    int sum[r-1]={l};
    for (int i=1;i<r;++i)
    {
        for (int j=0;j<i;++j)
        {
            sum[i]+=a[j]*h;
        }
        for (int j=i;j<r;++j)
        {
            sum[i]+=a[j]*(h+1);
        }
    }
    int max=sum[1],ind=1;
    for (int i=1;i<r;++i)
    {
        if (sum[i]>max) 
        {
            ind=i;
            max=sum[i];
        }    
    }
    if (l<max)
    {
        l=max;
        for (int g=ind;g<r;++g)
        {
            a[g-ind]=a[g];
        }
        ++h;
        score(r-ind,a,h,l);
    }
    else
    {
        cout<<max;
    }
    
}

int main() 
{
    int t;cin>>t;
    for (int i=0;i<t;++i)
    {
        int n;cin>>n;int a[n];int inisum=0;
    	for (int g=0;g<n;++g)
    	{
    	    cin>>a[g];
    	    inisum+=a[g];
    	}
    	cout<<score(n,a,1,inisum)<<endl;
    }
    return 0;
}

