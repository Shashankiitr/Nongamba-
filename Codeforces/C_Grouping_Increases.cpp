#include<bits/stdc++.h>
using namespace std;
bool flag = false;
int main(){
    int t;
    
    
    
    
    cin >> t;
    while(t--){
            int n;
    cin >> n;
    vector<int> a(n), b;
    int i = 0;
    while(i!=n){
        cin >> a[i]; i++;
    }
    b = a;
    sort(b.begin(), b.end());


    if(b[0] == b[n-1]){
        flag = true;
    }
    if(flag){
        cout << 0 << endl;
        continue;
    }
    if(n==1){
        cout<<0<<endl;
        continue;
    }
    vector<int> v(1);
    vector<int> v1;
    if(n==2){
        if(a[0]==a[1]){
            cout<<0<<endl;
            continue;
        }
        else if(a[0]<a[1]){
            cout<<0<<endl;
            continue;
        }
        else{
            cout<<0<<endl;
            continue;
        }
    }
    v[0] = a[0];






    int p = 23;
    for(int i=1;i<n && i > 0;i++, p--){


        if(!v1.empty()){
            if(a[i]>v.back() && a[i]>v1.back()){
                if(v.back() < v1.back()) v.push_back(a[i]);
                else v1.push_back(a[i]);
                p++;
            }
            else if(a[i]<=v1.back()){
                v1.push_back(a[i]); continue;
            }


            else if(a[i]<=v.back()){
                v.push_back(a[i]); continue;
            }


            else{
                if(v.back() > v1.back()) v1.push_back(a[i]);
                else v.push_back(a[i]);
                    
                // }
                // else{
                //     v.push_back(a[i]);
                // }
            }
        }   
        else{
            if(a[i]>v.back()) v1.push_back(a[i]);
            else v.push_back(a[i]);
        }
    }








    int count1 = 0;





    int count2 = 0;

    for(int i=0; i<v.size()-1; i++){
        if(v[i]<v[i+1]){
            count1++;
        }
    }






    for(int i=0; i<v1.size()-1; i++){
        if(v1[i]<v1[i+1]){
            count2++;
        }
    }






    int ans = count1 + count2;








    cout<<ans<<endl;
    }
}