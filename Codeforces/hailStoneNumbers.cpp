#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long count = 0;
    while(n!=0){
        if(n&1){
            n = 3*n+1;
            cout << n << endl;
        }
        else{
            n/=2;
            cout << n << endl;
        }
        ++count;
    }

    cout << "count : " << count << endl;

    return 0;
}